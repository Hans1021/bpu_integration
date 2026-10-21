
`timescale 1ns/1ps

module tb_ogehl_wally_extended;

    logic clk = 0;
    always #5 clk = ~clk;

    logic reset;
    logic StallD, StallE;
    logic FlushD, FlushE, FlushM;
    logic InstrValidD, InstrValidE;
    logic [31:0] PCF, PCD, PCE;
    logic BPBranchF, BPJumpF;
    logic BranchD, JumpD, CallD, ReturnD;
    logic BranchE, JumpE, CallE, ReturnE;
    logic PCSrcE;
    wire [1:0] BPDirF;
    wire BPDirWrongE;

    ogehl_wally #(.XLEN(32)) dut (.*);

    int checks = 0;

    task automatic tick;
        @(posedge clk);
        #1;
    endtask

    task automatic check(input bit condition, input string description);
        checks++;
        if (!condition)
            $fatal(1, "FAIL: %s", description);
        $display("PASS: %s", description);
    endtask

    task automatic clear_inputs;
        reset = 0;
        StallD = 0;
        StallE = 0;
        FlushD = 0;
        FlushE = 0;
        FlushM = 0;
        InstrValidD = 0;
        InstrValidE = 0;
        PCF = 0;
        PCD = 0;
        PCE = 0;
        BPBranchF = 0;
        BPJumpF = 0;
        BranchD = 0;
        JumpD = 0;
        CallD = 0;
        ReturnD = 0;
        BranchE = 0;
        JumpE = 0;
        CallE = 0;
        ReturnE = 0;
        PCSrcE = 0;
    endtask

    task automatic initialize;
        clear_inputs();
        reset = 1;
        tick();
        @(negedge clk);
        reset = 0;
    endtask

    // Check the exact committed history after a sequence of
    // architectural control-flow events.
    task automatic check_history(
        input logic [199:0] expected,
        input string description
    );
        check(dut.committed_global_history === expected, description);
    endtask

    initial begin

        // =========================================================
        // TEST 1: Two consecutive conditional branches
        // =========================================================

        initialize();

        // Branch A enters Decode.
        PCF = 32'h80000100;
        BPBranchF = 1;
        tick();

        check(dut.meta_validD,
              "A: Fetch metadata reaches Decode");

        // A moves D->E; B moves F->D.
        @(negedge clk);
        PCF = 32'h80000104;
        PCD = 32'h80000100;
        BranchD = 1;
        InstrValidD = 1;
        tick();

        check(dut.meta_validE,
              "A: metadata reaches Execute");
        check(dut.meta_validD,
              "B: metadata reaches Decode");

        // A resolves taken. B transfers to Execute.
        @(negedge clk);
        PCE = 32'h80000100;
        PCD = 32'h80000104;
        BranchE = 1;
        PCSrcE = 1;
        BranchD = 1;
        InstrValidE = 1;
        InstrValidD = 1;
        tick();

        check_history(200'd1,
                      "A: taken outcome committed");

        // B resolves not taken.
        @(negedge clk);
        PCE = 32'h80000104;
        PCSrcE = 0;
        BranchD = 0;
        InstrValidD = 0;
        tick();

        check_history(200'd2,
                      "B: not-taken outcome committed after A");

        // =========================================================
        // TEST 2: Unconditional jump without counter training
        // =========================================================

        initialize();

        PCF = 32'h80000200;
        BPBranchF = 0;
        BPJumpF = 1;
        tick();

        @(negedge clk);
        PCD = 32'h80000200;
        JumpD = 1;
        InstrValidD = 1;
        tick();

        @(negedge clk);
        PCE = 32'h80000200;
        JumpD = 0;
        InstrValidD = 0;
        JumpE = 1;
        InstrValidE = 1;
        PCSrcE = 1;
        tick();

        check_history(200'd1,
                      "Unconditional jump commits taken history");

        check(dut.TC === 0,
              "Unconditional jump does not alter threshold counter");
        check(dut.thresupdate === 8,
              "Unconditional jump does not alter threshold");

        // =========================================================
        // TEST 3: Simultaneous Decode stall and flush
        // =========================================================

        initialize();

        PCF = 32'h80000300;
        tick();

        check(dut.meta_validD,
              "Decode metadata initially valid");

        @(negedge clk);
        StallD = 1;
        FlushD = 1;
        PCF = 32'h80000304;
        tick();

        check(dut.meta_validD,
              "Stalled Decode metadata holds despite FlushD");

        @(negedge clk);
        StallD = 0;
        FlushD = 1;
        tick();

        check(!dut.meta_validD,
              "Enabled Decode flush clears metadata");

        // =========================================================
        // TEST 4: Execute held, then released
        // =========================================================

        initialize();

        PCF = 32'h80000400;
        tick();

        @(negedge clk);
        PCD = 32'h80000400;
        BranchD = 1;
        InstrValidD = 1;
        tick();

        @(negedge clk);
        BranchD = 0;
        InstrValidD = 0;
        BranchE = 1;
        InstrValidE = 1;
        PCE = 32'h80000400;
        PCSrcE = 1;
        StallE = 1;
        StallD = 1;
        FlushE = 1;

        repeat (3) tick();

        check(dut.TC === 0,
              "Execute branch not trained during stall");
        check_history(200'd0,
                      "Execute branch not committed during stall");

        @(negedge clk);
        StallE = 0;
        StallD = 0;
        FlushE = 0;
        tick();

        check(dut.TC === -1,
              "Execute branch trains once after release");
        check_history(200'd1,
                      "Execute branch commits once after release");

        // =========================================================
        // TEST 5: Older Memory flush suppresses Execute training
        // =========================================================

        initialize();

        PCF = 32'h80000500;
        tick();

        @(negedge clk);
        PCD = 32'h80000500;
        BranchD = 1;
        InstrValidD = 1;
        tick();

        @(negedge clk);
        BranchD = 0;
        InstrValidD = 0;
        BranchE = 1;
        InstrValidE = 1;
        PCE = 32'h80000500;
        PCSrcE = 1;
        FlushD = 1;
        FlushE = 1;
        FlushM = 1;
        tick();

        check_history(200'd0,
                      "Older Memory flush suppresses committed history");
        check(dut.TC === 0,
              "Older Memory flush suppresses threshold update");
        check(!dut.meta_validE,
              "Execute metadata invalidated by flush");

        // =========================================================
        // TEST 6: Wrong-path Decode branch must not commit
        // =========================================================

        initialize();

        PCF = 32'h80000600;
        tick();

        @(negedge clk);
        PCD = 32'h80000600;
        BranchD = 1;
        InstrValidD = 1;
        tick();

        // Older branch in Execute resolves taken.
        // Younger Decode branch must be squashed.
        @(negedge clk);
        PCE = 32'h80000600;
        PCD = 32'h80000604;
        BranchE = 1;
        InstrValidE = 1;
        PCSrcE = 1;
        BranchD = 1;
        InstrValidD = 1;
        FlushD = 1;
        FlushE = 1;

        tick();

        check_history(200'd1,
                      "Older Execute branch commits during redirect");
        check(!dut.meta_validD,
              "Younger Decode metadata flushed");
        check(!dut.meta_validE,
              "Execute receives bubble after redirect");

        @(negedge clk);
        BranchE = 0;
        BranchD = 0;
        InstrValidE = 0;
        InstrValidD = 0;
        FlushD = 0;
        FlushE = 0;
        tick();

        check_history(200'd1,
                      "Squashed younger branch never commits");

        $display("PASS: %0d extended checks completed", checks);
        $finish;
    end

endmodule
