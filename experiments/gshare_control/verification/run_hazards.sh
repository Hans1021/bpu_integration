#!/usr/bin/env bash

set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/../../.." && pwd)"
EXP="$ROOT/experiments/gshare_control"
BUILD="$EXP/verification/obj_hazards"

rm -rf "$BUILD"

verilator \
    --binary \
    --timing \
    --assert \
    --Wno-TIMESCALEMOD \
    --top-module tb_gshare_hazards \
    --Mdir "$BUILD" \
    "$EXP/rtl/gshare_llm.sv" \
    "$EXP/verification/tb_gshare_hazards.sv" \
    2>&1 | tee "$EXP/verification/compile_hazards.log"

"$BUILD/Vtb_gshare_hazards" \
    2>&1 | tee "$EXP/verification/hazards_v1.log"