
 // CBP-1 O-GEHL: serialized, trace-driven reference implementation.
 // No speculative history or prediction/update pipeline is present.
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

     // Logical predictor tables: 10,240 + 5,120 + 49,152 = 64,512
     // counter bits; plus 1,024 MINITAG bits = 65,536 bits.
     logic signed [4:0] T0 [0:2047];
     logic signed [4:0] T1 [0:1023];
     logic signed [3:0] T2 [0:2047];
     logic signed [3:0] T3 [0:2047];
     logic signed [3:0] T4 [0:2047];
     logic signed [3:0] T5 [0:2047];
     logic signed [3:0] T6 [0:2047];
     logic signed [3:0] T7 [0:2047];
     logic              MINITAG [0:1023];

     // Newest history event/path bit is bit zero.
     logic [199:0] global_history;
     logic [15:0]  path_history;

     // State ranges: TC = [-64,63], AC = [-256,255].
     logic signed [7:0] TC;
     logic signed [8:0] AC;
     logic [4:0]        thresupdate;
     logic [7:0]        UsedHistLength [0:7];

     // The combinational index is 11 bits except for T1 (10 bits).
     // For T1, bit 10 of the result is always zero.
     function automatic logic [10:0] ogehl_index (
         input logic [31:0]  pc,
         input logic [199:0] gh,
         input logic [15:0]  ph,
         input integer      table_number,
         input integer      m
     );
         integer w;
         integer n;
         integer p;
         integer min_add;
         integer funct;
         integer j;
         integer source_pos;
         integer rotation;
         integer chunk_number;
         logic         selected_bit;
         logic [32:0]  inter;
         logic [32:0]  remaining;
         logic [10:0]  chunk;
         logic [10:0]  rotated;
         logic [10:0]  result;
         begin
             w = (table_number == 1) ? 10 : 11;
             n = 3 * w;
             p = (m < 16) ? m : 16;
             min_add = n - m - p;
             if (min_add > 20)
                 min_add = 20;
             funct = (table_number & 3) + 1;
             inter = '0;
             source_pos = 0;
             selected_bit = 1'b0;

             if (min_add >= 8) begin
                 // Case A: [GHR(m), PC(min_add), PHR(p)] from MSB
                 // to LSB, with leading zeros to the n-bit width.
                 // Fixed loop bound is intentional for synthesis.
                 for (j = 0; j < 33; j = j + 1) begin
                     if (j < n) begin
                         if (j < p)
                             inter[j] = ph[j];
                         else if (j < p + min_add)
                             inter[j] = pc[j - p];
                         else if (j < p + min_add + m)
                             inter[j] = gh[j - p - min_add];
                     end
                 end
             end else begin
                 // Case B: distributed selection from source positions
                 // [0,m-1]=GHR, [m,m+7]=PC, then PHR.
                 // First selected source bit becomes the MSB of the
                 // n-bit sequence; each next bit is appended at LSB.
                 for (j = 0; j < 33; j = j + 1) begin
                     if (j < n) begin
                         source_pos = (j * (8 + m + p - 1)) / (n - 1);
                         selected_bit = 1'b0;
                         if (source_pos < m)
                             selected_bit = gh[source_pos];
                         else if (source_pos < m + 8)
                             selected_bit = pc[source_pos - m];
                         else
                             selected_bit = ph[source_pos - m - 8];
                         inter = {inter[31:0], selected_bit};
                     end
                 end
             end

             // Three w-bit chunks. The two upper chunks are rotated
             // right by funct and funct+1 before XOR folding.
             remaining = inter;
             result = remaining[10:0];
             if (w == 10)
                 result[10] = 1'b0;
             rotation = funct;
             for (chunk_number = 0; chunk_number < 2;
                  chunk_number = chunk_number + 1) begin
                 remaining = remaining >> w;
                 chunk = remaining[10:0];
                 if (w == 10)
                     chunk[10] = 1'b0;
                 rotated = (chunk >> rotation) |
                           (chunk << (w - rotation));
                 if (w == 10)
                     rotated[10] = 1'b0;
                 result = result ^ rotated;
                 rotation = (rotation + 1) % w;
             end
             ogehl_index = result;
         end
     endfunction

     // Exact sign extension from logical counter width to accumulator width.
     function automatic logic signed [15:0] extend5 (
         input logic signed [4:0] counter_value
     );
         extend5 = {{11{counter_value[4]}}, counter_value};
     endfunction

     function automatic logic signed [15:0] extend4 (
         input logic signed [3:0] counter_value
     );
         extend4 = {{12{counter_value[3]}}, counter_value};
     endfunction

     logic [10:0] indices [0:7];
     logic signed [15:0] prediction_sum;

     // Pure pre-update prediction, independent of event_taken.
     always_comb begin : prediction_logic
         for (int k = 0; k < 8; k = k + 1)
             indices[k] = '0;
         prediction_sum = 16'sd4;
         prediction_valid = event_valid && event_is_conditional;
         prediction_taken = 1'b0;

         if (prediction_valid) begin
             indices[0] = ogehl_index(event_pc, global_history,
                                      path_history, 0, int'(UsedHistLength[0]));
             indices[1] = ogehl_index(event_pc, global_history,
                                      path_history, 1, int'(UsedHistLength[1]));
             indices[2] = ogehl_index(event_pc, global_history,
                                      path_history, 2, int'(UsedHistLength[2]));
             indices[3] = ogehl_index(event_pc, global_history,
                                      path_history, 3, int'(UsedHistLength[3]));
             indices[4] = ogehl_index(event_pc, global_history,
                                      path_history, 4, int'(UsedHistLength[4]));
             indices[5] = ogehl_index(event_pc, global_history,
                                      path_history, 5, int'(UsedHistLength[5]));
             indices[6] = ogehl_index(event_pc, global_history,
                                      path_history, 6, int'(UsedHistLength[6]));
             indices[7] = ogehl_index(event_pc, global_history,
                                      path_history, 7, int'(UsedHistLength[7]));

             prediction_sum = prediction_sum + extend5(T0[indices[0]]);
             prediction_sum = prediction_sum + extend5(T1[indices[1][9:0]]);
             prediction_sum = prediction_sum + extend4(T2[indices[2]]);
             prediction_sum = prediction_sum + extend4(T3[indices[3]]);
             prediction_sum = prediction_sum + extend4(T4[indices[4]]);
             prediction_sum = prediction_sum + extend4(T5[indices[5]]);
             prediction_sum = prediction_sum + extend4(T6[indices[6]]);
             prediction_sum = prediction_sum + extend4(T7[indices[7]]);
             prediction_taken = (prediction_sum >= 16'sd0);
         end
     end

     always_ff @(posedge clk) begin : predictor_state_update
         integer signed tc_next;
         integer signed ac_next;
         integer signed theta_next;
         logic          mispredict;
         logic          low_confidence_before;
         logic          do_train;

         if (reset) begin
             for (int i = 0; i < 2048; i = i + 1) begin
                 T0[i] <= '0;
                 if (i < 1024)
                     T1[i] <= '0;
                 T2[i] <= '0;
                 T3[i] <= '0;
                 T4[i] <= '0;
                 T5[i] <= '0;
                 T6[i] <= '0;
                 T7[i] <= '0;
                 if (i < 1024)
                     MINITAG[i] <= 1'b0;
             end
             global_history <= '0;
             path_history   <= '0;
             TC             <= 8'sd0;
             AC             <= 9'sd0;
             thresupdate    <= 5'd8;
             UsedHistLength[0] <= 8'd0;
             UsedHistLength[1] <= 8'd3;
             UsedHistLength[2] <= 8'd5;
             UsedHistLength[3] <= 8'd8;
             UsedHistLength[4] <= 8'd12;
             UsedHistLength[5] <= 8'd19;
             UsedHistLength[6] <= 8'd31;
             UsedHistLength[7] <= 8'd49;
         end else if (event_valid) begin
             if (event_is_conditional) begin
                 // All inputs for the current event (sum/indices/counters)
                 // were computed from state *before* this rising edge.
                 tc_next = int'($signed(TC));
                 theta_next = int'(thresupdate);
                 mispredict = (prediction_taken != event_taken);
                 low_confidence_before =
                     ((int'($signed(prediction_sum)) >= -theta_next) &&
                      (int'($signed(prediction_sum)) <   theta_next));

                 // Reference C++ fitting order: increment/decrement first,
                 // then react only to strict overflow (>63 or <-64).
                 // Use integer intermediates so 64 and -65 are representable.
                 if (mispredict) begin
                     tc_next = tc_next + 1;
                     if (tc_next > 63) begin
                         tc_next = 63;
                         if (theta_next < 31) begin
                             tc_next = 0;
                             theta_next = theta_next + 1;
                         end
                     end
                 end else if (low_confidence_before) begin
                     tc_next = tc_next - 1;
                     if (tc_next < -64) begin
                         tc_next = -64;
                         if (theta_next > 0) begin
                             theta_next = theta_next - 1;
                             tc_next = 0;
                         end
                     end
                 end
                 TC <= tc_next[7:0];
                 thresupdate <= theta_next[4:0];

                 // The new threshold can change eligibility this cycle.
                 do_train = mispredict ||
                     ((int'($signed(prediction_sum)) >= -theta_next) &&
                      (int'($signed(prediction_sum)) <   theta_next));

                 if (do_train) begin
                     if (event_taken) begin
                         if (T0[indices[0]] != 5'sd15)
                             T0[indices[0]] <= T0[indices[0]] + 5'sd1;
                         if (T1[indices[1][9:0]] != 5'sd15)
                             T1[indices[1][9:0]] <= T1[indices[1][9:0]] + 5'sd1;
                         if (T2[indices[2]] != 4'sd7)
                             T2[indices[2]] <= T2[indices[2]] + 4'sd1;
                         if (T3[indices[3]] != 4'sd7)
                             T3[indices[3]] <= T3[indices[3]] + 4'sd1;
                         if (T4[indices[4]] != 4'sd7)
                             T4[indices[4]] <= T4[indices[4]] + 4'sd1;
                         if (T5[indices[5]] != 4'sd7)
                             T5[indices[5]] <= T5[indices[5]] + 4'sd1;
                         if (T6[indices[6]] != 4'sd7)
                             T6[indices[6]] <= T6[indices[6]] + 4'sd1;
                         if (T7[indices[7]] != 4'sd7)
                             T7[indices[7]] <= T7[indices[7]] + 4'sd1;
                     end else begin
                         if (T0[indices[0]] != 5'sb10000)
                             T0[indices[0]] <= T0[indices[0]] - 5'sd1;
                         if (T1[indices[1][9:0]] != 5'sb10000)
                             T1[indices[1][9:0]] <= T1[indices[1][9:0]] - 5'sd1;
                         if (T2[indices[2]] != 4'sb1000)
                             T2[indices[2]] <= T2[indices[2]] - 4'sd1;
                         if (T3[indices[3]] != 4'sb1000)
                             T3[indices[3]] <= T3[indices[3]] - 4'sd1;
                         if (T4[indices[4]] != 4'sb1000)
                             T4[indices[4]] <= T4[indices[4]] - 4'sd1;
                         if (T5[indices[5]] != 4'sb1000)
                             T5[indices[5]] <= T5[indices[5]] - 4'sd1;
                         if (T6[indices[6]] != 4'sb1000)
                             T6[indices[6]] <= T6[indices[6]] - 4'sd1;
                         if (T7[indices[7]] != 4'sb1000)
                             T7[indices[7]] <= T7[indices[7]] - 4'sd1;
                     end

                     // Aliasing checks use the original even T7 index.
                     // The tag is updated on any qualifying training
                     // event, but AC only changes on mispredictions.
                     if (!indices[7][0]) begin
                         if (mispredict) begin
                             ac_next = int'($signed(AC));
                             if (MINITAG[indices[7][10:1]] != event_pc[0])
                                 ac_next = ac_next - 4;
                             else
                                 ac_next = ac_next + 1;

                             // Strict overflow beyond the endpoint causes
                             // switching; merely reaching it does not.
                             if (ac_next < -256) begin
                                 AC <= 9'sh100; // Signed -256
                                 UsedHistLength[2] <= 8'd5;
                                 UsedHistLength[4] <= 8'd12;
                                 UsedHistLength[6] <= 8'd31;
                             end else if (ac_next > 255) begin
                                 AC <= 9'sd255;
                                 UsedHistLength[2] <= 8'd79;
                                 UsedHistLength[4] <= 8'd125;
                                 UsedHistLength[6] <= 8'd200;
                             end else begin
                                 AC <= ac_next[8:0];
                             end
                         end
                         MINITAG[indices[7][10:1]] <= event_pc[0];
                     end
                 end
                 // Actual resolved outcome, not the predicted direction.
                 path_history   <= {path_history[14:0], event_pc[0]};
                 global_history <= {global_history[198:0], event_taken};
             end else begin
                 // Unconditional events do not train or adapt.
                 path_history   <= {path_history[14:0], event_pc[0]};
                 global_history <= {global_history[198:0], 1'b1};
             end
         end
         // event_valid=0: retain every state element.
     end
 endmodule
