#!/usr/bin/env bash

set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/../../.." && pwd)"
EXP="$ROOT/experiments/gshare_control"
VERIFY="$EXP/verification"
BUILD="$VERIFY/obj_random"

python3 "$VERIFY/gen_random_vectors.py"

rm -rf "$BUILD"

verilator \
    --binary \
    --timing \
    --assert \
    --Wno-TIMESCALEMOD \
    --top-module tb_gshare_random \
    --Mdir "$BUILD" \
    "$EXP/rtl/gshare_llm.sv" \
    "$VERIFY/tb_gshare_random.sv" \
    2>&1 | tee "$VERIFY/compile_random.log"

"$BUILD/Vtb_gshare_random" \
    +VECTORS="$VERIFY/random_vectors.txt" \
    2>&1 | tee "$VERIFY/random_v1.log"