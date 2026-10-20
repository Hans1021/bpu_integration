# O-GEHL — CBP-1 Reproduction

## Predictor

- Name: O-GEHL (Optimized GEometric History Length)
- Author: André Seznec
- Affiliation: IRISA/INRIA/HIPEAC
- Competition: 1st JILP Championship Branch Prediction (CBP-1)
- Year: 2004
- Final placement: 2nd
- Final undistributed-trace score: 2.627 mispredictions per 1000 instructions
- Competition storage budget: 64 Kbits
- Experiment status: source collection

## Goal

Reproduce the CBP-1 O-GEHL branch predictor using an LLM-heavy RTL
generation workflow.

The LLM-generated predictor will first be validated independently against
the published algorithm and original CBP reference implementation where
possible. It will then be integrated into CORE-V-Wally as an additional
direction predictor and evaluated using the fixed Wally benchmark and HPM
counter methodology.

## Original Predictor Summary

The submitted O-GEHL predictor uses eight predictor tables containing signed
counters. The tables use different global-history lengths forming a
geometric progression.

The CBP-1 implementation additionally uses:

- dynamic update-threshold fitting
- dynamic history-length fitting
- global branch history
- limited path history
- mixed 4-bit and 5-bit signed prediction counters
- history lengths extending to 200 branches

The submitted configuration fits within the CBP-1 64-Kbit predictor budget.

## Methodology

1. Preserve the original paper and reference implementation unchanged.
2. Derive an implementation-oriented behavioral specification.
3. Generate synthesizable RTL using the selected LLM without supplying
   manually written RTL.
4. Preserve every prompt, response, generated RTL version, and repair
   iteration.
5. Validate the RTL against an independent/reference model before Wally
   integration.
6. Reproduce the original CBP behavior/results where feasible.
7. Integrate the predictor into Wally as a separate predictor type.
8. Run architectural correctness tests.
9. Run the fixed Wally benchmark/HPM evaluation.
10. Document discrepancies and human intervention.

## LLM Configuration

To be filled when generation begins.

- Model:
- Reasoning setting:
- Date:
- Chat type:
- Number of initial generations:
- Number of repair iterations:
- Manual functional RTL modifications:

## Standalone RTL Verification

### Generation

- v0: Initial LLM-generated O-GEHL implementation.
- v1: LLM repair for signed-counter width warnings and
  dynamic threshold boundary conditions.
- v1 Verilator 5.036 lint: PASS, zero warnings.

### Differential Verification

Golden model: unchanged original CBP-1 O-GEHL C++ predictor.

- Deterministic synthetic stream: 20,000 events, PASS.
- DIST-INT-1 partial trace: 100,000 events, PASS.
- DIST-INT-1 complete trace: 4,989,048 events, PASS.
- All remaining 19 official distributed traces: PASS.
- All 20 official distributed traces: zero conditional
  direction-prediction mismatches.
- Official reference benchmark: 2.820 arithmetic mean MPKI.

### Interpretation

The v1 RTL produces the same conditional direction predictions
as the original C++ predictor on every distributed CBP-1 trace.

This demonstrates observable prediction equivalence on the tested
workloads, not formal equivalence of all internal states.

Internal-state checks, synthesis analysis, and Wally integration
remain outstanding.
