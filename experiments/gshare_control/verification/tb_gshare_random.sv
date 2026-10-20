`timescale 1ns/1ps

module tb_gshare_random;

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

    string vector_file;
    integer fd;
    integer rc;
    integer test_count;

    logic [XLEN-1:0] vec_pc;
    integer vec_actual;
    logic [1:0] vec_before;
    integer vec_wrong;
    logic [1:0] vec_after;
    logic [K-1:0] vec_index;
    logic [K-1:0] vec_history;

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

    task automatic run_vector;
        begin
            // -----------------------------
            // Fetch
            // -----------------------------
            @(negedge clk);

            PCF = vec_pc;
            BPBranchF = 1;

            #1;

            if (dut.indexF !== vec_index)
                $fatal(1,
                    "Test %0d index mismatch: expected %0h got %0h",
                    test_count,
                    vec_index,
                    dut.indexF);

            if (BPDirF !== vec_before)
                $fatal(1,
                    "Test %0d prediction state mismatch: expected %b got %b",
                    test_count,
                    vec_before,
                    BPDirF);

            @(posedge clk);
            #1;

            // -----------------------------
            // Decode
            // -----------------------------
            @(negedge clk);

            BPBranchF = 0;
            BranchD = 1;

            @(posedge clk);
            #1;

            // -----------------------------
            // Execute / resolution
            // -----------------------------
            @(negedge clk);

            BranchD = 0;
            BranchE = 1;
            PCSrcE = (vec_actual != 0);

            #1;

            if (BPDirWrongE !== (vec_wrong != 0))
                $fatal(1,
                    "Test %0d mispredict mismatch: expected %0d got %0d",
                    test_count,
                    vec_wrong,
                    BPDirWrongE);

            @(posedge clk);
            #1;

            if (dut.pht[vec_index] !== vec_after)
                $fatal(1,
                    "Test %0d PHT mismatch: index=%0h expected=%b got=%b",
                    test_count,
                    vec_index,
                    vec_after,
                    dut.pht[vec_index]);

            if (dut.committed_history !== vec_history)
                $fatal(1,
                    "Test %0d history mismatch: expected=%b got=%b",
                    test_count,
                    vec_history,
                    dut.committed_history);

            if (dut.speculative_history !== vec_history)
                $fatal(1,
                    "Test %0d speculative history mismatch: expected=%b got=%b",
                    test_count,
                    vec_history,
                    dut.speculative_history);

            @(negedge clk);

            BranchE = 0;
            PCSrcE = 0;
        end
    endtask

    initial begin
        clk = 0;
        reset = 0;
        test_count = 0;

        clear_inputs();

        if (!$value$plusargs("VECTORS=%s", vector_file))
            $fatal(1, "Missing +VECTORS=<file>");

        fd = $fopen(vector_file, "r");

        if (fd == 0)
            $fatal(1, "Could not open vector file: %s", vector_file);

        // Reset DUT.
        reset = 1;
        repeat (2) @(posedge clk);

        @(negedge clk);
        reset = 0;

        @(posedge clk);
        #1;

        while (!$feof(fd)) begin

            rc = $fscanf(
                fd,
                "%h %d %h %d %h %h %h\n",
                vec_pc,
                vec_actual,
                vec_before,
                vec_wrong,
                vec_after,
                vec_index,
                vec_history
            );

            if (rc == 7) begin
                test_count = test_count + 1;
                run_vector();
            end
        end

        $fclose(fd);

        $display(
            "ALL RANDOM TESTS PASSED (%0d vectors)",
            test_count
        );

        $finish;
    end

endmodule