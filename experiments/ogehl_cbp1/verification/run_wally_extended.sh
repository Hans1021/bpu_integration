
#!/usr/bin/env bash
set -euo pipefail

cd "$(dirname "$0")/../../../"

OUT="experiments/ogehl_cbp1/results/wally_extended"
mkdir -p "$OUT"

verilator --binary --timing --assert \
    --top-module tb_ogehl_wally_extended \
    --Mdir "$OUT/obj_dir" \
    -Wno-fatal -Wno-DECLFILENAME \
    experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv \
    experiments/ogehl_cbp1/rtl/ogehl_wally_v2.sv \
    > "$OUT/build.log" 2>&1

"$OUT/obj_dir/Vtb_ogehl_wally_extended" \
    2>&1 | tee "$OUT/run.log"
