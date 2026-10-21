// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ogehl_wally_extended.h for the primary calling header

#include "Vtb_ogehl_wally_extended__pch.h"
#include "Vtb_ogehl_wally_extended___024root.h"

VlCoroutine Vtb_ogehl_wally_extended___024root___eval_initial__TOP__Vtiming__0(Vtb_ogehl_wally_extended___024root* vlSelf);
VlCoroutine Vtb_ogehl_wally_extended___024root___eval_initial__TOP__Vtiming__1(Vtb_ogehl_wally_extended___024root* vlSelf);

void Vtb_ogehl_wally_extended___024root___eval_initial(Vtb_ogehl_wally_extended___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ogehl_wally_extended___024root___eval_initial\n"); );
    Vtb_ogehl_wally_extended__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_ogehl_wally_extended___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_ogehl_wally_extended___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_ogehl_wally_extended___024root___eval_initial__TOP__Vtiming__1(Vtb_ogehl_wally_extended___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ogehl_wally_extended___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_ogehl_wally_extended__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                             7);
        vlSelfRef.tb_ogehl_wally_extended__DOT__clk 
            = (1U & (~ (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__clk)));
    }
}

void Vtb_ogehl_wally_extended___024root___act_comb__TOP__0(Vtb_ogehl_wally_extended___024root* vlSelf);

void Vtb_ogehl_wally_extended___024root___eval_act(Vtb_ogehl_wally_extended___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ogehl_wally_extended___024root___eval_act\n"); );
    Vtb_ogehl_wally_extended__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((7ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_ogehl_wally_extended___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_ogehl_wally_extended___024root___act_comb__TOP__0(Vtb_ogehl_wally_extended___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ogehl_wally_extended___024root___act_comb__TOP__0\n"); );
    Vtb_ogehl_wally_extended__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<7>/*199:0*/ tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF;
    VL_ZERO_W(200, tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF);
    SData/*15:0*/ tb_ogehl_wally_extended__DOT__dut__DOT__speculative_pathF;
    tb_ogehl_wally_extended__DOT__dut__DOT__speculative_pathF = 0;
    CData/*0:0*/ tb_ogehl_wally_extended__DOT__dut__DOT__actual_jumpD;
    tb_ogehl_wally_extended__DOT__dut__DOT__actual_jumpD = 0;
    CData/*0:0*/ tb_ogehl_wally_extended__DOT__dut__DOT__actual_jumpE;
    tb_ogehl_wally_extended__DOT__dut__DOT__actual_jumpE = 0;
    CData/*0:0*/ tb_ogehl_wally_extended__DOT__dut__DOT__advance_survivingE;
    tb_ogehl_wally_extended__DOT__dut__DOT__advance_survivingE = 0;
    CData/*4:0*/ tb_ogehl_wally_extended__DOT__dut__DOT__f0;
    tb_ogehl_wally_extended__DOT__dut__DOT__f0 = 0;
    CData/*4:0*/ tb_ogehl_wally_extended__DOT__dut__DOT__f1;
    tb_ogehl_wally_extended__DOT__dut__DOT__f1 = 0;
    CData/*3:0*/ tb_ogehl_wally_extended__DOT__dut__DOT__f2;
    tb_ogehl_wally_extended__DOT__dut__DOT__f2 = 0;
    CData/*3:0*/ tb_ogehl_wally_extended__DOT__dut__DOT__f3;
    tb_ogehl_wally_extended__DOT__dut__DOT__f3 = 0;
    CData/*3:0*/ tb_ogehl_wally_extended__DOT__dut__DOT__f4;
    tb_ogehl_wally_extended__DOT__dut__DOT__f4 = 0;
    CData/*3:0*/ tb_ogehl_wally_extended__DOT__dut__DOT__f5;
    tb_ogehl_wally_extended__DOT__dut__DOT__f5 = 0;
    CData/*3:0*/ tb_ogehl_wally_extended__DOT__dut__DOT__f6;
    tb_ogehl_wally_extended__DOT__dut__DOT__f6 = 0;
    CData/*3:0*/ tb_ogehl_wally_extended__DOT__dut__DOT__f7;
    tb_ogehl_wally_extended__DOT__dut__DOT__f7 = 0;
    IData/*31:0*/ tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__tc_work;
    tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__tc_work = 0;
    IData/*31:0*/ tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__theta_work;
    tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__theta_work = 0;
    CData/*0:0*/ tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__low_confidence;
    tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__low_confidence = 0;
    IData/*31:0*/ tb_ogehl_wally_extended__DOT__dut__DOT__alias_fit__DOT__ac_work;
    tb_ogehl_wally_extended__DOT__dut__DOT__alias_fit__DOT__ac_work = 0;
    IData/*31:0*/ tb_ogehl_wally_extended__DOT__dut__DOT__fetch_indices__DOT__unnamedblk2__DOT__k;
    tb_ogehl_wally_extended__DOT__dut__DOT__fetch_indices__DOT__unnamedblk2__DOT__k = 0;
    CData/*0:0*/ tb_ogehl_wally_extended__DOT__dut__DOT____VdfgRegularize_hb50cd4a5_0_0;
    tb_ogehl_wally_extended__DOT__dut__DOT____VdfgRegularize_hb50cd4a5_0_0 = 0;
    SData/*31:0*/ __Vtemp_52;
    SData/*31:0*/ __Vtemp_53;
    SData/*31:0*/ __Vtemp_54;
    SData/*31:0*/ __Vtemp_55;
    SData/*31:0*/ __Vtemp_56;
    SData/*31:0*/ __Vtemp_57;
    SData/*31:0*/ __Vtemp_58;
    // Body
    tb_ogehl_wally_extended__DOT__dut__DOT__actual_jumpD 
        = ((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__JumpD) 
           | ((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__CallD) 
              | (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__ReturnD)));
    tb_ogehl_wally_extended__DOT__dut__DOT__actual_jumpE 
        = ((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__JumpE) 
           | ((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__CallE) 
              | (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__ReturnE)));
    tb_ogehl_wally_extended__DOT__dut__DOT__advance_survivingE 
        = (1U & ((~ (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__StallE)) 
                 & (~ (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__FlushM))));
    tb_ogehl_wally_extended__DOT__dut__DOT____VdfgRegularize_hb50cd4a5_0_0 
        = ((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__InstrValidE) 
           & (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__meta_validE));
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__direction_wrongE 
        = (VL_LTES_III(16, 0U, (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__prediction_sumE)) 
           != (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__PCSrcE));
    tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[0U] 
        = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[0U];
    tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[1U] 
        = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[1U];
    tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[2U] 
        = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[2U];
    tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[3U] 
        = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[3U];
    tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[4U] 
        = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[4U];
    tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[5U] 
        = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[5U];
    tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[6U] 
        = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[6U];
    if (((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__meta_validE) 
         & (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__InstrValidE))) {
        tb_ogehl_wally_extended__DOT__dut__DOT__speculative_pathF 
            = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_path_history;
        if (((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__BranchE) 
             | (IData)(tb_ogehl_wally_extended__DOT__dut__DOT__actual_jumpE))) {
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__outcome 
                = (1U & ((~ (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__BranchE)) 
                         | (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__PCSrcE)));
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__history[0U] 
                = tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[0U];
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__history[1U] 
                = tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[1U];
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__history[2U] 
                = tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[2U];
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__history[3U] 
                = tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[3U];
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__history[4U] 
                = tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[4U];
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__history[5U] 
                = tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[5U];
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__history[6U] 
                = tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[6U];
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__Vfuncout[0U] 
                = ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__history[0U] 
                    << 1U) | (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__outcome));
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__Vfuncout[1U] 
                = ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__history[0U] 
                    >> 0x1fU) | (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__history[1U] 
                                 << 1U));
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__Vfuncout[2U] 
                = ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__history[1U] 
                    >> 0x1fU) | (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__history[2U] 
                                 << 1U));
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__Vfuncout[3U] 
                = ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__history[2U] 
                    >> 0x1fU) | (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__history[3U] 
                                 << 1U));
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__Vfuncout[4U] 
                = ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__history[3U] 
                    >> 0x1fU) | (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__history[4U] 
                                 << 1U));
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__Vfuncout[5U] 
                = ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__history[4U] 
                    >> 0x1fU) | (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__history[5U] 
                                 << 1U));
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__Vfuncout[6U] 
                = ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__history[5U] 
                    >> 0x1fU) | (0xfeU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__history[6U] 
                                          << 1U)));
            tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[0U] 
                = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__Vfuncout[0U];
            tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[1U] 
                = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__Vfuncout[1U];
            tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[2U] 
                = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__Vfuncout[2U];
            tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[3U] 
                = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__Vfuncout[3U];
            tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[4U] 
                = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__Vfuncout[4U];
            tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[5U] 
                = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__Vfuncout[5U];
            tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[6U] 
                = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__Vfuncout[6U];
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_path__70__pc_bit0 
                = (1U & vlSelfRef.tb_ogehl_wally_extended__DOT__PCE);
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_path__70__history 
                = tb_ogehl_wally_extended__DOT__dut__DOT__speculative_pathF;
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_path__70__Vfuncout 
                = ((0xfffeU & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_path__70__history) 
                               << 1U)) | (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_path__70__pc_bit0));
            tb_ogehl_wally_extended__DOT__dut__DOT__speculative_pathF 
                = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_path__70__Vfuncout;
        }
    } else {
        tb_ogehl_wally_extended__DOT__dut__DOT__speculative_pathF 
            = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_path_history;
    }
    if (((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__meta_validD) 
         & (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__InstrValidD))) {
        if (((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__BranchD) 
             | (IData)(tb_ogehl_wally_extended__DOT__dut__DOT__actual_jumpD))) {
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__outcome 
                = (1U & ((~ (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__BranchD)) 
                         | (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__steered_takenD)));
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__history[0U] 
                = tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[0U];
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__history[1U] 
                = tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[1U];
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__history[2U] 
                = tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[2U];
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__history[3U] 
                = tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[3U];
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__history[4U] 
                = tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[4U];
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__history[5U] 
                = tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[5U];
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__history[6U] 
                = tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[6U];
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__Vfuncout[0U] 
                = ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__history[0U] 
                    << 1U) | (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__outcome));
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__Vfuncout[1U] 
                = ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__history[0U] 
                    >> 0x1fU) | (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__history[1U] 
                                 << 1U));
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__Vfuncout[2U] 
                = ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__history[1U] 
                    >> 0x1fU) | (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__history[2U] 
                                 << 1U));
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__Vfuncout[3U] 
                = ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__history[2U] 
                    >> 0x1fU) | (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__history[3U] 
                                 << 1U));
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__Vfuncout[4U] 
                = ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__history[3U] 
                    >> 0x1fU) | (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__history[4U] 
                                 << 1U));
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__Vfuncout[5U] 
                = ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__history[4U] 
                    >> 0x1fU) | (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__history[5U] 
                                 << 1U));
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__Vfuncout[6U] 
                = ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__history[5U] 
                    >> 0x1fU) | (0xfeU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__history[6U] 
                                          << 1U)));
            tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[0U] 
                = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__Vfuncout[0U];
            tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[1U] 
                = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__Vfuncout[1U];
            tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[2U] 
                = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__Vfuncout[2U];
            tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[3U] 
                = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__Vfuncout[3U];
            tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[4U] 
                = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__Vfuncout[4U];
            tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[5U] 
                = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__Vfuncout[5U];
            tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[6U] 
                = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__Vfuncout[6U];
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_path__72__pc_bit0 
                = (1U & vlSelfRef.tb_ogehl_wally_extended__DOT__PCD);
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_path__72__history 
                = tb_ogehl_wally_extended__DOT__dut__DOT__speculative_pathF;
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_path__72__Vfuncout 
                = ((0xfffeU & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_path__72__history) 
                               << 1U)) | (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_path__72__pc_bit0));
            tb_ogehl_wally_extended__DOT__dut__DOT__speculative_pathF 
                = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_path__72__Vfuncout;
        }
    }
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__resolve_jumpE 
        = ((~ (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__BranchE)) 
           & ((IData)(tb_ogehl_wally_extended__DOT__dut__DOT____VdfgRegularize_hb50cd4a5_0_0) 
              & ((IData)(tb_ogehl_wally_extended__DOT__dut__DOT__actual_jumpE) 
                 & (IData)(tb_ogehl_wally_extended__DOT__dut__DOT__advance_survivingE))));
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__resolve_condE 
        = ((IData)(tb_ogehl_wally_extended__DOT__dut__DOT____VdfgRegularize_hb50cd4a5_0_0) 
           & ((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__BranchE) 
              & (IData)(tb_ogehl_wally_extended__DOT__dut__DOT__advance_survivingE)));
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__resolve_cfiE 
        = ((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__resolve_condE) 
           | (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__resolve_jumpE));
    tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__tc_work 
        = VL_EXTENDS_II(32,8, (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__TC));
    tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__theta_work 
        = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__thresupdate;
    tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__low_confidence 
        = (VL_GTES_III(32, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__prediction_sumE)), 
                       (- tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__theta_work)) 
           & VL_LTS_III(32, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__prediction_sumE)), tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__theta_work));
    if (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__resolve_condE) {
        if (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__direction_wrongE) {
            tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__tc_work 
                = ((IData)(1U) + tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__tc_work);
            if (VL_LTS_III(32, 0x3fU, tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__tc_work)) {
                tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__tc_work = 0x3fU;
                if (VL_GTS_III(32, 0x1fU, tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__theta_work)) {
                    tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__theta_work 
                        = ((IData)(1U) + tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__theta_work);
                    tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__tc_work = 0U;
                }
            }
        } else if (tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__low_confidence) {
            tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__tc_work 
                = (tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__tc_work 
                   - (IData)(1U));
            if (VL_GTS_III(32, 0xffffffc0U, tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__tc_work)) {
                tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__tc_work = 0xffffffc0U;
                if (VL_LTS_III(32, 0U, tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__theta_work)) {
                    tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__theta_work 
                        = (tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__theta_work 
                           - (IData)(1U));
                    tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__tc_work = 0U;
                }
            }
        }
    }
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__tc_nextE 
        = (0xffU & tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__tc_work);
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__thres_nextE 
        = (0x1fU & tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__theta_work);
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__trainE 
        = ((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__resolve_condE) 
           & ((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__direction_wrongE) 
              | (VL_GTES_III(32, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__prediction_sumE)), 
                             (- tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__theta_work)) 
                 & VL_LTS_III(32, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__prediction_sumE)), tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__theta_work))));
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__alias_checkE 
        = ((~ vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE
            [7U]) & (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__trainE));
    tb_ogehl_wally_extended__DOT__dut__DOT__alias_fit__DOT__ac_work 
        = VL_EXTENDS_II(32,9, (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__AC));
    if (((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__alias_checkE) 
         & (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__direction_wrongE))) {
        tb_ogehl_wally_extended__DOT__dut__DOT__alias_fit__DOT__ac_work 
            = ((vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__MINITAG
                [(0x3ffU & (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE
                            [7U] >> 1U))] != (1U & vlSelfRef.tb_ogehl_wally_extended__DOT__PCE))
                ? (tb_ogehl_wally_extended__DOT__dut__DOT__alias_fit__DOT__ac_work 
                   - (IData)(4U)) : ((IData)(1U) + tb_ogehl_wally_extended__DOT__dut__DOT__alias_fit__DOT__ac_work));
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__switch_shortE 
            = (1U & VL_GTS_III(32, 0xffffff00U, tb_ogehl_wally_extended__DOT__dut__DOT__alias_fit__DOT__ac_work));
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__switch_longE 
            = (1U & VL_LTS_III(32, 0xffU, tb_ogehl_wally_extended__DOT__dut__DOT__alias_fit__DOT__ac_work));
    } else {
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__switch_shortE = 0U;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__switch_longE = 0U;
    }
    if (VL_GTS_III(32, 0xffffff00U, tb_ogehl_wally_extended__DOT__dut__DOT__alias_fit__DOT__ac_work)) {
        tb_ogehl_wally_extended__DOT__dut__DOT__alias_fit__DOT__ac_work = 0xffffff00U;
    } else if (VL_LTS_III(32, 0xffU, tb_ogehl_wally_extended__DOT__dut__DOT__alias_fit__DOT__ac_work)) {
        tb_ogehl_wally_extended__DOT__dut__DOT__alias_fit__DOT__ac_work = 0xffU;
    }
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__ac_nextE 
        = (0x1ffU & tb_ogehl_wally_extended__DOT__dut__DOT__alias_fit__DOT__ac_work);
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__active_lengthF[0U] 
        = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__UsedHistLength
        [0U];
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__active_lengthF[1U] 
        = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__UsedHistLength
        [1U];
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__active_lengthF[2U] 
        = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__UsedHistLength
        [2U];
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__active_lengthF[3U] 
        = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__UsedHistLength
        [3U];
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__active_lengthF[4U] 
        = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__UsedHistLength
        [4U];
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__active_lengthF[5U] 
        = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__UsedHistLength
        [5U];
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__active_lengthF[6U] 
        = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__UsedHistLength
        [6U];
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__active_lengthF[7U] 
        = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__UsedHistLength
        [7U];
    if (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__switch_shortE) {
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__active_lengthF[2U] = 5U;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__active_lengthF[4U] = 0xcU;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__active_lengthF[6U] = 0x1fU;
    } else if (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__switch_longE) {
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__active_lengthF[2U] = 0x4fU;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__active_lengthF[4U] = 0x7dU;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__active_lengthF[6U] = 0xc8U;
    }
    tb_ogehl_wally_extended__DOT__dut__DOT__fetch_indices__DOT__unnamedblk2__DOT__k = 0U;
    while (VL_GTS_III(32, 8U, tb_ogehl_wally_extended__DOT__dut__DOT__fetch_indices__DOT__unnamedblk2__DOT__k)) {
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
            = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__active_lengthF
            [(7U & tb_ogehl_wally_extended__DOT__dut__DOT__fetch_indices__DOT__unnamedblk2__DOT__k)];
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__table_number 
            = tb_ogehl_wally_extended__DOT__dut__DOT__fetch_indices__DOT__unnamedblk2__DOT__k;
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph 
            = tb_ogehl_wally_extended__DOT__dut__DOT__speculative_pathF;
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[0U] 
            = tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[0U];
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[1U] 
            = tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[1U];
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[2U] 
            = tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[2U];
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[3U] 
            = tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[3U];
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[4U] 
            = tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[4U];
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[5U] 
            = tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[5U];
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[6U] 
            = tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[6U];
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
            = vlSelfRef.tb_ogehl_wally_extended__DOT__PCF;
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__w 
            = ((1U == vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__table_number)
                ? 0xaU : 0xbU);
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
            = VL_MULS_III(32, (IData)(3U), vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__w);
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
            = (VL_GTS_III(32, 0x10U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                ? vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m
                : 0x10U);
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add 
            = ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p);
        if (VL_LTS_III(32, 0x14U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)) {
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add = 0x14U;
        }
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__funct 
            = ((IData)(1U) + (3U & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__table_number));
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter = 0ULL;
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos = 0U;
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit = 0U;
        if (VL_LTES_III(32, 8U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)) {
            if (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffffffeULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | (IData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)));
                } else if (VL_LTS_III(32, 0U, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                               + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & (- vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffffffeULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | (IData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)));
                } else if (VL_LTS_III(32, 0U, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                               + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & ((- vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & (((- vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & ((- vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffffffeULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | (IData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)));
                }
            }
            if (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 1U));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffffffdULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 1U));
                } else if (VL_LTS_III(32, 1U, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                               + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(1U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffffffdULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 1U));
                } else if (VL_LTS_III(32, 1U, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                               + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(1U) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(1U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(1U) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffffffdULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 1U));
                }
            }
            if (VL_LTS_III(32, 2U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 2U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 2U));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffffffbULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 2U));
                } else if (VL_LTS_III(32, 2U, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                               + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(2U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffffffbULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 2U));
                } else if (VL_LTS_III(32, 2U, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                               + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(2U) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(2U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(2U) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffffffbULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 2U));
                }
            }
            if (VL_LTS_III(32, 3U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 3U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 3U));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffffff7ULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 3U));
                } else if (VL_LTS_III(32, 3U, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                               + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(3U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffffff7ULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 3U));
                } else if (VL_LTS_III(32, 3U, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                               + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(3U) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(3U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(3U) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffffff7ULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 3U));
                }
            }
            if (VL_LTS_III(32, 4U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 4U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 4U));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffffffefULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 4U));
                } else if (VL_LTS_III(32, 4U, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                               + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(4U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffffffefULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 4U));
                } else if (VL_LTS_III(32, 4U, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                               + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(4U) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(4U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(4U) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffffffefULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 4U));
                }
            }
            if (VL_LTS_III(32, 5U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 5U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 5U));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffffffdfULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 5U));
                } else if (VL_LTS_III(32, 5U, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                               + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(5U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffffffdfULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 5U));
                } else if (VL_LTS_III(32, 5U, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                               + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(5U) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(5U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(5U) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffffffdfULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 5U));
                }
            }
            if (VL_LTS_III(32, 6U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 6U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 6U));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffffffbfULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 6U));
                } else if (VL_LTS_III(32, 6U, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                               + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(6U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffffffbfULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 6U));
                } else if (VL_LTS_III(32, 6U, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                               + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(6U) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(6U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(6U) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffffffbfULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 6U));
                }
            }
            if (VL_LTS_III(32, 7U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 7U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 7U));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffffff7fULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 7U));
                } else if (VL_LTS_III(32, 7U, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                               + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(7U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffffff7fULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 7U));
                } else if (VL_LTS_III(32, 7U, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                               + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(7U) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(7U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(7U) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffffff7fULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 7U));
                }
            }
            if (VL_LTS_III(32, 8U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 8U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 8U));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffffeffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 8U));
                } else if (VL_LTS_III(32, 8U, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                               + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(8U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffffeffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 8U));
                } else if (VL_LTS_III(32, 8U, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                               + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(8U) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(8U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(8U) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffffeffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 8U));
                }
            }
            if (VL_LTS_III(32, 9U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 9U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 9U));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffffdffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 9U));
                } else if (VL_LTS_III(32, 9U, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                               + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(9U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffffdffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 9U));
                } else if (VL_LTS_III(32, 9U, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                               + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(9U) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(9U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(9U) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffffdffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 9U));
                }
            }
            if (VL_LTS_III(32, 0xaU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 0xaU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 0xaU));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffffbffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 0xaU));
                } else if (VL_LTS_III(32, 0xaU, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                 + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(0xaU) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffffbffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 0xaU));
                } else if (VL_LTS_III(32, 0xaU, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                                 + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(0xaU) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(0xaU) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(0xaU) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffffbffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 0xaU));
                }
            }
            if (VL_LTS_III(32, 0xbU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 0xbU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 0xbU));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffff7ffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 0xbU));
                } else if (VL_LTS_III(32, 0xbU, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                 + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(0xbU) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffff7ffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 0xbU));
                } else if (VL_LTS_III(32, 0xbU, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                                 + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(0xbU) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(0xbU) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(0xbU) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffff7ffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 0xbU));
                }
            }
            if (VL_LTS_III(32, 0xcU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 0xcU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 0xcU));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffffefffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 0xcU));
                } else if (VL_LTS_III(32, 0xcU, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                 + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(0xcU) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffffefffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 0xcU));
                } else if (VL_LTS_III(32, 0xcU, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                                 + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(0xcU) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(0xcU) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(0xcU) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffffefffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 0xcU));
                }
            }
            if (VL_LTS_III(32, 0xdU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 0xdU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 0xdU));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffffdfffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 0xdU));
                } else if (VL_LTS_III(32, 0xdU, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                 + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(0xdU) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffffdfffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 0xdU));
                } else if (VL_LTS_III(32, 0xdU, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                                 + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(0xdU) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(0xdU) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(0xdU) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffffdfffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 0xdU));
                }
            }
            if (VL_LTS_III(32, 0xeU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 0xeU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 0xeU));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffffbfffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 0xeU));
                } else if (VL_LTS_III(32, 0xeU, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                 + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(0xeU) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffffbfffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 0xeU));
                } else if (VL_LTS_III(32, 0xeU, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                                 + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(0xeU) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(0xeU) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(0xeU) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffffbfffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 0xeU));
                }
            }
            if (VL_LTS_III(32, 0xfU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 0xfU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 0xfU));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffff7fffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 0xfU));
                } else if (VL_LTS_III(32, 0xfU, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                 + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(0xfU) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffff7fffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 0xfU));
                } else if (VL_LTS_III(32, 0xfU, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                                 + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(0xfU) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(0xfU) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(0xfU) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffff7fffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 0xfU));
                }
            }
            if (VL_LTS_III(32, 0x10U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 0x10U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffeffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 0x10U));
                } else if (VL_LTS_III(32, 0x10U, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(0x10U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffeffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 0x10U));
                } else if (VL_LTS_III(32, 0x10U, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                   + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(0x10U) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(0x10U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(0x10U) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffeffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 0x10U));
                }
            }
            if (VL_LTS_III(32, 0x11U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 0x11U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 1U));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffdffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 0x11U));
                } else if (VL_LTS_III(32, 0x11U, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(0x11U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffdffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 0x11U));
                } else if (VL_LTS_III(32, 0x11U, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                   + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(0x11U) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(0x11U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(0x11U) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffdffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 0x11U));
                }
            }
            if (VL_LTS_III(32, 0x12U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 0x12U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 2U));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffbffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 0x12U));
                } else if (VL_LTS_III(32, 0x12U, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(0x12U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffbffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 0x12U));
                } else if (VL_LTS_III(32, 0x12U, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                   + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(0x12U) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(0x12U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(0x12U) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffbffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 0x12U));
                }
            }
            if (VL_LTS_III(32, 0x13U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 0x13U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 3U));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fff7ffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 0x13U));
                } else if (VL_LTS_III(32, 0x13U, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(0x13U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fff7ffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 0x13U));
                } else if (VL_LTS_III(32, 0x13U, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                   + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(0x13U) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(0x13U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(0x13U) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fff7ffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 0x13U));
                }
            }
            if (VL_LTS_III(32, 0x14U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 0x14U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 4U));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffefffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 0x14U));
                } else if (VL_LTS_III(32, 0x14U, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(0x14U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffefffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 0x14U));
                } else if (VL_LTS_III(32, 0x14U, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                   + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(0x14U) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(0x14U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(0x14U) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffefffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 0x14U));
                }
            }
            if (VL_LTS_III(32, 0x15U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 0x15U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 5U));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffdfffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 0x15U));
                } else if (VL_LTS_III(32, 0x15U, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(0x15U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffdfffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 0x15U));
                } else if (VL_LTS_III(32, 0x15U, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                   + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(0x15U) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(0x15U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(0x15U) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffdfffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 0x15U));
                }
            }
            if (VL_LTS_III(32, 0x16U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 0x16U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 6U));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffbfffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 0x16U));
                } else if (VL_LTS_III(32, 0x16U, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(0x16U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffbfffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 0x16U));
                } else if (VL_LTS_III(32, 0x16U, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                   + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(0x16U) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(0x16U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(0x16U) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffbfffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 0x16U));
                }
            }
            if (VL_LTS_III(32, 0x17U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 0x17U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 7U));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ff7fffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 0x17U));
                } else if (VL_LTS_III(32, 0x17U, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(0x17U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ff7fffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 0x17U));
                } else if (VL_LTS_III(32, 0x17U, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                   + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(0x17U) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(0x17U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(0x17U) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ff7fffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 0x17U));
                }
            }
            if (VL_LTS_III(32, 0x18U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 0x18U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 8U));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1feffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 0x18U));
                } else if (VL_LTS_III(32, 0x18U, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(0x18U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1feffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 0x18U));
                } else if (VL_LTS_III(32, 0x18U, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                   + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(0x18U) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(0x18U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(0x18U) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1feffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 0x18U));
                }
            }
            if (VL_LTS_III(32, 0x19U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 0x19U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 9U));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fdffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 0x19U));
                } else if (VL_LTS_III(32, 0x19U, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(0x19U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fdffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 0x19U));
                } else if (VL_LTS_III(32, 0x19U, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                   + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(0x19U) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(0x19U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(0x19U) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fdffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 0x19U));
                }
            }
            if (VL_LTS_III(32, 0x1aU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 0x1aU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 0xaU));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fbffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 0x1aU));
                } else if (VL_LTS_III(32, 0x1aU, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(0x1aU) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fbffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 0x1aU));
                } else if (VL_LTS_III(32, 0x1aU, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                   + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(0x1aU) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(0x1aU) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(0x1aU) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fbffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 0x1aU));
                }
            }
            if (VL_LTS_III(32, 0x1bU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 0x1bU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 0xbU));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1f7ffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 0x1bU));
                } else if (VL_LTS_III(32, 0x1bU, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(0x1bU) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1f7ffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 0x1bU));
                } else if (VL_LTS_III(32, 0x1bU, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                   + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(0x1bU) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(0x1bU) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(0x1bU) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1f7ffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 0x1bU));
                }
            }
            if (VL_LTS_III(32, 0x1cU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 0x1cU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 0xcU));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1efffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 0x1cU));
                } else if (VL_LTS_III(32, 0x1cU, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(0x1cU) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1efffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 0x1cU));
                } else if (VL_LTS_III(32, 0x1cU, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                   + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(0x1cU) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(0x1cU) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(0x1cU) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1efffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 0x1cU));
                }
            }
            if (VL_LTS_III(32, 0x1dU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 0x1dU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 0xdU));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1dfffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 0x1dU));
                } else if (VL_LTS_III(32, 0x1dU, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(0x1dU) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1dfffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 0x1dU));
                } else if (VL_LTS_III(32, 0x1dU, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                   + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(0x1dU) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(0x1dU) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(0x1dU) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1dfffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 0x1dU));
                }
            }
            if (VL_LTS_III(32, 0x1eU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 0x1eU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 0xeU));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1bfffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 0x1eU));
                } else if (VL_LTS_III(32, 0x1eU, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(0x1eU) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1bfffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 0x1eU));
                } else if (VL_LTS_III(32, 0x1eU, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                   + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(0x1eU) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(0x1eU) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(0x1eU) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1bfffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 0x1eU));
                }
            }
            if (VL_LTS_III(32, 0x1fU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 0x1fU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 0xfU));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x17fffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 0x1fU));
                } else if (VL_LTS_III(32, 0x1fU, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(0x1fU) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x17fffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 0x1fU));
                } else if (VL_LTS_III(32, 0x1fU, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                   + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(0x1fU) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(0x1fU) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(0x1fU) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x17fffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 0x1fU));
                }
            }
            if (VL_LTS_III(32, 0x20U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 0x20U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0xffffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 0x20U));
                } else if (VL_LTS_III(32, 0x20U, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & (- vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0xffffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 0x20U));
                } else if (VL_LTS_III(32, 0x20U, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                   + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(0x20U) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(0x20U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(0x20U) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0xffffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 0x20U));
                }
            }
        } else {
            if (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[0U]
                              : (VL_LTS_III(32, 0U, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (- vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((- vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos = 0U;
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, ((IData)(7U) 
                                       + (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                          + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 2U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(2U), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 3U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(3U), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 4U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(4U), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 5U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(5U), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 6U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(6U), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 7U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(7U), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 8U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(8U), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 9U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(9U), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 0xaU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0xaU), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 0xbU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0xbU), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 0xcU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0xcU), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 0xdU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0xdU), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 0xeU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0xeU), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 0xfU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0xfU), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 0x10U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 0x11U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x11U), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 0x12U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x12U), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 0x13U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x13U), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 0x14U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x14U), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 0x15U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x15U), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 0x16U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x16U), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 0x17U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x17U), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 0x18U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x18U), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 0x19U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x19U), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 0x1aU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x1aU), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 0x1bU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x1bU), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 0x1cU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x1cU), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 0x1dU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x1dU), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 0x1eU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x1eU), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 0x1fU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x1fU), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 0x20U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x20U), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
        }
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__remaining 
            = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter;
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__result 
            = (0x7ffU & (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__remaining));
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__rotation 
            = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__funct;
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__remaining 
            = (0x1ffffffffULL & VL_SHIFTR_QQI(33,33,32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__remaining, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__w));
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__chunk 
            = (0x7ffU & (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__remaining));
        if ((0xaU == vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__w)) {
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__result 
                = (0x3ffU & (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__result));
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__chunk 
                = (0x3ffU & (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__chunk));
        }
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__rotated 
            = (0x7ffU & (VL_SHIFTR_III(11,11,32, (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__chunk), vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__rotation) 
                         | VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__chunk), 
                                         (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__w 
                                          - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__rotation))));
        if ((0xaU == vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__w)) {
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__rotated 
                = (0x3ffU & (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__rotated));
        }
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__result 
            = ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__result) 
               ^ (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__rotated));
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__rotation 
            = VL_MODDIVS_III(32, ((IData)(1U) + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__rotation), vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__w);
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__remaining 
            = (0x1ffffffffULL & VL_SHIFTR_QQI(33,33,32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__remaining, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__w));
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__chunk 
            = (0x7ffU & (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__remaining));
        if ((0xaU == vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__w)) {
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__chunk 
                = (0x3ffU & (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__chunk));
        }
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__rotated 
            = (0x7ffU & (VL_SHIFTR_III(11,11,32, (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__chunk), vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__rotation) 
                         | VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__chunk), 
                                         (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__w 
                                          - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__rotation))));
        if ((0xaU == vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__w)) {
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__rotated 
                = (0x3ffU & (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__rotated));
        }
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__result 
            = ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__result) 
               ^ (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__rotated));
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__rotation 
            = VL_MODDIVS_III(32, ((IData)(1U) + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__rotation), vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__w);
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__Vfuncout 
            = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__result;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesF[(7U 
                                                                    & tb_ogehl_wally_extended__DOT__dut__DOT__fetch_indices__DOT__unnamedblk2__DOT__k)] 
            = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__Vfuncout;
        tb_ogehl_wally_extended__DOT__dut__DOT__fetch_indices__DOT__unnamedblk2__DOT__k 
            = ((IData)(1U) + tb_ogehl_wally_extended__DOT__dut__DOT__fetch_indices__DOT__unnamedblk2__DOT__k);
    }
    tb_ogehl_wally_extended__DOT__dut__DOT__f0 = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__T0
        [vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesF
        [0U]];
    tb_ogehl_wally_extended__DOT__dut__DOT__f1 = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__T1
        [(0x3ffU & vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesF
          [1U])];
    tb_ogehl_wally_extended__DOT__dut__DOT__f2 = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__T2
        [vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesF
        [2U]];
    tb_ogehl_wally_extended__DOT__dut__DOT__f3 = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__T3
        [vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesF
        [3U]];
    tb_ogehl_wally_extended__DOT__dut__DOT__f4 = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__T4
        [vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesF
        [4U]];
    tb_ogehl_wally_extended__DOT__dut__DOT__f5 = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__T5
        [vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesF
        [5U]];
    tb_ogehl_wally_extended__DOT__dut__DOT__f6 = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__T6
        [vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesF
        [6U]];
    tb_ogehl_wally_extended__DOT__dut__DOT__f7 = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__T7
        [vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesF
        [7U]];
    if (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__trainE) {
        if ((vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesF
             [0U] == vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE
             [0U])) {
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__74__actual_taken 
                = vlSelfRef.tb_ogehl_wally_extended__DOT__PCSrcE;
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__74__value 
                = tb_ogehl_wally_extended__DOT__dut__DOT__f0;
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__74__Vfuncout 
                = (0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__74__actual_taken)
                             ? ((0xfU == (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__74__value))
                                 ? (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__74__value)
                                 : ((IData)(1U) + (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__74__value)))
                             : ((0x10U == (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__74__value))
                                 ? (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__74__value)
                                 : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__74__value) 
                                    - (IData)(1U)))));
            tb_ogehl_wally_extended__DOT__dut__DOT__f0 
                = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__74__Vfuncout;
        }
        if ((vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesF
             [1U] == vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE
             [1U])) {
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__75__actual_taken 
                = vlSelfRef.tb_ogehl_wally_extended__DOT__PCSrcE;
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__75__value 
                = tb_ogehl_wally_extended__DOT__dut__DOT__f1;
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__75__Vfuncout 
                = (0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__75__actual_taken)
                             ? ((0xfU == (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__75__value))
                                 ? (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__75__value)
                                 : ((IData)(1U) + (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__75__value)))
                             : ((0x10U == (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__75__value))
                                 ? (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__75__value)
                                 : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__75__value) 
                                    - (IData)(1U)))));
            tb_ogehl_wally_extended__DOT__dut__DOT__f1 
                = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__75__Vfuncout;
        }
        if ((vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesF
             [2U] == vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE
             [2U])) {
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__76__actual_taken 
                = vlSelfRef.tb_ogehl_wally_extended__DOT__PCSrcE;
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__76__value 
                = tb_ogehl_wally_extended__DOT__dut__DOT__f2;
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__76__Vfuncout 
                = (0xfU & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__76__actual_taken)
                            ? ((7U == (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__76__value))
                                ? (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__76__value)
                                : ((IData)(1U) + (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__76__value)))
                            : ((8U == (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__76__value))
                                ? (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__76__value)
                                : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__76__value) 
                                   - (IData)(1U)))));
            tb_ogehl_wally_extended__DOT__dut__DOT__f2 
                = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__76__Vfuncout;
        }
        if ((vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesF
             [3U] == vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE
             [3U])) {
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__77__actual_taken 
                = vlSelfRef.tb_ogehl_wally_extended__DOT__PCSrcE;
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__77__value 
                = tb_ogehl_wally_extended__DOT__dut__DOT__f3;
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__77__Vfuncout 
                = (0xfU & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__77__actual_taken)
                            ? ((7U == (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__77__value))
                                ? (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__77__value)
                                : ((IData)(1U) + (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__77__value)))
                            : ((8U == (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__77__value))
                                ? (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__77__value)
                                : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__77__value) 
                                   - (IData)(1U)))));
            tb_ogehl_wally_extended__DOT__dut__DOT__f3 
                = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__77__Vfuncout;
        }
        if ((vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesF
             [4U] == vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE
             [4U])) {
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__78__actual_taken 
                = vlSelfRef.tb_ogehl_wally_extended__DOT__PCSrcE;
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__78__value 
                = tb_ogehl_wally_extended__DOT__dut__DOT__f4;
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__78__Vfuncout 
                = (0xfU & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__78__actual_taken)
                            ? ((7U == (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__78__value))
                                ? (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__78__value)
                                : ((IData)(1U) + (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__78__value)))
                            : ((8U == (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__78__value))
                                ? (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__78__value)
                                : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__78__value) 
                                   - (IData)(1U)))));
            tb_ogehl_wally_extended__DOT__dut__DOT__f4 
                = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__78__Vfuncout;
        }
        if ((vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesF
             [5U] == vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE
             [5U])) {
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__79__actual_taken 
                = vlSelfRef.tb_ogehl_wally_extended__DOT__PCSrcE;
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__79__value 
                = tb_ogehl_wally_extended__DOT__dut__DOT__f5;
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__79__Vfuncout 
                = (0xfU & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__79__actual_taken)
                            ? ((7U == (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__79__value))
                                ? (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__79__value)
                                : ((IData)(1U) + (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__79__value)))
                            : ((8U == (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__79__value))
                                ? (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__79__value)
                                : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__79__value) 
                                   - (IData)(1U)))));
            tb_ogehl_wally_extended__DOT__dut__DOT__f5 
                = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__79__Vfuncout;
        }
        if ((vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesF
             [6U] == vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE
             [6U])) {
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__80__actual_taken 
                = vlSelfRef.tb_ogehl_wally_extended__DOT__PCSrcE;
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__80__value 
                = tb_ogehl_wally_extended__DOT__dut__DOT__f6;
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__80__Vfuncout 
                = (0xfU & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__80__actual_taken)
                            ? ((7U == (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__80__value))
                                ? (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__80__value)
                                : ((IData)(1U) + (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__80__value)))
                            : ((8U == (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__80__value))
                                ? (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__80__value)
                                : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__80__value) 
                                   - (IData)(1U)))));
            tb_ogehl_wally_extended__DOT__dut__DOT__f6 
                = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__80__Vfuncout;
        }
        if ((vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesF
             [7U] == vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE
             [7U])) {
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__81__actual_taken 
                = vlSelfRef.tb_ogehl_wally_extended__DOT__PCSrcE;
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__81__value 
                = tb_ogehl_wally_extended__DOT__dut__DOT__f7;
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__81__Vfuncout 
                = (0xfU & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__81__actual_taken)
                            ? ((7U == (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__81__value))
                                ? (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__81__value)
                                : ((IData)(1U) + (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__81__value)))
                            : ((8U == (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__81__value))
                                ? (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__81__value)
                                : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__81__value) 
                                   - (IData)(1U)))));
            tb_ogehl_wally_extended__DOT__dut__DOT__f7 
                = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__81__Vfuncout;
        }
    }
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__prediction_sumF 
        = (0xffffU & ((IData)(4U) + ([&]() {
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend5__82__counter_value 
                        = tb_ogehl_wally_extended__DOT__dut__DOT__f0;
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend5__82__Vfuncout 
                        = ((0xffe0U & ((- (IData)((1U 
                                                   & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend5__82__counter_value) 
                                                      >> 4U)))) 
                                       << 5U)) | (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend5__82__counter_value));
                }(), (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend5__82__Vfuncout))));
    __Vtemp_52 = (0xffffU & ((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__prediction_sumF) 
                             + ([&]() {
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend5__83__counter_value 
                        = tb_ogehl_wally_extended__DOT__dut__DOT__f1;
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend5__83__Vfuncout 
                        = ((0xffe0U & ((- (IData)((1U 
                                                   & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend5__83__counter_value) 
                                                      >> 4U)))) 
                                       << 5U)) | (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend5__83__counter_value));
                }(), (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend5__83__Vfuncout))));
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__prediction_sumF 
        = __Vtemp_52;
    __Vtemp_53 = (0xffffU & ((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__prediction_sumF) 
                             + ([&]() {
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__84__counter_value 
                        = tb_ogehl_wally_extended__DOT__dut__DOT__f2;
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__84__Vfuncout 
                        = ((0xfff0U & ((- (IData)((1U 
                                                   & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__84__counter_value) 
                                                      >> 3U)))) 
                                       << 4U)) | (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__84__counter_value));
                }(), (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__84__Vfuncout))));
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__prediction_sumF 
        = __Vtemp_53;
    __Vtemp_54 = (0xffffU & ((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__prediction_sumF) 
                             + ([&]() {
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__85__counter_value 
                        = tb_ogehl_wally_extended__DOT__dut__DOT__f3;
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__85__Vfuncout 
                        = ((0xfff0U & ((- (IData)((1U 
                                                   & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__85__counter_value) 
                                                      >> 3U)))) 
                                       << 4U)) | (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__85__counter_value));
                }(), (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__85__Vfuncout))));
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__prediction_sumF 
        = __Vtemp_54;
    __Vtemp_55 = (0xffffU & ((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__prediction_sumF) 
                             + ([&]() {
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__86__counter_value 
                        = tb_ogehl_wally_extended__DOT__dut__DOT__f4;
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__86__Vfuncout 
                        = ((0xfff0U & ((- (IData)((1U 
                                                   & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__86__counter_value) 
                                                      >> 3U)))) 
                                       << 4U)) | (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__86__counter_value));
                }(), (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__86__Vfuncout))));
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__prediction_sumF 
        = __Vtemp_55;
    __Vtemp_56 = (0xffffU & ((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__prediction_sumF) 
                             + ([&]() {
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__87__counter_value 
                        = tb_ogehl_wally_extended__DOT__dut__DOT__f5;
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__87__Vfuncout 
                        = ((0xfff0U & ((- (IData)((1U 
                                                   & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__87__counter_value) 
                                                      >> 3U)))) 
                                       << 4U)) | (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__87__counter_value));
                }(), (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__87__Vfuncout))));
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__prediction_sumF 
        = __Vtemp_56;
    __Vtemp_57 = (0xffffU & ((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__prediction_sumF) 
                             + ([&]() {
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__88__counter_value 
                        = tb_ogehl_wally_extended__DOT__dut__DOT__f6;
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__88__Vfuncout 
                        = ((0xfff0U & ((- (IData)((1U 
                                                   & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__88__counter_value) 
                                                      >> 3U)))) 
                                       << 4U)) | (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__88__counter_value));
                }(), (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__88__Vfuncout))));
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__prediction_sumF 
        = __Vtemp_57;
    __Vtemp_58 = (0xffffU & ((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__prediction_sumF) 
                             + ([&]() {
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__89__counter_value 
                        = tb_ogehl_wally_extended__DOT__dut__DOT__f7;
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__89__Vfuncout 
                        = ((0xfff0U & ((- (IData)((1U 
                                                   & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__89__counter_value) 
                                                      >> 3U)))) 
                                       << 4U)) | (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__89__counter_value));
                }(), (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__89__Vfuncout))));
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__prediction_sumF 
        = __Vtemp_58;
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__raw_predictionF 
        = VL_LTES_III(16, 0U, (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__prediction_sumF));
}

void Vtb_ogehl_wally_extended___024root___nba_sequent__TOP__0(Vtb_ogehl_wally_extended___024root* vlSelf);
void Vtb_ogehl_wally_extended___024root___nba_comb__TOP__0(Vtb_ogehl_wally_extended___024root* vlSelf);

void Vtb_ogehl_wally_extended___024root___eval_nba(Vtb_ogehl_wally_extended___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ogehl_wally_extended___024root___eval_nba\n"); );
    Vtb_ogehl_wally_extended__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_ogehl_wally_extended___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_ogehl_wally_extended___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_ogehl_wally_extended___024root___nba_sequent__TOP__0(Vtb_ogehl_wally_extended___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ogehl_wally_extended___024root___nba_sequent__TOP__0\n"); );
    Vtb_ogehl_wally_extended__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<7>/*199:0*/ __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__90__Vfuncout;
    VL_ZERO_W(200, __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__90__Vfuncout);
    VlWide<7>/*199:0*/ __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__90__history;
    VL_ZERO_W(200, __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__90__history);
    CData/*0:0*/ __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__90__outcome;
    __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__90__outcome = 0;
    SData/*15:0*/ __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_path__91__Vfuncout;
    __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_path__91__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_path__91__history;
    __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_path__91__history = 0;
    CData/*0:0*/ __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_path__91__pc_bit0;
    __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_path__91__pc_bit0 = 0;
    CData/*4:0*/ __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__92__Vfuncout;
    __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__92__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__92__value;
    __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__92__value = 0;
    CData/*0:0*/ __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__92__actual_taken;
    __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__92__actual_taken = 0;
    CData/*4:0*/ __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__93__Vfuncout;
    __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__93__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__93__value;
    __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__93__value = 0;
    CData/*0:0*/ __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__93__actual_taken;
    __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__93__actual_taken = 0;
    CData/*3:0*/ __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__94__Vfuncout;
    __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__94__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__94__value;
    __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__94__value = 0;
    CData/*0:0*/ __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__94__actual_taken;
    __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__94__actual_taken = 0;
    CData/*3:0*/ __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__95__Vfuncout;
    __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__95__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__95__value;
    __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__95__value = 0;
    CData/*0:0*/ __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__95__actual_taken;
    __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__95__actual_taken = 0;
    CData/*3:0*/ __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__96__Vfuncout;
    __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__96__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__96__value;
    __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__96__value = 0;
    CData/*0:0*/ __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__96__actual_taken;
    __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__96__actual_taken = 0;
    CData/*3:0*/ __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__97__Vfuncout;
    __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__97__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__97__value;
    __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__97__value = 0;
    CData/*0:0*/ __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__97__actual_taken;
    __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__97__actual_taken = 0;
    CData/*3:0*/ __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__98__Vfuncout;
    __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__98__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__98__value;
    __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__98__value = 0;
    CData/*0:0*/ __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__98__actual_taken;
    __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__98__actual_taken = 0;
    CData/*3:0*/ __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__99__Vfuncout;
    __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__99__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__99__value;
    __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__99__value = 0;
    CData/*0:0*/ __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__99__actual_taken;
    __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__99__actual_taken = 0;
    SData/*15:0*/ __Vdly__tb_ogehl_wally_extended__DOT__dut__DOT__committed_path_history;
    __Vdly__tb_ogehl_wally_extended__DOT__dut__DOT__committed_path_history = 0;
    VlWide<7>/*199:0*/ __Vdly__tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history;
    VL_ZERO_W(200, __Vdly__tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history);
    CData/*0:0*/ __VdlySet__tb_ogehl_wally_extended__DOT__dut__DOT__UsedHistLength__v0;
    __VdlySet__tb_ogehl_wally_extended__DOT__dut__DOT__UsedHistLength__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_ogehl_wally_extended__DOT__dut__DOT__UsedHistLength__v8;
    __VdlySet__tb_ogehl_wally_extended__DOT__dut__DOT__UsedHistLength__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_ogehl_wally_extended__DOT__dut__DOT__UsedHistLength__v11;
    __VdlySet__tb_ogehl_wally_extended__DOT__dut__DOT__UsedHistLength__v11 = 0;
    CData/*0:0*/ __VdlySet__tb_ogehl_wally_extended__DOT__dut__DOT__indicesD__v0;
    __VdlySet__tb_ogehl_wally_extended__DOT__dut__DOT__indicesD__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_ogehl_wally_extended__DOT__dut__DOT__indicesD__v8;
    __VdlySet__tb_ogehl_wally_extended__DOT__dut__DOT__indicesD__v8 = 0;
    SData/*10:0*/ __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesD__v16;
    __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesD__v16 = 0;
    CData/*0:0*/ __VdlySet__tb_ogehl_wally_extended__DOT__dut__DOT__indicesD__v16;
    __VdlySet__tb_ogehl_wally_extended__DOT__dut__DOT__indicesD__v16 = 0;
    SData/*10:0*/ __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesD__v17;
    __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesD__v17 = 0;
    SData/*10:0*/ __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesD__v18;
    __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesD__v18 = 0;
    SData/*10:0*/ __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesD__v19;
    __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesD__v19 = 0;
    SData/*10:0*/ __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesD__v20;
    __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesD__v20 = 0;
    SData/*10:0*/ __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesD__v21;
    __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesD__v21 = 0;
    SData/*10:0*/ __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesD__v22;
    __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesD__v22 = 0;
    SData/*10:0*/ __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesD__v23;
    __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesD__v23 = 0;
    SData/*10:0*/ __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T0__v0;
    __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T0__v0 = 0;
    SData/*9:0*/ __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T1__v0;
    __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T1__v0 = 0;
    SData/*10:0*/ __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T2__v0;
    __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T2__v0 = 0;
    SData/*10:0*/ __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T3__v0;
    __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T3__v0 = 0;
    SData/*10:0*/ __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T4__v0;
    __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T4__v0 = 0;
    SData/*10:0*/ __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T5__v0;
    __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T5__v0 = 0;
    SData/*10:0*/ __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T6__v0;
    __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T6__v0 = 0;
    SData/*10:0*/ __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T7__v0;
    __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T7__v0 = 0;
    SData/*9:0*/ __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__MINITAG__v0;
    __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__MINITAG__v0 = 0;
    CData/*0:0*/ __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__MINITAG__v1;
    __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__MINITAG__v1 = 0;
    SData/*9:0*/ __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__MINITAG__v1;
    __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__MINITAG__v1 = 0;
    CData/*4:0*/ __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__T0__v1;
    __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__T0__v1 = 0;
    SData/*10:0*/ __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T0__v1;
    __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T0__v1 = 0;
    CData/*4:0*/ __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__T1__v1;
    __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__T1__v1 = 0;
    SData/*9:0*/ __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T1__v1;
    __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T1__v1 = 0;
    CData/*3:0*/ __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__T2__v1;
    __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__T2__v1 = 0;
    SData/*10:0*/ __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T2__v1;
    __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T2__v1 = 0;
    CData/*3:0*/ __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__T3__v1;
    __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__T3__v1 = 0;
    SData/*10:0*/ __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T3__v1;
    __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T3__v1 = 0;
    CData/*3:0*/ __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__T4__v1;
    __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__T4__v1 = 0;
    SData/*10:0*/ __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T4__v1;
    __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T4__v1 = 0;
    CData/*3:0*/ __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__T5__v1;
    __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__T5__v1 = 0;
    SData/*10:0*/ __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T5__v1;
    __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T5__v1 = 0;
    CData/*3:0*/ __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__T6__v1;
    __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__T6__v1 = 0;
    SData/*10:0*/ __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T6__v1;
    __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T6__v1 = 0;
    CData/*3:0*/ __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__T7__v1;
    __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__T7__v1 = 0;
    SData/*10:0*/ __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T7__v1;
    __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T7__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_ogehl_wally_extended__DOT__dut__DOT__indicesE__v0;
    __VdlySet__tb_ogehl_wally_extended__DOT__dut__DOT__indicesE__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_ogehl_wally_extended__DOT__dut__DOT__indicesE__v8;
    __VdlySet__tb_ogehl_wally_extended__DOT__dut__DOT__indicesE__v8 = 0;
    SData/*10:0*/ __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesE__v16;
    __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesE__v16 = 0;
    CData/*0:0*/ __VdlySet__tb_ogehl_wally_extended__DOT__dut__DOT__indicesE__v16;
    __VdlySet__tb_ogehl_wally_extended__DOT__dut__DOT__indicesE__v16 = 0;
    SData/*10:0*/ __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesE__v17;
    __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesE__v17 = 0;
    SData/*10:0*/ __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesE__v18;
    __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesE__v18 = 0;
    SData/*10:0*/ __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesE__v19;
    __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesE__v19 = 0;
    SData/*10:0*/ __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesE__v20;
    __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesE__v20 = 0;
    SData/*10:0*/ __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesE__v21;
    __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesE__v21 = 0;
    SData/*10:0*/ __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesE__v22;
    __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesE__v22 = 0;
    SData/*10:0*/ __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesE__v23;
    __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesE__v23 = 0;
    // Body
    __VdlySet__tb_ogehl_wally_extended__DOT__dut__DOT__indicesD__v0 = 0U;
    __VdlySet__tb_ogehl_wally_extended__DOT__dut__DOT__indicesD__v8 = 0U;
    __VdlySet__tb_ogehl_wally_extended__DOT__dut__DOT__indicesD__v16 = 0U;
    __Vdly__tb_ogehl_wally_extended__DOT__dut__DOT__committed_path_history 
        = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_path_history;
    __Vdly__tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[0U] 
        = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[0U];
    __Vdly__tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[1U] 
        = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[1U];
    __Vdly__tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[2U] 
        = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[2U];
    __Vdly__tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[3U] 
        = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[3U];
    __Vdly__tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[4U] 
        = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[4U];
    __Vdly__tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[5U] 
        = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[5U];
    __Vdly__tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[6U] 
        = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[6U];
    __VdlySet__tb_ogehl_wally_extended__DOT__dut__DOT__UsedHistLength__v0 = 0U;
    __VdlySet__tb_ogehl_wally_extended__DOT__dut__DOT__UsedHistLength__v8 = 0U;
    __VdlySet__tb_ogehl_wally_extended__DOT__dut__DOT__UsedHistLength__v11 = 0U;
    __VdlySet__tb_ogehl_wally_extended__DOT__dut__DOT__indicesE__v0 = 0U;
    __VdlySet__tb_ogehl_wally_extended__DOT__dut__DOT__indicesE__v8 = 0U;
    __VdlySet__tb_ogehl_wally_extended__DOT__dut__DOT__indicesE__v16 = 0U;
    if (vlSelfRef.tb_ogehl_wally_extended__DOT__reset) {
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__predictor_state__DOT__unnamedblk3__DOT__i = 0U;
        while (VL_GTS_III(32, 0x800U, vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__predictor_state__DOT__unnamedblk3__DOT__i)) {
            __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T0__v0 
                = (0x7ffU & vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__predictor_state__DOT__unnamedblk3__DOT__i);
            vlSelfRef.__VdlyCommitQueuetb_ogehl_wally_extended__DOT__dut__DOT__T0.enqueue(0U, (IData)(__VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T0__v0));
            if (VL_GTS_III(32, 0x400U, vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__predictor_state__DOT__unnamedblk3__DOT__i)) {
                __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T1__v0 
                    = (0x3ffU & vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__predictor_state__DOT__unnamedblk3__DOT__i);
                vlSelfRef.__VdlyCommitQueuetb_ogehl_wally_extended__DOT__dut__DOT__T1.enqueue(0U, (IData)(__VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T1__v0));
            }
            __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T2__v0 
                = (0x7ffU & vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__predictor_state__DOT__unnamedblk3__DOT__i);
            vlSelfRef.__VdlyCommitQueuetb_ogehl_wally_extended__DOT__dut__DOT__T2.enqueue(0U, (IData)(__VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T2__v0));
            __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T3__v0 
                = (0x7ffU & vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__predictor_state__DOT__unnamedblk3__DOT__i);
            vlSelfRef.__VdlyCommitQueuetb_ogehl_wally_extended__DOT__dut__DOT__T3.enqueue(0U, (IData)(__VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T3__v0));
            __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T4__v0 
                = (0x7ffU & vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__predictor_state__DOT__unnamedblk3__DOT__i);
            vlSelfRef.__VdlyCommitQueuetb_ogehl_wally_extended__DOT__dut__DOT__T4.enqueue(0U, (IData)(__VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T4__v0));
            __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T5__v0 
                = (0x7ffU & vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__predictor_state__DOT__unnamedblk3__DOT__i);
            vlSelfRef.__VdlyCommitQueuetb_ogehl_wally_extended__DOT__dut__DOT__T5.enqueue(0U, (IData)(__VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T5__v0));
            __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T6__v0 
                = (0x7ffU & vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__predictor_state__DOT__unnamedblk3__DOT__i);
            vlSelfRef.__VdlyCommitQueuetb_ogehl_wally_extended__DOT__dut__DOT__T6.enqueue(0U, (IData)(__VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T6__v0));
            __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T7__v0 
                = (0x7ffU & vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__predictor_state__DOT__unnamedblk3__DOT__i);
            vlSelfRef.__VdlyCommitQueuetb_ogehl_wally_extended__DOT__dut__DOT__T7.enqueue(0U, (IData)(__VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T7__v0));
            if (VL_GTS_III(32, 0x400U, vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__predictor_state__DOT__unnamedblk3__DOT__i)) {
                __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__MINITAG__v0 
                    = (0x3ffU & vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__predictor_state__DOT__unnamedblk3__DOT__i);
                vlSelfRef.__VdlyCommitQueuetb_ogehl_wally_extended__DOT__dut__DOT__MINITAG.enqueue(0U, (IData)(__VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__MINITAG__v0));
            }
            vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__predictor_state__DOT__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__predictor_state__DOT__unnamedblk3__DOT__i);
        }
    } else if (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__resolve_condE) {
        if (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__trainE) {
            __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__92__actual_taken 
                = vlSelfRef.tb_ogehl_wally_extended__DOT__PCSrcE;
            __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__93__actual_taken 
                = vlSelfRef.tb_ogehl_wally_extended__DOT__PCSrcE;
            __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__94__actual_taken 
                = vlSelfRef.tb_ogehl_wally_extended__DOT__PCSrcE;
            __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__95__actual_taken 
                = vlSelfRef.tb_ogehl_wally_extended__DOT__PCSrcE;
            __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__96__actual_taken 
                = vlSelfRef.tb_ogehl_wally_extended__DOT__PCSrcE;
            __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__97__actual_taken 
                = vlSelfRef.tb_ogehl_wally_extended__DOT__PCSrcE;
            __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__98__actual_taken 
                = vlSelfRef.tb_ogehl_wally_extended__DOT__PCSrcE;
            __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__99__actual_taken 
                = vlSelfRef.tb_ogehl_wally_extended__DOT__PCSrcE;
            __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__92__value 
                = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__T0
                [vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE
                [0U]];
            __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__93__value 
                = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__T1
                [(0x3ffU & vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE
                  [1U])];
            __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__94__value 
                = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__T2
                [vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE
                [2U]];
            __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__95__value 
                = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__T3
                [vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE
                [3U]];
            __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__96__value 
                = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__T4
                [vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE
                [4U]];
            __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__97__value 
                = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__T5
                [vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE
                [5U]];
            __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__98__value 
                = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__T6
                [vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE
                [6U]];
            __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__99__value 
                = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__T7
                [vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE
                [7U]];
            __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__92__Vfuncout 
                = (0x1fU & ((IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__92__actual_taken)
                             ? ((0xfU == (IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__92__value))
                                 ? (IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__92__value)
                                 : ((IData)(1U) + (IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__92__value)))
                             : ((0x10U == (IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__92__value))
                                 ? (IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__92__value)
                                 : ((IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__92__value) 
                                    - (IData)(1U)))));
            __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__93__Vfuncout 
                = (0x1fU & ((IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__93__actual_taken)
                             ? ((0xfU == (IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__93__value))
                                 ? (IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__93__value)
                                 : ((IData)(1U) + (IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__93__value)))
                             : ((0x10U == (IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__93__value))
                                 ? (IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__93__value)
                                 : ((IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__93__value) 
                                    - (IData)(1U)))));
            __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__94__Vfuncout 
                = (0xfU & ((IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__94__actual_taken)
                            ? ((7U == (IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__94__value))
                                ? (IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__94__value)
                                : ((IData)(1U) + (IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__94__value)))
                            : ((8U == (IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__94__value))
                                ? (IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__94__value)
                                : ((IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__94__value) 
                                   - (IData)(1U)))));
            __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__95__Vfuncout 
                = (0xfU & ((IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__95__actual_taken)
                            ? ((7U == (IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__95__value))
                                ? (IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__95__value)
                                : ((IData)(1U) + (IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__95__value)))
                            : ((8U == (IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__95__value))
                                ? (IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__95__value)
                                : ((IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__95__value) 
                                   - (IData)(1U)))));
            __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__96__Vfuncout 
                = (0xfU & ((IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__96__actual_taken)
                            ? ((7U == (IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__96__value))
                                ? (IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__96__value)
                                : ((IData)(1U) + (IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__96__value)))
                            : ((8U == (IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__96__value))
                                ? (IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__96__value)
                                : ((IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__96__value) 
                                   - (IData)(1U)))));
            __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__97__Vfuncout 
                = (0xfU & ((IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__97__actual_taken)
                            ? ((7U == (IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__97__value))
                                ? (IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__97__value)
                                : ((IData)(1U) + (IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__97__value)))
                            : ((8U == (IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__97__value))
                                ? (IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__97__value)
                                : ((IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__97__value) 
                                   - (IData)(1U)))));
            __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__98__Vfuncout 
                = (0xfU & ((IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__98__actual_taken)
                            ? ((7U == (IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__98__value))
                                ? (IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__98__value)
                                : ((IData)(1U) + (IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__98__value)))
                            : ((8U == (IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__98__value))
                                ? (IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__98__value)
                                : ((IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__98__value) 
                                   - (IData)(1U)))));
            __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__99__Vfuncout 
                = (0xfU & ((IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__99__actual_taken)
                            ? ((7U == (IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__99__value))
                                ? (IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__99__value)
                                : ((IData)(1U) + (IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__99__value)))
                            : ((8U == (IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__99__value))
                                ? (IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__99__value)
                                : ((IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__99__value) 
                                   - (IData)(1U)))));
            if (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__alias_checkE) {
                __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__MINITAG__v1 
                    = (1U & vlSelfRef.tb_ogehl_wally_extended__DOT__PCE);
                __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__MINITAG__v1 
                    = (0x3ffU & (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE
                                 [7U] >> 1U));
                vlSelfRef.__VdlyCommitQueuetb_ogehl_wally_extended__DOT__dut__DOT__MINITAG.enqueue(__VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__MINITAG__v1, (IData)(__VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__MINITAG__v1));
            }
            __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__T0__v1 
                = __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__92__Vfuncout;
            __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T0__v1 
                = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE
                [0U];
            vlSelfRef.__VdlyCommitQueuetb_ogehl_wally_extended__DOT__dut__DOT__T0.enqueue(__VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__T0__v1, (IData)(__VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T0__v1));
            __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__T1__v1 
                = __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__93__Vfuncout;
            __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T1__v1 
                = (0x3ffU & vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE
                   [1U]);
            vlSelfRef.__VdlyCommitQueuetb_ogehl_wally_extended__DOT__dut__DOT__T1.enqueue(__VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__T1__v1, (IData)(__VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T1__v1));
            __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__T2__v1 
                = __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__94__Vfuncout;
            __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T2__v1 
                = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE
                [2U];
            vlSelfRef.__VdlyCommitQueuetb_ogehl_wally_extended__DOT__dut__DOT__T2.enqueue(__VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__T2__v1, (IData)(__VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T2__v1));
            __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__T3__v1 
                = __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__95__Vfuncout;
            __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T3__v1 
                = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE
                [3U];
            vlSelfRef.__VdlyCommitQueuetb_ogehl_wally_extended__DOT__dut__DOT__T3.enqueue(__VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__T3__v1, (IData)(__VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T3__v1));
            __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__T4__v1 
                = __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__96__Vfuncout;
            __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T4__v1 
                = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE
                [4U];
            vlSelfRef.__VdlyCommitQueuetb_ogehl_wally_extended__DOT__dut__DOT__T4.enqueue(__VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__T4__v1, (IData)(__VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T4__v1));
            __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__T5__v1 
                = __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__97__Vfuncout;
            __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T5__v1 
                = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE
                [5U];
            vlSelfRef.__VdlyCommitQueuetb_ogehl_wally_extended__DOT__dut__DOT__T5.enqueue(__VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__T5__v1, (IData)(__VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T5__v1));
            __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__T6__v1 
                = __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__98__Vfuncout;
            __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T6__v1 
                = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE
                [6U];
            vlSelfRef.__VdlyCommitQueuetb_ogehl_wally_extended__DOT__dut__DOT__T6.enqueue(__VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__T6__v1, (IData)(__VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T6__v1));
            __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__T7__v1 
                = __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__99__Vfuncout;
            __VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T7__v1 
                = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE
                [7U];
            vlSelfRef.__VdlyCommitQueuetb_ogehl_wally_extended__DOT__dut__DOT__T7.enqueue(__VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__T7__v1, (IData)(__VdlyDim0__tb_ogehl_wally_extended__DOT__dut__DOT__T7__v1));
        }
    }
    if (vlSelfRef.tb_ogehl_wally_extended__DOT__reset) {
        __VdlySet__tb_ogehl_wally_extended__DOT__dut__DOT__indicesD__v0 = 1U;
        __Vdly__tb_ogehl_wally_extended__DOT__dut__DOT__committed_path_history = 0U;
        __Vdly__tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[0U] = 0U;
        __Vdly__tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[1U] = 0U;
        __Vdly__tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[2U] = 0U;
        __Vdly__tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[3U] = 0U;
        __Vdly__tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[4U] = 0U;
        __Vdly__tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[5U] = 0U;
        __Vdly__tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[6U] = 0U;
        __VdlySet__tb_ogehl_wally_extended__DOT__dut__DOT__UsedHistLength__v0 = 1U;
        __VdlySet__tb_ogehl_wally_extended__DOT__dut__DOT__indicesE__v0 = 1U;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__steered_takenD = 0U;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__TC = 0U;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__thresupdate = 8U;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__prediction_sumE = 0U;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__meta_validE = 0U;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__AC = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__StallD)))) {
            if (vlSelfRef.tb_ogehl_wally_extended__DOT__FlushD) {
                __VdlySet__tb_ogehl_wally_extended__DOT__dut__DOT__indicesD__v8 = 1U;
            } else {
                __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesD__v16 
                    = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesF
                    [0U];
                __VdlySet__tb_ogehl_wally_extended__DOT__dut__DOT__indicesD__v16 = 1U;
                __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesD__v17 
                    = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesF
                    [1U];
                __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesD__v18 
                    = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesF
                    [2U];
                __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesD__v19 
                    = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesF
                    [3U];
                __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesD__v20 
                    = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesF
                    [4U];
                __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesD__v21 
                    = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesF
                    [5U];
                __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesD__v22 
                    = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesF
                    [6U];
                __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesD__v23 
                    = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesF
                    [7U];
            }
            vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__steered_takenD 
                = ((1U & (~ (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__FlushD))) 
                   && ((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__BPJumpF) 
                       | ((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__BPBranchF) 
                          & (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__raw_predictionF))));
        }
        if (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__resolve_cfiE) {
            __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_path__91__pc_bit0 
                = (1U & vlSelfRef.tb_ogehl_wally_extended__DOT__PCE);
            __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_path__91__history 
                = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_path_history;
            __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_path__91__Vfuncout 
                = ((0xfffeU & ((IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_path__91__history) 
                               << 1U)) | (IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_path__91__pc_bit0));
            __Vdly__tb_ogehl_wally_extended__DOT__dut__DOT__committed_path_history 
                = __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_path__91__Vfuncout;
            __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__90__outcome 
                = ((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__resolve_jumpE) 
                   | (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__PCSrcE));
            __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__90__history[0U] 
                = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[0U];
            __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__90__history[1U] 
                = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[1U];
            __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__90__history[2U] 
                = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[2U];
            __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__90__history[3U] 
                = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[3U];
            __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__90__history[4U] 
                = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[4U];
            __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__90__history[5U] 
                = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[5U];
            __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__90__history[6U] 
                = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[6U];
            __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__90__Vfuncout[0U] 
                = ((__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__90__history[0U] 
                    << 1U) | (IData)(__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__90__outcome));
            __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__90__Vfuncout[1U] 
                = ((__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__90__history[0U] 
                    >> 0x1fU) | (__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__90__history[1U] 
                                 << 1U));
            __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__90__Vfuncout[2U] 
                = ((__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__90__history[1U] 
                    >> 0x1fU) | (__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__90__history[2U] 
                                 << 1U));
            __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__90__Vfuncout[3U] 
                = ((__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__90__history[2U] 
                    >> 0x1fU) | (__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__90__history[3U] 
                                 << 1U));
            __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__90__Vfuncout[4U] 
                = ((__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__90__history[3U] 
                    >> 0x1fU) | (__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__90__history[4U] 
                                 << 1U));
            __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__90__Vfuncout[5U] 
                = ((__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__90__history[4U] 
                    >> 0x1fU) | (__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__90__history[5U] 
                                 << 1U));
            __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__90__Vfuncout[6U] 
                = ((__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__90__history[5U] 
                    >> 0x1fU) | (0xfeU & (__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__90__history[6U] 
                                          << 1U)));
            __Vdly__tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[0U] 
                = __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__90__Vfuncout[0U];
            __Vdly__tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[1U] 
                = __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__90__Vfuncout[1U];
            __Vdly__tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[2U] 
                = __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__90__Vfuncout[2U];
            __Vdly__tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[3U] 
                = __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__90__Vfuncout[3U];
            __Vdly__tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[4U] 
                = __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__90__Vfuncout[4U];
            __Vdly__tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[5U] 
                = __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__90__Vfuncout[5U];
            __Vdly__tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[6U] 
                = __Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__90__Vfuncout[6U];
        }
        if (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__resolve_condE) {
            if (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__trainE) {
                if (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__alias_checkE) {
                    if (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__direction_wrongE) {
                        if (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__switch_shortE) {
                            __VdlySet__tb_ogehl_wally_extended__DOT__dut__DOT__UsedHistLength__v8 = 1U;
                        } else if (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__switch_longE) {
                            __VdlySet__tb_ogehl_wally_extended__DOT__dut__DOT__UsedHistLength__v11 = 1U;
                        }
                        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__AC 
                            = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__ac_nextE;
                    }
                }
            }
            vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__TC 
                = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__tc_nextE;
            vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__thresupdate 
                = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__thres_nextE;
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__StallE)))) {
            if (vlSelfRef.tb_ogehl_wally_extended__DOT__FlushE) {
                __VdlySet__tb_ogehl_wally_extended__DOT__dut__DOT__indicesE__v8 = 1U;
                vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__prediction_sumE = 0U;
            } else {
                __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesE__v16 
                    = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesD
                    [0U];
                __VdlySet__tb_ogehl_wally_extended__DOT__dut__DOT__indicesE__v16 = 1U;
                __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesE__v17 
                    = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesD
                    [1U];
                __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesE__v18 
                    = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesD
                    [2U];
                __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesE__v19 
                    = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesD
                    [3U];
                __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesE__v20 
                    = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesD
                    [4U];
                __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesE__v21 
                    = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesD
                    [5U];
                __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesE__v22 
                    = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesD
                    [6U];
                __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesE__v23 
                    = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesD
                    [7U];
                vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__prediction_sumE 
                    = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__prediction_sumD;
            }
            vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__meta_validE 
                = ((1U & (~ (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__FlushE))) 
                   && ((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__meta_validD) 
                       & (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__InstrValidD)));
        }
    }
    vlSelfRef.__VdlyCommitQueuetb_ogehl_wally_extended__DOT__dut__DOT__T0.commit(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__T0);
    vlSelfRef.__VdlyCommitQueuetb_ogehl_wally_extended__DOT__dut__DOT__T1.commit(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__T1);
    vlSelfRef.__VdlyCommitQueuetb_ogehl_wally_extended__DOT__dut__DOT__T2.commit(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__T2);
    vlSelfRef.__VdlyCommitQueuetb_ogehl_wally_extended__DOT__dut__DOT__T3.commit(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__T3);
    vlSelfRef.__VdlyCommitQueuetb_ogehl_wally_extended__DOT__dut__DOT__T4.commit(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__T4);
    vlSelfRef.__VdlyCommitQueuetb_ogehl_wally_extended__DOT__dut__DOT__T5.commit(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__T5);
    vlSelfRef.__VdlyCommitQueuetb_ogehl_wally_extended__DOT__dut__DOT__T6.commit(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__T6);
    vlSelfRef.__VdlyCommitQueuetb_ogehl_wally_extended__DOT__dut__DOT__T7.commit(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__T7);
    vlSelfRef.__VdlyCommitQueuetb_ogehl_wally_extended__DOT__dut__DOT__MINITAG.commit(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__MINITAG);
    if (vlSelfRef.tb_ogehl_wally_extended__DOT__reset) {
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__prediction_sumD = 0U;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__meta_validD = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__StallD)))) {
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__prediction_sumD 
            = ((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__FlushD)
                ? 0U : (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__prediction_sumF));
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__meta_validD 
            = (1U & (~ (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__FlushD)));
    }
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_path_history 
        = __Vdly__tb_ogehl_wally_extended__DOT__dut__DOT__committed_path_history;
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[0U] 
        = __Vdly__tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[0U];
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[1U] 
        = __Vdly__tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[1U];
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[2U] 
        = __Vdly__tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[2U];
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[3U] 
        = __Vdly__tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[3U];
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[4U] 
        = __Vdly__tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[4U];
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[5U] 
        = __Vdly__tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[5U];
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[6U] 
        = __Vdly__tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[6U];
    if (__VdlySet__tb_ogehl_wally_extended__DOT__dut__DOT__UsedHistLength__v0) {
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__UsedHistLength[0U] = 0U;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__UsedHistLength[1U] = 3U;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__UsedHistLength[2U] = 5U;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__UsedHistLength[3U] = 8U;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__UsedHistLength[4U] = 0xcU;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__UsedHistLength[5U] = 0x13U;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__UsedHistLength[6U] = 0x1fU;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__UsedHistLength[7U] = 0x31U;
    }
    if (__VdlySet__tb_ogehl_wally_extended__DOT__dut__DOT__UsedHistLength__v8) {
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__UsedHistLength[2U] = 5U;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__UsedHistLength[4U] = 0xcU;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__UsedHistLength[6U] = 0x1fU;
    }
    if (__VdlySet__tb_ogehl_wally_extended__DOT__dut__DOT__UsedHistLength__v11) {
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__UsedHistLength[2U] = 0x4fU;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__UsedHistLength[4U] = 0x7dU;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__UsedHistLength[6U] = 0xc8U;
    }
    if (__VdlySet__tb_ogehl_wally_extended__DOT__dut__DOT__indicesD__v0) {
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesD[0U] = 0U;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesD[1U] = 0U;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesD[2U] = 0U;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesD[3U] = 0U;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesD[4U] = 0U;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesD[5U] = 0U;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesD[6U] = 0U;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesD[7U] = 0U;
    }
    if (__VdlySet__tb_ogehl_wally_extended__DOT__dut__DOT__indicesD__v8) {
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesD[0U] = 0U;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesD[1U] = 0U;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesD[2U] = 0U;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesD[3U] = 0U;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesD[4U] = 0U;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesD[5U] = 0U;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesD[6U] = 0U;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesD[7U] = 0U;
    }
    if (__VdlySet__tb_ogehl_wally_extended__DOT__dut__DOT__indicesD__v16) {
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesD[0U] 
            = __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesD__v16;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesD[1U] 
            = __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesD__v17;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesD[2U] 
            = __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesD__v18;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesD[3U] 
            = __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesD__v19;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesD[4U] 
            = __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesD__v20;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesD[5U] 
            = __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesD__v21;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesD[6U] 
            = __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesD__v22;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesD[7U] 
            = __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesD__v23;
    }
    if (__VdlySet__tb_ogehl_wally_extended__DOT__dut__DOT__indicesE__v0) {
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE[0U] = 0U;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE[1U] = 0U;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE[2U] = 0U;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE[3U] = 0U;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE[4U] = 0U;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE[5U] = 0U;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE[6U] = 0U;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE[7U] = 0U;
    }
    if (__VdlySet__tb_ogehl_wally_extended__DOT__dut__DOT__indicesE__v8) {
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE[0U] = 0U;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE[1U] = 0U;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE[2U] = 0U;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE[3U] = 0U;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE[4U] = 0U;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE[5U] = 0U;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE[6U] = 0U;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE[7U] = 0U;
    }
    if (__VdlySet__tb_ogehl_wally_extended__DOT__dut__DOT__indicesE__v16) {
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE[0U] 
            = __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesE__v16;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE[1U] 
            = __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesE__v17;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE[2U] 
            = __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesE__v18;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE[3U] 
            = __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesE__v19;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE[4U] 
            = __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesE__v20;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE[5U] 
            = __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesE__v21;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE[6U] 
            = __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesE__v22;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE[7U] 
            = __VdlyVal__tb_ogehl_wally_extended__DOT__dut__DOT__indicesE__v23;
    }
}

VL_INLINE_OPT void Vtb_ogehl_wally_extended___024root___nba_comb__TOP__0(Vtb_ogehl_wally_extended___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ogehl_wally_extended___024root___nba_comb__TOP__0\n"); );
    Vtb_ogehl_wally_extended__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<7>/*199:0*/ tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF;
    VL_ZERO_W(200, tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF);
    SData/*15:0*/ tb_ogehl_wally_extended__DOT__dut__DOT__speculative_pathF;
    tb_ogehl_wally_extended__DOT__dut__DOT__speculative_pathF = 0;
    CData/*0:0*/ tb_ogehl_wally_extended__DOT__dut__DOT__actual_jumpD;
    tb_ogehl_wally_extended__DOT__dut__DOT__actual_jumpD = 0;
    CData/*0:0*/ tb_ogehl_wally_extended__DOT__dut__DOT__actual_jumpE;
    tb_ogehl_wally_extended__DOT__dut__DOT__actual_jumpE = 0;
    CData/*0:0*/ tb_ogehl_wally_extended__DOT__dut__DOT__advance_survivingE;
    tb_ogehl_wally_extended__DOT__dut__DOT__advance_survivingE = 0;
    CData/*4:0*/ tb_ogehl_wally_extended__DOT__dut__DOT__f0;
    tb_ogehl_wally_extended__DOT__dut__DOT__f0 = 0;
    CData/*4:0*/ tb_ogehl_wally_extended__DOT__dut__DOT__f1;
    tb_ogehl_wally_extended__DOT__dut__DOT__f1 = 0;
    CData/*3:0*/ tb_ogehl_wally_extended__DOT__dut__DOT__f2;
    tb_ogehl_wally_extended__DOT__dut__DOT__f2 = 0;
    CData/*3:0*/ tb_ogehl_wally_extended__DOT__dut__DOT__f3;
    tb_ogehl_wally_extended__DOT__dut__DOT__f3 = 0;
    CData/*3:0*/ tb_ogehl_wally_extended__DOT__dut__DOT__f4;
    tb_ogehl_wally_extended__DOT__dut__DOT__f4 = 0;
    CData/*3:0*/ tb_ogehl_wally_extended__DOT__dut__DOT__f5;
    tb_ogehl_wally_extended__DOT__dut__DOT__f5 = 0;
    CData/*3:0*/ tb_ogehl_wally_extended__DOT__dut__DOT__f6;
    tb_ogehl_wally_extended__DOT__dut__DOT__f6 = 0;
    CData/*3:0*/ tb_ogehl_wally_extended__DOT__dut__DOT__f7;
    tb_ogehl_wally_extended__DOT__dut__DOT__f7 = 0;
    IData/*31:0*/ tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__tc_work;
    tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__tc_work = 0;
    IData/*31:0*/ tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__theta_work;
    tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__theta_work = 0;
    CData/*0:0*/ tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__low_confidence;
    tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__low_confidence = 0;
    IData/*31:0*/ tb_ogehl_wally_extended__DOT__dut__DOT__alias_fit__DOT__ac_work;
    tb_ogehl_wally_extended__DOT__dut__DOT__alias_fit__DOT__ac_work = 0;
    IData/*31:0*/ tb_ogehl_wally_extended__DOT__dut__DOT__fetch_indices__DOT__unnamedblk2__DOT__k;
    tb_ogehl_wally_extended__DOT__dut__DOT__fetch_indices__DOT__unnamedblk2__DOT__k = 0;
    CData/*0:0*/ tb_ogehl_wally_extended__DOT__dut__DOT____VdfgRegularize_hb50cd4a5_0_0;
    tb_ogehl_wally_extended__DOT__dut__DOT____VdfgRegularize_hb50cd4a5_0_0 = 0;
    SData/*31:0*/ __Vtemp_52;
    SData/*31:0*/ __Vtemp_53;
    SData/*31:0*/ __Vtemp_54;
    SData/*31:0*/ __Vtemp_55;
    SData/*31:0*/ __Vtemp_56;
    SData/*31:0*/ __Vtemp_57;
    SData/*31:0*/ __Vtemp_58;
    // Body
    tb_ogehl_wally_extended__DOT__dut__DOT__actual_jumpD 
        = ((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__JumpD) 
           | ((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__CallD) 
              | (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__ReturnD)));
    tb_ogehl_wally_extended__DOT__dut__DOT__actual_jumpE 
        = ((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__JumpE) 
           | ((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__CallE) 
              | (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__ReturnE)));
    tb_ogehl_wally_extended__DOT__dut__DOT__advance_survivingE 
        = (1U & ((~ (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__StallE)) 
                 & (~ (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__FlushM))));
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__direction_wrongE 
        = (VL_LTES_III(16, 0U, (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__prediction_sumE)) 
           != (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__PCSrcE));
    tb_ogehl_wally_extended__DOT__dut__DOT____VdfgRegularize_hb50cd4a5_0_0 
        = ((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__InstrValidE) 
           & (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__meta_validE));
    tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[0U] 
        = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[0U];
    tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[1U] 
        = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[1U];
    tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[2U] 
        = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[2U];
    tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[3U] 
        = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[3U];
    tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[4U] 
        = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[4U];
    tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[5U] 
        = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[5U];
    tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[6U] 
        = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[6U];
    if (((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__meta_validE) 
         & (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__InstrValidE))) {
        tb_ogehl_wally_extended__DOT__dut__DOT__speculative_pathF 
            = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_path_history;
        if (((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__BranchE) 
             | (IData)(tb_ogehl_wally_extended__DOT__dut__DOT__actual_jumpE))) {
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__outcome 
                = (1U & ((~ (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__BranchE)) 
                         | (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__PCSrcE)));
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__history[0U] 
                = tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[0U];
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__history[1U] 
                = tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[1U];
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__history[2U] 
                = tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[2U];
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__history[3U] 
                = tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[3U];
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__history[4U] 
                = tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[4U];
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__history[5U] 
                = tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[5U];
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__history[6U] 
                = tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[6U];
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__Vfuncout[0U] 
                = ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__history[0U] 
                    << 1U) | (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__outcome));
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__Vfuncout[1U] 
                = ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__history[0U] 
                    >> 0x1fU) | (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__history[1U] 
                                 << 1U));
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__Vfuncout[2U] 
                = ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__history[1U] 
                    >> 0x1fU) | (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__history[2U] 
                                 << 1U));
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__Vfuncout[3U] 
                = ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__history[2U] 
                    >> 0x1fU) | (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__history[3U] 
                                 << 1U));
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__Vfuncout[4U] 
                = ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__history[3U] 
                    >> 0x1fU) | (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__history[4U] 
                                 << 1U));
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__Vfuncout[5U] 
                = ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__history[4U] 
                    >> 0x1fU) | (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__history[5U] 
                                 << 1U));
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__Vfuncout[6U] 
                = ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__history[5U] 
                    >> 0x1fU) | (0xfeU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__history[6U] 
                                          << 1U)));
            tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[0U] 
                = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__Vfuncout[0U];
            tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[1U] 
                = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__Vfuncout[1U];
            tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[2U] 
                = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__Vfuncout[2U];
            tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[3U] 
                = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__Vfuncout[3U];
            tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[4U] 
                = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__Vfuncout[4U];
            tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[5U] 
                = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__Vfuncout[5U];
            tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[6U] 
                = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__69__Vfuncout[6U];
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_path__70__pc_bit0 
                = (1U & vlSelfRef.tb_ogehl_wally_extended__DOT__PCE);
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_path__70__history 
                = tb_ogehl_wally_extended__DOT__dut__DOT__speculative_pathF;
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_path__70__Vfuncout 
                = ((0xfffeU & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_path__70__history) 
                               << 1U)) | (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_path__70__pc_bit0));
            tb_ogehl_wally_extended__DOT__dut__DOT__speculative_pathF 
                = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_path__70__Vfuncout;
        }
    } else {
        tb_ogehl_wally_extended__DOT__dut__DOT__speculative_pathF 
            = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_path_history;
    }
    if (((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__meta_validD) 
         & (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__InstrValidD))) {
        if (((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__BranchD) 
             | (IData)(tb_ogehl_wally_extended__DOT__dut__DOT__actual_jumpD))) {
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__outcome 
                = (1U & ((~ (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__BranchD)) 
                         | (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__steered_takenD)));
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__history[0U] 
                = tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[0U];
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__history[1U] 
                = tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[1U];
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__history[2U] 
                = tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[2U];
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__history[3U] 
                = tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[3U];
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__history[4U] 
                = tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[4U];
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__history[5U] 
                = tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[5U];
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__history[6U] 
                = tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[6U];
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__Vfuncout[0U] 
                = ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__history[0U] 
                    << 1U) | (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__outcome));
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__Vfuncout[1U] 
                = ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__history[0U] 
                    >> 0x1fU) | (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__history[1U] 
                                 << 1U));
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__Vfuncout[2U] 
                = ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__history[1U] 
                    >> 0x1fU) | (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__history[2U] 
                                 << 1U));
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__Vfuncout[3U] 
                = ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__history[2U] 
                    >> 0x1fU) | (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__history[3U] 
                                 << 1U));
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__Vfuncout[4U] 
                = ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__history[3U] 
                    >> 0x1fU) | (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__history[4U] 
                                 << 1U));
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__Vfuncout[5U] 
                = ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__history[4U] 
                    >> 0x1fU) | (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__history[5U] 
                                 << 1U));
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__Vfuncout[6U] 
                = ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__history[5U] 
                    >> 0x1fU) | (0xfeU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__history[6U] 
                                          << 1U)));
            tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[0U] 
                = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__Vfuncout[0U];
            tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[1U] 
                = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__Vfuncout[1U];
            tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[2U] 
                = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__Vfuncout[2U];
            tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[3U] 
                = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__Vfuncout[3U];
            tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[4U] 
                = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__Vfuncout[4U];
            tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[5U] 
                = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__Vfuncout[5U];
            tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[6U] 
                = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_global__71__Vfuncout[6U];
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_path__72__pc_bit0 
                = (1U & vlSelfRef.tb_ogehl_wally_extended__DOT__PCD);
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_path__72__history 
                = tb_ogehl_wally_extended__DOT__dut__DOT__speculative_pathF;
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_path__72__Vfuncout 
                = ((0xfffeU & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_path__72__history) 
                               << 1U)) | (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_path__72__pc_bit0));
            tb_ogehl_wally_extended__DOT__dut__DOT__speculative_pathF 
                = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__advance_path__72__Vfuncout;
        }
    }
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__resolve_jumpE 
        = ((~ (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__BranchE)) 
           & ((IData)(tb_ogehl_wally_extended__DOT__dut__DOT____VdfgRegularize_hb50cd4a5_0_0) 
              & ((IData)(tb_ogehl_wally_extended__DOT__dut__DOT__actual_jumpE) 
                 & (IData)(tb_ogehl_wally_extended__DOT__dut__DOT__advance_survivingE))));
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__resolve_condE 
        = ((IData)(tb_ogehl_wally_extended__DOT__dut__DOT____VdfgRegularize_hb50cd4a5_0_0) 
           & ((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__BranchE) 
              & (IData)(tb_ogehl_wally_extended__DOT__dut__DOT__advance_survivingE)));
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__resolve_cfiE 
        = ((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__resolve_condE) 
           | (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__resolve_jumpE));
    tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__tc_work 
        = VL_EXTENDS_II(32,8, (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__TC));
    tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__theta_work 
        = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__thresupdate;
    tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__low_confidence 
        = (VL_GTES_III(32, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__prediction_sumE)), 
                       (- tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__theta_work)) 
           & VL_LTS_III(32, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__prediction_sumE)), tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__theta_work));
    if (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__resolve_condE) {
        if (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__direction_wrongE) {
            tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__tc_work 
                = ((IData)(1U) + tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__tc_work);
            if (VL_LTS_III(32, 0x3fU, tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__tc_work)) {
                tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__tc_work = 0x3fU;
                if (VL_GTS_III(32, 0x1fU, tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__theta_work)) {
                    tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__theta_work 
                        = ((IData)(1U) + tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__theta_work);
                    tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__tc_work = 0U;
                }
            }
        } else if (tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__low_confidence) {
            tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__tc_work 
                = (tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__tc_work 
                   - (IData)(1U));
            if (VL_GTS_III(32, 0xffffffc0U, tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__tc_work)) {
                tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__tc_work = 0xffffffc0U;
                if (VL_LTS_III(32, 0U, tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__theta_work)) {
                    tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__theta_work 
                        = (tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__theta_work 
                           - (IData)(1U));
                    tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__tc_work = 0U;
                }
            }
        }
    }
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__tc_nextE 
        = (0xffU & tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__tc_work);
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__thres_nextE 
        = (0x1fU & tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__theta_work);
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__trainE 
        = ((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__resolve_condE) 
           & ((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__direction_wrongE) 
              | (VL_GTES_III(32, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__prediction_sumE)), 
                             (- tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__theta_work)) 
                 & VL_LTS_III(32, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__prediction_sumE)), tb_ogehl_wally_extended__DOT__dut__DOT__threshold_fit__DOT__theta_work))));
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__alias_checkE 
        = ((~ vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE
            [7U]) & (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__trainE));
    tb_ogehl_wally_extended__DOT__dut__DOT__alias_fit__DOT__ac_work 
        = VL_EXTENDS_II(32,9, (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__AC));
    if (((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__alias_checkE) 
         & (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__direction_wrongE))) {
        tb_ogehl_wally_extended__DOT__dut__DOT__alias_fit__DOT__ac_work 
            = ((vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__MINITAG
                [(0x3ffU & (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE
                            [7U] >> 1U))] != (1U & vlSelfRef.tb_ogehl_wally_extended__DOT__PCE))
                ? (tb_ogehl_wally_extended__DOT__dut__DOT__alias_fit__DOT__ac_work 
                   - (IData)(4U)) : ((IData)(1U) + tb_ogehl_wally_extended__DOT__dut__DOT__alias_fit__DOT__ac_work));
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__switch_shortE 
            = (1U & VL_GTS_III(32, 0xffffff00U, tb_ogehl_wally_extended__DOT__dut__DOT__alias_fit__DOT__ac_work));
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__switch_longE 
            = (1U & VL_LTS_III(32, 0xffU, tb_ogehl_wally_extended__DOT__dut__DOT__alias_fit__DOT__ac_work));
    } else {
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__switch_shortE = 0U;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__switch_longE = 0U;
    }
    if (VL_GTS_III(32, 0xffffff00U, tb_ogehl_wally_extended__DOT__dut__DOT__alias_fit__DOT__ac_work)) {
        tb_ogehl_wally_extended__DOT__dut__DOT__alias_fit__DOT__ac_work = 0xffffff00U;
    } else if (VL_LTS_III(32, 0xffU, tb_ogehl_wally_extended__DOT__dut__DOT__alias_fit__DOT__ac_work)) {
        tb_ogehl_wally_extended__DOT__dut__DOT__alias_fit__DOT__ac_work = 0xffU;
    }
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__ac_nextE 
        = (0x1ffU & tb_ogehl_wally_extended__DOT__dut__DOT__alias_fit__DOT__ac_work);
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__active_lengthF[0U] 
        = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__UsedHistLength
        [0U];
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__active_lengthF[1U] 
        = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__UsedHistLength
        [1U];
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__active_lengthF[2U] 
        = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__UsedHistLength
        [2U];
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__active_lengthF[3U] 
        = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__UsedHistLength
        [3U];
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__active_lengthF[4U] 
        = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__UsedHistLength
        [4U];
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__active_lengthF[5U] 
        = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__UsedHistLength
        [5U];
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__active_lengthF[6U] 
        = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__UsedHistLength
        [6U];
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__active_lengthF[7U] 
        = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__UsedHistLength
        [7U];
    if (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__switch_shortE) {
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__active_lengthF[2U] = 5U;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__active_lengthF[4U] = 0xcU;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__active_lengthF[6U] = 0x1fU;
    } else if (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__switch_longE) {
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__active_lengthF[2U] = 0x4fU;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__active_lengthF[4U] = 0x7dU;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__active_lengthF[6U] = 0xc8U;
    }
    tb_ogehl_wally_extended__DOT__dut__DOT__fetch_indices__DOT__unnamedblk2__DOT__k = 0U;
    while (VL_GTS_III(32, 8U, tb_ogehl_wally_extended__DOT__dut__DOT__fetch_indices__DOT__unnamedblk2__DOT__k)) {
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
            = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__active_lengthF
            [(7U & tb_ogehl_wally_extended__DOT__dut__DOT__fetch_indices__DOT__unnamedblk2__DOT__k)];
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__table_number 
            = tb_ogehl_wally_extended__DOT__dut__DOT__fetch_indices__DOT__unnamedblk2__DOT__k;
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph 
            = tb_ogehl_wally_extended__DOT__dut__DOT__speculative_pathF;
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[0U] 
            = tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[0U];
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[1U] 
            = tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[1U];
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[2U] 
            = tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[2U];
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[3U] 
            = tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[3U];
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[4U] 
            = tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[4U];
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[5U] 
            = tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[5U];
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[6U] 
            = tb_ogehl_wally_extended__DOT__dut__DOT__speculative_globalF[6U];
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
            = vlSelfRef.tb_ogehl_wally_extended__DOT__PCF;
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__w 
            = ((1U == vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__table_number)
                ? 0xaU : 0xbU);
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
            = VL_MULS_III(32, (IData)(3U), vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__w);
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
            = (VL_GTS_III(32, 0x10U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                ? vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m
                : 0x10U);
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add 
            = ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p);
        if (VL_LTS_III(32, 0x14U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)) {
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add = 0x14U;
        }
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__funct 
            = ((IData)(1U) + (3U & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__table_number));
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter = 0ULL;
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos = 0U;
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit = 0U;
        if (VL_LTES_III(32, 8U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)) {
            if (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffffffeULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | (IData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)));
                } else if (VL_LTS_III(32, 0U, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                               + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & (- vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffffffeULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | (IData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)));
                } else if (VL_LTS_III(32, 0U, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                               + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & ((- vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & (((- vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & ((- vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffffffeULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | (IData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)));
                }
            }
            if (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 1U));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffffffdULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 1U));
                } else if (VL_LTS_III(32, 1U, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                               + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(1U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffffffdULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 1U));
                } else if (VL_LTS_III(32, 1U, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                               + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(1U) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(1U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(1U) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffffffdULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 1U));
                }
            }
            if (VL_LTS_III(32, 2U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 2U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 2U));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffffffbULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 2U));
                } else if (VL_LTS_III(32, 2U, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                               + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(2U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffffffbULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 2U));
                } else if (VL_LTS_III(32, 2U, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                               + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(2U) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(2U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(2U) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffffffbULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 2U));
                }
            }
            if (VL_LTS_III(32, 3U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 3U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 3U));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffffff7ULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 3U));
                } else if (VL_LTS_III(32, 3U, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                               + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(3U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffffff7ULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 3U));
                } else if (VL_LTS_III(32, 3U, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                               + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(3U) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(3U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(3U) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffffff7ULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 3U));
                }
            }
            if (VL_LTS_III(32, 4U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 4U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 4U));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffffffefULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 4U));
                } else if (VL_LTS_III(32, 4U, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                               + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(4U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffffffefULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 4U));
                } else if (VL_LTS_III(32, 4U, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                               + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(4U) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(4U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(4U) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffffffefULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 4U));
                }
            }
            if (VL_LTS_III(32, 5U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 5U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 5U));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffffffdfULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 5U));
                } else if (VL_LTS_III(32, 5U, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                               + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(5U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffffffdfULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 5U));
                } else if (VL_LTS_III(32, 5U, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                               + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(5U) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(5U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(5U) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffffffdfULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 5U));
                }
            }
            if (VL_LTS_III(32, 6U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 6U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 6U));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffffffbfULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 6U));
                } else if (VL_LTS_III(32, 6U, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                               + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(6U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffffffbfULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 6U));
                } else if (VL_LTS_III(32, 6U, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                               + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(6U) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(6U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(6U) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffffffbfULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 6U));
                }
            }
            if (VL_LTS_III(32, 7U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 7U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 7U));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffffff7fULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 7U));
                } else if (VL_LTS_III(32, 7U, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                               + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(7U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffffff7fULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 7U));
                } else if (VL_LTS_III(32, 7U, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                               + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(7U) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(7U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(7U) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffffff7fULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 7U));
                }
            }
            if (VL_LTS_III(32, 8U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 8U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 8U));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffffeffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 8U));
                } else if (VL_LTS_III(32, 8U, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                               + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(8U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffffeffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 8U));
                } else if (VL_LTS_III(32, 8U, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                               + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(8U) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(8U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(8U) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffffeffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 8U));
                }
            }
            if (VL_LTS_III(32, 9U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 9U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 9U));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffffdffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 9U));
                } else if (VL_LTS_III(32, 9U, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                               + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(9U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffffdffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 9U));
                } else if (VL_LTS_III(32, 9U, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                               + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(9U) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(9U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(9U) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffffdffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 9U));
                }
            }
            if (VL_LTS_III(32, 0xaU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 0xaU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 0xaU));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffffbffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 0xaU));
                } else if (VL_LTS_III(32, 0xaU, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                 + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(0xaU) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffffbffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 0xaU));
                } else if (VL_LTS_III(32, 0xaU, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                                 + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(0xaU) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(0xaU) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(0xaU) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffffbffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 0xaU));
                }
            }
            if (VL_LTS_III(32, 0xbU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 0xbU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 0xbU));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffff7ffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 0xbU));
                } else if (VL_LTS_III(32, 0xbU, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                 + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(0xbU) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffff7ffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 0xbU));
                } else if (VL_LTS_III(32, 0xbU, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                                 + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(0xbU) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(0xbU) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(0xbU) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffff7ffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 0xbU));
                }
            }
            if (VL_LTS_III(32, 0xcU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 0xcU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 0xcU));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffffefffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 0xcU));
                } else if (VL_LTS_III(32, 0xcU, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                 + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(0xcU) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffffefffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 0xcU));
                } else if (VL_LTS_III(32, 0xcU, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                                 + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(0xcU) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(0xcU) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(0xcU) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffffefffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 0xcU));
                }
            }
            if (VL_LTS_III(32, 0xdU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 0xdU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 0xdU));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffffdfffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 0xdU));
                } else if (VL_LTS_III(32, 0xdU, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                 + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(0xdU) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffffdfffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 0xdU));
                } else if (VL_LTS_III(32, 0xdU, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                                 + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(0xdU) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(0xdU) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(0xdU) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffffdfffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 0xdU));
                }
            }
            if (VL_LTS_III(32, 0xeU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 0xeU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 0xeU));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffffbfffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 0xeU));
                } else if (VL_LTS_III(32, 0xeU, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                 + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(0xeU) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffffbfffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 0xeU));
                } else if (VL_LTS_III(32, 0xeU, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                                 + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(0xeU) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(0xeU) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(0xeU) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffffbfffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 0xeU));
                }
            }
            if (VL_LTS_III(32, 0xfU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 0xfU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 0xfU));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffff7fffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 0xfU));
                } else if (VL_LTS_III(32, 0xfU, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                 + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(0xfU) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffff7fffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 0xfU));
                } else if (VL_LTS_III(32, 0xfU, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                                 + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(0xfU) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(0xfU) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(0xfU) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffff7fffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 0xfU));
                }
            }
            if (VL_LTS_III(32, 0x10U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 0x10U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffeffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 0x10U));
                } else if (VL_LTS_III(32, 0x10U, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(0x10U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffeffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 0x10U));
                } else if (VL_LTS_III(32, 0x10U, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                   + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(0x10U) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(0x10U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(0x10U) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffeffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 0x10U));
                }
            }
            if (VL_LTS_III(32, 0x11U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 0x11U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 1U));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffdffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 0x11U));
                } else if (VL_LTS_III(32, 0x11U, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(0x11U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffdffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 0x11U));
                } else if (VL_LTS_III(32, 0x11U, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                   + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(0x11U) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(0x11U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(0x11U) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffdffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 0x11U));
                }
            }
            if (VL_LTS_III(32, 0x12U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 0x12U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 2U));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffbffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 0x12U));
                } else if (VL_LTS_III(32, 0x12U, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(0x12U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffbffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 0x12U));
                } else if (VL_LTS_III(32, 0x12U, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                   + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(0x12U) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(0x12U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(0x12U) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fffbffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 0x12U));
                }
            }
            if (VL_LTS_III(32, 0x13U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 0x13U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 3U));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fff7ffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 0x13U));
                } else if (VL_LTS_III(32, 0x13U, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(0x13U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fff7ffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 0x13U));
                } else if (VL_LTS_III(32, 0x13U, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                   + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(0x13U) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(0x13U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(0x13U) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fff7ffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 0x13U));
                }
            }
            if (VL_LTS_III(32, 0x14U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 0x14U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 4U));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffefffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 0x14U));
                } else if (VL_LTS_III(32, 0x14U, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(0x14U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffefffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 0x14U));
                } else if (VL_LTS_III(32, 0x14U, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                   + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(0x14U) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(0x14U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(0x14U) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffefffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 0x14U));
                }
            }
            if (VL_LTS_III(32, 0x15U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 0x15U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 5U));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffdfffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 0x15U));
                } else if (VL_LTS_III(32, 0x15U, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(0x15U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffdfffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 0x15U));
                } else if (VL_LTS_III(32, 0x15U, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                   + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(0x15U) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(0x15U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(0x15U) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffdfffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 0x15U));
                }
            }
            if (VL_LTS_III(32, 0x16U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 0x16U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 6U));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffbfffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 0x16U));
                } else if (VL_LTS_III(32, 0x16U, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(0x16U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffbfffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 0x16U));
                } else if (VL_LTS_III(32, 0x16U, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                   + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(0x16U) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(0x16U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(0x16U) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ffbfffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 0x16U));
                }
            }
            if (VL_LTS_III(32, 0x17U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 0x17U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 7U));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ff7fffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 0x17U));
                } else if (VL_LTS_III(32, 0x17U, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(0x17U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ff7fffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 0x17U));
                } else if (VL_LTS_III(32, 0x17U, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                   + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(0x17U) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(0x17U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(0x17U) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1ff7fffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 0x17U));
                }
            }
            if (VL_LTS_III(32, 0x18U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 0x18U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 8U));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1feffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 0x18U));
                } else if (VL_LTS_III(32, 0x18U, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(0x18U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1feffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 0x18U));
                } else if (VL_LTS_III(32, 0x18U, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                   + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(0x18U) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(0x18U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(0x18U) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1feffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 0x18U));
                }
            }
            if (VL_LTS_III(32, 0x19U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 0x19U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 9U));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fdffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 0x19U));
                } else if (VL_LTS_III(32, 0x19U, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(0x19U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fdffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 0x19U));
                } else if (VL_LTS_III(32, 0x19U, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                   + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(0x19U) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(0x19U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(0x19U) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fdffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 0x19U));
                }
            }
            if (VL_LTS_III(32, 0x1aU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 0x1aU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 0xaU));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fbffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 0x1aU));
                } else if (VL_LTS_III(32, 0x1aU, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(0x1aU) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fbffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 0x1aU));
                } else if (VL_LTS_III(32, 0x1aU, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                   + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(0x1aU) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(0x1aU) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(0x1aU) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1fbffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 0x1aU));
                }
            }
            if (VL_LTS_III(32, 0x1bU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 0x1bU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 0xbU));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1f7ffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 0x1bU));
                } else if (VL_LTS_III(32, 0x1bU, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(0x1bU) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1f7ffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 0x1bU));
                } else if (VL_LTS_III(32, 0x1bU, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                   + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(0x1bU) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(0x1bU) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(0x1bU) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1f7ffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 0x1bU));
                }
            }
            if (VL_LTS_III(32, 0x1cU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 0x1cU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 0xcU));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1efffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 0x1cU));
                } else if (VL_LTS_III(32, 0x1cU, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(0x1cU) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1efffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 0x1cU));
                } else if (VL_LTS_III(32, 0x1cU, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                   + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(0x1cU) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(0x1cU) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(0x1cU) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1efffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 0x1cU));
                }
            }
            if (VL_LTS_III(32, 0x1dU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 0x1dU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 0xdU));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1dfffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 0x1dU));
                } else if (VL_LTS_III(32, 0x1dU, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(0x1dU) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1dfffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 0x1dU));
                } else if (VL_LTS_III(32, 0x1dU, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                   + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(0x1dU) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(0x1dU) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(0x1dU) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1dfffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 0x1dU));
                }
            }
            if (VL_LTS_III(32, 0x1eU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 0x1eU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 0xeU));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1bfffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 0x1eU));
                } else if (VL_LTS_III(32, 0x1eU, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(0x1eU) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1bfffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 0x1eU));
                } else if (VL_LTS_III(32, 0x1eU, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                   + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(0x1eU) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(0x1eU) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(0x1eU) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x1bfffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 0x1eU));
                }
            }
            if (VL_LTS_III(32, 0x1fU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 0x1fU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                 >> 0xfU));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x17fffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 0x1fU));
                } else if (VL_LTS_III(32, 0x1fU, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & ((IData)(0x1fU) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x17fffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 0x1fU));
                } else if (VL_LTS_III(32, 0x1fU, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                   + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(0x1fU) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(0x1fU) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(0x1fU) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0x17fffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 0x1fU));
                }
            }
            if (VL_LTS_III(32, 0x20U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                if (VL_LTS_III(32, 0x20U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0 
                        = (1U & (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0xffffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__0)) 
                              << 0x20U));
                } else if (VL_LTS_III(32, 0x20U, (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1 
                        = (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                 >> (0x1fU & (- vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0xffffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__1)) 
                              << 0x20U));
                } else if (VL_LTS_III(32, 0x20U, ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p 
                                                   + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                                  + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))) {
                    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2 
                        = ((0xc7U >= (0xffU & (((IData)(0x20U) 
                                                - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                               - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add))) 
                           && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                     (7U & ((((IData)(0x20U) 
                                              - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                             - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add) 
                                            >> 5U))] 
                                     >> (0x1fU & (((IData)(0x20U) 
                                                   - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p) 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__min_add)))));
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                        = ((0xffffffffULL & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter) 
                           | ((QData)((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT____Vlvbound_h289c1bac__2)) 
                              << 0x20U));
                }
            }
        } else {
            if (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[0U]
                              : (VL_LTS_III(32, 0U, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (- vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((- vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos = 0U;
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, ((IData)(7U) 
                                       + (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                          + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p)), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 2U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(2U), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 3U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(3U), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 4U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(4U), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 5U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(5U), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 6U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(6U), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 7U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(7U), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 8U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(8U), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 9U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(9U), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 0xaU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0xaU), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 0xbU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0xbU), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 0xcU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0xcU), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 0xdU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0xdU), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 0xeU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0xeU), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 0xfU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0xfU), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 0x10U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 0x11U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x11U), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 0x12U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x12U), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 0x13U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x13U), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 0x14U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x14U), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 0x15U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x15U), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 0x16U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x16U), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 0x17U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x17U), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 0x18U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x18U), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 0x19U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x19U), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 0x1aU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x1aU), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 0x1bU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x1bU), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 0x1cU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x1cU), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 0x1dU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x1dU), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 0x1eU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x1eU), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 0x1fU, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x1fU), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
            if (VL_LTS_III(32, 0x20U, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n)) {
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                    = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x20U), 
                                                  ((IData)(7U) 
                                                   + 
                                                   (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m 
                                                    + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__p))), 
                                  (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__n 
                                   - (IData)(1U)));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit 
                    = (1U & (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)
                              ? ((0xc7U >= (0xffU & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos)) 
                                 && (1U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__gh[
                                           (7U & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos))))
                              : (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos, 
                                            ((IData)(8U) 
                                             + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m))
                                  ? (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__pc 
                                     >> (0x1fU & (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m)))
                                  : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__ph) 
                                     >> (0xfU & ((vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__source_pos 
                                                  - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__m) 
                                                 - (IData)(8U)))))));
                vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter)) 
                        << 1U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__selected_bit)));
            }
        }
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__remaining 
            = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__inter;
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__result 
            = (0x7ffU & (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__remaining));
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__rotation 
            = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__funct;
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__remaining 
            = (0x1ffffffffULL & VL_SHIFTR_QQI(33,33,32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__remaining, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__w));
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__chunk 
            = (0x7ffU & (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__remaining));
        if ((0xaU == vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__w)) {
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__result 
                = (0x3ffU & (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__result));
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__chunk 
                = (0x3ffU & (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__chunk));
        }
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__rotated 
            = (0x7ffU & (VL_SHIFTR_III(11,11,32, (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__chunk), vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__rotation) 
                         | VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__chunk), 
                                         (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__w 
                                          - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__rotation))));
        if ((0xaU == vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__w)) {
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__rotated 
                = (0x3ffU & (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__rotated));
        }
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__result 
            = ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__result) 
               ^ (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__rotated));
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__rotation 
            = VL_MODDIVS_III(32, ((IData)(1U) + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__rotation), vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__w);
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__remaining 
            = (0x1ffffffffULL & VL_SHIFTR_QQI(33,33,32, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__remaining, vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__w));
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__chunk 
            = (0x7ffU & (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__remaining));
        if ((0xaU == vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__w)) {
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__chunk 
                = (0x3ffU & (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__chunk));
        }
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__rotated 
            = (0x7ffU & (VL_SHIFTR_III(11,11,32, (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__chunk), vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__rotation) 
                         | VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__chunk), 
                                         (vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__w 
                                          - vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__rotation))));
        if ((0xaU == vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__w)) {
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__rotated 
                = (0x3ffU & (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__rotated));
        }
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__result 
            = ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__result) 
               ^ (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__rotated));
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__rotation 
            = VL_MODDIVS_III(32, ((IData)(1U) + vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__rotation), vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__w);
        vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__Vfuncout 
            = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__result;
        vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesF[(7U 
                                                                    & tb_ogehl_wally_extended__DOT__dut__DOT__fetch_indices__DOT__unnamedblk2__DOT__k)] 
            = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__ogehl_index__73__Vfuncout;
        tb_ogehl_wally_extended__DOT__dut__DOT__fetch_indices__DOT__unnamedblk2__DOT__k 
            = ((IData)(1U) + tb_ogehl_wally_extended__DOT__dut__DOT__fetch_indices__DOT__unnamedblk2__DOT__k);
    }
    tb_ogehl_wally_extended__DOT__dut__DOT__f0 = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__T0
        [vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesF
        [0U]];
    tb_ogehl_wally_extended__DOT__dut__DOT__f1 = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__T1
        [(0x3ffU & vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesF
          [1U])];
    tb_ogehl_wally_extended__DOT__dut__DOT__f2 = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__T2
        [vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesF
        [2U]];
    tb_ogehl_wally_extended__DOT__dut__DOT__f3 = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__T3
        [vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesF
        [3U]];
    tb_ogehl_wally_extended__DOT__dut__DOT__f4 = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__T4
        [vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesF
        [4U]];
    tb_ogehl_wally_extended__DOT__dut__DOT__f5 = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__T5
        [vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesF
        [5U]];
    tb_ogehl_wally_extended__DOT__dut__DOT__f6 = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__T6
        [vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesF
        [6U]];
    tb_ogehl_wally_extended__DOT__dut__DOT__f7 = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__T7
        [vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesF
        [7U]];
    if (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__trainE) {
        if ((vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesF
             [0U] == vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE
             [0U])) {
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__74__actual_taken 
                = vlSelfRef.tb_ogehl_wally_extended__DOT__PCSrcE;
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__74__value 
                = tb_ogehl_wally_extended__DOT__dut__DOT__f0;
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__74__Vfuncout 
                = (0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__74__actual_taken)
                             ? ((0xfU == (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__74__value))
                                 ? (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__74__value)
                                 : ((IData)(1U) + (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__74__value)))
                             : ((0x10U == (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__74__value))
                                 ? (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__74__value)
                                 : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__74__value) 
                                    - (IData)(1U)))));
            tb_ogehl_wally_extended__DOT__dut__DOT__f0 
                = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__74__Vfuncout;
        }
        if ((vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesF
             [1U] == vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE
             [1U])) {
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__75__actual_taken 
                = vlSelfRef.tb_ogehl_wally_extended__DOT__PCSrcE;
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__75__value 
                = tb_ogehl_wally_extended__DOT__dut__DOT__f1;
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__75__Vfuncout 
                = (0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__75__actual_taken)
                             ? ((0xfU == (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__75__value))
                                 ? (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__75__value)
                                 : ((IData)(1U) + (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__75__value)))
                             : ((0x10U == (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__75__value))
                                 ? (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__75__value)
                                 : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__75__value) 
                                    - (IData)(1U)))));
            tb_ogehl_wally_extended__DOT__dut__DOT__f1 
                = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat5__75__Vfuncout;
        }
        if ((vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesF
             [2U] == vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE
             [2U])) {
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__76__actual_taken 
                = vlSelfRef.tb_ogehl_wally_extended__DOT__PCSrcE;
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__76__value 
                = tb_ogehl_wally_extended__DOT__dut__DOT__f2;
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__76__Vfuncout 
                = (0xfU & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__76__actual_taken)
                            ? ((7U == (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__76__value))
                                ? (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__76__value)
                                : ((IData)(1U) + (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__76__value)))
                            : ((8U == (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__76__value))
                                ? (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__76__value)
                                : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__76__value) 
                                   - (IData)(1U)))));
            tb_ogehl_wally_extended__DOT__dut__DOT__f2 
                = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__76__Vfuncout;
        }
        if ((vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesF
             [3U] == vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE
             [3U])) {
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__77__actual_taken 
                = vlSelfRef.tb_ogehl_wally_extended__DOT__PCSrcE;
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__77__value 
                = tb_ogehl_wally_extended__DOT__dut__DOT__f3;
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__77__Vfuncout 
                = (0xfU & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__77__actual_taken)
                            ? ((7U == (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__77__value))
                                ? (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__77__value)
                                : ((IData)(1U) + (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__77__value)))
                            : ((8U == (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__77__value))
                                ? (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__77__value)
                                : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__77__value) 
                                   - (IData)(1U)))));
            tb_ogehl_wally_extended__DOT__dut__DOT__f3 
                = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__77__Vfuncout;
        }
        if ((vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesF
             [4U] == vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE
             [4U])) {
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__78__actual_taken 
                = vlSelfRef.tb_ogehl_wally_extended__DOT__PCSrcE;
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__78__value 
                = tb_ogehl_wally_extended__DOT__dut__DOT__f4;
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__78__Vfuncout 
                = (0xfU & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__78__actual_taken)
                            ? ((7U == (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__78__value))
                                ? (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__78__value)
                                : ((IData)(1U) + (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__78__value)))
                            : ((8U == (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__78__value))
                                ? (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__78__value)
                                : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__78__value) 
                                   - (IData)(1U)))));
            tb_ogehl_wally_extended__DOT__dut__DOT__f4 
                = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__78__Vfuncout;
        }
        if ((vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesF
             [5U] == vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE
             [5U])) {
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__79__actual_taken 
                = vlSelfRef.tb_ogehl_wally_extended__DOT__PCSrcE;
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__79__value 
                = tb_ogehl_wally_extended__DOT__dut__DOT__f5;
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__79__Vfuncout 
                = (0xfU & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__79__actual_taken)
                            ? ((7U == (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__79__value))
                                ? (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__79__value)
                                : ((IData)(1U) + (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__79__value)))
                            : ((8U == (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__79__value))
                                ? (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__79__value)
                                : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__79__value) 
                                   - (IData)(1U)))));
            tb_ogehl_wally_extended__DOT__dut__DOT__f5 
                = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__79__Vfuncout;
        }
        if ((vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesF
             [6U] == vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE
             [6U])) {
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__80__actual_taken 
                = vlSelfRef.tb_ogehl_wally_extended__DOT__PCSrcE;
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__80__value 
                = tb_ogehl_wally_extended__DOT__dut__DOT__f6;
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__80__Vfuncout 
                = (0xfU & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__80__actual_taken)
                            ? ((7U == (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__80__value))
                                ? (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__80__value)
                                : ((IData)(1U) + (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__80__value)))
                            : ((8U == (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__80__value))
                                ? (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__80__value)
                                : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__80__value) 
                                   - (IData)(1U)))));
            tb_ogehl_wally_extended__DOT__dut__DOT__f6 
                = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__80__Vfuncout;
        }
        if ((vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesF
             [7U] == vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__indicesE
             [7U])) {
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__81__actual_taken 
                = vlSelfRef.tb_ogehl_wally_extended__DOT__PCSrcE;
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__81__value 
                = tb_ogehl_wally_extended__DOT__dut__DOT__f7;
            vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__81__Vfuncout 
                = (0xfU & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__81__actual_taken)
                            ? ((7U == (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__81__value))
                                ? (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__81__value)
                                : ((IData)(1U) + (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__81__value)))
                            : ((8U == (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__81__value))
                                ? (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__81__value)
                                : ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__81__value) 
                                   - (IData)(1U)))));
            tb_ogehl_wally_extended__DOT__dut__DOT__f7 
                = vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__sat4__81__Vfuncout;
        }
    }
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__prediction_sumF 
        = (0xffffU & ((IData)(4U) + ([&]() {
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend5__82__counter_value 
                        = tb_ogehl_wally_extended__DOT__dut__DOT__f0;
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend5__82__Vfuncout 
                        = ((0xffe0U & ((- (IData)((1U 
                                                   & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend5__82__counter_value) 
                                                      >> 4U)))) 
                                       << 5U)) | (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend5__82__counter_value));
                }(), (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend5__82__Vfuncout))));
    __Vtemp_52 = (0xffffU & ((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__prediction_sumF) 
                             + ([&]() {
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend5__83__counter_value 
                        = tb_ogehl_wally_extended__DOT__dut__DOT__f1;
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend5__83__Vfuncout 
                        = ((0xffe0U & ((- (IData)((1U 
                                                   & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend5__83__counter_value) 
                                                      >> 4U)))) 
                                       << 5U)) | (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend5__83__counter_value));
                }(), (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend5__83__Vfuncout))));
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__prediction_sumF 
        = __Vtemp_52;
    __Vtemp_53 = (0xffffU & ((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__prediction_sumF) 
                             + ([&]() {
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__84__counter_value 
                        = tb_ogehl_wally_extended__DOT__dut__DOT__f2;
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__84__Vfuncout 
                        = ((0xfff0U & ((- (IData)((1U 
                                                   & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__84__counter_value) 
                                                      >> 3U)))) 
                                       << 4U)) | (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__84__counter_value));
                }(), (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__84__Vfuncout))));
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__prediction_sumF 
        = __Vtemp_53;
    __Vtemp_54 = (0xffffU & ((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__prediction_sumF) 
                             + ([&]() {
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__85__counter_value 
                        = tb_ogehl_wally_extended__DOT__dut__DOT__f3;
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__85__Vfuncout 
                        = ((0xfff0U & ((- (IData)((1U 
                                                   & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__85__counter_value) 
                                                      >> 3U)))) 
                                       << 4U)) | (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__85__counter_value));
                }(), (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__85__Vfuncout))));
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__prediction_sumF 
        = __Vtemp_54;
    __Vtemp_55 = (0xffffU & ((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__prediction_sumF) 
                             + ([&]() {
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__86__counter_value 
                        = tb_ogehl_wally_extended__DOT__dut__DOT__f4;
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__86__Vfuncout 
                        = ((0xfff0U & ((- (IData)((1U 
                                                   & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__86__counter_value) 
                                                      >> 3U)))) 
                                       << 4U)) | (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__86__counter_value));
                }(), (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__86__Vfuncout))));
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__prediction_sumF 
        = __Vtemp_55;
    __Vtemp_56 = (0xffffU & ((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__prediction_sumF) 
                             + ([&]() {
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__87__counter_value 
                        = tb_ogehl_wally_extended__DOT__dut__DOT__f5;
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__87__Vfuncout 
                        = ((0xfff0U & ((- (IData)((1U 
                                                   & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__87__counter_value) 
                                                      >> 3U)))) 
                                       << 4U)) | (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__87__counter_value));
                }(), (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__87__Vfuncout))));
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__prediction_sumF 
        = __Vtemp_56;
    __Vtemp_57 = (0xffffU & ((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__prediction_sumF) 
                             + ([&]() {
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__88__counter_value 
                        = tb_ogehl_wally_extended__DOT__dut__DOT__f6;
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__88__Vfuncout 
                        = ((0xfff0U & ((- (IData)((1U 
                                                   & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__88__counter_value) 
                                                      >> 3U)))) 
                                       << 4U)) | (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__88__counter_value));
                }(), (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__88__Vfuncout))));
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__prediction_sumF 
        = __Vtemp_57;
    __Vtemp_58 = (0xffffU & ((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__prediction_sumF) 
                             + ([&]() {
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__89__counter_value 
                        = tb_ogehl_wally_extended__DOT__dut__DOT__f7;
                    vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__89__Vfuncout 
                        = ((0xfff0U & ((- (IData)((1U 
                                                   & ((IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__89__counter_value) 
                                                      >> 3U)))) 
                                       << 4U)) | (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__89__counter_value));
                }(), (IData)(vlSelfRef.__Vfunc_tb_ogehl_wally_extended__DOT__dut__DOT__extend4__89__Vfuncout))));
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__prediction_sumF 
        = __Vtemp_58;
    vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__raw_predictionF 
        = VL_LTES_III(16, 0U, (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__prediction_sumF));
}

void Vtb_ogehl_wally_extended___024root___timing_resume(Vtb_ogehl_wally_extended___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ogehl_wally_extended___024root___timing_resume\n"); );
    Vtb_ogehl_wally_extended__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hbe207624__0.resume(
                                                   "@(posedge tb_ogehl_wally_extended.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hbe2076e5__0.resume(
                                                   "@(negedge tb_ogehl_wally_extended.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_ogehl_wally_extended___024root___timing_commit(Vtb_ogehl_wally_extended___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ogehl_wally_extended___024root___timing_commit\n"); );
    Vtb_ogehl_wally_extended__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hbe207624__0.commit(
                                                   "@(posedge tb_ogehl_wally_extended.clk)");
    }
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hbe2076e5__0.commit(
                                                   "@(negedge tb_ogehl_wally_extended.clk)");
    }
}

void Vtb_ogehl_wally_extended___024root___eval_triggers__act(Vtb_ogehl_wally_extended___024root* vlSelf);

bool Vtb_ogehl_wally_extended___024root___eval_phase__act(Vtb_ogehl_wally_extended___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ogehl_wally_extended___024root___eval_phase__act\n"); );
    Vtb_ogehl_wally_extended__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_ogehl_wally_extended___024root___eval_triggers__act(vlSelf);
    Vtb_ogehl_wally_extended___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_ogehl_wally_extended___024root___timing_resume(vlSelf);
        Vtb_ogehl_wally_extended___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_ogehl_wally_extended___024root___eval_phase__nba(Vtb_ogehl_wally_extended___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ogehl_wally_extended___024root___eval_phase__nba\n"); );
    Vtb_ogehl_wally_extended__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_ogehl_wally_extended___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ogehl_wally_extended___024root___dump_triggers__nba(Vtb_ogehl_wally_extended___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ogehl_wally_extended___024root___dump_triggers__act(Vtb_ogehl_wally_extended___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_ogehl_wally_extended___024root___eval(Vtb_ogehl_wally_extended___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ogehl_wally_extended___024root___eval\n"); );
    Vtb_ogehl_wally_extended__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_ogehl_wally_extended___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_ogehl_wally_extended___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 4, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_ogehl_wally_extended___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_ogehl_wally_extended___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_ogehl_wally_extended___024root___eval_debug_assertions(Vtb_ogehl_wally_extended___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ogehl_wally_extended___024root___eval_debug_assertions\n"); );
    Vtb_ogehl_wally_extended__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
