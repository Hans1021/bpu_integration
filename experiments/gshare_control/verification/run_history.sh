#!/usr/bin/env bash

set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/../../.." && pwd)"
EXP="$ROOT/experiments/gshare_control"
BUILD="$EXP/verification/obj_history"

rm -rf "$BUILD"

verilator \
    --binary \
    --timing \
    --assert \
    --Wno-TIMESCALEMOD \
    --top-module tb_gshare_history \
    --Mdir "$BUILD" \
    "$EXP/rtl/gshare_llm.sv" \
    "$EXP/verification/tb_gshare_history.sv" \
    2>&1 | tee "$EXP/verification/compile_history.log"

"$BUILD/Vtb_gshare_history" \
    2>&1 | tee "$EXP/verification/history_v1.log"