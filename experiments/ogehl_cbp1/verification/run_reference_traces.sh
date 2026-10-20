
#!/usr/bin/env bash
set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/../../.." && pwd)"

EXP="$ROOT/experiments/ogehl_cbp1"
PRED="$EXP/reference/extracted/Andre/predictor"
TRACES="$ROOT/resources/cbp1/cbp-framework-version-3/traces/without-values"
OUT="$EXP/results/reference_traces"

mkdir -p "$OUT"

if [[ ! -x "$PRED" ]]; then
    echo "Error: Reference predictor not built: $PRED"
    exit 1
fi

echo "Running original O-GEHL on CBP-1 distributed traces"
echo

count=0

for archive in "$TRACES"/DIST-*.bz2; do
    name="$(basename "$archive" .bz2)"
    log="$OUT/$name.log"

    echo "[$((count + 1))/20] $name"

    "$PRED" "$TRACES/$name" > "$log" 2>&1

    grep '1000\*wrong_cc_predicts' "$log"

    count=$((count + 1))
done

echo
echo "Completed $count traces."
echo "Logs: $OUT"
