// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_gshare_llm.h for the primary calling header

#include "Vtb_gshare_llm__pch.h"
#include "Vtb_gshare_llm___024root.h"

VlCoroutine Vtb_gshare_llm___024root___eval_initial__TOP__Vtiming__0(Vtb_gshare_llm___024root* vlSelf);
VlCoroutine Vtb_gshare_llm___024root___eval_initial__TOP__Vtiming__1(Vtb_gshare_llm___024root* vlSelf);

void Vtb_gshare_llm___024root___eval_initial(Vtb_gshare_llm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gshare_llm___024root___eval_initial\n"); );
    Vtb_gshare_llm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_gshare_llm___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_gshare_llm___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_gshare_llm___024root___eval_initial__TOP__Vtiming__1(Vtb_gshare_llm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gshare_llm___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_gshare_llm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                             63);
        vlSelfRef.tb_gshare_llm__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_gshare_llm__DOT__clk)));
    }
}

void Vtb_gshare_llm___024root___act_comb__TOP__0(Vtb_gshare_llm___024root* vlSelf);

void Vtb_gshare_llm___024root___eval_act(Vtb_gshare_llm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gshare_llm___024root___eval_act\n"); );
    Vtb_gshare_llm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((7ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_gshare_llm___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_gshare_llm___024root___act_comb__TOP__0(Vtb_gshare_llm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gshare_llm___024root___act_comb__TOP__0\n"); );
    Vtb_gshare_llm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ tb_gshare_llm__DOT__dut__DOT__indexF;
    tb_gshare_llm__DOT__dut__DOT__indexF = 0;
    CData/*0:0*/ tb_gshare_llm__DOT__dut__DOT__acceptF;
    tb_gshare_llm__DOT__dut__DOT__acceptF = 0;
    CData/*1:0*/ tb_gshare_llm__DOT__dut__DOT__update_old;
    tb_gshare_llm__DOT__dut__DOT__update_old = 0;
    // Body
    tb_gshare_llm__DOT__dut__DOT__indexF = ((IData)(vlSelfRef.tb_gshare_llm__DOT__dut__DOT__speculative_history) 
                                            ^ ((8U 
                                                & (VL_REDXOR_8(
                                                               (0x22U 
                                                                & vlSelfRef.tb_gshare_llm__DOT__PCF)) 
                                                   << 3U)) 
                                               | (7U 
                                                  & (vlSelfRef.tb_gshare_llm__DOT__PCF 
                                                     >> 2U))));
    vlSelfRef.tb_gshare_llm__DOT__dut__DOT__resolveE 
        = ((IData)(vlSelfRef.tb_gshare_llm__DOT__dut__DOT__validE) 
           & ((~ (IData)(vlSelfRef.tb_gshare_llm__DOT__dut__DOT__trainedE)) 
              & (IData)(vlSelfRef.tb_gshare_llm__DOT__BranchE)));
    vlSelfRef.tb_gshare_llm__DOT__dut__DOT__committed_history_n 
        = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__committed_history;
    tb_gshare_llm__DOT__dut__DOT__update_old = 1U;
    vlSelfRef.tb_gshare_llm__DOT__dut__DOT__update_new = 1U;
    if (vlSelfRef.tb_gshare_llm__DOT__dut__DOT__resolveE) {
        vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__18__outcome 
            = vlSelfRef.tb_gshare_llm__DOT__PCSrcE;
        vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__18__history 
            = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__committed_history;
        vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__18__Vfuncout 
            = (0xfU & VL_SHIFTL_III(4,4,32, (IData)(vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__18__history), 1U));
        vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__18__Vfuncout 
            = ((0xeU & (IData)(vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__18__Vfuncout)) 
               | (IData)(vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__18__outcome));
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__committed_history_n 
            = vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__18__Vfuncout;
        tb_gshare_llm__DOT__dut__DOT__update_old = 
            vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht
            [vlSelfRef.tb_gshare_llm__DOT__dut__DOT__indexE];
        vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__saturating_update__17__actual_taken 
            = vlSelfRef.tb_gshare_llm__DOT__PCSrcE;
        vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__saturating_update__17__old_counter 
            = tb_gshare_llm__DOT__dut__DOT__update_old;
        vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__saturating_update__17__Vfuncout 
            = (3U & ((IData)(vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__saturating_update__17__actual_taken)
                      ? ((3U == (IData)(vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__saturating_update__17__old_counter))
                          ? 3U : ((IData)(1U) + (IData)(vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__saturating_update__17__old_counter)))
                      : ((0U == (IData)(vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__saturating_update__17__old_counter))
                          ? 0U : ((IData)(vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__saturating_update__17__old_counter) 
                                  - (IData)(1U)))));
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__update_new 
            = vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__saturating_update__17__Vfuncout;
        vlSelfRef.tb_gshare_llm__DOT__BPDirWrongE = 
            ((1U & ((IData)(vlSelfRef.tb_gshare_llm__DOT__dut__DOT__predictionE) 
                    >> 1U)) != (IData)(vlSelfRef.tb_gshare_llm__DOT__PCSrcE));
    } else {
        vlSelfRef.tb_gshare_llm__DOT__BPDirWrongE = 0U;
    }
    vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht_readF 
        = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht
        [tb_gshare_llm__DOT__dut__DOT__indexF];
    if (((IData)(vlSelfRef.tb_gshare_llm__DOT__dut__DOT__resolveE) 
         & ((IData)(vlSelfRef.tb_gshare_llm__DOT__dut__DOT__indexE) 
            == (IData)(tb_gshare_llm__DOT__dut__DOT__indexF)))) {
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht_readF 
            = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__update_new;
    }
    vlSelfRef.tb_gshare_llm__DOT__dut__DOT__indexE_n 
        = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__indexE;
    vlSelfRef.tb_gshare_llm__DOT__dut__DOT__trainedE_n 
        = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__trainedE;
    vlSelfRef.tb_gshare_llm__DOT__dut__DOT__validE_n 
        = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__validE;
    vlSelfRef.tb_gshare_llm__DOT__dut__DOT__consumedD_n 
        = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__consumedD;
    if ((1U & (~ (IData)(vlSelfRef.tb_gshare_llm__DOT__StallD)))) {
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__consumedD_n = 0U;
    }
    if (((((((~ (IData)(vlSelfRef.tb_gshare_llm__DOT__StallE)) 
             & (~ (IData)(vlSelfRef.tb_gshare_llm__DOT__FlushE))) 
            & (IData)(vlSelfRef.tb_gshare_llm__DOT__dut__DOT__validD)) 
           & (IData)(vlSelfRef.tb_gshare_llm__DOT__BranchD)) 
          & (~ (IData)(vlSelfRef.tb_gshare_llm__DOT__dut__DOT__consumedD))) 
         & (IData)(vlSelfRef.tb_gshare_llm__DOT__StallD))) {
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__consumedD_n = 1U;
    }
    if (vlSelfRef.tb_gshare_llm__DOT__FlushE) {
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__indexE_n = 0U;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__trainedE_n = 0U;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__validE_n = 0U;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__predictionE_n 
            = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__predictionE;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__predictionE_n = 1U;
    } else {
        if (vlSelfRef.tb_gshare_llm__DOT__StallE) {
            if (vlSelfRef.tb_gshare_llm__DOT__dut__DOT__resolveE) {
                vlSelfRef.tb_gshare_llm__DOT__dut__DOT__trainedE_n = 1U;
            }
        } else {
            vlSelfRef.tb_gshare_llm__DOT__dut__DOT__trainedE_n = 0U;
        }
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__predictionE_n 
            = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__predictionE;
        if ((1U & (~ (IData)(vlSelfRef.tb_gshare_llm__DOT__StallE)))) {
            if ((((IData)(vlSelfRef.tb_gshare_llm__DOT__dut__DOT__validD) 
                  & (IData)(vlSelfRef.tb_gshare_llm__DOT__BranchD)) 
                 & (~ (IData)(vlSelfRef.tb_gshare_llm__DOT__dut__DOT__consumedD)))) {
                vlSelfRef.tb_gshare_llm__DOT__dut__DOT__indexE_n 
                    = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__indexD;
                vlSelfRef.tb_gshare_llm__DOT__dut__DOT__predictionE_n 
                    = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__predictionD;
                vlSelfRef.tb_gshare_llm__DOT__dut__DOT__validE_n = 1U;
            } else {
                vlSelfRef.tb_gshare_llm__DOT__dut__DOT__indexE_n = 0U;
                vlSelfRef.tb_gshare_llm__DOT__dut__DOT__predictionE_n = 1U;
                vlSelfRef.tb_gshare_llm__DOT__dut__DOT__validE_n = 0U;
            }
        }
    }
    tb_gshare_llm__DOT__dut__DOT__acceptF = ((~ (((IData)(vlSelfRef.tb_gshare_llm__DOT__BPDirWrongE) 
                                                  | ((IData)(vlSelfRef.tb_gshare_llm__DOT__StallF) 
                                                     & (IData)(vlSelfRef.tb_gshare_llm__DOT__dut__DOT__consumedF))) 
                                                 | ((IData)(vlSelfRef.tb_gshare_llm__DOT__FlushD) 
                                                    | (IData)(vlSelfRef.tb_gshare_llm__DOT__StallD)))) 
                                             & (IData)(vlSelfRef.tb_gshare_llm__DOT__BPBranchF));
    vlSelfRef.tb_gshare_llm__DOT__dut__DOT__consumedF_n 
        = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__consumedF;
    if ((1U & (~ (IData)(vlSelfRef.tb_gshare_llm__DOT__StallF)))) {
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__consumedF_n = 0U;
    }
    if (((IData)(tb_gshare_llm__DOT__dut__DOT__acceptF) 
         & (IData)(vlSelfRef.tb_gshare_llm__DOT__StallF))) {
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__consumedF_n = 1U;
    }
    vlSelfRef.tb_gshare_llm__DOT__dut__DOT__indexD_n 
        = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__indexD;
    vlSelfRef.tb_gshare_llm__DOT__dut__DOT__validD_n 
        = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__validD;
    if (vlSelfRef.tb_gshare_llm__DOT__FlushD) {
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__consumedD_n = 0U;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__indexD_n = 0U;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__validD_n = 0U;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__predictionD_n 
            = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__predictionD;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__predictionD_n = 1U;
    } else {
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__predictionD_n 
            = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__predictionD;
        if ((1U & (~ (IData)(vlSelfRef.tb_gshare_llm__DOT__StallD)))) {
            if (tb_gshare_llm__DOT__dut__DOT__acceptF) {
                vlSelfRef.tb_gshare_llm__DOT__dut__DOT__indexD_n 
                    = tb_gshare_llm__DOT__dut__DOT__indexF;
                vlSelfRef.tb_gshare_llm__DOT__dut__DOT__predictionD_n 
                    = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht_readF;
                vlSelfRef.tb_gshare_llm__DOT__dut__DOT__validD_n = 1U;
            } else {
                vlSelfRef.tb_gshare_llm__DOT__dut__DOT__indexD_n = 0U;
                vlSelfRef.tb_gshare_llm__DOT__dut__DOT__predictionD_n = 1U;
                vlSelfRef.tb_gshare_llm__DOT__dut__DOT__validD_n = 0U;
            }
        }
    }
    if (vlSelfRef.tb_gshare_llm__DOT__BPDirWrongE) {
        if ((1U & (~ (IData)(vlSelfRef.tb_gshare_llm__DOT__StallE)))) {
            vlSelfRef.tb_gshare_llm__DOT__dut__DOT__indexE_n = 0U;
            vlSelfRef.tb_gshare_llm__DOT__dut__DOT__validE_n = 0U;
            vlSelfRef.tb_gshare_llm__DOT__dut__DOT__predictionE_n = 1U;
        }
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__trainedE_n 
            = vlSelfRef.tb_gshare_llm__DOT__StallE;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__consumedD_n = 0U;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__consumedF_n = 0U;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__indexD_n = 0U;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__validD_n = 0U;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__predictionD_n = 1U;
    }
    vlSelfRef.tb_gshare_llm__DOT__dut__DOT__speculative_history_n 
        = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__committed_history_n;
    if (((IData)(vlSelfRef.tb_gshare_llm__DOT__dut__DOT__validE_n) 
         & (~ (IData)(vlSelfRef.tb_gshare_llm__DOT__dut__DOT__trainedE_n)))) {
        vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__19__outcome 
            = (1U & ((IData)(vlSelfRef.tb_gshare_llm__DOT__dut__DOT__predictionE_n) 
                     >> 1U));
        vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__19__history 
            = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__speculative_history_n;
        vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__19__Vfuncout 
            = (0xfU & VL_SHIFTL_III(4,4,32, (IData)(vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__19__history), 1U));
        vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__19__Vfuncout 
            = ((0xeU & (IData)(vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__19__Vfuncout)) 
               | (IData)(vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__19__outcome));
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__speculative_history_n 
            = vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__19__Vfuncout;
    }
    if (((IData)(vlSelfRef.tb_gshare_llm__DOT__dut__DOT__validD_n) 
         & (~ (IData)(vlSelfRef.tb_gshare_llm__DOT__dut__DOT__consumedD_n)))) {
        vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__20__outcome 
            = (1U & ((IData)(vlSelfRef.tb_gshare_llm__DOT__dut__DOT__predictionD_n) 
                     >> 1U));
        vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__20__history 
            = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__speculative_history_n;
        vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__20__Vfuncout 
            = (0xfU & VL_SHIFTL_III(4,4,32, (IData)(vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__20__history), 1U));
        vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__20__Vfuncout 
            = ((0xeU & (IData)(vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__20__Vfuncout)) 
               | (IData)(vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__20__outcome));
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__speculative_history_n 
            = vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__20__Vfuncout;
    }
}

void Vtb_gshare_llm___024root___nba_sequent__TOP__0(Vtb_gshare_llm___024root* vlSelf);
void Vtb_gshare_llm___024root___nba_comb__TOP__0(Vtb_gshare_llm___024root* vlSelf);

void Vtb_gshare_llm___024root___eval_nba(Vtb_gshare_llm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gshare_llm___024root___eval_nba\n"); );
    Vtb_gshare_llm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_gshare_llm___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_gshare_llm___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_gshare_llm___024root___nba_sequent__TOP__0(Vtb_gshare_llm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gshare_llm___024root___nba_sequent__TOP__0\n"); );
    Vtb_gshare_llm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdlySet__tb_gshare_llm__DOT__dut__DOT__pht__v0;
    __VdlySet__tb_gshare_llm__DOT__dut__DOT__pht__v0 = 0;
    CData/*1:0*/ __VdlyVal__tb_gshare_llm__DOT__dut__DOT__pht__v16;
    __VdlyVal__tb_gshare_llm__DOT__dut__DOT__pht__v16 = 0;
    CData/*3:0*/ __VdlyDim0__tb_gshare_llm__DOT__dut__DOT__pht__v16;
    __VdlyDim0__tb_gshare_llm__DOT__dut__DOT__pht__v16 = 0;
    CData/*0:0*/ __VdlySet__tb_gshare_llm__DOT__dut__DOT__pht__v16;
    __VdlySet__tb_gshare_llm__DOT__dut__DOT__pht__v16 = 0;
    // Body
    __VdlySet__tb_gshare_llm__DOT__dut__DOT__pht__v0 = 0U;
    __VdlySet__tb_gshare_llm__DOT__dut__DOT__pht__v16 = 0U;
    if (vlSelfRef.tb_gshare_llm__DOT__reset) {
        __VdlySet__tb_gshare_llm__DOT__dut__DOT__pht__v0 = 1U;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__indexD = 0U;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__committed_history = 0U;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__speculative_history = 0U;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__predictionD = 1U;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__predictionE = 1U;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__indexE = 0U;
    } else {
        if (vlSelfRef.tb_gshare_llm__DOT__dut__DOT__resolveE) {
            __VdlyVal__tb_gshare_llm__DOT__dut__DOT__pht__v16 
                = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__update_new;
            __VdlyDim0__tb_gshare_llm__DOT__dut__DOT__pht__v16 
                = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__indexE;
            __VdlySet__tb_gshare_llm__DOT__dut__DOT__pht__v16 = 1U;
        }
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__indexD 
            = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__indexD_n;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__committed_history 
            = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__committed_history_n;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__speculative_history 
            = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__speculative_history_n;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__predictionD 
            = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__predictionD_n;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__predictionE 
            = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__predictionE_n;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__indexE 
            = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__indexE_n;
    }
    vlSelfRef.tb_gshare_llm__DOT__dut__DOT__consumedF 
        = ((1U & (~ (IData)(vlSelfRef.tb_gshare_llm__DOT__reset))) 
           && (IData)(vlSelfRef.tb_gshare_llm__DOT__dut__DOT__consumedF_n));
    vlSelfRef.tb_gshare_llm__DOT__dut__DOT__consumedD 
        = ((1U & (~ (IData)(vlSelfRef.tb_gshare_llm__DOT__reset))) 
           && (IData)(vlSelfRef.tb_gshare_llm__DOT__dut__DOT__consumedD_n));
    vlSelfRef.tb_gshare_llm__DOT__dut__DOT__validD 
        = ((1U & (~ (IData)(vlSelfRef.tb_gshare_llm__DOT__reset))) 
           && (IData)(vlSelfRef.tb_gshare_llm__DOT__dut__DOT__validD_n));
    vlSelfRef.tb_gshare_llm__DOT__dut__DOT__trainedE 
        = ((1U & (~ (IData)(vlSelfRef.tb_gshare_llm__DOT__reset))) 
           && (IData)(vlSelfRef.tb_gshare_llm__DOT__dut__DOT__trainedE_n));
    vlSelfRef.tb_gshare_llm__DOT__dut__DOT__validE 
        = ((1U & (~ (IData)(vlSelfRef.tb_gshare_llm__DOT__reset))) 
           && (IData)(vlSelfRef.tb_gshare_llm__DOT__dut__DOT__validE_n));
    if (__VdlySet__tb_gshare_llm__DOT__dut__DOT__pht__v0) {
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht[0U] = 1U;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht[1U] = 1U;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht[2U] = 1U;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht[3U] = 1U;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht[4U] = 1U;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht[5U] = 1U;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht[6U] = 1U;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht[7U] = 1U;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht[8U] = 1U;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht[9U] = 1U;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht[0xaU] = 1U;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht[0xbU] = 1U;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht[0xcU] = 1U;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht[0xdU] = 1U;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht[0xeU] = 1U;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht[0xfU] = 1U;
    }
    if (__VdlySet__tb_gshare_llm__DOT__dut__DOT__pht__v16) {
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht[__VdlyDim0__tb_gshare_llm__DOT__dut__DOT__pht__v16] 
            = __VdlyVal__tb_gshare_llm__DOT__dut__DOT__pht__v16;
    }
}

VL_INLINE_OPT void Vtb_gshare_llm___024root___nba_comb__TOP__0(Vtb_gshare_llm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gshare_llm___024root___nba_comb__TOP__0\n"); );
    Vtb_gshare_llm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ tb_gshare_llm__DOT__dut__DOT__indexF;
    tb_gshare_llm__DOT__dut__DOT__indexF = 0;
    CData/*0:0*/ tb_gshare_llm__DOT__dut__DOT__acceptF;
    tb_gshare_llm__DOT__dut__DOT__acceptF = 0;
    CData/*1:0*/ tb_gshare_llm__DOT__dut__DOT__update_old;
    tb_gshare_llm__DOT__dut__DOT__update_old = 0;
    // Body
    tb_gshare_llm__DOT__dut__DOT__indexF = ((IData)(vlSelfRef.tb_gshare_llm__DOT__dut__DOT__speculative_history) 
                                            ^ ((8U 
                                                & (VL_REDXOR_8(
                                                               (0x22U 
                                                                & vlSelfRef.tb_gshare_llm__DOT__PCF)) 
                                                   << 3U)) 
                                               | (7U 
                                                  & (vlSelfRef.tb_gshare_llm__DOT__PCF 
                                                     >> 2U))));
    vlSelfRef.tb_gshare_llm__DOT__dut__DOT__resolveE 
        = ((IData)(vlSelfRef.tb_gshare_llm__DOT__dut__DOT__validE) 
           & ((~ (IData)(vlSelfRef.tb_gshare_llm__DOT__dut__DOT__trainedE)) 
              & (IData)(vlSelfRef.tb_gshare_llm__DOT__BranchE)));
    vlSelfRef.tb_gshare_llm__DOT__dut__DOT__committed_history_n 
        = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__committed_history;
    if (vlSelfRef.tb_gshare_llm__DOT__dut__DOT__resolveE) {
        vlSelfRef.tb_gshare_llm__DOT__BPDirWrongE = 
            ((1U & ((IData)(vlSelfRef.tb_gshare_llm__DOT__dut__DOT__predictionE) 
                    >> 1U)) != (IData)(vlSelfRef.tb_gshare_llm__DOT__PCSrcE));
        tb_gshare_llm__DOT__dut__DOT__update_old = 1U;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__update_new = 1U;
        vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__18__outcome 
            = vlSelfRef.tb_gshare_llm__DOT__PCSrcE;
        vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__18__history 
            = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__committed_history;
        vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__18__Vfuncout 
            = (0xfU & VL_SHIFTL_III(4,4,32, (IData)(vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__18__history), 1U));
        vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__18__Vfuncout 
            = ((0xeU & (IData)(vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__18__Vfuncout)) 
               | (IData)(vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__18__outcome));
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__committed_history_n 
            = vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__18__Vfuncout;
        tb_gshare_llm__DOT__dut__DOT__update_old = 
            vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht
            [vlSelfRef.tb_gshare_llm__DOT__dut__DOT__indexE];
        vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__saturating_update__17__actual_taken 
            = vlSelfRef.tb_gshare_llm__DOT__PCSrcE;
        vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__saturating_update__17__old_counter 
            = tb_gshare_llm__DOT__dut__DOT__update_old;
        vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__saturating_update__17__Vfuncout 
            = (3U & ((IData)(vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__saturating_update__17__actual_taken)
                      ? ((3U == (IData)(vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__saturating_update__17__old_counter))
                          ? 3U : ((IData)(1U) + (IData)(vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__saturating_update__17__old_counter)))
                      : ((0U == (IData)(vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__saturating_update__17__old_counter))
                          ? 0U : ((IData)(vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__saturating_update__17__old_counter) 
                                  - (IData)(1U)))));
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__update_new 
            = vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__saturating_update__17__Vfuncout;
    } else {
        vlSelfRef.tb_gshare_llm__DOT__BPDirWrongE = 0U;
        tb_gshare_llm__DOT__dut__DOT__update_old = 1U;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__update_new = 1U;
    }
    vlSelfRef.tb_gshare_llm__DOT__dut__DOT__indexE_n 
        = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__indexE;
    vlSelfRef.tb_gshare_llm__DOT__dut__DOT__trainedE_n 
        = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__trainedE;
    vlSelfRef.tb_gshare_llm__DOT__dut__DOT__validE_n 
        = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__validE;
    vlSelfRef.tb_gshare_llm__DOT__dut__DOT__consumedD_n 
        = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__consumedD;
    if ((1U & (~ (IData)(vlSelfRef.tb_gshare_llm__DOT__StallD)))) {
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__consumedD_n = 0U;
    }
    if (((((((~ (IData)(vlSelfRef.tb_gshare_llm__DOT__StallE)) 
             & (~ (IData)(vlSelfRef.tb_gshare_llm__DOT__FlushE))) 
            & (IData)(vlSelfRef.tb_gshare_llm__DOT__dut__DOT__validD)) 
           & (IData)(vlSelfRef.tb_gshare_llm__DOT__BranchD)) 
          & (~ (IData)(vlSelfRef.tb_gshare_llm__DOT__dut__DOT__consumedD))) 
         & (IData)(vlSelfRef.tb_gshare_llm__DOT__StallD))) {
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__consumedD_n = 1U;
    }
    if (vlSelfRef.tb_gshare_llm__DOT__FlushE) {
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__indexE_n = 0U;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__trainedE_n = 0U;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__validE_n = 0U;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__predictionE_n 
            = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__predictionE;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__predictionE_n = 1U;
    } else {
        if (vlSelfRef.tb_gshare_llm__DOT__StallE) {
            if (vlSelfRef.tb_gshare_llm__DOT__dut__DOT__resolveE) {
                vlSelfRef.tb_gshare_llm__DOT__dut__DOT__trainedE_n = 1U;
            }
        } else {
            vlSelfRef.tb_gshare_llm__DOT__dut__DOT__trainedE_n = 0U;
        }
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__predictionE_n 
            = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__predictionE;
        if ((1U & (~ (IData)(vlSelfRef.tb_gshare_llm__DOT__StallE)))) {
            if ((((IData)(vlSelfRef.tb_gshare_llm__DOT__dut__DOT__validD) 
                  & (IData)(vlSelfRef.tb_gshare_llm__DOT__BranchD)) 
                 & (~ (IData)(vlSelfRef.tb_gshare_llm__DOT__dut__DOT__consumedD)))) {
                vlSelfRef.tb_gshare_llm__DOT__dut__DOT__indexE_n 
                    = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__indexD;
                vlSelfRef.tb_gshare_llm__DOT__dut__DOT__predictionE_n 
                    = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__predictionD;
                vlSelfRef.tb_gshare_llm__DOT__dut__DOT__validE_n = 1U;
            } else {
                vlSelfRef.tb_gshare_llm__DOT__dut__DOT__indexE_n = 0U;
                vlSelfRef.tb_gshare_llm__DOT__dut__DOT__predictionE_n = 1U;
                vlSelfRef.tb_gshare_llm__DOT__dut__DOT__validE_n = 0U;
            }
        }
    }
    tb_gshare_llm__DOT__dut__DOT__acceptF = ((~ (((IData)(vlSelfRef.tb_gshare_llm__DOT__BPDirWrongE) 
                                                  | ((IData)(vlSelfRef.tb_gshare_llm__DOT__StallF) 
                                                     & (IData)(vlSelfRef.tb_gshare_llm__DOT__dut__DOT__consumedF))) 
                                                 | ((IData)(vlSelfRef.tb_gshare_llm__DOT__FlushD) 
                                                    | (IData)(vlSelfRef.tb_gshare_llm__DOT__StallD)))) 
                                             & (IData)(vlSelfRef.tb_gshare_llm__DOT__BPBranchF));
    vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht_readF 
        = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht
        [tb_gshare_llm__DOT__dut__DOT__indexF];
    if (((IData)(vlSelfRef.tb_gshare_llm__DOT__dut__DOT__resolveE) 
         & ((IData)(vlSelfRef.tb_gshare_llm__DOT__dut__DOT__indexE) 
            == (IData)(tb_gshare_llm__DOT__dut__DOT__indexF)))) {
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht_readF 
            = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__update_new;
    }
    vlSelfRef.tb_gshare_llm__DOT__dut__DOT__consumedF_n 
        = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__consumedF;
    if ((1U & (~ (IData)(vlSelfRef.tb_gshare_llm__DOT__StallF)))) {
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__consumedF_n = 0U;
    }
    if (((IData)(tb_gshare_llm__DOT__dut__DOT__acceptF) 
         & (IData)(vlSelfRef.tb_gshare_llm__DOT__StallF))) {
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__consumedF_n = 1U;
    }
    vlSelfRef.tb_gshare_llm__DOT__dut__DOT__indexD_n 
        = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__indexD;
    vlSelfRef.tb_gshare_llm__DOT__dut__DOT__validD_n 
        = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__validD;
    if (vlSelfRef.tb_gshare_llm__DOT__FlushD) {
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__consumedD_n = 0U;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__indexD_n = 0U;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__validD_n = 0U;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__predictionD_n 
            = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__predictionD;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__predictionD_n = 1U;
    } else {
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__predictionD_n 
            = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__predictionD;
        if ((1U & (~ (IData)(vlSelfRef.tb_gshare_llm__DOT__StallD)))) {
            if (tb_gshare_llm__DOT__dut__DOT__acceptF) {
                vlSelfRef.tb_gshare_llm__DOT__dut__DOT__indexD_n 
                    = tb_gshare_llm__DOT__dut__DOT__indexF;
                vlSelfRef.tb_gshare_llm__DOT__dut__DOT__predictionD_n 
                    = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht_readF;
                vlSelfRef.tb_gshare_llm__DOT__dut__DOT__validD_n = 1U;
            } else {
                vlSelfRef.tb_gshare_llm__DOT__dut__DOT__indexD_n = 0U;
                vlSelfRef.tb_gshare_llm__DOT__dut__DOT__predictionD_n = 1U;
                vlSelfRef.tb_gshare_llm__DOT__dut__DOT__validD_n = 0U;
            }
        }
    }
    if (vlSelfRef.tb_gshare_llm__DOT__BPDirWrongE) {
        if ((1U & (~ (IData)(vlSelfRef.tb_gshare_llm__DOT__StallE)))) {
            vlSelfRef.tb_gshare_llm__DOT__dut__DOT__indexE_n = 0U;
            vlSelfRef.tb_gshare_llm__DOT__dut__DOT__validE_n = 0U;
            vlSelfRef.tb_gshare_llm__DOT__dut__DOT__predictionE_n = 1U;
        }
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__trainedE_n 
            = vlSelfRef.tb_gshare_llm__DOT__StallE;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__consumedD_n = 0U;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__consumedF_n = 0U;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__indexD_n = 0U;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__validD_n = 0U;
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__predictionD_n = 1U;
    }
    vlSelfRef.tb_gshare_llm__DOT__dut__DOT__speculative_history_n 
        = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__committed_history_n;
    if (((IData)(vlSelfRef.tb_gshare_llm__DOT__dut__DOT__validE_n) 
         & (~ (IData)(vlSelfRef.tb_gshare_llm__DOT__dut__DOT__trainedE_n)))) {
        vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__19__outcome 
            = (1U & ((IData)(vlSelfRef.tb_gshare_llm__DOT__dut__DOT__predictionE_n) 
                     >> 1U));
        vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__19__history 
            = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__speculative_history_n;
        vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__19__Vfuncout 
            = (0xfU & VL_SHIFTL_III(4,4,32, (IData)(vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__19__history), 1U));
        vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__19__Vfuncout 
            = ((0xeU & (IData)(vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__19__Vfuncout)) 
               | (IData)(vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__19__outcome));
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__speculative_history_n 
            = vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__19__Vfuncout;
    }
    if (((IData)(vlSelfRef.tb_gshare_llm__DOT__dut__DOT__validD_n) 
         & (~ (IData)(vlSelfRef.tb_gshare_llm__DOT__dut__DOT__consumedD_n)))) {
        vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__20__outcome 
            = (1U & ((IData)(vlSelfRef.tb_gshare_llm__DOT__dut__DOT__predictionD_n) 
                     >> 1U));
        vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__20__history 
            = vlSelfRef.tb_gshare_llm__DOT__dut__DOT__speculative_history_n;
        vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__20__Vfuncout 
            = (0xfU & VL_SHIFTL_III(4,4,32, (IData)(vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__20__history), 1U));
        vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__20__Vfuncout 
            = ((0xeU & (IData)(vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__20__Vfuncout)) 
               | (IData)(vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__20__outcome));
        vlSelfRef.tb_gshare_llm__DOT__dut__DOT__speculative_history_n 
            = vlSelfRef.__Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__20__Vfuncout;
    }
}

void Vtb_gshare_llm___024root___timing_resume(Vtb_gshare_llm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gshare_llm___024root___timing_resume\n"); );
    Vtb_gshare_llm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h1b6aa2eb__0.resume(
                                                   "@(posedge tb_gshare_llm.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h1b6aa2aa__0.resume(
                                                   "@(negedge tb_gshare_llm.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_gshare_llm___024root___timing_commit(Vtb_gshare_llm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gshare_llm___024root___timing_commit\n"); );
    Vtb_gshare_llm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h1b6aa2eb__0.commit(
                                                   "@(posedge tb_gshare_llm.clk)");
    }
    if ((! (2ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h1b6aa2aa__0.commit(
                                                   "@(negedge tb_gshare_llm.clk)");
    }
}

void Vtb_gshare_llm___024root___eval_triggers__act(Vtb_gshare_llm___024root* vlSelf);

bool Vtb_gshare_llm___024root___eval_phase__act(Vtb_gshare_llm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gshare_llm___024root___eval_phase__act\n"); );
    Vtb_gshare_llm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_gshare_llm___024root___eval_triggers__act(vlSelf);
    Vtb_gshare_llm___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_gshare_llm___024root___timing_resume(vlSelf);
        Vtb_gshare_llm___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_gshare_llm___024root___eval_phase__nba(Vtb_gshare_llm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gshare_llm___024root___eval_phase__nba\n"); );
    Vtb_gshare_llm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_gshare_llm___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_gshare_llm___024root___dump_triggers__nba(Vtb_gshare_llm___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_gshare_llm___024root___dump_triggers__act(Vtb_gshare_llm___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_gshare_llm___024root___eval(Vtb_gshare_llm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gshare_llm___024root___eval\n"); );
    Vtb_gshare_llm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_gshare_llm___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_gshare_llm___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_gshare_llm___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_gshare_llm___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_gshare_llm___024root___eval_debug_assertions(Vtb_gshare_llm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gshare_llm___024root___eval_debug_assertions\n"); );
    Vtb_gshare_llm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
