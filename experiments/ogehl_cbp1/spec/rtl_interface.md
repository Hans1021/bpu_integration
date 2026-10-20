
# O-GEHL Standalone RTL Interface

## Purpose

Define the interface and timing requirements for the initial
reference-equivalent SystemVerilog O-GEHL implementation.

Algorithmic behavior is specified separately in `spec.md`.

This is a serialized, trace-driven implementation. Wally pipeline
integration will be handled later.

## Module Interface

```systemverilog
module ogehl_ref (
    input  logic        clk,
    input  logic        reset,

    input  logic        event_valid,
    input  logic [31:0] event_pc,
    input  logic        event_is_conditional,
    input  logic        event_taken,

    output logic        prediction_valid,
    output logic        prediction_taken
);
```

## Signal Definitions

- `clk`: Predictor clock.
- `reset`: Active-high synchronous reset.
- `event_valid`: One branch event is presented this cycle.
- `event_pc`: 32-bit branch instruction address from the CBP trace.
- `event_is_conditional`: Whether the event is a conditional branch.
- `event_taken`: Actual resolved outcome for conditional branches.
- `prediction_valid`: Prediction is meaningful for the current event.
- `prediction_taken`: Predicted direction calculated using pre-update state.

## Prediction Timing

Prediction is combinational.

When `event_valid && event_is_conditional`:

1. Calculate table indices from current predictor state and `event_pc`.
2. Read the selected prediction counters.
3. Calculate the O-GEHL prediction sum.
4. Produce `prediction_taken`.
5. Assert `prediction_valid`.

The prediction must not depend on `event_taken`.

When no valid conditional event exists, `prediction_valid` must be zero.
`prediction_taken` may be zero in this case.

## Update Timing

At each rising clock edge:

- If `reset` is asserted, initialize the complete predictor state.
- Otherwise, if `event_valid` is asserted, process exactly one event.
- Otherwise, preserve all predictor state.

For a conditional event:

1. Use the pre-update state to calculate prediction and update conditions.
2. Perform threshold adaptation.
3. Perform eligible counter training.
4. Perform eligible history-length adaptation.
5. Update path history.
6. Update global history using `event_taken`.

For a nonconditional event:

1. Do not train prediction counters.
2. Do not update threshold or aliasing adaptation state.
3. Update path history with `event_pc[0]`.
4. Shift global history and insert a taken bit.

Ignore `event_taken` for nonconditional events.

## Serialized Reference Semantics

Each rising edge with `event_valid=1` processes one branch record.

Prediction is observed before that rising edge, using the state
resulting from all previously processed events.

The implementation must support consecutive valid events without
requiring idle cycles.

No additional prediction/update pipeline latency or handshake is
permitted in this initial version.

## Verification Requirements

The testbench must:

- Apply one branch record at a time.
- Observe the combinational prediction before the updating clock edge.
- Compare conditional predictions against the original C++ reference.
- Advance the predictor state with the actual branch outcome.
- Include nonconditional events in the event stream.
- Test consecutive events and idle cycles.
- Test reset and complete state initialization.
- Detect any prediction dependence on `event_taken`.

Reference equivalence must be established using the original CBP-1
branch-event order.

## Implementation Constraints

- Synthesizable SystemVerilog.
- No vendor-specific primitives.
- No testbench-only constructs inside the DUT.
- Fixed CBP-1 O-GEHL configuration.
- Correct signed arithmetic and saturation.
- Logical table storage matching the original design.
- No silent algorithmic changes or optimizations.
- Initialization may use synthesizable reset logic.
- No dependence on Wally-specific modules.

## Scope

This module is the initial reference-equivalent O-GEHL implementation.

It is not yet a pipelined Wally branch predictor.

Speculative history, recovery, stalls, flushes, and hardware timing
optimization will be addressed separately after reference validation.
