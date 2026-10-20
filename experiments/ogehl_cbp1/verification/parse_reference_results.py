
#!/usr/bin/env python3

import csv
import re
from pathlib import Path

EXP = Path(__file__).resolve().parents[1]
LOG_DIR = EXP / "results/reference_traces"
OFFICIAL = (
    EXP / "reference/extracted/Andre/"
    "gen_report.output.without-values.official.txt"
)
OUT = EXP / "results/reference_baseline.csv"

METRIC = re.compile(
    r"1000\*wrong_cc_predicts/total insts:"
    r"\s*1000\s*\*\s*(\d+)\s*/\s*(\d+)"
    r"\s*=\s*([\d.]+)"
)

def parse_metrics(text):
    match = METRIC.search(text)
    if not match:
        raise ValueError("Missing MPKI statistics")
    return (
        int(match.group(1)),
        int(match.group(2)),
        float(match.group(3)),
    )

official_text = OFFICIAL.read_text()
sections = re.split(r"(?m)^(DIST-[A-Z]+-\d+)\s*$", official_text)

official = {}
for i in range(1, len(sections), 2):
    official[sections[i]] = parse_metrics(sections[i + 1])

rows = []

for log in sorted(LOG_DIR.glob("DIST-*.log")):
    name = log.stem
    text = log.read_text()

    wrong, inst, mpki = parse_metrics(text)
    expected = official[name]

    if (wrong, inst, mpki) != expected:
        raise AssertionError(
            f"{name}: actual {(wrong, inst, mpki)}, "
            f"official {expected}"
        )

    rows.append({
        "trace": name,
        "instructions": inst,
        "mispredictions": wrong,
        "mpki": mpki,
    })

assert len(rows) == len(official) == 20

with OUT.open("w", newline="") as f:
    writer = csv.DictWriter(f, fieldnames=rows[0].keys())
    writer.writeheader()
    writer.writerows(rows)

total_wrong = sum(r["mispredictions"] for r in rows)
total_inst = sum(r["instructions"] for r in rows)
mean_mpki = sum(r["mpki"] for r in rows) / len(rows)

print(f"Verified traces:       {len(rows)}/20")
print(f"Total instructions:    {total_inst:,}")
print(f"Total mispredictions:  {total_wrong:,}")
print(f"Arithmetic mean MPKI:  {mean_mpki:.4f}")
print("Official comparison:   ALL MATCH")
print(f"CSV: {OUT}")
