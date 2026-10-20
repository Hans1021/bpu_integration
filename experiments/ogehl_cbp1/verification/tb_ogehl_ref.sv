
`timescale 1ns/1ps

module tb_ogehl_ref;

    logic clk;
    logic reset;
    logic event_valid;
    logic [31:0] event_pc;
    logic event_is_conditional;
    logic event_taken;

    logic prediction_valid;
    logic prediction_taken;

    ogehl_ref dut (
        .clk,
        .reset,
        .event_valid,
        .event_pc,
        .event_is_conditional,
        .event_taken,
        .prediction_valid,
        .prediction_taken
    );

    integer fd;
    integer rc;
    integer count;
    integer conditional_count;
    integer actual_conditional;
    integer actual_taken;
    integer expected_prediction;

    logic [31:0] pc;
    logic observed_prediction;
    string vector_file;

    initial begin
        clk = 0;
        reset = 1;
        event_valid = 0;
        event_pc = 0;
        event_is_conditional = 0;
        event_taken = 0;

        count = 0;
        conditional_count = 0;

        if (!$value$plusargs("VECTORS=%s", vector_file))
            $fatal(1, "Missing +VECTORS=<path>");

        fd = $fopen(vector_file, "r");

        if (fd == 0)
            $fatal(1, "Cannot open %s", vector_file);

        // Synchronous reset
        #2;
        clk = 1;
        #2;
        clk = 0;
        reset = 0;

        // Replay the C++ reference events sequentially.
        while (1) begin
            rc = $fscanf(
                fd, "%h %d %d %d",
                pc,
                actual_conditional,
                actual_taken,
                expected_prediction
            );

            if (rc == -1)
                break;

            if (rc != 4)
                $fatal(1, "Malformed vector at event %0d", count);

            event_pc = pc;
            event_is_conditional = (actual_conditional != 0);
            event_taken = (actual_taken != 0);
            event_valid = 1;

            // Observe combinational prediction before update.
            #1;

            if (prediction_valid !== event_is_conditional)
                $fatal(1,
                    "VALID MISMATCH event=%0d pc=%08h",
                    count, pc
                );

            if (event_is_conditional) begin
                conditional_count++;

                if (prediction_taken !== (expected_prediction != 0))
                    $fatal(1,
                        "PREDICTION MISMATCH event=%0d pc=%08h expected=%0d got=%0d sum=%0d",
                        count, pc, expected_prediction,
                        prediction_taken, dut.prediction_sum
                    );

                // Prediction must not depend on resolved outcome.
                observed_prediction = prediction_taken;
                event_taken = ~event_taken;
                #1;

                if (prediction_taken !== observed_prediction)
                    $fatal(1,
                        "OUTCOME DEPENDENCE event=%0d pc=%08h",
                        count, pc
                    );

                event_taken = (actual_taken != 0);
                #1;
            end

            // Commit this event to predictor state.
            clk = 1;
            #1;
            clk = 0;
            #1;

            count++;
        end

        event_valid = 0;
        $fclose(fd);

        if (count == 0)
            $fatal(1, "No events processed");

        $display("======================================");
        $display("O-GEHL differential test PASSED");
        $display("Events:               %0d", count);
        $display("Conditional branches: %0d", conditional_count);
        $display("Prediction mismatches: 0");
        $display("======================================");

        $finish;
    end

endmodule
