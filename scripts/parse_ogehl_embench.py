
#!/usr/bin/env python3
"""Compare native GShare, LLM GShare, and LLM O-GEHL on Embench."""

import csv
import math
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
RESULTS = ROOT / "results" / "ogehl_comparison"

LOGS = {
    "native_gshare": "bpred_GSHARE_10_16_10_0_rv32gc.log",
    "llm_gshare": "bpred_GSHARE_LLM_10_16_10_0_rv32gc.log",
    "llm_ogehl": "bpred_OGEHL_LLM_rv32gc.log",
}

COUNTERS = {
    0: "cycles",
    2: "instructions",
    3: "branches",
    6: "bp_wrong",
    7: "direction_wrong",
    8: "target_wrong",
    9: "ras_wrong",
    10: "class_wrong",
}

COUNTER_RE = re.compile(r"^Cnt\[\s*(\d+)\]\s*=\s*(\d+)")
DONE_RE = re.compile(
    r"^Embench Benchmark:\s+(.+?)\s+is done\."
)
MEMFILE_RE = re.compile(r"^Read memfile\s+(.+)\.elf\.memfile")

SUCCESS = "SUCCESS! All tests ran without failures."


def load_log(path):
    if not path.is_file():
        raise FileNotFoundError(path)

    text = path.read_text(errors="replace")

    if SUCCESS not in text:
        raise ValueError(f"{path.name}: missing success marker")

    if re.search(r"Segmentation fault|%Error|%Warning-USERFATAL",
                 text, re.IGNORECASE):
        raise ValueError(f"{path.name}: error found in log")

    records = {}
    counters = {}
    current_memfile = None

    for line in text.splitlines():
        line = line.strip()

        match = MEMFILE_RE.match(line)
        if match:
            if counters:
                raise ValueError(
                    f"{path.name}: incomplete previous counter block"
                )
            current_memfile = match.group(1)
            continue

        match = COUNTER_RE.match(line)
        if match:
            index = int(match.group(1))
            value = int(match.group(2))

            if index in counters:
                raise ValueError(
                    f"{path.name}: duplicate counter {index}"
                )

            counters[index] = value
            continue

        match = DONE_RE.match(line)
        if match:
            workload = match.group(1)

            if workload in records:
                raise ValueError(
                    f"{path.name}: duplicate workload {workload}"
                )

            missing = set(COUNTERS) - set(counters)
            if missing:
                raise ValueError(
                    f"{path.name}: {workload} missing {sorted(missing)}"
                )

            if current_memfile is None:
                raise ValueError(
                    f"{path.name}: missing memfile for {workload}"
                )

            if not current_memfile.endswith(workload):
                raise ValueError(
                    f"{path.name}: memfile/workload mismatch: "
                    f"{current_memfile} vs {workload}"
                )

            row = {
                name: counters[index]
                for index, name in COUNTERS.items()
            }

            if row["cycles"] <= 0 or row["instructions"] <= 0:
                raise ValueError(
                    f"{path.name}: invalid counters for {workload}"
                )

            if "bd_speedopt_speed/" in workload:
                row["build"] = "speedopt"
            elif "bd_sizeopt_speed/" in workload:
                row["build"] = "sizeopt"
            else:
                raise ValueError(f"Unknown build: {workload}")

            records[workload] = row
            counters = {}
            current_memfile = None

    if counters:
        raise ValueError(f"{path.name}: trailing incomplete counters")

    if len(records) != 44:
        raise ValueError(
            f"{path.name}: expected 44 workloads, got {len(records)}"
        )

    for build in ("speedopt", "sizeopt"):
        count = sum(r["build"] == build for r in records.values())
        if count != 22:
            raise ValueError(
                f"{path.name}: expected 22 {build}, got {count}"
            )

    return records


def metrics(row):
    inst = row["instructions"]
    branches = row["branches"]

    return {
        "cpi": row["cycles"] / inst,
        "bp_mpki": 1000 * row["bp_wrong"] / inst,
        "direction_mpki": 1000 * row["direction_wrong"] / inst,
        "direction_miss_pct": (
            100 * row["direction_wrong"] / branches
            if branches else 0.0
        ),
    }


def geomean(values):
    values = list(values)
    if not values or any(x <= 0 for x in values):
        raise ValueError("Invalid geometric mean inputs")
    return math.exp(
        sum(math.log(x) for x in values) / len(values)
    )


def write_csv(path, rows, fields):
    with path.open("w", newline="") as f:
        writer = csv.DictWriter(f, fieldnames=fields)
        writer.writeheader()
        writer.writerows(rows)


def main():
    data = {
        name: load_log(RESULTS / filename)
        for name, filename in LOGS.items()
    }

    baseline = data["native_gshare"]
    baseline_set = set(baseline)

    for name, records in data.items():
        if set(records) != baseline_set:
            missing = baseline_set - set(records)
            extra = set(records) - baseline_set
            raise ValueError(
                f"{name}: workload mismatch; "
                f"missing={missing}, extra={extra}"
            )

    print("All three logs validated: 44 matching workloads each.")

    detailed = []

    for workload in sorted(baseline):
        base_cycles = baseline[workload]["cycles"]

        for name, records in data.items():
            r = records[workload]
            m = metrics(r)
            speedup = base_cycles / r["cycles"]

            detailed.append({
                "workload": workload,
                "build": r["build"],
                "predictor": name,
                **{key: r[key] for key in COUNTERS.values()},
                **m,
                "speedup_vs_native": speedup,
                "cycle_change_pct": (
                    100 * (r["cycles"] / base_cycles - 1)
                ),
            })

    detail_fields = [
        "workload", "build", "predictor",
        *COUNTERS.values(),
        "cpi", "bp_mpki", "direction_mpki",
        "direction_miss_pct",
        "speedup_vs_native", "cycle_change_pct",
    ]

    write_csv(
        RESULTS / "per_workload.csv",
        detailed,
        detail_fields,
    )

    summaries = []

    for build in ("speedopt", "sizeopt", "all"):
        workloads = sorted(
            workload for workload, r in baseline.items()
            if build == "all" or r["build"] == build
        )

        for name, records in data.items():
            subset = [records[w] for w in workloads]

            speedups = [
                baseline[w]["cycles"] / records[w]["cycles"]
                for w in workloads
            ]

            cycles = sum(r["cycles"] for r in subset)
            instructions = sum(r["instructions"] for r in subset)
            branches = sum(r["branches"] for r in subset)
            bp_wrong = sum(r["bp_wrong"] for r in subset)
            direction_wrong = sum(
                r["direction_wrong"] for r in subset
            )

            summaries.append({
                "build": build,
                "predictor": name,
                "workloads": len(workloads),
                "total_cycles": cycles,
                "total_instructions": instructions,
                "total_branches": branches,
                "total_bp_wrong": bp_wrong,
                "total_direction_wrong": direction_wrong,
                "aggregate_cpi": cycles / instructions,
                "bp_mpki": 1000 * bp_wrong / instructions,
                "direction_mpki": (
                    1000 * direction_wrong / instructions
                ),
                "direction_miss_pct": (
                    100 * direction_wrong / branches
                    if branches else 0.0
                ),
                "geomean_speedup_vs_native": geomean(speedups),
                "faster_workloads_vs_native": sum(
                    s > 1.0 for s in speedups
                ),
                "slower_workloads_vs_native": sum(
                    s < 1.0 for s in speedups
                ),
            })

    summary_fields = list(summaries[0])
    write_csv(
        RESULTS / "summary.csv",
        summaries,
        summary_fields,
    )

    print()
    print("Aggregate comparison")
    print(
        f"{'Build':<10} {'Predictor':<16} "
        f"{'Dir MPKI':>10} {'BP MPKI':>10} "
        f"{'CPI':>9} {'Geo Speedup':>12}"
    )

    for r in summaries:
        print(
            f"{r['build']:<10} "
            f"{r['predictor']:<16} "
            f"{r['direction_mpki']:>10.3f} "
            f"{r['bp_mpki']:>10.3f} "
            f"{r['aggregate_cpi']:>9.4f} "
            f"{r['geomean_speedup_vs_native']:>12.4f}"
        )

    print()
    print("Generated:")
    print(RESULTS / "per_workload.csv")
    print(RESULTS / "summary.csv")


if __name__ == "__main__":
    main()
