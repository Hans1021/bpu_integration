# GShare Control Generation Metadata

## Experiment

Experiment: LLM-generated GShare control implementation

Purpose: Determine whether an LLM-generated implementation of a known GShare predictor can be independently generated, verified, integrated into CORE-V-Wally, and compared against the existing built-in GShare predictor before applying the same methodology to published CBP predictors.

## Generation Environment

Date: 2026-10-10

Interface: ChatGPT Temporary Chat

Personalization: Unpersonalized

Model: `<fill in exact model name shown in ChatGPT>`

## Inputs

Specification:

`spec/gshare_spec.md`

Initial generation prompt:

`prompts/01_generate.txt`

Existing CORE-V-Wally GShare RTL provided to model: No

Compiler or simulator feedback provided before initial generation: None

## Initial Output

Raw model response:

`responses/01_generate.txt`

Extracted generated RTL:

`rtl/gshare_llm.sv`

## Human Intervention

Manual RTL modifications after initial generation: None

Manual corrections to model output: None

Additional implementation guidance after initial prompt: None

## Repair History

No repair iterations yet.

If repairs are required, each repair iteration will record:

- reason for repair
- compiler or simulator feedback supplied to the model
- exact repair prompt
- raw model response
- resulting RTL
- any human modifications

## Planned Validation

The generated RTL will be:

1. compiled standalone
2. tested against an independent GShare reference model
3. tested for prediction and counter-update behavior
4. tested for speculative-history behavior
5. tested for stall and flush behavior
6. tested for PHT hazard/forwarding behavior
7. integrated into CORE-V-Wally only after standalone validation
8. compared against the built-in GShare predictor using the same Wally benchmark and HPM-counter methodology

## Initial Generation Result

The initial response contained a self-identified RTL error.

The model stated that:

`validD = validD;`

should instead be:

`validD_n = validD;`

This correction was identified by the model in the same initial response,
after the generated RTL.

No human RTL correction has been made yet.

The model also noted that the supplied interface does not fully specify
behavior for arbitrary independent stall/flush combinations and therefore
made assumptions about coherent pipeline control and Execute-stage
commitment.

## Outcome

The LLM-generated GShare passed:

- Verilator lint after one LLM repair iteration
- directed standalone tests
- speculative-history tests
- hazard/forwarding tests
- 1000-vector randomized reference-model test
- Wally architectural smoke tests
- all 44 Embench workloads

The generated predictor was successfully integrated into Wally as
`BP_GSHARE_LLM`.

## Comparison with Wally GShare

The LLM implementation was generated from the behavioral specification in
`spec/gshare_spec.md`; it was not given Wally's `gshare.sv`.

Across 44 Embench workloads:

- Wally built-in GShare direction misses: 2,267,649
- LLM GShare direction misses: 1,819,693
- Direction-miss difference: -19.75%
- Wally direction miss rate: 12.983%
- LLM direction miss rate: 10.419%
- Wally MPKI: 16.152
- LLM MPKI: 12.962
- Cycle difference: -0.38%

The two implementations are not behaviorally equivalent. Inspection showed
several specification/microarchitecture differences:

- Wally inserts the newest history bit at the MSB, while the LLM design inserts
  it at bit 0.
- The LLM design pipelines the original Fetch PHT index to the update stage,
  while Wally recomputes the update index from later pipeline state.
- The LLM design maintains explicit committed and speculative history state,
  while Wally reconstructs speculative history from pipeline stages.
- The LLM design explicitly initializes the PHT to weakly not-taken, whereas
  Wally delegates PHT storage behavior to its RAM implementation.
- Wally includes D/E/M/W same-index prediction forwarding that differs from the
  LLM design's forwarding behavior.

Therefore this experiment demonstrates successful LLM RTL generation,
standalone verification, Wally integration, and benchmarking, but should not
be interpreted as an exact reproduction of Wally's built-in GShare.

The mismatch is primarily a difference between the behavioral specification
and Wally's specific GShare microarchitecture, rather than a failure of the
generated RTL to implement its supplied specification.
