
`timescale 1ns/1ps

module tb_ogehl_wally;

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

    initial begin
        clear_inputs();
        reset = 1;
        tick();
        reset = 0;

        check(dut.committed_global_history == '0,
              "Reset clears committed history");
        check(dut.thresupdate == 8,
              "Reset initializes O-GEHL threshold");

        // Test 1: One valid conditional branch moving F -> D -> E.
        PCF = 32'h80000100;
        BPBranchF = 1;
        tick();

        check(dut.meta_validD,
              "Fetch metadata captured in Decode");

        BPBranchF = 0;
        PCD = 32'h80000100;
        BranchD = 1;
        InstrValidD = 1;
        tick();

        check(dut.meta_validE,
              "Decode metadata captured in Execute");

        BranchD = 0;
        InstrValidD = 0;
        BranchE = 1;
        InstrValidE = 1;
        PCE = 32'h80000100;
        PCSrcE = 1;

        tick();

        check(dut.committed_global_history[0] == 1,
              "Resolved taken branch updates global history");
        check(dut.TC == -1,
              "Taken branch updates threshold counter once");

        // Test 2: A held Execute branch must not train repeatedly.
        clear_inputs();
        reset = 1;
        tick();
        reset = 0;

        PCF = 32'h80000200;
        tick();

        PCD = 32'h80000200;
        InstrValidD = 1;
        BranchD = 1;
        tick();

        InstrValidD = 0;
        BranchD = 0;
        InstrValidE = 1;
        BranchE = 1;
        PCE = 32'h80000200;
        PCSrcE = 1;
        StallE = 1;
        StallD = 1;

        repeat (3) tick();

        check(dut.TC == 0,
              "Stalled Execute branch does not train");
        check(dut.committed_global_history == '0,
              "Stalled Execute branch does not commit history");

        StallE = 0;
        StallD = 0;
        tick();

        check(dut.TC == -1,
              "Released Execute branch trains once");
        check(dut.committed_global_history[0] == 1,
              "Released Execute branch commits once");

        // Test 3: Older Memory flush kills a younger Execute branch.
        clear_inputs();
        reset = 1;
        tick();
        reset = 0;

        PCF = 32'h80000300;
        tick();

        PCD = 32'h80000300;
        InstrValidD = 1;
        BranchD = 1;
        tick();

        InstrValidD = 0;
        BranchD = 0;
        InstrValidE = 1;
        BranchE = 1;
        PCE = 32'h80000300;
        PCSrcE = 1;
        FlushM = 1;
        FlushE = 1;
        FlushD = 1;

        tick();

        check(dut.TC == 0,
              "Older Memory flush prevents training");
        check(dut.committed_global_history == '0,
              "Older Memory flush prevents history commit");

        $display("PASS: %0d checks completed", checks);
        $finish;
    end

endmodule
