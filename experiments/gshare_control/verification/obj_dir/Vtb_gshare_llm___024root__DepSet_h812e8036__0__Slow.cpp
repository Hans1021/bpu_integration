// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_gshare_llm.h for the primary calling header

#include "Vtb_gshare_llm__pch.h"
#include "Vtb_gshare_llm___024root.h"

VL_ATTR_COLD void Vtb_gshare_llm___024root___eval_static(Vtb_gshare_llm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gshare_llm___024root___eval_static\n"); );
    Vtb_gshare_llm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__tb_gshare_llm__DOT__clk__0 
        = vlSelfRef.tb_gshare_llm__DOT__clk;
}

VL_ATTR_COLD void Vtb_gshare_llm___024root___eval_final(Vtb_gshare_llm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gshare_llm___024root___eval_final\n"); );
    Vtb_gshare_llm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_gshare_llm___024root___dump_triggers__stl(Vtb_gshare_llm___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_gshare_llm___024root___eval_phase__stl(Vtb_gshare_llm___024root* vlSelf);

VL_ATTR_COLD void Vtb_gshare_llm___024root___eval_settle(Vtb_gshare_llm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gshare_llm___024root___eval_settle\n"); );
    Vtb_gshare_llm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_gshare_llm___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_gshare_llm___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_gshare_llm___024root___dump_triggers__stl(Vtb_gshare_llm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gshare_llm___024root___dump_triggers__stl\n"); );
    Vtb_gshare_llm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtb_gshare_llm___024root___act_comb__TOP__0(Vtb_gshare_llm___024root* vlSelf);

VL_ATTR_COLD void Vtb_gshare_llm___024root___eval_stl(Vtb_gshare_llm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gshare_llm___024root___eval_stl\n"); );
    Vtb_gshare_llm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_gshare_llm___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_gshare_llm___024root___eval_triggers__stl(Vtb_gshare_llm___024root* vlSelf);

VL_ATTR_COLD bool Vtb_gshare_llm___024root___eval_phase__stl(Vtb_gshare_llm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gshare_llm___024root___eval_phase__stl\n"); );
    Vtb_gshare_llm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_gshare_llm___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_gshare_llm___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_gshare_llm___024root___dump_triggers__act(Vtb_gshare_llm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gshare_llm___024root___dump_triggers__act\n"); );
    Vtb_gshare_llm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_gshare_llm.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_gshare_llm.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_gshare_llm___024root___dump_triggers__nba(Vtb_gshare_llm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gshare_llm___024root___dump_triggers__nba\n"); );
    Vtb_gshare_llm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_gshare_llm.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_gshare_llm.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_gshare_llm___024root___ctor_var_reset(Vtb_gshare_llm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gshare_llm___024root___ctor_var_reset\n"); );
    Vtb_gshare_llm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_gshare_llm__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_gshare_llm__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->tb_gshare_llm__DOT__StallF = VL_RAND_RESET_I(1);
    vlSelf->tb_gshare_llm__DOT__StallD = VL_RAND_RESET_I(1);
    vlSelf->tb_gshare_llm__DOT__StallE = VL_RAND_RESET_I(1);
    vlSelf->tb_gshare_llm__DOT__FlushD = VL_RAND_RESET_I(1);
    vlSelf->tb_gshare_llm__DOT__FlushE = VL_RAND_RESET_I(1);
    vlSelf->tb_gshare_llm__DOT__PCF = VL_RAND_RESET_I(32);
    vlSelf->tb_gshare_llm__DOT__BPBranchF = VL_RAND_RESET_I(1);
    vlSelf->tb_gshare_llm__DOT__BranchD = VL_RAND_RESET_I(1);
    vlSelf->tb_gshare_llm__DOT__BranchE = VL_RAND_RESET_I(1);
    vlSelf->tb_gshare_llm__DOT__PCSrcE = VL_RAND_RESET_I(1);
    vlSelf->tb_gshare_llm__DOT__BPDirWrongE = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_gshare_llm__DOT__dut__DOT__pht[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->tb_gshare_llm__DOT__dut__DOT__committed_history = VL_RAND_RESET_I(4);
    vlSelf->tb_gshare_llm__DOT__dut__DOT__speculative_history = VL_RAND_RESET_I(4);
    vlSelf->tb_gshare_llm__DOT__dut__DOT__committed_history_n = VL_RAND_RESET_I(4);
    vlSelf->tb_gshare_llm__DOT__dut__DOT__speculative_history_n = VL_RAND_RESET_I(4);
    vlSelf->tb_gshare_llm__DOT__dut__DOT__validD = VL_RAND_RESET_I(1);
    vlSelf->tb_gshare_llm__DOT__dut__DOT__validD_n = VL_RAND_RESET_I(1);
    vlSelf->tb_gshare_llm__DOT__dut__DOT__indexD = VL_RAND_RESET_I(4);
    vlSelf->tb_gshare_llm__DOT__dut__DOT__indexD_n = VL_RAND_RESET_I(4);
    vlSelf->tb_gshare_llm__DOT__dut__DOT__predictionD = VL_RAND_RESET_I(2);
    vlSelf->tb_gshare_llm__DOT__dut__DOT__predictionD_n = VL_RAND_RESET_I(2);
    vlSelf->tb_gshare_llm__DOT__dut__DOT__consumedD = VL_RAND_RESET_I(1);
    vlSelf->tb_gshare_llm__DOT__dut__DOT__consumedD_n = VL_RAND_RESET_I(1);
    vlSelf->tb_gshare_llm__DOT__dut__DOT__validE = VL_RAND_RESET_I(1);
    vlSelf->tb_gshare_llm__DOT__dut__DOT__validE_n = VL_RAND_RESET_I(1);
    vlSelf->tb_gshare_llm__DOT__dut__DOT__indexE = VL_RAND_RESET_I(4);
    vlSelf->tb_gshare_llm__DOT__dut__DOT__indexE_n = VL_RAND_RESET_I(4);
    vlSelf->tb_gshare_llm__DOT__dut__DOT__predictionE = VL_RAND_RESET_I(2);
    vlSelf->tb_gshare_llm__DOT__dut__DOT__predictionE_n = VL_RAND_RESET_I(2);
    vlSelf->tb_gshare_llm__DOT__dut__DOT__trainedE = VL_RAND_RESET_I(1);
    vlSelf->tb_gshare_llm__DOT__dut__DOT__trainedE_n = VL_RAND_RESET_I(1);
    vlSelf->tb_gshare_llm__DOT__dut__DOT__consumedF = VL_RAND_RESET_I(1);
    vlSelf->tb_gshare_llm__DOT__dut__DOT__consumedF_n = VL_RAND_RESET_I(1);
    vlSelf->tb_gshare_llm__DOT__dut__DOT__pht_readF = VL_RAND_RESET_I(2);
    vlSelf->tb_gshare_llm__DOT__dut__DOT__resolveE = VL_RAND_RESET_I(1);
    vlSelf->tb_gshare_llm__DOT__dut__DOT__update_new = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_tb_gshare_llm__DOT__dut__DOT__saturating_update__17__Vfuncout = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_tb_gshare_llm__DOT__dut__DOT__saturating_update__17__old_counter = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_tb_gshare_llm__DOT__dut__DOT__saturating_update__17__actual_taken = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__18__Vfuncout = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__18__history = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__18__outcome = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__19__Vfuncout = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__19__history = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__19__outcome = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__20__Vfuncout = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__20__history = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__20__outcome = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_gshare_llm__DOT__clk__0 = VL_RAND_RESET_I(1);
}
