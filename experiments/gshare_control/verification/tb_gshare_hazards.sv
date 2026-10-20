`timescale 1ns/1ps

module tb_gshare_hazards;

    localparam int XLEN = 32;
    localparam int K    = 4;

    logic clk, reset;

    logic StallF, StallD, StallE, StallM, StallW;
    logic FlushD, FlushE, FlushM, FlushW;

    logic [XLEN-1:0] PCNextF, PCF, PCD, PCE, PCM;

    logic BPBranchF;
    logic BranchD, BranchE, BranchM, BranchW;
    logic PCSrcE;

    logic [1:0] BPDirF;
    logic BPDirWrongE;

    gshare_llm #(
        .XLEN(XLEN),
        .K(K)
    ) dut (
        .*
    );

    always #5 clk = ~clk;

    task automatic clear_inputs;
        begin
            StallF = 0;
            StallD = 0;
            StallE = 0;
            StallM = 0;
            StallW = 0;

            FlushD = 0;
            FlushE = 0;
            FlushM = 0;
            FlushW = 0;

            PCNextF = 0;
            PCF = 0;
            PCD = 0;
            PCE = 0;
            PCM = 0;

            BPBranchF = 0;
            BranchD = 0;
            BranchE = 0;
            BranchM = 0;
            BranchW = 0;

            PCSrcE = 0;
        end
    endtask

    task automatic do_reset;
        begin
            clear_inputs();

            reset = 1;
            repeat (2) @(posedge clk);

            @(negedge clk);
            reset = 0;

            @(posedge clk);
            #1;
        end
    endtask

    task automatic load_branch_to_execute;
        begin
            // PC 0x100 hashes to index 0 when history is zero.

            @(negedge clk);
            PCF = 32'h00000100;
            BPBranchF = 1;

            @(posedge clk);
            #1;

            @(negedge clk);
            BPBranchF = 0;
            BranchD = 1;

            @(posedge clk);
            #1;

            @(negedge clk);
            BranchD = 0;
            BranchE = 1;
        end
    endtask

    initial begin
        clk = 0;
        reset = 0;

        clear_inputs();

        // ---------------------------------------------------------
        // Test 1: same-cycle PHT update -> Fetch forwarding
        // ---------------------------------------------------------

        do_reset();
        load_branch_to_execute();

        PCSrcE = 1;

        // Fetch reads the same index being updated in Execute.
        PCF = 32'h00000100;

        #1;

        // PHT contains 01, but taken update produces 10.
        // Fetch should see the forwarded 10 immediately.
        if (BPDirF !== 2'b10)
            $fatal(1,
                "RAW forwarding failed: expected 10 got %b",
                BPDirF);

        $display("PASS: same-cycle PHT forwarding");

        @(posedge clk);
        #1;

        if (dut.pht[0] !== 2'b10)
            $fatal(1,
                "PHT update failed: expected 10 got %b",
                dut.pht[0]);

        // ---------------------------------------------------------
        // Test 2: stalled Execute branch must train only once
        // ---------------------------------------------------------

        do_reset();
        load_branch_to_execute();

        PCSrcE = 1;
        StallE = 1;

        // First resolution while Execute is stalled.
        @(posedge clk);
        #1;

        if (dut.pht[0] !== 2'b10)
            $fatal(1,
                "First stalled update failed: expected 10 got %b",
                dut.pht[0]);

        // Keep the same resolved branch held in Execute.
        // A duplicate update would incorrectly change 10 -> 11.
        @(posedge clk);
        #1;

        if (dut.pht[0] !== 2'b10)
            $fatal(1,
                "Duplicate update during StallE: expected 10 got %b",
                dut.pht[0]);

        $display("PASS: Execute stall does not duplicate PHT training");

        $display("ALL HAZARD TESTS PASSED");

        $finish;
    end

endmodule