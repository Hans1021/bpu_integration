# GShare Direction Predictor Specification

## Purpose

Implement a synthesizable SystemVerilog GShare conditional branch direction predictor for a 5-stage RISC-V processor.

The processor stages are:

- Fetch
- Decode
- Execute
- Memory
- Writeback

The generated predictor will first be tested independently and may later be integrated into CORE-V-Wally.

The implementation must not depend on or reproduce an existing CORE-V-Wally GShare RTL implementation.

## Parameters

The module shall support:

- `XLEN`: processor address width, default 32
- `K`: predictor/history width, default 10

The pattern history table contains `2^K` entries.

Each PHT entry is a 2-bit saturating counter.

## PHT Counter States

The counter states are:

- `00`: strongly not taken
- `01`: weakly not taken
- `10`: weakly taken
- `11`: strongly taken

The most significant bit of the counter is the taken/not-taken prediction.

For a resolved conditional branch:

- If the branch is taken, increment the counter and saturate at `11`.
- If the branch is not taken, decrement the counter and saturate at `00`.

## Prediction Index

Prediction occurs in the Fetch stage.

For a K-bit predictor index, form the PC hash as:

`{PC[K+1] XOR PC[1], PC[K:2]}`

The PHT index is:

`global_history XOR hashed_PC`

This PC hashing scheme must support both 16-bit and 32-bit aligned RISC-V instructions.

## External Interface

The generated module shall be named `gshare_llm`.

It shall use:

`parameter int XLEN = 32`

`parameter int K = 10`

Inputs:

- `input logic clk`
- `input logic reset`

- `input logic StallF`
- `input logic StallD`
- `input logic StallE`
- `input logic StallM`
- `input logic StallW`

- `input logic FlushD`
- `input logic FlushE`
- `input logic FlushM`
- `input logic FlushW`

- `input logic [XLEN-1:0] PCNextF`
- `input logic [XLEN-1:0] PCF`
- `input logic [XLEN-1:0] PCD`
- `input logic [XLEN-1:0] PCE`
- `input logic [XLEN-1:0] PCM`

- `input logic BPBranchF`
- `input logic BranchD`
- `input logic BranchE`
- `input logic BranchM`
- `input logic BranchW`

- `input logic PCSrcE`

Outputs:

- `output logic [1:0] BPDirF`
- `output logic BPDirWrongE`

`PCSrcE` is the actual taken/not-taken result of the conditional branch resolved in the Execute stage.

`BPDirF` is the 2-bit PHT state associated with the Fetch-stage prediction.

`BPDirWrongE` shall assert when a valid conditional branch in Execute has a predicted direction different from `PCSrcE`.

## Prediction State Pipeline

The PHT index used to make a prediction must remain associated with that branch as it progresses through the processor pipeline.

The corresponding prediction state must also be carried through the pipeline as necessary.

When the branch resolves, the PHT entry that was originally used to make that prediction must be trained.

The update index must not be recomputed using the current global-history state.

## Global History

The predictor shall use speculative global history.

When a conditional branch is predicted in Fetch, its predicted direction shall be incorporated into speculative global history.

When the actual branch outcome becomes available in Execute, speculative history shall be repaired if the prediction was incorrect.

Committed global-history state shall advance only for real, non-flushed conditional branches.

A branch that is later flushed must not permanently affect committed history.

## Pipeline Stalls

Stalls shall preserve the appropriate predictor and branch state.

A stalled pipeline stage must not cause the same branch to be inserted into history, advanced through predictor state, or trained multiple times.

The behavior of predictor pipeline state must remain synchronized with the processor pipeline.

## Pipeline Flushes

Flushes shall invalidate speculative predictor state associated with instructions that are discarded.

A flushed branch must not update the PHT or committed global history.

Speculative global history must remain consistent with the surviving processor state after recovery.

## PHT Update

The PHT shall be updated using the actual branch direction after the branch resolves.

Only a valid conditional branch shall train the PHT.

The predictor must avoid performing duplicate updates when pipeline stages stall.

## PHT Read-After-Write Hazards

A Fetch-stage prediction may access a PHT entry that is simultaneously being updated by an older in-flight branch.

The predictor must avoid using a stale counter value in this situation.

Forward the newest applicable counter value when necessary.

The implementation must correctly handle relevant PHT hazards created by pipelined prediction and update activity.

## Reset Behavior

On reset:

- Global-history state shall be initialized to a deterministic value.
- Pipeline-valid or speculative predictor state shall be cleared.
- Every PHT entry shall be initialized to a deterministic weak prediction state.

The implementation may choose either weakly taken or weakly not taken for PHT initialization, but the choice must be documented in the assumptions.

## Implementation Requirements

The generated design must:

- Be synthesizable SystemVerilog.
- Use no vendor-specific primitives.
- Contain no testbench.
- Not instantiate CORE-V-Wally-specific modules.
- Implement the required PHT, history state, pipeline state, hazard forwarding, stall handling, and flush handling internally.
- Avoid non-synthesizable constructs.
- Avoid relying on simulator-specific initialization for architectural state.
- Preserve the behavior described in this specification even when doing so requires additional state or control logic.

## Generation Constraint

Do not use, copy, translate, or assume access to the existing CORE-V-Wally GShare RTL implementation.

The implementation should be derived only from this specification.]
