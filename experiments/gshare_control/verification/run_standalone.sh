#!/usr/bin/env bash

set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/../../.." && pwd)"
EXP="$ROOT/experiments/gshare_control"
BUILD="$EXP/verification/obj_dir"

rm -rf "$BUILD"

verilator \
    --binary \
    --timing \
    --assert \
    --Wno-TIMESCALEMOD \
    --top-module tb_gshare_llm \
    --Mdir "$BUILD" \
    "$EXP/rtl/gshare_llm.sv" \
    "$EXP/verification/tb_gshare_llm.sv" \
    2>&1 | tee "$EXP/verification/compile_directed.log"

"$BUILD/Vtb_gshare_llm" \
    2>&1 | tee "$EXP/verification/directed_v1.log"