`timescale 1ns/1ps

module tb_gshare_history;

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

    function automatic logic [K-1:0] hash_pc(
        input logic [XLEN-1:0] pc
    );
        hash_pc = {
            pc[K+1] ^ pc[1],
            pc[K:2]
        };
    endfunction

    function automatic logic [K-1:0] shift_history(
        input logic [K-1:0] history,
        input logic outcome
    );
        shift_history = (history << 1);
        shift_history[0] = outcome;
    endfunction

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

    initial begin
        clk = 0;
        reset = 0;

        clear_inputs();

        // Reset
        reset = 1;
        repeat (2) @(posedge clk);

        @(negedge clk);
        reset = 0;

        @(posedge clk);
        #1;

        if (dut.committed_history !== '0)
            $fatal(1, "Committed history not zero after reset");

        if (dut.speculative_history !== '0)
            $fatal(1, "Speculative history not zero after reset");

        $display("PASS: history reset");

        // ---------------------------------------------------------
        // Test GShare index with zero history
        // ---------------------------------------------------------

        @(negedge clk);

        PCF = 32'h00000100;

        #1;

        if (dut.indexF !== hash_pc(PCF))
            $fatal(1,
                "Zero-history index mismatch: expected %0h got %0h",
                hash_pc(PCF), dut.indexF);

        $display("PASS: zero-history GShare index");

        // ---------------------------------------------------------
        // Fetch a branch initially predicted not taken
        // ---------------------------------------------------------

        BPBranchF = 1;

        #1;

        if (BPDirF[1] !== 1'b0)
            $fatal(1, "Expected initial branch prediction to be not taken");

        @(posedge clk);
        #1;

        if (dut.speculative_history !== 4'b0000)
            $fatal(1,
                "Unexpected speculative history after NT prediction: %b",
                dut.speculative_history);

        // Move branch through Decode
        @(negedge clk);

        BPBranchF = 0;
        BranchD = 1;

        @(posedge clk);
        #1;

        // Resolve branch as taken in Execute
        @(negedge clk);

        BranchD = 0;
        BranchE = 1;
        PCSrcE = 1;

        #1;

        if (BPDirWrongE !== 1'b1)
            $fatal(1, "Expected taken branch to be a misprediction");

        @(posedge clk);
        #1;

        // Actual taken outcome should repair/commit history to ...0001
        if (dut.committed_history !== 4'b0001)
            $fatal(1,
                "Committed history repair failed: got %b",
                dut.committed_history);

        if (dut.speculative_history !== 4'b0001)
            $fatal(1,
                "Speculative history repair failed: got %b",
                dut.speculative_history);

        $display("PASS: misprediction history repair");

        @(negedge clk);

        BranchE = 0;
        PCSrcE = 0;

        // ---------------------------------------------------------
        // Test GShare index using nonzero history
        // ---------------------------------------------------------

        PCF = 32'h00000120;

        #1;

        if (dut.indexF !== (hash_pc(PCF) ^ 4'b0001))
            $fatal(1,
                "Nonzero-history index mismatch: expected %0h got %0h",
                hash_pc(PCF) ^ 4'b0001,
                dut.indexF);

        $display("PASS: nonzero-history GShare index");

        // ---------------------------------------------------------
        // Speculatively accept another not-taken branch
        // ---------------------------------------------------------

        BPBranchF = 1;

        #1;

        if (BPDirF[1] !== 1'b0)
            $fatal(1, "Expected second branch to predict not taken");

        @(posedge clk);
        #1;

        // committed = 0001
        // speculative NT shift => 0010
        if (dut.committed_history !== 4'b0001)
            $fatal(1, "Committed history changed before resolution");

        if (dut.speculative_history !== 4'b0010)
            $fatal(1,
                "Speculative history insertion failed: expected 0010 got %b",
                dut.speculative_history);

        $display("PASS: speculative history insertion");

        // Verify following prediction uses speculative history
        @(negedge clk);

        BPBranchF = 0;
        PCF = 32'h00000108;

        #1;

        if (dut.indexF !== (hash_pc(PCF) ^ 4'b0010))
            $fatal(1,
                "Speculative index mismatch: expected %0h got %0h",
                hash_pc(PCF) ^ 4'b0010,
                dut.indexF);

        $display("PASS: speculative history affects GShare index");

        // ---------------------------------------------------------
        // Flush Decode branch and verify speculative recovery
        // ---------------------------------------------------------

        FlushD = 1;

        @(posedge clk);
        #1;

        if (dut.speculative_history !== dut.committed_history)
            $fatal(1,
                "Flush recovery failed: committed=%b speculative=%b",
                dut.committed_history,
                dut.speculative_history);

        if (dut.speculative_history !== 4'b0001)
            $fatal(1,
                "Expected speculative history 0001 after flush, got %b",
                dut.speculative_history);

        $display("PASS: flush restores speculative history");

        $display("ALL HISTORY TESTS PASSED");

        $finish;
    end

endmodule