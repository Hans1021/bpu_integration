
# LLM-Generated O-GEHL Branch Predictor: CBP-1 Reproduction and CORE-V-Wally Integration

**Experiment date:** October 2026

**Reference algorithm:** André Seznec, O-GEHL, CBP-1 (2004)

**Target processor:** CORE-V-Wally, RV32GC

**Simulation tool:** Verilator 5.036

**Status:** Integration and initial evaluation complete

## 1. Objective

This experiment investigates whether a large language model
can generate a hardware implementation of a published branch
predictor, reproduce the behavior of its original software
reference, and adapt the predictor for integration into a
working RISC-V processor.

The selected algorithm is O-GEHL (Optimized GEometric History
Length), submitted by André Seznec to the first Championship
Branch Prediction competition in 2004.

The experiment extends an earlier LLM-generated GShare control
experiment, which established a baseline workflow for
generation, verification, processor integration, and
benchmarking.

The primary goals are:

1. Reproduce the original O-GEHL algorithm in SystemVerilog.
2. Verify prediction behavior against the original CBP-1
   reference implementation.
3. Adapt the RTL to CORE-V-Wally's pipelined architecture.
4. Verify correctness under pipeline hazards and
   architectural workloads.
5. Measure the effect on branch prediction and processor
   execution performance.
6. Preserve the complete LLM-generation and verification
   process for reproducibility.

This study evaluates observed functional behavior and
performance. It does not establish formal hardware
correctness or hardware-efficiency optimality.

## 2. Background

### 2.1 Branch Prediction

Branch predictors estimate whether conditional branches
will be taken or not taken before their outcomes are known.

Incorrect predictions may require the processor to discard
speculatively fetched instructions and restart fetching
from the correct address.

Direction prediction is one component of the branch
prediction system. Branch targets, returns, and instruction
classification may introduce additional prediction errors.

### 2.2 GShare Baseline

GShare combines branch address information with global
branch history to index a pattern history table containing
saturating counters.

Two GShare implementations serve as controls:

- CORE-V-Wally's built-in GShare predictor
- A separately generated and verified LLM GShare predictor

The LLM-generated control is not an exact clone of Wally's
native GShare. Its history handling, table initialization,
forwarding, and update indexing differ.

Both controls were evaluated using the same processor
configuration and Embench workload set.

### 2.3 O-GEHL

O-GEHL combines predictions from multiple tables indexed
with geometrically increasing history lengths.

Rather than selecting a prediction from one table, O-GEHL
computes a sum of signed prediction counters.

The sign of this sum determines the predicted direction.

The original CBP-1 configuration includes:

- Eight prediction tables
- Mixed-width signed counters
- Global history extending to 200 branches
- Limited path history
- Adaptive update threshold
- Adaptive effective history lengths

These mechanisms allow the predictor to use correlations
at different history depths.

The original competition design targeted a 64-Kbit
predictor storage budget.

## 3. Experimental Workflow

The experiment separates algorithm reproduction from
processor-specific integration.

### Phase A: Reference Collection

The original CBP-1 paper, software reference, and
distributed traces were collected and preserved.

A behavioral specification was derived from the published
material and reference implementation.

The original C++ predictor was maintained as an unchanged
golden reference.

### Phase B: Standalone RTL Generation

OpenAI GPT-6, using High reasoning effort in a temporary ChatGPT conversation, generated the initial SystemVerilog implementation from the behavioral specification. The initial version was preserved as v0, and an LLM-guided repair produced v1.

The initial implementation was preserved as v0.

A subsequent LLM repair produced v1, addressing signed-width and threshold-boundary issues.

Standalone v1 passed Verilator 5.036 lint without warnings.

The model interaction history is preserved in the
experiment's prompt and response files.

### Phase C: Differential Verification

The standalone RTL was exercised using branch events
derived from the original CBP-1 reference environment.

For each evaluated event, the RTL's conditional direction
prediction was compared against the unchanged C++ predictor.

Additional instrumentation examined whether adaptive
threshold and history-length mechanisms were exercised.

### Phase D: Wally Adaptation

After standalone verification, the predictor was adapted
to Wally's Fetch, Decode, Execute, and later pipeline stages.

The adaptation retained the core O-GEHL direction
algorithm while introducing processor-specific control,
metadata, and history management.

Three adaptation versions were preserved:

- `ogehl_wally_v0.sv`
- `ogehl_wally_v1.sv`
- `ogehl_wally_v2.sv`

The final integrated version was registered as
`BP_OGEHL_LLM`.

### Phase E: Processor Verification

The Wally adaptation was tested using directed
pipeline tests and RISC-V architectural suites.

### Phase F: Performance Evaluation

The integrated O-GEHL predictor was compared with
native GShare and LLM GShare across 44 Embench
workload instances.

## 4. Standalone Reference Validation

### 4.1 Differential Test Results

| Test | Result |
| --- | --- |
| Synthetic event stream, 20,000 events | Pass |
| DIST-INT-1, first 100,000 events | Pass |
| DIST-INT-1, complete 4,989,048 events | Pass |
| All 20 official distributed traces | Pass |
| Conditional direction mismatches | 0 |

The standalone RTL produced the same conditional
direction predictions as the original C++ reference
across the evaluated official traces.

The original reference achieved an arithmetic-mean
score of 2.820 MPKI on the distributed trace set.

This is a CBP trace-based result and should not be
directly compared numerically with Wally's Embench
results, which use different workloads and accounting.

### 4.2 Adaptive Mechanism Coverage

An instrumented reference copy was used to check
whether the original predictor's adaptation mechanisms
were activated.

| Mechanism | Coverage |
| --- | --- |
| Threshold increases | 20/20 traces |
| Threshold decreases | 20/20 traces |
| Short-to-long history switching | 14/20 traces |
| Long-to-short history switching | 5/20 traces |
| Multiple history-length transitions | Observed |

The test evidence supports strong observed equivalence
of prediction behavior on the distributed traces.

It does not establish formal equivalence of all
internal predictor states.

## 5. Wally Integration

### 5.1 Predictor Interface

The Wally implementation generates branch direction
predictions during Fetch and resolves conditional
branch outcomes during Execute.

Prediction metadata is carried through the pipeline
alongside the corresponding instruction.

Preserved metadata includes:

- Prediction sum
- Prediction table indices
- Metadata validity
- Relevant control-flow prediction information

The original Fetch-time indices are preserved so
training can update the entries associated with the
prediction rather than recomputing indices using a
later history state.

### 5.2 History Management

The integrated design distinguishes committed history
from speculative history.

Speculative history is reconstructed using the
committed state and relevant in-flight branch
information.

Execute-stage forwarding handles recent updates
that may affect subsequent predictions.

Conditional branches train the prediction tables.
Unconditional control-flow instructions contribute
to history handling without receiving conditional
direction training.

### 5.3 Stall and Flush Handling

Pipeline stalls preserve metadata for instructions
that cannot yet advance.

Flushes invalidate metadata associated with discarded
instructions.

The implementation qualifies updates to avoid
retraining an instruction repeatedly or updating
predictor state for an instruction discarded by an
older pipeline event.

These concerns required additional Wally-specific
review and repair beyond the standalone CBP RTL.

### 5.4 Configuration

The predictor was integrated into Wally under the
following derivative:

`bpred_OGEHL_LLM_rv32gc`

Relevant parameters:

| Parameter | Value |
| --- | --- |
| ISA | RV32GC |
| Predictor | O-GEHL |
| Predictor type | `BP_OGEHL_LLM` |
| BTB size parameter | 10 |
| RAS size | 16 |
| Instruction-class prediction | Disabled |
| GEHL predictor storage | Approximately 65,536 logical bits |

The GEHL geometry is fixed within the generated RTL.

This design is not area-normalized against GShare.

## 6. Wally Verification

### 6.1 Lint

The final Wally v2 adaptation passed Verilator 5.036
lint with zero errors and five remaining warnings.

Lint success alone is not considered functional
verification.

### 6.2 Directed Tests

Two Wally-interface testbenches were used:

| Test suite | Passed |
| --- | ---: |
| Smoke tests | 12/12 |
| Extended tests | 22/22 |
| Total | 34/34 |

The tests included ordinary conditional branches,
consecutive branches, unconditional transfers,
metadata propagation, stalls, flushes, misprediction
recovery, and exactly-once update behavior.

### 6.3 Architectural Tests

The following supported architectural suites passed
under the O-GEHL configuration:

- `arch32i`
- `arch32m`
- `arch32c`
- `arch32a_amo`
- `arch32f`
- `arch32d`
- `arch32priv`
- `arch32vm_sv32`

A broader generic Wally regression encountered
unrelated infrastructure/configuration failures.
It is not represented as a complete regression pass.

These results provide functional evidence for the
integrated processor but do not replace formal
verification.

## 7. Performance Evaluation

### 7.1 Methodology

Three predictors were evaluated:

| Predictor | Configuration |
| --- | --- |
| Native GShare | `bpred_GSHARE_10_16_10_0_rv32gc` |
| LLM GShare | `bpred_GSHARE_LLM_10_16_10_0_rv32gc` |
| LLM O-GEHL | `bpred_OGEHL_LLM_rv32gc` |

All configurations used the same RV32GC base,
BTB-size parameter, RAS size, and instruction-class
prediction setting.

The benchmark set contained:

- 22 speed-optimized Embench programs
- 22 size-optimized Embench programs
- 44 matched workload instances per predictor

The performance-counter parameter was enabled
during simulation.

Each successful run produced cycle, retired
instruction, branch-count, and prediction-error
counter records.

The logs were validated for 44 matching workloads
before comparison.

### 7.2 Metrics

The primary metrics were:

**Cycles:** Measured execution cycles.

**CPI:**

    total_cycles / total_retired_instructions

**Direction MPKI:**

    1000 * direction_mispredictions /
    retired_instructions

**Overall BP MPKI:**

    1000 * overall_BP_mispredictions /
    retired_instructions

**Per-workload speedup:**

    native_GShare_cycles / candidate_cycles

**Geometric-mean speedup:**

    geometric_mean(per_workload_speedups)

A speedup greater than 1.0 indicates fewer
execution cycles than native GShare.

Aggregate MPKI and CPI use summed counters,
while the geometric mean gives each matched
workload one speedup contribution.

### 7.3 Aggregate Results

| Metric | Native GShare | LLM GShare | LLM O-GEHL |
| --- | ---: | ---: | ---: |
| Direction MPKI | 16.152 | 12.962 | 2.544 |
| Overall BP MPKI | 32.715 | 29.781 | 23.377 |
| Aggregate CPI | 1.1777 | 1.1732 | 1.1597 |
| Geomean speedup | 1.0000x | 1.0037x | 1.0148x |

Compared with native GShare, O-GEHL achieved:

- 84.3% lower reported direction MPKI
- 28.5% lower overall BP MPKI
- 1.48% geometric-mean speedup
- Approximately 1.53% lower aggregate CPI

LLM GShare also improved over native GShare,
but by a smaller amount.

### 7.4 Compiler Optimization Groups

| Build | Native GShare | LLM GShare | LLM O-GEHL |
| --- | ---: | ---: | ---: |
| Speed optimized | 1.0000x | 1.0028x | 1.0138x |
| Size optimized | 1.0000x | 1.0045x | 1.0158x |
| Combined | 1.0000x | 1.0037x | 1.0148x |

O-GEHL produced a positive geometric-mean speedup
in both compiler optimization groups.

### 7.5 Per-Workload Results

O-GEHL improved performance on 39 of 44 workloads
and regressed on five.

Selected largest improvements:

| Workload | Build | Speedup |
| --- | --- | ---: |
| sglib-combined | Speed | 1.0748x |
| sglib-combined | Size | 1.0611x |
| aha-mont64 | Size | 1.0537x |
| nsichneu | Size | 1.0488x |
| aha-mont64 | Speed | 1.0415x |
| huffbench | Speed | 1.0372x |

Selected regressions:

| Workload | Build | Speedup |
| --- | --- | ---: |
| nsichneu | Speed | 0.9845x |
| wikisort | Speed | 0.9967x |
| nettle-sha256 | Size | 0.9975x |
| st | Speed | 0.9975x |
| nettle-sha256 | Speed | 0.9984x |

The contrasting nsichneu results are notable:
its speed-optimized build regressed, while its
size-optimized build improved.

This demonstrates that predictor performance can
depend on program layout, control-flow structure,
and other code-generation differences.

## 8. Discussion

### 8.1 Direction Prediction

O-GEHL reduced reported direction MPKI from
16.152 to 2.544, an approximately 84.3% reduction.

The result is consistent with O-GEHL's greater
history capacity and more sophisticated prediction
mechanism.

However, the predictor was also allocated a
substantially larger hardware budget.

The experiment cannot isolate the benefit of
the prediction algorithm from the benefit of
additional storage.

### 8.2 Overall Branch Prediction

Overall BP MPKI declined from 32.715 to 23.377,
a reduction of approximately 28.5%.

This improvement was smaller than the direction
MPKI reduction.

Wally's branch prediction system also relies on
branch target prediction, return address prediction,
and instruction classification.

Consequently, improved direction prediction does
not eliminate every source of control-flow
redirection.

### 8.3 Execution Performance

The 84.3% reported direction MPKI reduction produced
a 1.48% geometric-mean execution speedup.

This is not contradictory.

Direction mispredictions are only one contributor
to execution cycles. Other branch-prediction
components, pipeline behavior, and non-branch
execution overhead remain.

The result illustrates the difference between
improving predictor accuracy and improving
whole-processor performance.

### 8.4 Generation Versus Integration

The original CBP-compatible standalone predictor
matched the reference on all distributed traces.

Substantial additional work was still needed
to adapt it to Wally's pipeline.

This separates two capabilities:

1. Reproducing a published algorithm in RTL.
2. Integrating that RTL into a functioning
   microarchitecture with correct timing and control.

The experiment provides evidence of successful
LLM assistance in both activities, while also
demonstrating the value of independent verification
and iterative repair.

## 9. Limitations

### 9.1 Unequal Predictor Storage

O-GEHL uses approximately 65,536 logical bits
of predictor storage.

The GShare controls use a smaller history-table
configuration.

The comparison is therefore not controlled
for silicon area or storage capacity.

No synthesis-based area, timing, frequency,
or power comparison is reported.

### 9.2 Counter Comparability

All three predictors feed the same downstream
Wally HPM counter infrastructure.

However, the Execute-stage direction-misprediction
event definitions differ.

Native GShare qualifies direction errors using
BranchE, while the generated implementations
use additional metadata and update-validity
conditions.

The downstream counter also applies instruction
validity and flush/stall qualification.

Static inspection suggests that some additional
qualifications may be redundant at the point
where the counter is incremented, but exact
event equivalence has not been demonstrated.

Therefore, the 84.3% direction MPKI reduction is
reported as measured rather than as a formally
proven apples-to-apples direction-error count.

The overall BP misprediction event and actual
execution cycles are determined by shared
processor infrastructure.

### 9.3 Intermittent Simulator Crash

The first full O-GEHL Embench execution terminated
with a segmentation fault after four completed
workloads.

A subsequent standalone huffbench execution
completed normally.

A later full-suite run under GDB completed all
44 workloads and exited normally without changes
to the RTL.

The original crash has not been reproduced or
explained.

This should be considered an unresolved simulator
stability observation rather than either a
confirmed RTL defect or a proven external failure.

### 9.4 Reference Equivalence Scope

The CBP differential tests established agreement
on conditional direction predictions over the
tested event streams.

They did not formally prove equivalent internal
states or correctness for all possible inputs.

The Wally adaptation differs from the original
CBP simulation environment in history management,
control-flow timing, and processor integration.

### 9.5 Benchmark Scope

The performance evaluation used Embench under
RV32GC with two compiler optimization groups.

The findings do not establish equivalent speedups
for other ISA configurations, applications,
operating systems, or processor microarchitectures.

### 9.6 LLM Workflow and Human Intervention

The standalone RTL was generated using OpenAI GPT-6
with High reasoning effort in ChatGPT Temporary Chat.

All generation prompts, model responses, RTL versions,
and repair iterations were preserved.

The workflow involved human-directed specification,
test development, verification, and integration.
Compiler and simulation feedback was provided to
the LLM during subsequent repair iterations.

Therefore, this experiment demonstrates LLM-assisted
hardware development rather than fully autonomous
RTL design and verification.

## 10. Reproducibility

### 10.1 Repository Artifacts

The experiment is stored under:

`experiments/ogehl_cbp1/`

Important artifacts include:

- `metadata.md`
- `sources.md`
- `spec/spec.md`
- `spec/rtl_interface.md`
- `paper/`
- `reference/`
- `prompts/`
- `responses/`
- `rtl/`
- `verification/`
- `results/`

The integrated RTL is located in the Wally
submodule at:

`cvw/src/ifu/bpred/ogehl_wally.sv`

### 10.2 Benchmark Data

The root-level results directory contains:

`results/ogehl_comparison/`

Files include:

- Three raw predictor benchmark logs
- `per_workload.csv`
- `summary.csv`

The parser is located at:

`scripts/parse_ogehl_embench.py`

### 10.3 Regenerate Comparison Results

From the repository root:

    ```bash
    python3 scripts/parse_ogehl_embench.py
    ```

The parser verifies completion markers, required
counter records, and matching workloads.

It produces the per-workload and summary CSV files.

### 10.4 Rerun Embench

From the Wally submodule:

    ```bash
    cd cvw
    source ./setup.sh
    ```

Each predictor can be evaluated with the
appropriate configuration, the `embench`
test suite, Verilator, and enabled HPM counters.

The benchmark inputs and simulator configuration
should be held fixed for repeat measurements.

The successful O-GEHL comparison log was
reconstructed from its GDB transcript rather
than the earlier crashed run.

## 11. Conclusions

This experiment successfully reproduced the
observable conditional direction-prediction
behavior of the original CBP-1 O-GEHL predictor
in LLM-generated standalone SystemVerilog.

The implementation matched the unchanged original
reference on all 20 distributed traces.

A subsequent LLM-assisted adaptation integrated
the predictor into CORE-V-Wally.

The integrated implementation passed directed
pipeline tests and the tested supported
architectural suites.

On 44 Embench workload instances, O-GEHL
achieved:

- 84.3% lower reported direction MPKI
- 28.5% lower overall BP MPKI
- 1.48% geometric-mean execution speedup
- Improvements on 39 of 44 workloads

These results demonstrate a successful
end-to-end workflow for LLM-assisted reproduction,
integration, verification, and evaluation of a
published branch predictor.

The findings should not be interpreted as
demonstrating superiority under equal hardware
resources, formal predictor equivalence, or
complete simulator robustness.

Future work may examine equal-budget comparisons,
counter-event equivalence, synthesis results,
and broader workload coverage.
