
#!/usr/bin/env bash
set -euo pipefail

cd "$(dirname "$0")/../../../"

mkdir -p experiments/ogehl_cbp1/results/wally_tb

verilator --binary --timing --assert \
  -Wno-fatal -Wno-DECLFILENAME \
  --top-module tb_ogehl_wally \
  --Mdir experiments/ogehl_cbp1/results/wally_tb/obj_dir \
  experiments/ogehl_cbp1/verification/tb_ogehl_wally.sv \
  experiments/ogehl_cbp1/rtl/ogehl_wally_v2.sv \
  > experiments/ogehl_cbp1/results/wally_tb/build.log 2>&1

experiments/ogehl_cbp1/results/wally_tb/obj_dir/Vtb_ogehl_wally \
  2>&1 | tee experiments/ogehl_cbp1/results/wally_tb/run.log
