// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ogehl_wally.h for the primary calling header

#include "Vtb_ogehl_wally__pch.h"
#include "Vtb_ogehl_wally___024root.h"

VL_ATTR_COLD void Vtb_ogehl_wally___024root___eval_static__TOP(Vtb_ogehl_wally___024root* vlSelf);

VL_ATTR_COLD void Vtb_ogehl_wally___024root___eval_static(Vtb_ogehl_wally___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ogehl_wally___024root___eval_static\n"); );
    Vtb_ogehl_wally__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_ogehl_wally___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ogehl_wally__DOT__clk__0 = 0U;
}

VL_ATTR_COLD void Vtb_ogehl_wally___024root___eval_static__TOP(Vtb_ogehl_wally___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ogehl_wally___024root___eval_static__TOP\n"); );
    Vtb_ogehl_wally__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_ogehl_wally__DOT__clk = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__checks = 0U;
}

VL_ATTR_COLD void Vtb_ogehl_wally___024root___eval_final(Vtb_ogehl_wally___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ogehl_wally___024root___eval_final\n"); );
    Vtb_ogehl_wally__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ogehl_wally___024root___dump_triggers__stl(Vtb_ogehl_wally___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_ogehl_wally___024root___eval_phase__stl(Vtb_ogehl_wally___024root* vlSelf);

VL_ATTR_COLD void Vtb_ogehl_wally___024root___eval_settle(Vtb_ogehl_wally___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ogehl_wally___024root___eval_settle\n"); );
    Vtb_ogehl_wally__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_ogehl_wally___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("experiments/ogehl_cbp1/verification/tb_ogehl_wally.sv", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_ogehl_wally___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ogehl_wally___024root___dump_triggers__stl(Vtb_ogehl_wally___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ogehl_wally___024root___dump_triggers__stl\n"); );
    Vtb_ogehl_wally__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vtb_ogehl_wally___024root___act_comb__TOP__0(Vtb_ogehl_wally___024root* vlSelf);

VL_ATTR_COLD void Vtb_ogehl_wally___024root___eval_stl(Vtb_ogehl_wally___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ogehl_wally___024root___eval_stl\n"); );
    Vtb_ogehl_wally__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_ogehl_wally___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_ogehl_wally___024root___eval_triggers__stl(Vtb_ogehl_wally___024root* vlSelf);

VL_ATTR_COLD bool Vtb_ogehl_wally___024root___eval_phase__stl(Vtb_ogehl_wally___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ogehl_wally___024root___eval_phase__stl\n"); );
    Vtb_ogehl_wally__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_ogehl_wally___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_ogehl_wally___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ogehl_wally___024root___dump_triggers__act(Vtb_ogehl_wally___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ogehl_wally___024root___dump_triggers__act\n"); );
    Vtb_ogehl_wally__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_ogehl_wally.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ogehl_wally___024root___dump_triggers__nba(Vtb_ogehl_wally___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ogehl_wally___024root___dump_triggers__nba\n"); );
    Vtb_ogehl_wally__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_ogehl_wally.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_ogehl_wally___024root___ctor_var_reset(Vtb_ogehl_wally___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ogehl_wally___024root___ctor_var_reset\n"); );
    Vtb_ogehl_wally__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_ogehl_wally__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_ogehl_wally__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->tb_ogehl_wally__DOT__StallD = VL_RAND_RESET_I(1);
    vlSelf->tb_ogehl_wally__DOT__StallE = VL_RAND_RESET_I(1);
    vlSelf->tb_ogehl_wally__DOT__FlushD = VL_RAND_RESET_I(1);
    vlSelf->tb_ogehl_wally__DOT__FlushE = VL_RAND_RESET_I(1);
    vlSelf->tb_ogehl_wally__DOT__FlushM = VL_RAND_RESET_I(1);
    vlSelf->tb_ogehl_wally__DOT__InstrValidD = VL_RAND_RESET_I(1);
    vlSelf->tb_ogehl_wally__DOT__InstrValidE = VL_RAND_RESET_I(1);
    vlSelf->tb_ogehl_wally__DOT__PCF = VL_RAND_RESET_I(32);
    vlSelf->tb_ogehl_wally__DOT__PCD = VL_RAND_RESET_I(32);
    vlSelf->tb_ogehl_wally__DOT__PCE = VL_RAND_RESET_I(32);
    vlSelf->tb_ogehl_wally__DOT__BPBranchF = VL_RAND_RESET_I(1);
    vlSelf->tb_ogehl_wally__DOT__BPJumpF = VL_RAND_RESET_I(1);
    vlSelf->tb_ogehl_wally__DOT__BranchD = VL_RAND_RESET_I(1);
    vlSelf->tb_ogehl_wally__DOT__JumpD = VL_RAND_RESET_I(1);
    vlSelf->tb_ogehl_wally__DOT__CallD = VL_RAND_RESET_I(1);
    vlSelf->tb_ogehl_wally__DOT__ReturnD = VL_RAND_RESET_I(1);
    vlSelf->tb_ogehl_wally__DOT__BranchE = VL_RAND_RESET_I(1);
    vlSelf->tb_ogehl_wally__DOT__JumpE = VL_RAND_RESET_I(1);
    vlSelf->tb_ogehl_wally__DOT__CallE = VL_RAND_RESET_I(1);
    vlSelf->tb_ogehl_wally__DOT__ReturnE = VL_RAND_RESET_I(1);
    vlSelf->tb_ogehl_wally__DOT__PCSrcE = VL_RAND_RESET_I(1);
    vlSelf->tb_ogehl_wally__DOT__checks = 0;
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->tb_ogehl_wally__DOT__dut__DOT__T0[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_ogehl_wally__DOT__dut__DOT__T1[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->tb_ogehl_wally__DOT__dut__DOT__T2[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->tb_ogehl_wally__DOT__dut__DOT__T3[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->tb_ogehl_wally__DOT__dut__DOT__T4[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->tb_ogehl_wally__DOT__dut__DOT__T5[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->tb_ogehl_wally__DOT__dut__DOT__T6[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->tb_ogehl_wally__DOT__dut__DOT__T7[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_ogehl_wally__DOT__dut__DOT__MINITAG[__Vi0] = VL_RAND_RESET_I(1);
    }
    VL_RAND_RESET_W(200, vlSelf->tb_ogehl_wally__DOT__dut__DOT__committed_global_history);
    vlSelf->tb_ogehl_wally__DOT__dut__DOT__committed_path_history = VL_RAND_RESET_I(16);
    vlSelf->tb_ogehl_wally__DOT__dut__DOT__TC = VL_RAND_RESET_I(8);
    vlSelf->tb_ogehl_wally__DOT__dut__DOT__AC = VL_RAND_RESET_I(9);
    vlSelf->tb_ogehl_wally__DOT__dut__DOT__thresupdate = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_ogehl_wally__DOT__dut__DOT__UsedHistLength[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_ogehl_wally__DOT__dut__DOT__indicesF[__Vi0] = VL_RAND_RESET_I(11);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_ogehl_wally__DOT__dut__DOT__indicesD[__Vi0] = VL_RAND_RESET_I(11);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_ogehl_wally__DOT__dut__DOT__indicesE[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->tb_ogehl_wally__DOT__dut__DOT__prediction_sumF = VL_RAND_RESET_I(16);
    vlSelf->tb_ogehl_wally__DOT__dut__DOT__prediction_sumD = VL_RAND_RESET_I(16);
    vlSelf->tb_ogehl_wally__DOT__dut__DOT__prediction_sumE = VL_RAND_RESET_I(16);
    vlSelf->tb_ogehl_wally__DOT__dut__DOT__raw_predictionF = VL_RAND_RESET_I(1);
    vlSelf->tb_ogehl_wally__DOT__dut__DOT__meta_validD = VL_RAND_RESET_I(1);
    vlSelf->tb_ogehl_wally__DOT__dut__DOT__meta_validE = VL_RAND_RESET_I(1);
    vlSelf->tb_ogehl_wally__DOT__dut__DOT__steered_takenD = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_ogehl_wally__DOT__dut__DOT__active_lengthF[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_ogehl_wally__DOT__dut__DOT__resolve_condE = VL_RAND_RESET_I(1);
    vlSelf->tb_ogehl_wally__DOT__dut__DOT__resolve_jumpE = VL_RAND_RESET_I(1);
    vlSelf->tb_ogehl_wally__DOT__dut__DOT__resolve_cfiE = VL_RAND_RESET_I(1);
    vlSelf->tb_ogehl_wally__DOT__dut__DOT__direction_wrongE = VL_RAND_RESET_I(1);
    vlSelf->tb_ogehl_wally__DOT__dut__DOT__trainE = VL_RAND_RESET_I(1);
    vlSelf->tb_ogehl_wally__DOT__dut__DOT__alias_checkE = VL_RAND_RESET_I(1);
    vlSelf->tb_ogehl_wally__DOT__dut__DOT__thres_nextE = VL_RAND_RESET_I(5);
    vlSelf->tb_ogehl_wally__DOT__dut__DOT__tc_nextE = VL_RAND_RESET_I(8);
    vlSelf->tb_ogehl_wally__DOT__dut__DOT__ac_nextE = VL_RAND_RESET_I(9);
    vlSelf->tb_ogehl_wally__DOT__dut__DOT__switch_shortE = VL_RAND_RESET_I(1);
    vlSelf->tb_ogehl_wally__DOT__dut__DOT__switch_longE = VL_RAND_RESET_I(1);
    vlSelf->tb_ogehl_wally__DOT__dut__DOT__predictor_state__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->tb_ogehl_wally__DOT__dut__DOT____Vlvbound_h289c1bac__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_ogehl_wally__DOT__dut__DOT____Vlvbound_h289c1bac__1 = VL_RAND_RESET_I(1);
    vlSelf->tb_ogehl_wally__DOT__dut__DOT____Vlvbound_h289c1bac__2 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(200, vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__advance_global__28__Vfuncout);
    VL_RAND_RESET_W(200, vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__advance_global__28__history);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__advance_global__28__outcome = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__advance_path__29__Vfuncout = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__advance_path__29__history = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__advance_path__29__pc_bit0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(200, vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__advance_global__30__Vfuncout);
    VL_RAND_RESET_W(200, vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__advance_global__30__history);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__advance_global__30__outcome = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__advance_path__31__Vfuncout = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__advance_path__31__history = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__advance_path__31__pc_bit0 = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__ogehl_index__32__Vfuncout = VL_RAND_RESET_I(11);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__ogehl_index__32__pc = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(200, vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__ogehl_index__32__gh);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__ogehl_index__32__ph = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__ogehl_index__32__table_number = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__ogehl_index__32__m = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__ogehl_index__32__w = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__ogehl_index__32__n = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__ogehl_index__32__p = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__ogehl_index__32__min_add = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__ogehl_index__32__funct = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__ogehl_index__32__source_pos = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__ogehl_index__32__rotation = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__ogehl_index__32__selected_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__ogehl_index__32__inter = VL_RAND_RESET_Q(33);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__ogehl_index__32__remaining = VL_RAND_RESET_Q(33);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__ogehl_index__32__chunk = VL_RAND_RESET_I(11);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__ogehl_index__32__rotated = VL_RAND_RESET_I(11);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__ogehl_index__32__result = VL_RAND_RESET_I(11);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__sat5__33__Vfuncout = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__sat5__33__value = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__sat5__33__actual_taken = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__sat5__34__Vfuncout = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__sat5__34__value = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__sat5__34__actual_taken = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__sat4__35__Vfuncout = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__sat4__35__value = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__sat4__35__actual_taken = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__sat4__36__Vfuncout = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__sat4__36__value = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__sat4__36__actual_taken = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__sat4__37__Vfuncout = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__sat4__37__value = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__sat4__37__actual_taken = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__sat4__38__Vfuncout = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__sat4__38__value = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__sat4__38__actual_taken = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__sat4__39__Vfuncout = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__sat4__39__value = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__sat4__39__actual_taken = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__sat4__40__Vfuncout = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__sat4__40__value = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__sat4__40__actual_taken = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__extend5__41__Vfuncout = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__extend5__41__counter_value = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__extend5__42__Vfuncout = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__extend5__42__counter_value = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__extend4__43__Vfuncout = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__extend4__43__counter_value = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__extend4__44__Vfuncout = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__extend4__44__counter_value = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__extend4__45__Vfuncout = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__extend4__45__counter_value = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__extend4__46__Vfuncout = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__extend4__46__counter_value = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__extend4__47__Vfuncout = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__extend4__47__counter_value = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__extend4__48__Vfuncout = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_tb_ogehl_wally__DOT__dut__DOT__extend4__48__counter_value = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_ogehl_wally__DOT__clk__0 = VL_RAND_RESET_I(1);
}
