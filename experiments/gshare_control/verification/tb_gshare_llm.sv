`timescale 1ns/1ps

module tb_gshare_llm;

    localparam int XLEN = 32;
    localparam int K    = 4;

    logic clk;
    logic reset;

    logic StallF, StallD, StallE, StallM, StallW;
    logic FlushD, FlushE, FlushM, FlushW;

    logic [XLEN-1:0] PCNextF;
    logic [XLEN-1:0] PCF;
    logic [XLEN-1:0] PCD;
    logic [XLEN-1:0] PCE;
    logic [XLEN-1:0] PCM;

    logic BPBranchF;
    logic BranchD, BranchE, BranchM, BranchW;
    logic PCSrcE;

    logic [1:0] BPDirF;
    logic BPDirWrongE;

    gshare_llm #(
        .XLEN(XLEN),
        .K(K)
    ) dut (
        .clk,
        .reset,

        .StallF,
        .StallD,
        .StallE,
        .StallM,
        .StallW,

        .FlushD,
        .FlushE,
        .FlushM,
        .FlushW,

        .PCNextF,
        .PCF,
        .PCD,
        .PCE,
        .PCM,

        .BPBranchF,
        .BranchD,
        .BranchE,
        .BranchM,
        .BranchW,

        .PCSrcE,

        .BPDirF,
        .BPDirWrongE
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

    task automatic run_branch(
        input logic [XLEN-1:0] pc,
        input logic actual_taken,
        input logic [1:0] expected_before,
        input logic [1:0] expected_after,
        input logic expected_wrong
    );

        logic [K-1:0] expected_index;

        begin
            expected_index = hash_pc(pc);

            // Fetch
            @(negedge clk);

            PCF       = pc;
            BPBranchF = 1;

            #1;

            if (BPDirF !== expected_before)
                $fatal(1,
                    "Prediction mismatch: expected %b got %b",
                    expected_before, BPDirF);

            @(posedge clk);
            #1;

            // Decode
            @(negedge clk);

            BPBranchF = 0;
            BranchD   = 1;

            @(posedge clk);
            #1;

            // Execute / resolve
            @(negedge clk);

            BranchD = 0;
            BranchE = 1;
            PCSrcE  = actual_taken;

            #1;

            if (BPDirWrongE !== expected_wrong)
                $fatal(1,
                    "Mispredict mismatch: expected %b got %b",
                    expected_wrong, BPDirWrongE);

            // PHT update occurs here
            @(posedge clk);
            #1;

            if (dut.pht[expected_index] !== expected_after)
                $fatal(1,
                    "PHT mismatch at index %0d: expected %b got %b",
                    expected_index,
                    expected_after,
                    dut.pht[expected_index]);

            @(negedge clk);

            BranchE = 0;
            PCSrcE  = 0;
        end
    endtask

    integer i;

    initial begin
        clk   = 0;
        reset = 0;

        clear_inputs();

        // Test 1: reset initialization
        do_reset();

        for (i = 0; i < (1 << K); i = i + 1) begin
            if (dut.pht[i] !== 2'b01)
                $fatal(1,
                    "Reset PHT mismatch at index %0d: got %b",
                    i, dut.pht[i]);
        end

        $display("PASS: reset initializes PHT to weakly not taken");

        // Test 2: weak NT -> strong NT
        do_reset();

        run_branch(
            32'h00000100,
            1'b0,
            2'b01,
            2'b00,
            1'b0
        );

        $display("PASS: not-taken counter update");

        // Test 3: weak NT -> weak taken
        do_reset();

        run_branch(
            32'h00000100,
            1'b1,
            2'b01,
            2'b10,
            1'b1
        );

        $display("PASS: taken counter update and misprediction");

        // Test 4: saturate at strongly NT
        do_reset();

        run_branch(
            32'h00000100,
            1'b0,
            2'b01,
            2'b00,
            1'b0
        );

        run_branch(
            32'h00000100,
            1'b0,
            2'b00,
            2'b00,
            1'b0
        );

        $display("PASS: counter saturation");

        $display("ALL BASIC DIRECTED TESTS PASSED");

        $finish;
    end

endmodule