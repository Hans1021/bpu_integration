// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_gshare_random.h for the primary calling header

#include "Vtb_gshare_random__pch.h"
#include "Vtb_gshare_random__Syms.h"
#include "Vtb_gshare_random___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_gshare_random___024root___eval_initial__TOP__Vtiming__0(Vtb_gshare_random___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gshare_random___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_gshare_random__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_gshare_random__DOT__fd;
    tb_gshare_random__DOT__fd = 0;
    IData/*31:0*/ tb_gshare_random__DOT__test_count;
    tb_gshare_random__DOT__test_count = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    vlSelfRef.tb_gshare_random__DOT__clk = 0U;
    tb_gshare_random__DOT__test_count = 0U;
    vlSelfRef.tb_gshare_random__DOT__StallF = 0U;
    vlSelfRef.tb_gshare_random__DOT__StallD = 0U;
    vlSelfRef.tb_gshare_random__DOT__StallE = 0U;
    vlSelfRef.tb_gshare_random__DOT__FlushD = 0U;
    vlSelfRef.tb_gshare_random__DOT__FlushE = 0U;
    vlSelfRef.tb_gshare_random__DOT__PCF = 0U;
    vlSelfRef.tb_gshare_random__DOT__BPBranchF = 0U;
    vlSelfRef.tb_gshare_random__DOT__BranchD = 0U;
    vlSelfRef.tb_gshare_random__DOT__BranchE = 0U;
    vlSelfRef.tb_gshare_random__DOT__PCSrcE = 0U;
    __Vtemp_1[0U] = 0x533d2573U;
    __Vtemp_1[1U] = 0x43544f52U;
    __Vtemp_1[2U] = 0x5645U;
    if (VL_UNLIKELY(((! VL_VALUEPLUSARGS_INN(64, VL_CVT_PACK_STR_NW(3, __Vtemp_1), 
                                             vlSelfRef.tb_gshare_random__DOT__vector_file))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_random.sv:171: Assertion failed in %Ntb_gshare_random: Missing +VECTORS=<file>\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_random.sv", 171, "", false);
    }
    tb_gshare_random__DOT__fd = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(vlSelfRef.tb_gshare_random__DOT__vector_file)
                                            , std::string{"r"});
    ;
    if (VL_UNLIKELY(((0U == tb_gshare_random__DOT__fd)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_random.sv:176: Assertion failed in %Ntb_gshare_random: Could not open vector file: %@\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(vlSelfRef.tb_gshare_random__DOT__vector_file));
        VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_random.sv", 176, "", false);
    }
    vlSelfRef.tb_gshare_random__DOT__reset = 1U;
    co_await vlSelfRef.__VtrigSched_hbfbc481f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gshare_random.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_random.sv", 
                                                         180);
    co_await vlSelfRef.__VtrigSched_hbfbc481f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gshare_random.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_random.sv", 
                                                         180);
    co_await vlSelfRef.__VtrigSched_hbfbc48de__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gshare_random.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_random.sv", 
                                                         182);
    vlSelfRef.tb_gshare_random__DOT__reset = 0U;
    co_await vlSelfRef.__VtrigSched_hbfbc481f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gshare_random.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_random.sv", 
                                                         185);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_random.sv", 
                                         186);
    while ((! (tb_gshare_random__DOT__fd ? feof(VL_CVT_I_FP(tb_gshare_random__DOT__fd)) : true))) {
        vlSelfRef.tb_gshare_random__DOT__rc = VL_FSCANF_INX(tb_gshare_random__DOT__fd,"%x %# %x %# %x %x %x\n",0,
                                                            32,
                                                            &(vlSelfRef.tb_gshare_random__DOT__vec_pc),
                                                            32,
                                                            &(vlSelfRef.tb_gshare_random__DOT__vec_actual),
                                                            2,
                                                            &(vlSelfRef.tb_gshare_random__DOT__vec_before),
                                                            32,
                                                            &(vlSelfRef.tb_gshare_random__DOT__vec_wrong),
                                                            2,
                                                            &(vlSelfRef.tb_gshare_random__DOT__vec_after),
                                                            4,
                                                            &(vlSelfRef.tb_gshare_random__DOT__vec_index),
                                                            4,
                                                            &(vlSelfRef.tb_gshare_random__DOT__vec_history)) ;
        if ((7U == vlSelfRef.tb_gshare_random__DOT__rc)) {
            tb_gshare_random__DOT__test_count = ((IData)(1U) 
                                                 + tb_gshare_random__DOT__test_count);
            co_await vlSelfRef.__VtrigSched_hbfbc48de__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_gshare_random.clk)", 
                                                                 "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_random.sv", 
                                                                 78);
            vlSelfRef.tb_gshare_random__DOT__PCF = vlSelfRef.tb_gshare_random__DOT__vec_pc;
            vlSelfRef.tb_gshare_random__DOT__BPBranchF = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                                 nullptr, 
                                                 "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_random.sv", 
                                                 83);
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_gshare_random__DOT__dut__DOT__indexF) 
                              != (IData)(vlSelfRef.tb_gshare_random__DOT__vec_index))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_random.sv:86: Assertion failed in %Ntb_gshare_random.run_vector: Test %0d index mismatch: expected %0x got %0x\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             tb_gshare_random__DOT__test_count,
                             4,(IData)(vlSelfRef.tb_gshare_random__DOT__vec_index),
                             4,vlSelfRef.tb_gshare_random__DOT__dut__DOT__indexF);
                VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_random.sv", 86, "", false);
            }
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_gshare_random__DOT__dut__DOT__pht_readF) 
                              != (IData)(vlSelfRef.tb_gshare_random__DOT__vec_before))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_random.sv:93: Assertion failed in %Ntb_gshare_random.run_vector: Test %0d prediction state mismatch: expected %b got %b\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             tb_gshare_random__DOT__test_count,
                             2,(IData)(vlSelfRef.tb_gshare_random__DOT__vec_before),
                             2,vlSelfRef.tb_gshare_random__DOT__dut__DOT__pht_readF);
                VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_random.sv", 93, "", false);
            }
            co_await vlSelfRef.__VtrigSched_hbfbc481f__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_gshare_random.clk)", 
                                                                 "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_random.sv", 
                                                                 99);
            co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                                 nullptr, 
                                                 "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_random.sv", 
                                                 100);
            co_await vlSelfRef.__VtrigSched_hbfbc48de__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_gshare_random.clk)", 
                                                                 "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_random.sv", 
                                                                 105);
            vlSelfRef.tb_gshare_random__DOT__BPBranchF = 0U;
            vlSelfRef.tb_gshare_random__DOT__BranchD = 1U;
            co_await vlSelfRef.__VtrigSched_hbfbc481f__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_gshare_random.clk)", 
                                                                 "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_random.sv", 
                                                                 110);
            co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                                 nullptr, 
                                                 "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_random.sv", 
                                                 111);
            co_await vlSelfRef.__VtrigSched_hbfbc48de__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_gshare_random.clk)", 
                                                                 "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_random.sv", 
                                                                 116);
            vlSelfRef.tb_gshare_random__DOT__BranchD = 0U;
            vlSelfRef.tb_gshare_random__DOT__BranchE = 1U;
            vlSelfRef.tb_gshare_random__DOT__PCSrcE 
                = (0U != vlSelfRef.tb_gshare_random__DOT__vec_actual);
            co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                                 nullptr, 
                                                 "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_random.sv", 
                                                 122);
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_gshare_random__DOT__BPDirWrongE) 
                              != (0U != vlSelfRef.tb_gshare_random__DOT__vec_wrong))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_random.sv:125: Assertion failed in %Ntb_gshare_random.run_vector: Test %0d mispredict mismatch: expected %0d got %0#\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             tb_gshare_random__DOT__test_count,
                             32,vlSelfRef.tb_gshare_random__DOT__vec_wrong,
                             1,(IData)(vlSelfRef.tb_gshare_random__DOT__BPDirWrongE));
                VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_random.sv", 125, "", false);
            }
            co_await vlSelfRef.__VtrigSched_hbfbc481f__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_gshare_random.clk)", 
                                                                 "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_random.sv", 
                                                                 131);
            co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                                 nullptr, 
                                                 "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_random.sv", 
                                                 132);
            if (VL_UNLIKELY(((vlSelfRef.tb_gshare_random__DOT__dut__DOT__pht
                              [vlSelfRef.tb_gshare_random__DOT__vec_index] 
                              != (IData)(vlSelfRef.tb_gshare_random__DOT__vec_after))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_random.sv:135: Assertion failed in %Ntb_gshare_random.run_vector: Test %0d PHT mismatch: index=%0x expected=%b got=%b\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             tb_gshare_random__DOT__test_count,
                             4,(IData)(vlSelfRef.tb_gshare_random__DOT__vec_index),
                             2,vlSelfRef.tb_gshare_random__DOT__vec_after,
                             2,vlSelfRef.tb_gshare_random__DOT__dut__DOT__pht
                             [vlSelfRef.tb_gshare_random__DOT__vec_index]);
                VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_random.sv", 135, "", false);
            }
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_gshare_random__DOT__dut__DOT__committed_history) 
                              != (IData)(vlSelfRef.tb_gshare_random__DOT__vec_history))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_random.sv:143: Assertion failed in %Ntb_gshare_random.run_vector: Test %0d history mismatch: expected=%b got=%b\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             tb_gshare_random__DOT__test_count,
                             4,(IData)(vlSelfRef.tb_gshare_random__DOT__vec_history),
                             4,vlSelfRef.tb_gshare_random__DOT__dut__DOT__committed_history);
                VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_random.sv", 143, "", false);
            }
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_gshare_random__DOT__dut__DOT__speculative_history) 
                              != (IData)(vlSelfRef.tb_gshare_random__DOT__vec_history))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_random.sv:150: Assertion failed in %Ntb_gshare_random.run_vector: Test %0d speculative history mismatch: expected=%b got=%b\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             tb_gshare_random__DOT__test_count,
                             4,(IData)(vlSelfRef.tb_gshare_random__DOT__vec_history),
                             4,vlSelfRef.tb_gshare_random__DOT__dut__DOT__speculative_history);
                VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_random.sv", 150, "", false);
            }
            co_await vlSelfRef.__VtrigSched_hbfbc48de__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_gshare_random.clk)", 
                                                                 "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_random.sv", 
                                                                 156);
            vlSelfRef.tb_gshare_random__DOT__BranchE = 0U;
            vlSelfRef.tb_gshare_random__DOT__PCSrcE = 0U;
        }
    }
    VL_FCLOSE_I(tb_gshare_random__DOT__fd); VL_WRITEF_NX("ALL RANDOM TESTS PASSED (%0d vectors)\n",0,
                                                         32,
                                                         tb_gshare_random__DOT__test_count);
    VL_FINISH_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_random.sv", 215, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_gshare_random___024root___dump_triggers__act(Vtb_gshare_random___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_gshare_random___024root___eval_triggers__act(Vtb_gshare_random___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gshare_random___024root___eval_triggers__act\n"); );
    Vtb_gshare_random__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_gshare_random__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_gshare_random__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.tb_gshare_random__DOT__clk)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_gshare_random__DOT__clk__0)));
    vlSelfRef.__VactTriggered.setBit(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_gshare_random__DOT__clk__0 
        = vlSelfRef.tb_gshare_random__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_gshare_random___024root___dump_triggers__act(vlSelf);
    }
#endif
}
