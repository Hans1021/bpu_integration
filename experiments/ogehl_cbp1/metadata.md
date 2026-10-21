
# O-GEHL — CBP-1 Reproduction and Wally Integration

## Predictor

- Name: O-GEHL (Optimized GEometric History Length)
- Author: André Seznec
- Affiliation: IRISA/INRIA/HIPEAC
- Competition: 1st JILP Championship Branch Prediction (CBP-1)
- Year: 2004
- Final placement: 2nd
- Final undistributed-trace score: 2.627 mispredictions per 1000 instructions
- Competition storage budget: 64 Kbits
- Experiment status: Wally integration and initial benchmarking complete
- Latest standalone RTL: `rtl/ogehl_ref_v1.sv`
- Latest Wally RTL: `rtl/ogehl_wally_v2.sv`
- Wally predictor type: `BP_OGEHL_LLM`

## Goal

Reproduce the published CBP-1 O-GEHL predictor using an
LLM-heavy RTL generation workflow, validate the generated
implementation against the unchanged original reference,
and integrate it into CORE-V-Wally.

The experiment evaluates whether LLM-generated RTL can
reproduce a published branch-prediction algorithm, satisfy
pipeline integration requirements, pass architectural
verification, and improve benchmark performance relative
to existing predictors.

## Original Predictor Summary

The submitted O-GEHL predictor uses eight predictor
tables containing signed counters. The tables use
different global-history lengths forming a geometric
progression.

The CBP-1 implementation additionally uses:

- Dynamic update-threshold fitting
- Dynamic history-length fitting
- Global branch history
- Limited path history
- Mixed 4-bit and 5-bit signed prediction counters
- History lengths extending to 200 branches

The submitted configuration fits within the CBP-1
64-Kbit predictor budget.

The experiment's standalone implementation uses
65,536 bits of logical predictor storage, including
counter tables and minitags.

This figure does not include all registers, pipeline
metadata, routing, or implementation overhead.

## Methodology

1. Preserve the original paper and reference implementation.
2. Derive an implementation-oriented behavioral specification.
3. Generate standalone RTL using an LLM.
4. Preserve prompts, responses, generated RTL, and repairs.
5. Validate the RTL against the original reference.
6. Reproduce official distributed-trace results.
7. Adapt the implementation to Wally's pipeline interface.
8. Verify stalls, flushes, speculation, and update behavior.
9. Integrate the predictor as a separate Wally configuration.
10. Run architectural tests.
11. Compare against native and LLM-generated GShare on Embench.
12. Document results, discrepancies, and limitations.

## LLM Configuration

- Model: OpenAI GPT-6
- Reasoning setting: High
- Interface: ChatGPT Temporary Chat
- Personalization: Unpersonalized (temporary chat)
- Generation date: October 2026
- Initial standalone generations: 1 (`v0`)
- Standalone repair versions: 1 (`v1`)
- Wally adaptation versions: `v0`, `v1`, `v2`
- Wally adaptation/review/repair exchanges: 5 recorded
- Manual functional RTL modifications: Verify against saved prompts, responses, and version history before asserting none

All recorded prompt and response files are under
`prompts/` and `responses/`.

### Prompt/Response Record

- `01_generate`: Initial standalone generation
- `02_repair`: Standalone RTL repair
- `03_wally_adaptation`: Wally interface adaptation
- `04_wally_review`: Review of adapted RTL
- `05_wally_repair`: Integration repair
- `06_wally_source_review`: Source-level review
- `07_wally_pipeline_repair`: Pipeline-control repair

The standalone predictor and Wally adaptation are
distinct implementation stages.

## Standalone RTL Generation

### v0

Initial LLM-generated O-GEHL implementation.

### v1

LLM repair addressing signed-counter width warnings
and dynamic-threshold boundary conditions.

Verilator 5.036 lint:

- Result: PASS
- Warnings: 0

The validated standalone implementation was preserved
before proceeding to Wally-specific adaptations.

## Standalone Differential Verification

Golden reference: unchanged original CBP-1 O-GEHL
C++ predictor.

Results:

- Deterministic synthetic stream: 20,000 events, PASS
- DIST-INT-1 partial trace: 100,000 events, PASS
- DIST-INT-1 complete trace: 4,989,048 events, PASS
- Remaining 19 official distributed traces: PASS
- All 20 distributed traces: zero conditional
  direction-prediction mismatches
- Original reference arithmetic-mean score:
  2.820 MPKI

The standalone v1 RTL matched the reference predictor's
conditional direction predictions on every evaluated
official distributed trace.

This establishes observed prediction equivalence on the
tested traces, not formal equivalence of internal states.

## Adaptation Coverage

An instrumented copy of the original reference predictor
was used to assess whether important adaptive mechanisms
were exercised.

Across the 20 distributed traces:

- Dynamic threshold increases: 20/20
- Dynamic threshold decreases: 20/20
- Short-to-long history switching: 14/20
- Long-to-short history switching: 5/20
- Multiple history-length transitions: observed
- Both history configurations: exercised

The instrumented reference preserved the original
prediction results on the checked trace.

## Wally RTL Adaptation

The Wally-specific implementation is preserved in:

- `rtl/ogehl_wally_v0.sv`
- `rtl/ogehl_wally_v1.sv`
- `rtl/ogehl_wally_v2.sv`

The active Wally copy is:

`cvw/src/ifu/bpred/ogehl_wally.sv`

Major adaptations include:

- Fetch-stage prediction using Wally's PC interface
- Fetch-to-Decode-to-Execute prediction metadata
- Original Fetch-time table indices preserved for updates
- Signed predictor sum preserved across pipeline stages
- Committed and speculative history management
- Execute-stage conditional-branch resolution
- Conditional-branch training and CFI history updates
- Stall and flush handling
- Same-cycle Execute-stage forwarding
- Integration with existing Wally branch steering,
  BTB, RAS, and instruction-class prediction

The adaptation is not claimed to be cycle-for-cycle or
internal-state equivalent to the original CBP simulator.

### Wally Configuration

- Macro: `BP_OGEHL_LLM`
- Predictor-type value: 9
- Derivative configuration: `bpred_OGEHL_LLM_rv32gc`
- Base ISA configuration: RV32GC
- BTB size parameter: 10
- RAS size: 16
- Instruction-class prediction: disabled
- GEHL table geometry: fixed, not selected by `BPRED_SIZE`

Modified Wally configuration/integration files:

- `config/shared/BranchPredictorType.vh`
- `config/derivlist.txt`
- `src/ifu/bpred/bpred.sv`

## Wally Verification

### Verilator Lint

Final Wally adaptation:

- Verilator version: 5.036
- Result: PASS
- Errors: 0
- Remaining warnings: 5

The remaining warnings were not treated as proof of
functional failure. The integrated predictor was also
tested through simulation.

### Standalone Wally-Interface Tests

- Smoke tests: 12/12 passed
- Extended tests: 22/22 passed
- Total: 34/34 passed

Verification included:

- Ordinary conditional branches
- Taken and not-taken outcomes
- Consecutive branches
- Unconditional control transfers
- Fetch/Decode/Execute metadata alignment
- Stalls and flushes
- Older Memory-stage squashes
- Misprediction recovery
- Exactly-once update behavior

### Architectural Tests

The O-GEHL Wally configuration passed the tested
supported suites:

- `arch32i`
- `arch32m`
- `arch32c`
- `arch32a_amo`
- `arch32f`
- `arch32d`
- `arch32priv`
- `arch32vm_sv32`

Unsupported guessed suite names are not counted as
tests passed or failed.

A broader generic Wally regression encountered failures
in unrelated configurations and infrastructure.
It is not reported as a successful full regression.

## Embench Evaluation

Date: October 20, 2026

Predictors compared:

1. Native Wally GShare
2. LLM-generated GShare
3. LLM-generated O-GEHL

Configurations:

- `bpred_GSHARE_10_16_10_0_rv32gc`
- `bpred_GSHARE_LLM_10_16_10_0_rv32gc`
- `bpred_OGEHL_LLM_rv32gc`

Workloads:

- 22 speed-optimized Embench workloads
- 22 size-optimized Embench workloads
- 44 total workload instances per predictor

All configurations used RV32GC, a BTB-size parameter
of 10, RAS size 16, and disabled instruction-class
prediction.

The GShare implementations used 10-bit history.
O-GEHL used its own larger fixed table configuration.

### Completed Runs

- Native GShare: 44/44, PASS
- LLM GShare: 44/44, PASS
- LLM O-GEHL: 44/44, PASS on successful GDB rerun

All successful runs reported completion and success.
Each saved comparison log was parsed into 44 records,
with matching workload names and required counters.

### Aggregate Results

| Metric | Native GShare | LLM GShare | LLM O-GEHL |
| --- | ---: | ---: | ---: |
| Direction MPKI | 16.152 | 12.962 | 2.544 |
| Overall BP MPKI | 32.715 | 29.781 | 23.377 |
| Aggregate CPI | 1.1777 | 1.1732 | 1.1597 |
| Geometric-mean speedup | 1.0000x | 1.0037x | 1.0148x |

### O-GEHL Relative to Native GShare

- Reported direction MPKI reduction: 84.3%
- Overall BP MPKI reduction: 28.5%
- Geometric-mean speedup: 1.0148x
- Speed-optimized geomean speedup: 1.0138x
- Size-optimized geomean speedup: 1.0158x
- Workloads improved: 39/44
- Workloads regressed: 5/44

The geometric mean uses matched per-workload cycle ratios.

The aggregate CPI is calculated from total cycles
divided by total retired instructions.

## Performance Data

Comparison data:

- `results/ogehl_comparison/per_workload.csv`
- `results/ogehl_comparison/summary.csv`

Raw logs:

- `results/ogehl_comparison/bpred_GSHARE_10_16_10_0_rv32gc.log`
- `results/ogehl_comparison/bpred_GSHARE_LLM_10_16_10_0_rv32gc.log`
- `results/ogehl_comparison/bpred_OGEHL_LLM_rv32gc.log`

Parser:

`scripts/parse_ogehl_embench.py`

These paths are relative to the repository root,
not to this metadata file.

The O-GEHL comparison log was reconstructed from the
successful GDB terminal transcript. The earlier
incomplete run is not part of the performance dataset.

## Known Limitations

### Storage Budget

O-GEHL uses substantially more predictor storage
than the 10-bit-history GShare configurations.

The comparison is not hardware-budget-normalized.

No area, power, frequency, timing-closure, or
post-synthesis PPA comparison has been completed.

### Performance Counters

All three predictors use Wally's common downstream
HPM counter pipeline.

However, their Execute-stage direction-misprediction
signals have different validity and update qualifications.

The observed 84.3% direction MPKI reduction is
recorded as measured; exact event equivalence has not
been formally established.

Overall BP misses and execution cycles use shared
Wally logic.

### Simulation Stability

The first full O-GEHL Embench attempt crashed with
SIGSEGV after four completed workloads, while loading
the fifth workload.

A separate huffbench run completed normally, and a
subsequent full-suite GDB run completed all 44
workloads without crashing.

The initial intermittent crash remains unexplained.

### Functional Equivalence

Standalone differential testing demonstrates
conditional prediction agreement with the original
CBP reference on the tested traces.

It does not prove internal-state equivalence,
equivalence under every possible input sequence,
or formal correctness of the Wally adaptation.

## Outcome

The standalone CBP-1 reproduction, Wally adaptation,
targeted verification, architectural testing, and
initial Embench evaluation are complete.

The O-GEHL implementation reduced reported direction
MPKI and overall branch mispredictions while delivering
a 1.48% geometric-mean speedup over native GShare.

The main outstanding research limitations are
hardware-budget normalization, precise counter-event
equivalence, and the unresolved intermittent simulator
crash.

The final Wally v2 RTL is preserved unchanged.

For detailed methodology and analysis, see `report.md`.
