// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ogehl_wally_extended.h for the primary calling header

#include "Vtb_ogehl_wally_extended__pch.h"
#include "Vtb_ogehl_wally_extended__Syms.h"
#include "Vtb_ogehl_wally_extended___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_ogehl_wally_extended___024root___eval_initial__TOP__Vtiming__0(Vtb_ogehl_wally_extended___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ogehl_wally_extended___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_ogehl_wally_extended__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vtask_tb_ogehl_wally_extended__DOT__check__4__condition;
    __Vtask_tb_ogehl_wally_extended__DOT__check__4__condition = 0;
    std::string __Vtask_tb_ogehl_wally_extended__DOT__check__4__description;
    CData/*0:0*/ __Vtask_tb_ogehl_wally_extended__DOT__check__6__condition;
    __Vtask_tb_ogehl_wally_extended__DOT__check__6__condition = 0;
    std::string __Vtask_tb_ogehl_wally_extended__DOT__check__6__description;
    CData/*0:0*/ __Vtask_tb_ogehl_wally_extended__DOT__check__7__condition;
    __Vtask_tb_ogehl_wally_extended__DOT__check__7__condition = 0;
    std::string __Vtask_tb_ogehl_wally_extended__DOT__check__7__description;
    VlWide<7>/*199:0*/ __Vtask_tb_ogehl_wally_extended__DOT__check_history__9__expected;
    VL_ZERO_W(200, __Vtask_tb_ogehl_wally_extended__DOT__check_history__9__expected);
    std::string __Vtask_tb_ogehl_wally_extended__DOT__check_history__9__description;
    CData/*0:0*/ __Vtask_tb_ogehl_wally_extended__DOT__check__10__condition;
    __Vtask_tb_ogehl_wally_extended__DOT__check__10__condition = 0;
    std::string __Vtask_tb_ogehl_wally_extended__DOT__check__10__description;
    VlWide<7>/*199:0*/ __Vtask_tb_ogehl_wally_extended__DOT__check_history__12__expected;
    VL_ZERO_W(200, __Vtask_tb_ogehl_wally_extended__DOT__check_history__12__expected);
    std::string __Vtask_tb_ogehl_wally_extended__DOT__check_history__12__description;
    CData/*0:0*/ __Vtask_tb_ogehl_wally_extended__DOT__check__13__condition;
    __Vtask_tb_ogehl_wally_extended__DOT__check__13__condition = 0;
    std::string __Vtask_tb_ogehl_wally_extended__DOT__check__13__description;
    VlWide<7>/*199:0*/ __Vtask_tb_ogehl_wally_extended__DOT__check_history__20__expected;
    VL_ZERO_W(200, __Vtask_tb_ogehl_wally_extended__DOT__check_history__20__expected);
    std::string __Vtask_tb_ogehl_wally_extended__DOT__check_history__20__description;
    CData/*0:0*/ __Vtask_tb_ogehl_wally_extended__DOT__check__21__condition;
    __Vtask_tb_ogehl_wally_extended__DOT__check__21__condition = 0;
    std::string __Vtask_tb_ogehl_wally_extended__DOT__check__21__description;
    CData/*0:0*/ __Vtask_tb_ogehl_wally_extended__DOT__check__22__condition;
    __Vtask_tb_ogehl_wally_extended__DOT__check__22__condition = 0;
    std::string __Vtask_tb_ogehl_wally_extended__DOT__check__22__description;
    CData/*0:0*/ __Vtask_tb_ogehl_wally_extended__DOT__check__23__condition;
    __Vtask_tb_ogehl_wally_extended__DOT__check__23__condition = 0;
    std::string __Vtask_tb_ogehl_wally_extended__DOT__check__23__description;
    CData/*0:0*/ __Vtask_tb_ogehl_wally_extended__DOT__check__28__condition;
    __Vtask_tb_ogehl_wally_extended__DOT__check__28__condition = 0;
    std::string __Vtask_tb_ogehl_wally_extended__DOT__check__28__description;
    CData/*0:0*/ __Vtask_tb_ogehl_wally_extended__DOT__check__30__condition;
    __Vtask_tb_ogehl_wally_extended__DOT__check__30__condition = 0;
    std::string __Vtask_tb_ogehl_wally_extended__DOT__check__30__description;
    CData/*0:0*/ __Vtask_tb_ogehl_wally_extended__DOT__check__32__condition;
    __Vtask_tb_ogehl_wally_extended__DOT__check__32__condition = 0;
    std::string __Vtask_tb_ogehl_wally_extended__DOT__check__32__description;
    CData/*0:0*/ __Vtask_tb_ogehl_wally_extended__DOT__check__39__condition;
    __Vtask_tb_ogehl_wally_extended__DOT__check__39__condition = 0;
    std::string __Vtask_tb_ogehl_wally_extended__DOT__check__39__description;
    VlWide<7>/*199:0*/ __Vtask_tb_ogehl_wally_extended__DOT__check_history__40__expected;
    VL_ZERO_W(200, __Vtask_tb_ogehl_wally_extended__DOT__check_history__40__expected);
    std::string __Vtask_tb_ogehl_wally_extended__DOT__check_history__40__description;
    CData/*0:0*/ __Vtask_tb_ogehl_wally_extended__DOT__check__41__condition;
    __Vtask_tb_ogehl_wally_extended__DOT__check__41__condition = 0;
    std::string __Vtask_tb_ogehl_wally_extended__DOT__check__41__description;
    CData/*0:0*/ __Vtask_tb_ogehl_wally_extended__DOT__check__43__condition;
    __Vtask_tb_ogehl_wally_extended__DOT__check__43__condition = 0;
    std::string __Vtask_tb_ogehl_wally_extended__DOT__check__43__description;
    VlWide<7>/*199:0*/ __Vtask_tb_ogehl_wally_extended__DOT__check_history__44__expected;
    VL_ZERO_W(200, __Vtask_tb_ogehl_wally_extended__DOT__check_history__44__expected);
    std::string __Vtask_tb_ogehl_wally_extended__DOT__check_history__44__description;
    CData/*0:0*/ __Vtask_tb_ogehl_wally_extended__DOT__check__45__condition;
    __Vtask_tb_ogehl_wally_extended__DOT__check__45__condition = 0;
    std::string __Vtask_tb_ogehl_wally_extended__DOT__check__45__description;
    VlWide<7>/*199:0*/ __Vtask_tb_ogehl_wally_extended__DOT__check_history__52__expected;
    VL_ZERO_W(200, __Vtask_tb_ogehl_wally_extended__DOT__check_history__52__expected);
    std::string __Vtask_tb_ogehl_wally_extended__DOT__check_history__52__description;
    CData/*0:0*/ __Vtask_tb_ogehl_wally_extended__DOT__check__53__condition;
    __Vtask_tb_ogehl_wally_extended__DOT__check__53__condition = 0;
    std::string __Vtask_tb_ogehl_wally_extended__DOT__check__53__description;
    CData/*0:0*/ __Vtask_tb_ogehl_wally_extended__DOT__check__54__condition;
    __Vtask_tb_ogehl_wally_extended__DOT__check__54__condition = 0;
    std::string __Vtask_tb_ogehl_wally_extended__DOT__check__54__description;
    CData/*0:0*/ __Vtask_tb_ogehl_wally_extended__DOT__check__55__condition;
    __Vtask_tb_ogehl_wally_extended__DOT__check__55__condition = 0;
    std::string __Vtask_tb_ogehl_wally_extended__DOT__check__55__description;
    VlWide<7>/*199:0*/ __Vtask_tb_ogehl_wally_extended__DOT__check_history__62__expected;
    VL_ZERO_W(200, __Vtask_tb_ogehl_wally_extended__DOT__check_history__62__expected);
    std::string __Vtask_tb_ogehl_wally_extended__DOT__check_history__62__description;
    CData/*0:0*/ __Vtask_tb_ogehl_wally_extended__DOT__check__63__condition;
    __Vtask_tb_ogehl_wally_extended__DOT__check__63__condition = 0;
    std::string __Vtask_tb_ogehl_wally_extended__DOT__check__63__description;
    CData/*0:0*/ __Vtask_tb_ogehl_wally_extended__DOT__check__64__condition;
    __Vtask_tb_ogehl_wally_extended__DOT__check__64__condition = 0;
    std::string __Vtask_tb_ogehl_wally_extended__DOT__check__64__description;
    CData/*0:0*/ __Vtask_tb_ogehl_wally_extended__DOT__check__65__condition;
    __Vtask_tb_ogehl_wally_extended__DOT__check__65__condition = 0;
    std::string __Vtask_tb_ogehl_wally_extended__DOT__check__65__description;
    VlWide<7>/*199:0*/ __Vtask_tb_ogehl_wally_extended__DOT__check_history__67__expected;
    VL_ZERO_W(200, __Vtask_tb_ogehl_wally_extended__DOT__check_history__67__expected);
    std::string __Vtask_tb_ogehl_wally_extended__DOT__check_history__67__description;
    CData/*0:0*/ __Vtask_tb_ogehl_wally_extended__DOT__check__68__condition;
    __Vtask_tb_ogehl_wally_extended__DOT__check__68__condition = 0;
    std::string __Vtask_tb_ogehl_wally_extended__DOT__check__68__description;
    // Body
    vlSelfRef.tb_ogehl_wally_extended__DOT__StallD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__StallE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__FlushD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__FlushE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__FlushM = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__InstrValidD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__InstrValidE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCF = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__BPBranchF = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__BPJumpF = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__BranchD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__JumpD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__CallD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__ReturnD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__BranchE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__JumpE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__CallE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__ReturnE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCSrcE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__reset = 1U;
    co_await vlSelfRef.__VtrigSched_hbe207624__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         26);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                         27);
    co_await vlSelfRef.__VtrigSched_hbe2076e5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         66);
    vlSelfRef.tb_ogehl_wally_extended__DOT__reset = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCF = 0x80000100U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__BPBranchF = 1U;
    co_await vlSelfRef.__VtrigSched_hbe207624__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         26);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                         27);
    __Vtask_tb_ogehl_wally_extended__DOT__check__4__description = 
        std::string{"A: Fetch metadata reaches Decode"};
    __Vtask_tb_ogehl_wally_extended__DOT__check__4__condition 
        = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__meta_validD;
    vlSelfRef.tb_ogehl_wally_extended__DOT__checks 
        = ((IData)(1U) + vlSelfRef.tb_ogehl_wally_extended__DOT__checks);
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_ogehl_wally_extended__DOT__check__4__condition)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ogehl_wally_extended.sv:33: Assertion failed in %Ntb_ogehl_wally_extended.check: FAIL: %@\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_ogehl_wally_extended__DOT__check__4__description));
        VL_STOP_MT("experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 33, "", false);
    }
    VL_WRITEF_NX("PASS: %@\n",0,-1,&(__Vtask_tb_ogehl_wally_extended__DOT__check__4__description));
    co_await vlSelfRef.__VtrigSched_hbe2076e5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         96);
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCF = 0x80000104U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCD = 0x80000100U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__BranchD = 1U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__InstrValidD = 1U;
    co_await vlSelfRef.__VtrigSched_hbe207624__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         26);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                         27);
    __Vtask_tb_ogehl_wally_extended__DOT__check__6__description = 
        std::string{"A: metadata reaches Execute"};
    __Vtask_tb_ogehl_wally_extended__DOT__check__6__condition 
        = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__meta_validE;
    vlSelfRef.tb_ogehl_wally_extended__DOT__checks 
        = ((IData)(1U) + vlSelfRef.tb_ogehl_wally_extended__DOT__checks);
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_ogehl_wally_extended__DOT__check__6__condition)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ogehl_wally_extended.sv:33: Assertion failed in %Ntb_ogehl_wally_extended.check: FAIL: %@\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_ogehl_wally_extended__DOT__check__6__description));
        VL_STOP_MT("experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 33, "", false);
    }
    VL_WRITEF_NX("PASS: %@\n",0,-1,&(__Vtask_tb_ogehl_wally_extended__DOT__check__6__description));
    __Vtask_tb_ogehl_wally_extended__DOT__check__7__description = 
        std::string{"B: metadata reaches Decode"};
    __Vtask_tb_ogehl_wally_extended__DOT__check__7__condition 
        = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__meta_validD;
    vlSelfRef.tb_ogehl_wally_extended__DOT__checks 
        = ((IData)(1U) + vlSelfRef.tb_ogehl_wally_extended__DOT__checks);
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_ogehl_wally_extended__DOT__check__7__condition)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ogehl_wally_extended.sv:33: Assertion failed in %Ntb_ogehl_wally_extended.check: FAIL: %@\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_ogehl_wally_extended__DOT__check__7__description));
        VL_STOP_MT("experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 33, "", false);
    }
    VL_WRITEF_NX("PASS: %@\n",0,-1,&(__Vtask_tb_ogehl_wally_extended__DOT__check__7__description));
    co_await vlSelfRef.__VtrigSched_hbe2076e5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         109);
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCE = 0x80000100U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCD = 0x80000104U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__BranchE = 1U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCSrcE = 1U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__BranchD = 1U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__InstrValidE = 1U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__InstrValidD = 1U;
    co_await vlSelfRef.__VtrigSched_hbe207624__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         26);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                         27);
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__9__description = 
        std::string{"A: taken outcome committed"};
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__9__expected[0U] = 1U;
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__9__expected[1U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__9__expected[2U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__9__expected[3U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__9__expected[4U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__9__expected[5U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__9__expected[6U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check__10__description 
        = __Vtask_tb_ogehl_wally_extended__DOT__check_history__9__description;
    __Vtask_tb_ogehl_wally_extended__DOT__check__10__condition 
        = (0U == (((((((vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[0U] 
                        ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__9__expected[0U]) 
                       | (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[1U] 
                          ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__9__expected[1U])) 
                      | (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[2U] 
                         ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__9__expected[2U])) 
                     | (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[3U] 
                        ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__9__expected[3U])) 
                    | (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[4U] 
                       ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__9__expected[4U])) 
                   | (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[5U] 
                      ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__9__expected[5U])) 
                  | (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[6U] 
                     ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__9__expected[6U])));
    vlSelfRef.tb_ogehl_wally_extended__DOT__checks 
        = ((IData)(1U) + vlSelfRef.tb_ogehl_wally_extended__DOT__checks);
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_ogehl_wally_extended__DOT__check__10__condition)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ogehl_wally_extended.sv:33: Assertion failed in %Ntb_ogehl_wally_extended.check: FAIL: %@\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_ogehl_wally_extended__DOT__check__10__description));
        VL_STOP_MT("experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 33, "", false);
    }
    VL_WRITEF_NX("PASS: %@\n",0,-1,&(__Vtask_tb_ogehl_wally_extended__DOT__check__10__description));
    co_await vlSelfRef.__VtrigSched_hbe2076e5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         123);
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCE = 0x80000104U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCSrcE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__BranchD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__InstrValidD = 0U;
    co_await vlSelfRef.__VtrigSched_hbe207624__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         26);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                         27);
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__12__description = 
        std::string{"B: not-taken outcome committed after A"};
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__12__expected[0U] = 2U;
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__12__expected[1U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__12__expected[2U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__12__expected[3U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__12__expected[4U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__12__expected[5U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__12__expected[6U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check__13__description 
        = __Vtask_tb_ogehl_wally_extended__DOT__check_history__12__description;
    __Vtask_tb_ogehl_wally_extended__DOT__check__13__condition 
        = (0U == (((((((vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[0U] 
                        ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__12__expected[0U]) 
                       | (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[1U] 
                          ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__12__expected[1U])) 
                      | (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[2U] 
                         ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__12__expected[2U])) 
                     | (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[3U] 
                        ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__12__expected[3U])) 
                    | (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[4U] 
                       ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__12__expected[4U])) 
                   | (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[5U] 
                      ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__12__expected[5U])) 
                  | (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[6U] 
                     ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__12__expected[6U])));
    vlSelfRef.tb_ogehl_wally_extended__DOT__checks 
        = ((IData)(1U) + vlSelfRef.tb_ogehl_wally_extended__DOT__checks);
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_ogehl_wally_extended__DOT__check__13__condition)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ogehl_wally_extended.sv:33: Assertion failed in %Ntb_ogehl_wally_extended.check: FAIL: %@\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_ogehl_wally_extended__DOT__check__13__description));
        VL_STOP_MT("experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 33, "", false);
    }
    VL_WRITEF_NX("PASS: %@\n",0,-1,&(__Vtask_tb_ogehl_wally_extended__DOT__check__13__description));
    vlSelfRef.tb_ogehl_wally_extended__DOT__reset = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__StallD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__StallE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__FlushD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__FlushE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__FlushM = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__InstrValidD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__InstrValidE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCF = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__BPBranchF = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__BPJumpF = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__BranchD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__JumpD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__CallD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__ReturnD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__BranchE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__JumpE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__CallE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__ReturnE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCSrcE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__reset = 1U;
    co_await vlSelfRef.__VtrigSched_hbe207624__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         26);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                         27);
    co_await vlSelfRef.__VtrigSched_hbe2076e5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         66);
    vlSelfRef.tb_ogehl_wally_extended__DOT__reset = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCF = 0x80000200U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__BPBranchF = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__BPJumpF = 1U;
    co_await vlSelfRef.__VtrigSched_hbe207624__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         26);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                         27);
    co_await vlSelfRef.__VtrigSched_hbe2076e5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         144);
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCD = 0x80000200U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__JumpD = 1U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__InstrValidD = 1U;
    co_await vlSelfRef.__VtrigSched_hbe207624__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         26);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                         27);
    co_await vlSelfRef.__VtrigSched_hbe2076e5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         150);
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCE = 0x80000200U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__JumpD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__InstrValidD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__JumpE = 1U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__InstrValidE = 1U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCSrcE = 1U;
    co_await vlSelfRef.__VtrigSched_hbe207624__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         26);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                         27);
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__20__description = 
        std::string{"Unconditional jump commits taken history"};
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__20__expected[0U] = 1U;
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__20__expected[1U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__20__expected[2U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__20__expected[3U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__20__expected[4U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__20__expected[5U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__20__expected[6U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check__21__description 
        = __Vtask_tb_ogehl_wally_extended__DOT__check_history__20__description;
    __Vtask_tb_ogehl_wally_extended__DOT__check__21__condition 
        = (0U == (((((((vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[0U] 
                        ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__20__expected[0U]) 
                       | (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[1U] 
                          ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__20__expected[1U])) 
                      | (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[2U] 
                         ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__20__expected[2U])) 
                     | (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[3U] 
                        ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__20__expected[3U])) 
                    | (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[4U] 
                       ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__20__expected[4U])) 
                   | (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[5U] 
                      ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__20__expected[5U])) 
                  | (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[6U] 
                     ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__20__expected[6U])));
    vlSelfRef.tb_ogehl_wally_extended__DOT__checks 
        = ((IData)(1U) + vlSelfRef.tb_ogehl_wally_extended__DOT__checks);
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_ogehl_wally_extended__DOT__check__21__condition)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ogehl_wally_extended.sv:33: Assertion failed in %Ntb_ogehl_wally_extended.check: FAIL: %@\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_ogehl_wally_extended__DOT__check__21__description));
        VL_STOP_MT("experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 33, "", false);
    }
    VL_WRITEF_NX("PASS: %@\n",0,-1,&(__Vtask_tb_ogehl_wally_extended__DOT__check__21__description));
    __Vtask_tb_ogehl_wally_extended__DOT__check__22__description = 
        std::string{"Unconditional jump does not alter threshold counter"};
    __Vtask_tb_ogehl_wally_extended__DOT__check__22__condition 
        = (0U == VL_EXTENDS_II(32,8, (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__TC)));
    vlSelfRef.tb_ogehl_wally_extended__DOT__checks 
        = ((IData)(1U) + vlSelfRef.tb_ogehl_wally_extended__DOT__checks);
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_ogehl_wally_extended__DOT__check__22__condition)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ogehl_wally_extended.sv:33: Assertion failed in %Ntb_ogehl_wally_extended.check: FAIL: %@\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_ogehl_wally_extended__DOT__check__22__description));
        VL_STOP_MT("experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 33, "", false);
    }
    VL_WRITEF_NX("PASS: %@\n",0,-1,&(__Vtask_tb_ogehl_wally_extended__DOT__check__22__description));
    __Vtask_tb_ogehl_wally_extended__DOT__check__23__description = 
        std::string{"Unconditional jump does not alter threshold"};
    __Vtask_tb_ogehl_wally_extended__DOT__check__23__condition 
        = (8U == (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__thresupdate));
    vlSelfRef.tb_ogehl_wally_extended__DOT__checks 
        = ((IData)(1U) + vlSelfRef.tb_ogehl_wally_extended__DOT__checks);
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_ogehl_wally_extended__DOT__check__23__condition)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ogehl_wally_extended.sv:33: Assertion failed in %Ntb_ogehl_wally_extended.check: FAIL: %@\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_ogehl_wally_extended__DOT__check__23__description));
        VL_STOP_MT("experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 33, "", false);
    }
    VL_WRITEF_NX("PASS: %@\n",0,-1,&(__Vtask_tb_ogehl_wally_extended__DOT__check__23__description));
    vlSelfRef.tb_ogehl_wally_extended__DOT__reset = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__StallD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__StallE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__FlushD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__FlushE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__FlushM = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__InstrValidD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__InstrValidE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCF = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__BPBranchF = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__BPJumpF = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__BranchD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__JumpD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__CallD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__ReturnD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__BranchE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__JumpE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__CallE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__ReturnE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCSrcE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__reset = 1U;
    co_await vlSelfRef.__VtrigSched_hbe207624__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         26);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                         27);
    co_await vlSelfRef.__VtrigSched_hbe2076e5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         66);
    vlSelfRef.tb_ogehl_wally_extended__DOT__reset = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCF = 0x80000300U;
    co_await vlSelfRef.__VtrigSched_hbe207624__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         26);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                         27);
    __Vtask_tb_ogehl_wally_extended__DOT__check__28__description = 
        std::string{"Decode metadata initially valid"};
    __Vtask_tb_ogehl_wally_extended__DOT__check__28__condition 
        = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__meta_validD;
    vlSelfRef.tb_ogehl_wally_extended__DOT__checks 
        = ((IData)(1U) + vlSelfRef.tb_ogehl_wally_extended__DOT__checks);
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_ogehl_wally_extended__DOT__check__28__condition)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ogehl_wally_extended.sv:33: Assertion failed in %Ntb_ogehl_wally_extended.check: FAIL: %@\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_ogehl_wally_extended__DOT__check__28__description));
        VL_STOP_MT("experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 33, "", false);
    }
    VL_WRITEF_NX("PASS: %@\n",0,-1,&(__Vtask_tb_ogehl_wally_extended__DOT__check__28__description));
    co_await vlSelfRef.__VtrigSched_hbe2076e5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         179);
    vlSelfRef.tb_ogehl_wally_extended__DOT__StallD = 1U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__FlushD = 1U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCF = 0x80000304U;
    co_await vlSelfRef.__VtrigSched_hbe207624__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         26);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                         27);
    __Vtask_tb_ogehl_wally_extended__DOT__check__30__description = 
        std::string{"Stalled Decode metadata holds despite FlushD"};
    __Vtask_tb_ogehl_wally_extended__DOT__check__30__condition 
        = vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__meta_validD;
    vlSelfRef.tb_ogehl_wally_extended__DOT__checks 
        = ((IData)(1U) + vlSelfRef.tb_ogehl_wally_extended__DOT__checks);
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_ogehl_wally_extended__DOT__check__30__condition)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ogehl_wally_extended.sv:33: Assertion failed in %Ntb_ogehl_wally_extended.check: FAIL: %@\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_ogehl_wally_extended__DOT__check__30__description));
        VL_STOP_MT("experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 33, "", false);
    }
    VL_WRITEF_NX("PASS: %@\n",0,-1,&(__Vtask_tb_ogehl_wally_extended__DOT__check__30__description));
    co_await vlSelfRef.__VtrigSched_hbe2076e5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         188);
    vlSelfRef.tb_ogehl_wally_extended__DOT__StallD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__FlushD = 1U;
    co_await vlSelfRef.__VtrigSched_hbe207624__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         26);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                         27);
    __Vtask_tb_ogehl_wally_extended__DOT__check__32__description = 
        std::string{"Enabled Decode flush clears metadata"};
    __Vtask_tb_ogehl_wally_extended__DOT__check__32__condition 
        = (1U & (~ (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__meta_validD)));
    vlSelfRef.tb_ogehl_wally_extended__DOT__checks 
        = ((IData)(1U) + vlSelfRef.tb_ogehl_wally_extended__DOT__checks);
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_ogehl_wally_extended__DOT__check__32__condition)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ogehl_wally_extended.sv:33: Assertion failed in %Ntb_ogehl_wally_extended.check: FAIL: %@\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_ogehl_wally_extended__DOT__check__32__description));
        VL_STOP_MT("experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 33, "", false);
    }
    VL_WRITEF_NX("PASS: %@\n",0,-1,&(__Vtask_tb_ogehl_wally_extended__DOT__check__32__description));
    vlSelfRef.tb_ogehl_wally_extended__DOT__reset = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__StallD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__StallE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__FlushD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__FlushE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__FlushM = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__InstrValidD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__InstrValidE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCF = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__BPBranchF = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__BPJumpF = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__BranchD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__JumpD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__CallD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__ReturnD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__BranchE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__JumpE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__CallE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__ReturnE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCSrcE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__reset = 1U;
    co_await vlSelfRef.__VtrigSched_hbe207624__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         26);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                         27);
    co_await vlSelfRef.__VtrigSched_hbe2076e5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         66);
    vlSelfRef.tb_ogehl_wally_extended__DOT__reset = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCF = 0x80000400U;
    co_await vlSelfRef.__VtrigSched_hbe207624__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         26);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                         27);
    co_await vlSelfRef.__VtrigSched_hbe2076e5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         205);
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCD = 0x80000400U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__BranchD = 1U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__InstrValidD = 1U;
    co_await vlSelfRef.__VtrigSched_hbe207624__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         26);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                         27);
    co_await vlSelfRef.__VtrigSched_hbe2076e5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         211);
    vlSelfRef.tb_ogehl_wally_extended__DOT__BranchD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__InstrValidD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__BranchE = 1U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__InstrValidE = 1U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCE = 0x80000400U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCSrcE = 1U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__StallE = 1U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__StallD = 1U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__FlushE = 1U;
    co_await vlSelfRef.__VtrigSched_hbe207624__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         26);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                         27);
    co_await vlSelfRef.__VtrigSched_hbe207624__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         26);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                         27);
    co_await vlSelfRef.__VtrigSched_hbe207624__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         26);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                         27);
    __Vtask_tb_ogehl_wally_extended__DOT__check__39__description = 
        std::string{"Execute branch not trained during stall"};
    __Vtask_tb_ogehl_wally_extended__DOT__check__39__condition 
        = (0U == VL_EXTENDS_II(32,8, (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__TC)));
    vlSelfRef.tb_ogehl_wally_extended__DOT__checks 
        = ((IData)(1U) + vlSelfRef.tb_ogehl_wally_extended__DOT__checks);
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_ogehl_wally_extended__DOT__check__39__condition)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ogehl_wally_extended.sv:33: Assertion failed in %Ntb_ogehl_wally_extended.check: FAIL: %@\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_ogehl_wally_extended__DOT__check__39__description));
        VL_STOP_MT("experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 33, "", false);
    }
    VL_WRITEF_NX("PASS: %@\n",0,-1,&(__Vtask_tb_ogehl_wally_extended__DOT__check__39__description));
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__40__description = 
        std::string{"Execute branch not committed during stall"};
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__40__expected[0U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__40__expected[1U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__40__expected[2U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__40__expected[3U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__40__expected[4U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__40__expected[5U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__40__expected[6U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check__41__description 
        = __Vtask_tb_ogehl_wally_extended__DOT__check_history__40__description;
    __Vtask_tb_ogehl_wally_extended__DOT__check__41__condition 
        = (0U == (((((((vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[0U] 
                        ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__40__expected[0U]) 
                       | (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[1U] 
                          ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__40__expected[1U])) 
                      | (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[2U] 
                         ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__40__expected[2U])) 
                     | (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[3U] 
                        ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__40__expected[3U])) 
                    | (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[4U] 
                       ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__40__expected[4U])) 
                   | (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[5U] 
                      ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__40__expected[5U])) 
                  | (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[6U] 
                     ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__40__expected[6U])));
    vlSelfRef.tb_ogehl_wally_extended__DOT__checks 
        = ((IData)(1U) + vlSelfRef.tb_ogehl_wally_extended__DOT__checks);
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_ogehl_wally_extended__DOT__check__41__condition)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ogehl_wally_extended.sv:33: Assertion failed in %Ntb_ogehl_wally_extended.check: FAIL: %@\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_ogehl_wally_extended__DOT__check__41__description));
        VL_STOP_MT("experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 33, "", false);
    }
    VL_WRITEF_NX("PASS: %@\n",0,-1,&(__Vtask_tb_ogehl_wally_extended__DOT__check__41__description));
    co_await vlSelfRef.__VtrigSched_hbe2076e5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         229);
    vlSelfRef.tb_ogehl_wally_extended__DOT__StallE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__StallD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__FlushE = 0U;
    co_await vlSelfRef.__VtrigSched_hbe207624__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         26);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                         27);
    __Vtask_tb_ogehl_wally_extended__DOT__check__43__description = 
        std::string{"Execute branch trains once after release"};
    __Vtask_tb_ogehl_wally_extended__DOT__check__43__condition 
        = (0xffffffffU == VL_EXTENDS_II(32,8, (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__TC)));
    vlSelfRef.tb_ogehl_wally_extended__DOT__checks 
        = ((IData)(1U) + vlSelfRef.tb_ogehl_wally_extended__DOT__checks);
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_ogehl_wally_extended__DOT__check__43__condition)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ogehl_wally_extended.sv:33: Assertion failed in %Ntb_ogehl_wally_extended.check: FAIL: %@\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_ogehl_wally_extended__DOT__check__43__description));
        VL_STOP_MT("experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 33, "", false);
    }
    VL_WRITEF_NX("PASS: %@\n",0,-1,&(__Vtask_tb_ogehl_wally_extended__DOT__check__43__description));
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__44__description = 
        std::string{"Execute branch commits once after release"};
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__44__expected[0U] = 1U;
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__44__expected[1U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__44__expected[2U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__44__expected[3U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__44__expected[4U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__44__expected[5U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__44__expected[6U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check__45__description 
        = __Vtask_tb_ogehl_wally_extended__DOT__check_history__44__description;
    __Vtask_tb_ogehl_wally_extended__DOT__check__45__condition 
        = (0U == (((((((vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[0U] 
                        ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__44__expected[0U]) 
                       | (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[1U] 
                          ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__44__expected[1U])) 
                      | (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[2U] 
                         ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__44__expected[2U])) 
                     | (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[3U] 
                        ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__44__expected[3U])) 
                    | (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[4U] 
                       ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__44__expected[4U])) 
                   | (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[5U] 
                      ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__44__expected[5U])) 
                  | (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[6U] 
                     ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__44__expected[6U])));
    vlSelfRef.tb_ogehl_wally_extended__DOT__checks 
        = ((IData)(1U) + vlSelfRef.tb_ogehl_wally_extended__DOT__checks);
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_ogehl_wally_extended__DOT__check__45__condition)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ogehl_wally_extended.sv:33: Assertion failed in %Ntb_ogehl_wally_extended.check: FAIL: %@\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_ogehl_wally_extended__DOT__check__45__description));
        VL_STOP_MT("experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 33, "", false);
    }
    VL_WRITEF_NX("PASS: %@\n",0,-1,&(__Vtask_tb_ogehl_wally_extended__DOT__check__45__description));
    vlSelfRef.tb_ogehl_wally_extended__DOT__reset = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__StallD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__StallE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__FlushD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__FlushE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__FlushM = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__InstrValidD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__InstrValidE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCF = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__BPBranchF = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__BPJumpF = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__BranchD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__JumpD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__CallD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__ReturnD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__BranchE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__JumpE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__CallE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__ReturnE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCSrcE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__reset = 1U;
    co_await vlSelfRef.__VtrigSched_hbe207624__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         26);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                         27);
    co_await vlSelfRef.__VtrigSched_hbe2076e5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         66);
    vlSelfRef.tb_ogehl_wally_extended__DOT__reset = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCF = 0x80000500U;
    co_await vlSelfRef.__VtrigSched_hbe207624__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         26);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                         27);
    co_await vlSelfRef.__VtrigSched_hbe2076e5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         249);
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCD = 0x80000500U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__BranchD = 1U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__InstrValidD = 1U;
    co_await vlSelfRef.__VtrigSched_hbe207624__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         26);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                         27);
    co_await vlSelfRef.__VtrigSched_hbe2076e5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         255);
    vlSelfRef.tb_ogehl_wally_extended__DOT__BranchD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__InstrValidD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__BranchE = 1U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__InstrValidE = 1U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCE = 0x80000500U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCSrcE = 1U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__FlushD = 1U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__FlushE = 1U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__FlushM = 1U;
    co_await vlSelfRef.__VtrigSched_hbe207624__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         26);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                         27);
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__52__description = 
        std::string{"Older Memory flush suppresses committed history"};
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__52__expected[0U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__52__expected[1U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__52__expected[2U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__52__expected[3U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__52__expected[4U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__52__expected[5U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__52__expected[6U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check__53__description 
        = __Vtask_tb_ogehl_wally_extended__DOT__check_history__52__description;
    __Vtask_tb_ogehl_wally_extended__DOT__check__53__condition 
        = (0U == (((((((vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[0U] 
                        ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__52__expected[0U]) 
                       | (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[1U] 
                          ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__52__expected[1U])) 
                      | (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[2U] 
                         ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__52__expected[2U])) 
                     | (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[3U] 
                        ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__52__expected[3U])) 
                    | (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[4U] 
                       ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__52__expected[4U])) 
                   | (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[5U] 
                      ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__52__expected[5U])) 
                  | (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[6U] 
                     ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__52__expected[6U])));
    vlSelfRef.tb_ogehl_wally_extended__DOT__checks 
        = ((IData)(1U) + vlSelfRef.tb_ogehl_wally_extended__DOT__checks);
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_ogehl_wally_extended__DOT__check__53__condition)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ogehl_wally_extended.sv:33: Assertion failed in %Ntb_ogehl_wally_extended.check: FAIL: %@\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_ogehl_wally_extended__DOT__check__53__description));
        VL_STOP_MT("experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 33, "", false);
    }
    VL_WRITEF_NX("PASS: %@\n",0,-1,&(__Vtask_tb_ogehl_wally_extended__DOT__check__53__description));
    __Vtask_tb_ogehl_wally_extended__DOT__check__54__description = 
        std::string{"Older Memory flush suppresses threshold update"};
    __Vtask_tb_ogehl_wally_extended__DOT__check__54__condition 
        = (0U == VL_EXTENDS_II(32,8, (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__TC)));
    vlSelfRef.tb_ogehl_wally_extended__DOT__checks 
        = ((IData)(1U) + vlSelfRef.tb_ogehl_wally_extended__DOT__checks);
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_ogehl_wally_extended__DOT__check__54__condition)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ogehl_wally_extended.sv:33: Assertion failed in %Ntb_ogehl_wally_extended.check: FAIL: %@\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_ogehl_wally_extended__DOT__check__54__description));
        VL_STOP_MT("experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 33, "", false);
    }
    VL_WRITEF_NX("PASS: %@\n",0,-1,&(__Vtask_tb_ogehl_wally_extended__DOT__check__54__description));
    __Vtask_tb_ogehl_wally_extended__DOT__check__55__description = 
        std::string{"Execute metadata invalidated by flush"};
    __Vtask_tb_ogehl_wally_extended__DOT__check__55__condition 
        = (1U & (~ (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__meta_validE)));
    vlSelfRef.tb_ogehl_wally_extended__DOT__checks 
        = ((IData)(1U) + vlSelfRef.tb_ogehl_wally_extended__DOT__checks);
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_ogehl_wally_extended__DOT__check__55__condition)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ogehl_wally_extended.sv:33: Assertion failed in %Ntb_ogehl_wally_extended.check: FAIL: %@\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_ogehl_wally_extended__DOT__check__55__description));
        VL_STOP_MT("experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 33, "", false);
    }
    VL_WRITEF_NX("PASS: %@\n",0,-1,&(__Vtask_tb_ogehl_wally_extended__DOT__check__55__description));
    vlSelfRef.tb_ogehl_wally_extended__DOT__reset = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__StallD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__StallE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__FlushD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__FlushE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__FlushM = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__InstrValidD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__InstrValidE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCF = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__BPBranchF = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__BPJumpF = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__BranchD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__JumpD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__CallD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__ReturnD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__BranchE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__JumpE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__CallE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__ReturnE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCSrcE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__reset = 1U;
    co_await vlSelfRef.__VtrigSched_hbe207624__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         26);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                         27);
    co_await vlSelfRef.__VtrigSched_hbe2076e5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         66);
    vlSelfRef.tb_ogehl_wally_extended__DOT__reset = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCF = 0x80000600U;
    co_await vlSelfRef.__VtrigSched_hbe207624__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         26);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                         27);
    co_await vlSelfRef.__VtrigSched_hbe2076e5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         283);
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCD = 0x80000600U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__BranchD = 1U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__InstrValidD = 1U;
    co_await vlSelfRef.__VtrigSched_hbe207624__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         26);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                         27);
    co_await vlSelfRef.__VtrigSched_hbe2076e5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         291);
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCE = 0x80000600U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCD = 0x80000604U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__BranchE = 1U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__InstrValidE = 1U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__PCSrcE = 1U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__BranchD = 1U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__InstrValidD = 1U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__FlushD = 1U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__FlushE = 1U;
    co_await vlSelfRef.__VtrigSched_hbe207624__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         26);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                         27);
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__62__description = 
        std::string{"Older Execute branch commits during redirect"};
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__62__expected[0U] = 1U;
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__62__expected[1U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__62__expected[2U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__62__expected[3U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__62__expected[4U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__62__expected[5U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__62__expected[6U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check__63__description 
        = __Vtask_tb_ogehl_wally_extended__DOT__check_history__62__description;
    __Vtask_tb_ogehl_wally_extended__DOT__check__63__condition 
        = (0U == (((((((vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[0U] 
                        ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__62__expected[0U]) 
                       | (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[1U] 
                          ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__62__expected[1U])) 
                      | (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[2U] 
                         ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__62__expected[2U])) 
                     | (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[3U] 
                        ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__62__expected[3U])) 
                    | (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[4U] 
                       ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__62__expected[4U])) 
                   | (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[5U] 
                      ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__62__expected[5U])) 
                  | (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[6U] 
                     ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__62__expected[6U])));
    vlSelfRef.tb_ogehl_wally_extended__DOT__checks 
        = ((IData)(1U) + vlSelfRef.tb_ogehl_wally_extended__DOT__checks);
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_ogehl_wally_extended__DOT__check__63__condition)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ogehl_wally_extended.sv:33: Assertion failed in %Ntb_ogehl_wally_extended.check: FAIL: %@\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_ogehl_wally_extended__DOT__check__63__description));
        VL_STOP_MT("experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 33, "", false);
    }
    VL_WRITEF_NX("PASS: %@\n",0,-1,&(__Vtask_tb_ogehl_wally_extended__DOT__check__63__description));
    __Vtask_tb_ogehl_wally_extended__DOT__check__64__description = 
        std::string{"Younger Decode metadata flushed"};
    __Vtask_tb_ogehl_wally_extended__DOT__check__64__condition 
        = (1U & (~ (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__meta_validD)));
    vlSelfRef.tb_ogehl_wally_extended__DOT__checks 
        = ((IData)(1U) + vlSelfRef.tb_ogehl_wally_extended__DOT__checks);
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_ogehl_wally_extended__DOT__check__64__condition)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ogehl_wally_extended.sv:33: Assertion failed in %Ntb_ogehl_wally_extended.check: FAIL: %@\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_ogehl_wally_extended__DOT__check__64__description));
        VL_STOP_MT("experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 33, "", false);
    }
    VL_WRITEF_NX("PASS: %@\n",0,-1,&(__Vtask_tb_ogehl_wally_extended__DOT__check__64__description));
    __Vtask_tb_ogehl_wally_extended__DOT__check__65__description = 
        std::string{"Execute receives bubble after redirect"};
    __Vtask_tb_ogehl_wally_extended__DOT__check__65__condition 
        = (1U & (~ (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__meta_validE)));
    vlSelfRef.tb_ogehl_wally_extended__DOT__checks 
        = ((IData)(1U) + vlSelfRef.tb_ogehl_wally_extended__DOT__checks);
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_ogehl_wally_extended__DOT__check__65__condition)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ogehl_wally_extended.sv:33: Assertion failed in %Ntb_ogehl_wally_extended.check: FAIL: %@\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_ogehl_wally_extended__DOT__check__65__description));
        VL_STOP_MT("experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 33, "", false);
    }
    VL_WRITEF_NX("PASS: %@\n",0,-1,&(__Vtask_tb_ogehl_wally_extended__DOT__check__65__description));
    co_await vlSelfRef.__VtrigSched_hbe2076e5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         311);
    vlSelfRef.tb_ogehl_wally_extended__DOT__BranchE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__BranchD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__InstrValidE = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__InstrValidD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__FlushD = 0U;
    vlSelfRef.tb_ogehl_wally_extended__DOT__FlushE = 0U;
    co_await vlSelfRef.__VtrigSched_hbe207624__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ogehl_wally_extended.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                                         26);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 
                                         27);
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__67__description = 
        std::string{"Squashed younger branch never commits"};
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__67__expected[0U] = 1U;
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__67__expected[1U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__67__expected[2U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__67__expected[3U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__67__expected[4U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__67__expected[5U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check_history__67__expected[6U] = 0U;
    __Vtask_tb_ogehl_wally_extended__DOT__check__68__description 
        = __Vtask_tb_ogehl_wally_extended__DOT__check_history__67__description;
    __Vtask_tb_ogehl_wally_extended__DOT__check__68__condition 
        = (0U == (((((((vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[0U] 
                        ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__67__expected[0U]) 
                       | (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[1U] 
                          ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__67__expected[1U])) 
                      | (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[2U] 
                         ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__67__expected[2U])) 
                     | (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[3U] 
                        ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__67__expected[3U])) 
                    | (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[4U] 
                       ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__67__expected[4U])) 
                   | (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[5U] 
                      ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__67__expected[5U])) 
                  | (vlSelfRef.tb_ogehl_wally_extended__DOT__dut__DOT__committed_global_history[6U] 
                     ^ __Vtask_tb_ogehl_wally_extended__DOT__check_history__67__expected[6U])));
    vlSelfRef.tb_ogehl_wally_extended__DOT__checks 
        = ((IData)(1U) + vlSelfRef.tb_ogehl_wally_extended__DOT__checks);
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_ogehl_wally_extended__DOT__check__68__condition)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ogehl_wally_extended.sv:33: Assertion failed in %Ntb_ogehl_wally_extended.check: FAIL: %@\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_ogehl_wally_extended__DOT__check__68__description));
        VL_STOP_MT("experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 33, "", false);
    }
    VL_WRITEF_NX("PASS: %@\nPASS: %0d extended checks completed\n",0,
                 -1,&(__Vtask_tb_ogehl_wally_extended__DOT__check__68__description),
                 32,vlSelfRef.tb_ogehl_wally_extended__DOT__checks);
    VL_FINISH_MT("experiments/ogehl_cbp1/verification/tb_ogehl_wally_extended.sv", 324, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ogehl_wally_extended___024root___dump_triggers__act(Vtb_ogehl_wally_extended___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_ogehl_wally_extended___024root___eval_triggers__act(Vtb_ogehl_wally_extended___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ogehl_wally_extended___024root___eval_triggers__act\n"); );
    Vtb_ogehl_wally_extended__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ogehl_wally_extended__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.setBit(2U, ((~ (IData)(vlSelfRef.tb_ogehl_wally_extended__DOT__clk)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ogehl_wally_extended__DOT__clk__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ogehl_wally_extended__DOT__clk__0 
        = vlSelfRef.tb_ogehl_wally_extended__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_ogehl_wally_extended___024root___dump_triggers__act(vlSelf);
    }
#endif
}
