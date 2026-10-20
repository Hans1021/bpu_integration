
#!/usr/bin/env bash
set -euo pipefail

cd "$(dirname "$0")/../../.."

EXP="experiments/ogehl_cbp1"
TRACES="resources/cbp1/cbp-framework-version-3/traces/without-values"
OUT="$EXP/results/rtl_traces"

GEN="/tmp/ogehl_generate_trace_vectors"
SIM="/tmp/ogehl_tb_build/Vtb_ogehl_ref"

mkdir -p "$OUT"

if [[ ! -x "$GEN" || ! -x "$SIM" ]]; then
    echo "Error: Missing reference generator or RTL simulator."
    exit 1
fi

# INT-1 already passed the complete differential test.
for archive in "$TRACES"/DIST-*.bz2; do
    name="$(basename "$archive" .bz2)"

    if [[ "$name" == "DIST-INT-1" ]]; then
        echo "Skipping $name (already verified)"
        continue
    fi

    vectors="$OUT/${name}_vectors.txt"
    log="$OUT/${name}.log"

    echo "=== $name ==="

    "$GEN" "$TRACES/$name" "$vectors" 10000000

    if "$SIM" "+VECTORS=$vectors" > "$log" 2>&1; then
        grep -A 4 'O-GEHL differential test PASSED' "$log"
        rm "$vectors"
    else
        echo "FAILED: $name"
        echo "Preserving vectors and log for investigation."
        tail -30 "$log"
        exit 1
    fi

    echo
done

echo "All remaining CBP-1 traces PASSED."
