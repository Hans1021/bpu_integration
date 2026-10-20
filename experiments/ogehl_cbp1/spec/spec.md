
# O-GEHL — CBP-1 Behavioral Specification

## 1. Objective

Reproduce André Seznec's Optimized GEometric History Length (O-GEHL) branch predictor submitted to the First Championship Branch Prediction Competition (CBP-1, 2004).

The primary goal is behavioral equivalence with the original submitted predictor. The resulting design will subsequently be implemented in synthesizable SystemVerilog and integrated into CORE-V-Wally as a separate branch-direction predictor.

Correctness against the original reference algorithm takes priority over performance optimization.

### Authoritative sources

- `paper/ogehl_cbp1_writeup.pdf`
- `paper/ogehl_cbp1_slides.pdf`
- `reference/extracted/Andre/predictor.h`
- `reference/extracted/Andre/main.cc`
- `reference/extracted/Andre/tread.h`
- `reference/extracted/Andre/README`

Official competition page:

<https://jilp.org/cbp/Agenda-and-Results.htm>

Original paper:

<https://jilp.org/cbp/Andre.pdf>

The submitted `predictor.h` is the authoritative source for implementation-specific behavior not completely described in the paper.

The reference code must remain unchanged. Any adaptations for hardware implementation or Wally integration must be explicitly documented.

---

## 2. Reference Configuration

The submitted predictor enables the following compile-time options:

- `OGEHL`
- `CBP`
- `FULLPATH`
- `DYNHISTFIT`
- `DYNTHRESFIT`

Relevant constants:

| Parameter | Value | Description |
| --- | ---: | --- |
| `NTABLE` | 8 | Number of predictor tables |
| `LOGPRED` | 11 | Normal table index width |
| `NENTRY` | 3 | Maximum XOR-folding inputs |
| `ADDWIDTH` | 8 | Address width used in distributed bit selection |
| `GLENGTH` | 200 | Maximum global history length |
| `L1` | 3 | Initial history length of T1 |
| `PLENGTH` | 16 | Maximum path-history contribution |
| `EXTRAHIST` | 3 | Additional history-length choices |
| `MAXCOUNTER` | 7 | Maximum 4-bit counter value |
| `MINCOUNTER` | -8 | Minimum 4-bit counter value |
| `MAXTHRESUPDATE` | 31 | Maximum dynamic training threshold |
| `THRESFIT` | 64 | Threshold-fitting parameter |
| `THRES` | 256 | Aliasing-counter parameter |

The CBP-specific configuration uses 5-bit counters for T0 and T1, and only 1,024 entries in T1.

No alternative parameters should be substituted during the initial reproduction.

---

## 3. Predictor Organization

O-GEHL uses eight prediction tables, T0 through T7.

Each table contains signed saturating prediction counters and uses a different amount of global history when computing its index.

### 3.1 Table configuration

| Table | Entries | Counter width | Initial history | Long history |
| --- | ---: | ---: | ---: | ---: |
| T0 | 2048 | 5 bits | 0 | — |
| T1 | 1024 | 5 bits | 3 | — |
| T2 | 2048 | 4 bits | 5 | 79 |
| T3 | 2048 | 4 bits | 8 | — |
| T4 | 2048 | 4 bits | 12 | 125 |
| T5 | 2048 | 4 bits | 19 | — |
| T6 | 2048 | 4 bits | 31 | 200 |
| T7 | 2048 | 4 bits | 49 | — |

The full history-length sequence is:

`[0, 3, 5, 8, 12, 19, 31, 49, 79, 125, 200]`

The reference computes these values using geometric progression and integer rounding:

\[
r = \left(\frac{200}{3}\right)^{1/9}
\]

\[
L_0=0,\qquad L_1=3
\]

\[
L_i=\operatorname{round}(3r^{i-1}),\qquad 2\le i<11
\]

The explicitly listed history lengths are the target values for the submitted configuration.

T2, T4, and T6 support dynamic history-length fitting.

All other tables have fixed history lengths.

### 3.2 Predictor storage

Logical prediction-table storage:

| Structure | Bits |
| --- | ---: |
| T0 | 10,240 |
| T1 | 5,120 |
| T2–T7 | 49,152 |
| T7 alias tags | 1,024 |
| **Total** | **65,536** |

This is the submitted 64-Kibit table/tag configuration.

The original C++ implementation uses `char` arrays for counter storage, but the hardware implementation must use the logical counter widths specified above.

History registers and adaptation-control state must be included separately when reporting actual synthesized storage and area.

---

## 4. Predictor State

Maintain the following persistent state:

### 4.1 Prediction tables

Eight arrays of signed saturating counters, using the sizes and widths specified in Section 3.

### 4.2 Global history

A global branch-outcome history containing at least the most recent 200 control-flow events.

The most recent outcome occupies bit 0.

The original C++ implementation stores this history in multiple 64-bit words.

A hardware implementation may represent it as a single 200-bit vector provided that indexing and update behavior are equivalent.

### 4.3 Path history

A path-history register retaining at least 16 relevant low-order bits.

The most recent path bit occupies bit 0.

### 4.4 Dynamic adaptation state

Maintain:

- `TC`: signed threshold-fitting counter
- `AC`: signed aliasing counter
- `thresupdate`: dynamic training threshold
- `UsedHistLength[0:7]`: currently active table history lengths

### 4.5 Aliasing tags

Maintain 1,024 one-bit tags, `MINITAG`.

These are associated with even-numbered indices in T7.

A tag for T7 index `index` is accessed using:

`MINITAG[index >> 1]`

but only when `index` is even.

---

## 5. Initialization

On predictor initialization or hardware reset:

1. Set every prediction-table counter to zero.
2. Set every alias tag to zero.
3. Clear the global history.
4. Clear the path history.
5. Set `TC = 0`.
6. Set `AC = 0`.
7. Set `thresupdate = 8`.
8. Initialize all active history lengths to their short values.

The initial active history lengths are:

`[0, 3, 5, 8, 12, 19, 31, 49]`

An important consequence is that the initial prediction is taken, not not-taken.

This follows from the positive prediction-sum bias specified below.

---

## 6. Prediction Algorithm

For every conditional branch:

1. Obtain the branch instruction address.
2. Compute one index for each of the eight prediction tables.
3. Read the selected signed prediction counters.
4. Sum the counter values together with a fixed positive bias.
5. Return the predicted direction.

Let `C_i` be the selected signed counter value from table `i`.

The prediction sum is:

\[
S=\frac{NTABLE}{2}+\sum_{i=0}^{7}C_i
\]

Since `NTABLE = 8`:

\[
S=4+\sum_{i=0}^{7}C_i
\]

Prediction direction:

\[
Prediction =
\begin{cases}
Taken,&S\ge0\\
NotTaken,&S<0
\end{cases}
\]

The positive bias of 4 is mandatory.

Do not replace this summation with majority voting or a sign test lacking the bias.

For nonconditional branch records, the reference `get_prediction()` returns false. Such branches still affect history during the update operation.

---

## 7. Table Indexing

The exact indexing algorithm is defined by the original `INDEX` function in `predictor.h`.

It combines:

- Branch instruction address
- Global branch history
- Path history
- Table-specific history length
- Table-specific hashing-function selector

The final result is a 10-bit or 11-bit table index.

### 7.1 Table-specific parameters

For table `i`:

- `m = UsedHistLength[i]`
- `w = 10` for T1
- `w = 11` for every other table
- `funct = (i & 3) + 1`

The maximum path-history contribution is:

\[
p=\min(m,16)
\]

The intermediate vector has a target width of:

\[
N=3w
\]

Calculate:

\[
MinAdd=\min(20,N-m-p)
\]

There are two indexing cases.

### 7.2 Case A: `MinAdd >= 8`

Form the intermediate vector by concatenating the following fields from most significant to least significant:

1. Lowest `m` global-history bits
2. Lowest `MinAdd` branch-address bits
3. Lowest `p` path-history bits

Equivalent conceptual expression:

\[
inter =
(GHR_m \ll (MinAdd+p))
\;|\;
(PC_{MinAdd}\ll p)
\;|\;
PHR_p
\]

Here each subscript denotes the lowest specified number of bits.

When the intermediate vector contains fewer than `N` bits, missing high bits are zero.

The reference uses addition for these nonoverlapping fields; bitwise OR is equivalent when their widths are respected.

For zero-width history or path fields, their contribution is zero.

### 7.3 Case B: `MinAdd < 8`

The reference performs distributed bit selection.

Define a conceptual source vector containing, in order:

1. `m` bits of global history
2. 8 bits of branch address
3. `p` bits of path history

For each intermediate-vector position `j`:

\[
0\le j<N
\]

Calculate:

\[
q_j=
\left\lfloor
\frac{j(8+m+p-1)}{N-1}
\right\rfloor
\]

Select bit position `q_j` from the conceptual source vector.

The first selected bit becomes the initial intermediate-vector value.

Each subsequent selected bit is appended as the new least significant bit:

\[
inter_{next}=(inter\ll1)|selected\_bit
\]

The reference traverses multiword global history when necessary.

For exact equivalence, bit positions 0 through `m-1` correspond to global-history bits with bit 0 representing the newest outcome.

Positions `m` through `m+7` correspond to the lowest eight address bits.

The remaining positions correspond to path-history bits.

Do not replace this selection with a conventional XOR of the PC and history.

### 7.4 XOR folding

After constructing `inter`, reduce it to `w` bits using three `w`-bit chunks.

Define:

\[
mask=2^w-1
\]

Initialize:

\[
result=inter\mathbin{\&}mask
\]

Set:

`rotation = funct`

For each of the remaining two chunks:

1. Shift `inter` right by `w`.
2. Extract its lowest `w` bits.
3. Rotate this chunk right by `rotation` bits.
4. XOR the rotated chunk into `result`.
5. Set `rotation = (rotation + 1) mod w`.

The rotate operation must reproduce:

\[
ROR(x,r)=
(x\gg r)\;|\;
((x\mathbin{\&}(2^r-1))\ll(w-r))
\]

with the result constrained to `w` bits.

The final table index is the lowest `w` bits of `result`.

### 7.5 Required indexing equivalence

For any identical:

- PC
- Global history
- Path history
- Active history-length settings

the generated predictor must produce exactly the same eight indices as the original `INDEX` implementation.

This requirement must be tested independently before full predictor evaluation.

---

## 8. Counter Training

For each resolved conditional branch, recompute the prediction sum and table indices from the current pre-update predictor state.

Let:

- `taken` be the actual branch outcome
- `prediction` be the predictor's calculated direction
- `S` be the calculated prediction sum
- `theta` be the current training threshold

A branch qualifies for training if:

\[
prediction\ne taken
\]

or:

\[
-\theta\le S<\theta
\]

This interval is asymmetric: the negative boundary is inclusive and the positive boundary is exclusive.

Do not replace it with `abs(S) <= theta`.

### 8.1 Taken outcome

For every table, increment the selected counter by one unless it is already at its maximum value.

### 8.2 Not-taken outcome

For every table, decrement the selected counter by one unless it is already at its minimum value.

### 8.3 Saturation ranges

| Tables | Minimum | Maximum |
| --- | ---: | ---: |
| T0–T1 | -16 | +15 |
| T2–T7 | -8 | +7 |

Every table trains on an eligible branch.

There is no selective training of only one table.

The updates are saturating, not wrapping.

If training is not enabled, no prediction-table counters change.

---

## 9. Dynamic Training-Threshold Fitting

O-GEHL dynamically adjusts the counter-training threshold.

State:

- `TC`, initialized to 0
- `thresupdate`, initialized to 8

The threshold is constrained to:

\[
0\le thresupdate\le31
\]

### 9.1 Incorrect prediction

If:

`prediction != taken`

then:

1. Increment `TC` by one.
2. If `TC > 63`, clamp `TC` to 63.
3. If the threshold is below 31 when that upper limit is reached:
   - Increment `thresupdate` by one.
   - Reset `TC` to zero.

If the threshold is already 31, it remains unchanged.

### 9.2 Correct low-confidence prediction

If the prediction was correct and:

\[
-thresupdate\le S<thresupdate
\]

then:

1. Decrement `TC` by one.
2. If `TC < -64`, clamp `TC` to -64.
3. If the threshold is greater than zero when that lower limit is crossed:
   - Decrement `thresupdate` by one.
   - Reset `TC` to zero.

If the threshold is already zero, it remains unchanged.

### 9.3 Other predictions

For a correct prediction outside the low-confidence interval, do not change `TC` or `thresupdate`.

### 9.4 Ordering requirement

The original implementation performs threshold fitting before its final counter-training decision.

Consequently:

1. Calculate the prediction and sum.
2. Adjust the threshold.
3. Determine whether the prediction tables should train using the potentially updated threshold.

This ordering must be preserved.

---

## 10. Dynamic History-Length Fitting

O-GEHL dynamically selects short or long history lengths for three tables.

Only T2, T4, and T6 participate.

### 10.1 History-length choices

| Table | Short | Long |
| --- | ---: | ---: |
| T2 | 5 | 79 |
| T4 | 12 | 125 |
| T6 | 31 | 200 |

All three switch together.

### 10.2 Aliasing counter

Maintain a signed counter:

`AC = 0` initially.

The reference saturation limits are:

- Minimum: -256
- Maximum: +255

### 10.3 Aliasing tags

Maintain:

`MINITAG[0:1023]`

Each element logically stores one bit.

The tag structure is associated with even-numbered indices in T7.

### 10.4 Conditions for alias checking

Aliasing logic is evaluated only when:

1. The branch is conditional.
2. The branch qualifies for prediction-counter training.
3. The calculated T7 index is even.

Define:

`tag_index = index_T7 >> 1`

### 10.5 Incorrect predictions

When the prediction is incorrect, compare:

`MINITAG[tag_index]`

with:

`PC[0]`

If they differ:

`AC = AC - 4`

If they match:

`AC = AC + 1`

### 10.6 Negative saturation

If the updated `AC` becomes smaller than -256:

1. Set `AC = -256`.
2. Select short histories:

   - T2 = 5
   - T4 = 12
   - T6 = 31

### 10.7 Positive saturation

If the updated `AC` becomes greater than 255:

1. Set `AC = 255`.
2. Select long histories:

   - T2 = 79
   - T4 = 125
   - T6 = 200

### 10.8 Tag update

Whenever the conditions in Section 10.4 are satisfied, write:

`MINITAG[tag_index] = PC[0]`

This happens even if the prediction was correct.

However, the aliasing counter is adjusted only on a misprediction.

### 10.9 Important restrictions

- Only T2, T4, and T6 change history lengths.
- History selection changes only at saturation events.
- The aliasing tags are indexed using the original pre-update T7 index.
- History-length changes affect subsequent index calculations, not the indices already calculated for the current branch.

---

## 11. Global Branch History

O-GEHL maintains up to 200 bits of global control-flow history.

The most recent event is stored in bit 0.

Global history is updated after prediction-counter and adaptation updates.

### 11.1 Conditional branch

For a conditional branch:

\[
GHR_{next}=(GHR\ll1)|taken
\]

where `taken` is the actual outcome.

### 11.2 Nonconditional branch

For a nonconditional control-flow event:

\[
GHR_{next}=(GHR\ll1)|1
\]

Nonconditional branches are therefore represented as taken events.

### 11.3 History width

Only the most recent 200 history bits are relevant.

A fixed-width RTL implementation must discard bits beyond the configured history length.

### 11.4 Timing

The original reference uses actual resolved outcomes to update global history.

It does not model multiple speculative branches in flight.

Do not silently substitute predicted outcomes for actual outcomes in the reference-equivalent design.

---

## 12. Path History

The predictor also maintains path information.

For every branch record:

\[
PHR_{next}=(PHR\ll1)|(PC\mathbin{\&}1)
\]

The most recent path bit enters at bit 0.

Only the relevant low-order bits, up to 16, are used by table indexing.

The original reference uses the least significant bit of the branch instruction address.

This behavior must be preserved exactly in the CBP-1 reproduction.

For later Wally integration, remember that aligned RISC-V instruction addresses have `PC[0] = 0`.

Any alternate mapping of path-history bits for RISC-V must be treated as an explicitly documented adaptation, not reference-equivalent behavior.

---

## 13. Branch-Event Interface

The original competition driver processes one branch record at a time.

The branch record contains:

- `instruction_addr`
- `branch_target`
- `instruction_next_addr`
- `is_indirect`
- `is_conditional`
- `is_call`
- `is_return`

The submitted O-GEHL predictor primarily uses:

- `instruction_addr`
- `is_conditional`
- Actual resolved outcome

It does not require data-value prediction or the architectural state object for its direction algorithm.

### 13.1 Original driver sequence

For each branch record:

1. Obtain the next branch record from the trace reader.
2. Call `get_prediction()`.
3. Pass the prediction to the trace reader.
4. Obtain the actual branch outcome.
5. Call `update_predictor()`.
6. Advance to the next branch.

The original algorithm is therefore sequential and trace-driven.

### 13.2 Nonconditional branches

For a nonconditional branch:

- No O-GEHL direction-counter prediction is required.
- Prediction tables are not trained.
- Dynamic threshold and aliasing state are not updated.
- Global history is shifted and a taken bit is inserted.
- Path history is updated with the branch address's lowest bit.

The original trace-reader return value for nonconditional branches is not a valid direction outcome; the predictor must not depend on it.

### 13.3 RTL interface requirement

The first hardware implementation should support a reference-equivalent serialized mode in which:

- A branch event is presented.
- The prediction is observable.
- Its actual outcome is subsequently provided.
- Predictor state is updated once.
- No younger branch modifies predictor state between prediction and resolution.

The exact clocked SystemVerilog module ports, handshakes, and prediction/update latency must be defined in the generation prompt or a separate interface document.

Do not assume a Wally F/D/E/M/W interface during initial reference-algorithm reproduction.

---

## 14. Required Operation Ordering

For a conditional branch, the behavior must be equivalent to the following sequence:

1. Compute the eight table indices from current history and active history-length selections.
2. Read the selected counters.
3. Compute the biased prediction sum.
4. Return the prediction direction.
5. Receive the actual branch outcome.
6. Recompute indices, counters, sum, and prediction using the current pre-update reference state.
7. Update the dynamic training threshold.
8. Determine training eligibility using the updated threshold.
9. If eligible, train all eight selected counters.
10. If eligible and the T7 index is even, perform aliasing detection and possible dynamic history-length changes.
11. Update path history.
12. Update global history.

Under the original serialized CBP driver, no intervening branch event changes predictor state between steps 4 and 6.

The reference intentionally recomputes its values during update rather than storing the original prediction indices.

A hardware implementation may retain equivalent intermediate values for timing purposes, provided its externally observable behavior remains the same in serialized reference mode.

---

## 15. Standalone Verification

The generated RTL must first be tested independently of Wally.

### 15.1 Initialization tests

Verify:

- All table counters initialize to zero.
- Global and path history initialize to zero.
- Alias tags initialize to zero.
- `TC = 0`.
- `AC = 0`.
- `thresupdate = 8`.
- Initial active history lengths are correct.
- Initial conditional-branch prediction is taken.

### 15.2 Indexing tests

Compare all eight indices with the original `INDEX` function.

Test:

- Every table
- T1's 10-bit indexing
- Other tables' 11-bit indexing
- Zero and nonzero PC values
- Both `MinAdd` cases
- Zero and nonzero global history
- Nonzero path history
- Histories spanning multiple 64-bit words
- Short and long history-length configurations
- XOR folding and rotation boundaries

### 15.3 Counter tests

Verify:

- Taken increments
- Not-taken decrements
- Saturation at every positive maximum
- Saturation at every negative minimum
- Signed arithmetic
- Prediction-sum bias
- Prediction exactly at `S = 0`
- Training when prediction is incorrect
- Training when prediction is correct but low confidence
- No training for correct high-confidence predictions

### 15.4 Threshold tests

Verify:

- Initial threshold
- TC positive and negative accumulation
- Threshold increment
- Threshold decrement
- Maximum threshold of 31
- Minimum threshold of 0
- Exact inclusive/exclusive confidence boundaries
- Threshold adaptation before counter-training eligibility

### 15.5 Dynamic history-fitting tests

Verify:

- T7 even-index requirement
- T7 odd-index exclusion
- Tag comparison and update
- AC increment by 1
- AC decrement by 4
- Positive and negative saturation
- Short-to-long history switching
- Long-to-short history switching
- No change at intermediate AC values

### 15.6 History tests

Verify:

- Conditional taken insertion
- Conditional not-taken insertion
- Nonconditional insertion of 1
- Path-history insertion from PC bit 0
- History ordering
- 200-bit global history behavior
- 16-bit effective path-history behavior
- History updates after training

### 15.7 Randomized differential testing

Build a test environment that presents identical branch-event streams to:

1. The original O-GEHL C++ reference
2. The generated RTL

Compare:

- Predicted direction
- Table indices where observable
- Prediction sum where observable
- Counter updates
- Global history
- Path history
- Dynamic thresholds
- Active history lengths
- Alias tags

Use deterministic random seeds.

Any divergence must be reported and investigated rather than silently corrected.

A separate verification harness or instrumented working copy may expose internal reference values. Preserve the original upstream archive unchanged.

---

## 16. Original CBP-1 Benchmark Reproduction

CBP-1 uses 20 branch traces drawn from four workload classes:

- Server
- Multimedia
- SPECint
- SPECfp

Each trace represents approximately 30 million instructions.

The principal reported accuracy metric is:

\[
MPKI=1000\times
\frac{\text{incorrect conditional predictions}}
{\text{executed instructions}}
\]

The original source archive contains reference report files, including:

- `gen_report.output.without-values.txt`
- `gen_report.output.without-values.official.txt`
- `gen_report.output.without-values.official.undist.txt`

The public distributed traces and the private competition traces must be distinguished.

The original published aggregate scores should be checked against the corresponding archived report and official competition results before setting final numerical pass/fail thresholds.

For the initial reproduction:

1. Obtain the public CBP-1 trace set.
2. Build and run the unchanged original submission.
3. Save its per-trace results.
4. Run the generated/reference-equivalent implementation on identical events.
5. Compare predictions and per-trace mispredictions.
6. Calculate MPKI using the official instruction counts.
7. Use the original reporting methodology for aggregate results.

Per-trace equivalence is more important than obtaining only a similar aggregate MPKI.

---

## 17. Wally Integration

Wally integration is a separate stage following reference-algorithm validation.

It must not silently alter the reference model.

### 17.1 Integration goals

- Add O-GEHL as a new direction-predictor type.
- Preserve existing Wally predictors.
- Use an appropriately parameterized branch-prediction interface.
- Maintain architectural correctness.
- Support fixed benchmark and HPM comparisons.

### 17.2 Issues requiring explicit design decisions

The original CBP-1 reference does not define:

- Speculative history updates
- Multiple outstanding branches
- Pipeline stalls or flushes
- Misprediction recovery
- Prediction-index forwarding
- PHT read/write collisions
- Branch recovery checkpoints
- SRAM timing
- Wally's fetch/predict/resolve timing

These must be specified for Wally rather than inferred as part of the original CBP algorithm.

### 17.3 Addressing differences

CBP-1 and RISC-V instruction-address distributions differ.

In particular:

- The original uses PC bit 0 for path history.
- RISC-V instruction addresses are aligned.
- Original PC hashing may therefore have different effectiveness in Wally.

Retain the original behavior for CBP reference validation.

Any adaptation for Wally must be documented and evaluated separately.

### 17.4 Wally correctness evaluation

After integration, run:

1. Elaboration and compilation
2. Basic architectural smoke tests
3. The fixed architectural regression
4. The fixed Embench benchmark suite
5. HPM counter extraction and comparison

Use the previously established baseline configurations and evaluation infrastructure.

---

## 18. Performance Metrics

Collect at least:

### CBP-1 reference evaluation

- Prediction count
- Direction mispredictions
- Executed instruction count
- MPKI
- Per-trace results
- Published/reference comparisons

### Wally evaluation

- Cycles
- Retired instructions
- Conditional branch count
- Direction mispredictions
- Overall branch-prediction errors
- Direction miss rate
- MPKI
- CPI
- IPC

Where meaningful, compare against:

- Wally built-in TWOBIT
- Wally built-in GShare
- LLM-generated GShare control
- Other reproduced CBP predictors

Do not equate paper MPKI with Wally MPKI when workloads or prediction semantics differ.

### Hardware evaluation

For synthesizable implementations, optionally collect:

- Logical predictor storage
- Synthesized memory bits
- Cell area
- Critical path
- Maximum frequency
- Power estimates
- SRAM inference or mapping results

Reported 64-Kibit competition storage is not equivalent to complete synthesized silicon area.

---

## 19. Reproduction Methodology

The experiment uses an LLM-heavy implementation methodology.

### Generation

- Supply the finalized behavioral specification to the selected LLM.
- Record the exact model and reasoning setting.
- Preserve the complete initial prompt.
- Preserve the full raw response.
- Save the generated RTL without silent functional modifications.

### Repair

If compilation or verification fails:

1. Save the complete error or mismatch.
2. Send the relevant evidence to the same LLM experiment.
3. Preserve the repair prompt and response.
4. Save the new RTL version.
5. Repeat verification.

Do not hide failed iterations.

### Human intervention

Record all manual functional changes separately.

Formatting, filenames, directory placement, and other nonfunctional file normalization do not count as RTL design changes.

### Documentation

Maintain:

- `metadata.md` — experiment tracking and results
- `sources.md` — provenance
- `spec/spec.md` — algorithm specification
- `prompts/` — exact prompts
- `responses/` — raw model outputs
- `rtl/` — generated versions
- `verification/` — tests, models, and logs
- `results/` — measured data

---

## 20. Success Criteria

### Stage A — Algorithm reproduction

Successful when:

- The implementation elaborates and simulates.
- Index computations match the reference.
- Counter and adaptation behavior match.
- Directed tests pass.
- Randomized reference comparisons pass.

### Stage B — CBP reproduction

Successful when:

- Public traces can be processed.
- Per-trace outcomes agree with the original predictor under equivalent event ordering.
- MPKI matches the original reference on identical traces, subject to any explicitly documented infrastructure differences.

### Stage C — Wally integration

Successful when:

- The predictor integrates as a separate Wally option.
- Architectural correctness tests pass.
- Embench runs successfully.
- HPM results are reproducible.
- All deviations from original CBP semantics are documented.

### Stage D — Research documentation

Successful when the experiment preserves enough information to reproduce the generation, repair, verification, and evaluation process.

A design that merely outperforms a baseline but fails reference-equivalence testing is not considered a successful reproduction of the original O-GEHL predictor.

---

## 21. Scope and Open Decisions

This document specifies the original O-GEHL algorithm and its sequential CBP-1 behavior.

The following are intentionally not finalized here:

- Exact synthesizable SystemVerilog port list
- Number of clock cycles per prediction/update
- Serialized hardware transaction protocol
- Pipeline checkpoints
- Speculative recovery implementation
- Physical PHT memory organization
- Wally-specific address/path-history adaptation
- Timing optimizations

These decisions must be made explicitly before generating the corresponding hardware implementation.

They must not be confused with requirements from the original predictor paper and source.
