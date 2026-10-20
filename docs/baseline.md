# CVW Baseline

CVW commit ID: `d91e22fa4ed4c2442e4fc892b121c6050c62c5df`

Configuration: `rv64gc`  
Simulator: Verilator 5.036

## Baseline Validation

The unmodified CVW baseline was validated before any branch predictor modifications.

A fixed RV64GC integration regression was defined in:

`scripts/test_rv64gc.sh`

The script runs 35 RV64GC test suites using Verilator.

All 35 selected suites passed on the unmodified baseline.

## Integration Regression Suites

The following suites are included in the fixed integration regression:

### Base ISA and Privileged

- `arch64i`
- `arch64m`
- `arch64c`
- `arch64priv`

### Atomics

- `arch64a_amo`
- `wally64a_lrsc`

### Floating Point

- `arch64f`
- `arch64d`
- `arch64zfh`

### Floating-Point FMA

- `arch64f_fma`
- `arch64d_fma`
- `arch64zfh_fma`

### Floating-Point Divide/Square Root

- `arch64f_divsqrt`
- `arch64d_divsqrt`
- `arch64zfh_divsqrt`

### Additional Floating-Point Extensions

- `arch64zfaf`
- `arch64zfad`

### Control and Compressed Extensions

- `arch64zcb`
- `arch64zifencei`
- `arch64zicond`

### Bit-Manipulation Extensions

- `arch64zba`
- `arch64zbb`
- `arch64zbc`
- `arch64zbs`

### Cryptographic Bit-Manipulation Extensions

- `arch64zbkb`
- `arch64zbkc`
- `arch64zbkx`

### Cryptographic Extensions

- `arch64zknd`
- `arch64zkne`
- `arch64zknh`

### Virtual Memory

- `arch64vm_sv39`
- `arch64vm_sv48`

### Memory Protection and Cache-Block Operations

- `arch64pmp`
- `arch64zicboz`

### Wally-Specific Peripheral Tests

- `wally64periph`

## Known Baseline Exclusions

Two standard RV64GC regression suites are excluded from the project integration regression because they fail on the unmodified CVW baseline.

### `arch64vm_sv57`

The regression fails because a generated RISCOF reference file is missing:

`ref.elf.memfile`

This is a test-generation/infrastructure issue observed before any BPU modifications.

### `wally64priv`

The baseline simulation terminates with a Verilog `$stop`.

This failure was reproduced on the unmodified CVW baseline before any BPU modifications.

Because both failures are already present in the baseline processor, they are not used to determine whether a new BPU implementation introduces a regression.

## Full CVW Regression

The full `regression-wally` flow was also executed on the unmodified baseline.

It completed with 5 failed configurations total.

Of these, the two failures relevant to the `rv64gc` configuration are documented above:

- `arch64vm_sv57`
- `wally64priv`

The remaining failures occurred in other CVW configurations and are outside the scope of this project's fixed `rv64gc` integration regression.

All lint configurations passed.

## Regression Policy

Every BPU implementation integrated into CVW must pass all 35 suites in:

`scripts/test_rv64gc.sh`

The same processor configuration, simulator, and regression suite will be used for every predictor so that functional validation remains consistent across implementations.

The two documented baseline exclusions will remain excluded unless the underlying CVW baseline issues are resolved.

## Performance Evaluation

The integration regression is used only to verify functional correctness and detect regressions caused by BPU integration.

Branch predictor performance will be evaluated separately using a fixed benchmark suite and consistent processor configuration.
