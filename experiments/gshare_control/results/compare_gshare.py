import csv
import re
from pathlib import Path

ROOT = Path.home() / "projects/bpu_integration"

BUILTIN_LOG = ROOT / "results/baseline/gshare_embench_hpm.log"
LLM_LOG = ROOT / "experiments/gshare_control/results/wally_embench_llm_gshare.log"
OUT_CSV = ROOT / "experiments/gshare_control/results/builtin_vs_llm_gshare.csv"


def parse_log(path):
    results = {}
    current = None
    counters = {}

    read_re = re.compile(
        r"Read memfile .*?/(bd_(?:speedopt|sizeopt)_speed)/src/([^/]+)/"
    )
    cnt_re = re.compile(r"Cnt\[\s*(\d+)\]\s*=\s*(\d+)")

    with path.open() as f:
        for line in f:
            m = read_re.search(line)
            if m:
                current = f"{m.group(1)}/{m.group(2)}"
                counters = {}
                continue

            m = cnt_re.search(line)
            if m and current:
                counters[int(m.group(1))] = int(m.group(2))

            if "Embench Benchmark:" in line and "is done." in line and current:
                results[current] = counters.copy()
                current = None
                counters = {}

    return results


builtin = parse_log(BUILTIN_LOG)
llm = parse_log(LLM_LOG)

common = sorted(set(builtin) & set(llm))

print(f"Built-in benchmarks: {len(builtin)}")
print(f"LLM benchmarks:      {len(llm)}")
print(f"Matched benchmarks:  {len(common)}")

if set(builtin) != set(llm):
    print("WARNING: benchmark sets do not match exactly")

fields = [
    "benchmark",
    "builtin_cycles",
    "llm_cycles",
    "cycle_delta_pct",
    "builtin_instret",
    "llm_instret",
    "builtin_branches",
    "llm_branches",
    "builtin_dir_misses",
    "llm_dir_misses",
    "dir_miss_delta_pct",
    "builtin_miss_rate_pct",
    "llm_miss_rate_pct",
    "builtin_mpki",
    "llm_mpki",
    "builtin_cpi",
    "llm_cpi",
]

with OUT_CSV.open("w", newline="") as f:
    writer = csv.DictWriter(f, fieldnames=fields)
    writer.writeheader()

    for name in common:
        b = builtin[name]
        l = llm[name]

        b_cycles = b[0]
        l_cycles = l[0]

        b_inst = b[2]
        l_inst = l[2]

        b_br = b[3]
        l_br = l[3]

        b_dir = b[7]
        l_dir = l[7]

        writer.writerow({
            "benchmark": name,

            "builtin_cycles": b_cycles,
            "llm_cycles": l_cycles,
            "cycle_delta_pct": 100 * (l_cycles - b_cycles) / b_cycles,

            "builtin_instret": b_inst,
            "llm_instret": l_inst,

            "builtin_branches": b_br,
            "llm_branches": l_br,

            "builtin_dir_misses": b_dir,
            "llm_dir_misses": l_dir,
            "dir_miss_delta_pct": 100 * (l_dir - b_dir) / b_dir if b_dir else 0,

            "builtin_miss_rate_pct": 100 * b_dir / b_br if b_br else 0,
            "llm_miss_rate_pct": 100 * l_dir / l_br if l_br else 0,

            "builtin_mpki": 1000 * b_dir / b_inst,
            "llm_mpki": 1000 * l_dir / l_inst,

            "builtin_cpi": b_cycles / b_inst,
            "llm_cpi": l_cycles / l_inst,
        })

print(f"Wrote: {OUT_CSV}")