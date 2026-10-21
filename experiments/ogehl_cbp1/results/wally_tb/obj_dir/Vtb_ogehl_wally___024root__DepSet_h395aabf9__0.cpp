// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ogehl_wally.h for the primary calling header

#include "Vtb_ogehl_wally__pch.h"
#include "Vtb_ogehl_wally__Syms.h"
#include "Vtb_ogehl_wally___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_ogehl_wally___024root___eval_initial__TOP__Vtiming__0(Vtb_ogehl_wally___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ogehl_wally___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_ogehl_wally__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vtask_tb_ogehl_wally__DOT__check__2__condition;
    __Vtask_tb_ogehl_wally__DOT__check__2__condition = 0;
    std::string __Vtask_tb_ogehl_wally__DOT__check__2__description;
    CData/*0:0*/ __Vtask_tb_ogehl_wally__DOT__check__3__condition;
    __Vtask_tb_ogehl_wally__DOT__check__3__condition = 0;
    std::string __Vtask_tb_ogehl_wally__DOT__check__3__description;
    CData/*0:0*/ __Vtask_tb_ogehl_wally__DOT__check__5__condition;
    __Vtask_tb_ogehl_wally__DOT__check__5__condition = 0;
    std::string __Vtask_tb_ogehl_wally__DOT__check__5__description;
    CData/*0:0*/ __Vtask_tb_ogehl_wally__DOT__check__7__condition;
    __Vtask_tb_ogehl_wally__DOT__check__7__condition = 0;
    std::string __Vtask_tb_ogehl_wally__DOT__check__7__description;
    CData/*0:0*/ __Vtask_tb_ogehl_wally__DOT__check__9__condition;
    __Vtask_tb_ogehl_wally__DOT__check__9__condition = 0;
    std::string __Vtask_tb_ogehl_wally__DOT__check__9__description;
    CData/*0:0*/ __Vtask_tb_ogehl_wally__DOT__check__10__condition;
    __Vtask_tb_ogehl_wally__DOT__check__10__condition = 0;
    std::string __Vtask_tb_ogehl_wally__DOT__check__10__description;
    CData/*0:0*/ __Vtask_tb_ogehl_wally__DOT__check__16__condition;
    __Vtask_tb_ogehl_wally__DOT__check__16__condition = 0;
    std::string __Vtask_tb_ogehl_wally__DOT__check__16__description;
    CData/*0:0*/ __Vtask_tb_ogehl_wally__DOT__check__17__condition;
    __Vtask_tb_ogehl_wally__DOT__check__17__condition = 0;
    std::string __Vtask_tb_ogehl_wally__DOT__check__17__description;
    CData/*0:0*/ __Vtask_tb_ogehl_wally__DOT__check__19__condition;
    __Vtask_tb_ogehl_wally__DOT__check__19__condition = 0;
    std::string __Vtask_tb_ogehl_wally__DOT__check__19__description;
    CData/*0:0*/ __Vtask_tb_ogehl_wally__DOT__check__20__condition;
    __Vtask_tb_ogehl_wally__DOT__check__20__condition = 0;
    std::string __Vtask_tb_ogehl_wally__DOT__check__20__description;
    CData/*0:0*/ __Vtask_tb_ogehl_wally__DOT__check__26__condition;
    __Vtask_tb_ogehl_wally__DOT__check__26__condition = 0;
    std::string __Vtask_tb_ogehl_wally__DOT__check__26__description;
    CData/*0:0*/ __Vtask_tb_ogehl_wally__DOT__check__27__condition;
    __Vtask_tb_ogehl_wally__DOT__check__27__condition = 0;
    std::string __Vtask_tb_ogehl_wally__DOT__check__27__description;
    // Body
    vlSelfRef.tb_ogehl_wally__DOT__StallD = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__StallE = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__FlushD = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__FlushE = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__FlushM = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__InstrValidD = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__InstrValidE = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__PCF = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__PCD = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__PCE = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__BPBranchF = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__BPJumpF = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__BranchD = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__JumpD = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__CallD = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__ReturnD = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__BranchE = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__JumpE = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__CallE = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__ReturnE = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__PCSrcE = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__reset = 1U;
    co_await vlSelfRef.__VtrigSched_he2eda4b2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ogehl_wally.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally.sv", 
                                                         26);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "experiments/ogehl_cbp1/verification/tb_ogehl_wally.sv", 
                                         27);
    vlSelfRef.tb_ogehl_wally__DOT__reset = 0U;
    __Vtask_tb_ogehl_wally__DOT__check__2__description = 
        std::string{"Reset clears committed history"};
    __Vtask_tb_ogehl_wally__DOT__check__2__condition 
        = (0U == ((((((vlSelfRef.tb_ogehl_wally__DOT__dut__DOT__committed_global_history[0U] 
                       | vlSelfRef.tb_ogehl_wally__DOT__dut__DOT__committed_global_history[1U]) 
                      | vlSelfRef.tb_ogehl_wally__DOT__dut__DOT__committed_global_history[2U]) 
                     | vlSelfRef.tb_ogehl_wally__DOT__dut__DOT__committed_global_history[3U]) 
                    | vlSelfRef.tb_ogehl_wally__DOT__dut__DOT__committed_global_history[4U]) 
                   | vlSelfRef.tb_ogehl_wally__DOT__dut__DOT__committed_global_history[5U]) 
                  | vlSelfRef.tb_ogehl_wally__DOT__dut__DOT__committed_global_history[6U]));
    vlSelfRef.tb_ogehl_wally__DOT__checks = ((IData)(1U) 
                                             + vlSelfRef.tb_ogehl_wally__DOT__checks);
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_ogehl_wally__DOT__check__2__condition)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ogehl_wally.sv:33: Assertion failed in %Ntb_ogehl_wally.check: FAIL: %@\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_ogehl_wally__DOT__check__2__description));
        VL_STOP_MT("experiments/ogehl_cbp1/verification/tb_ogehl_wally.sv", 33, "", false);
    }
    VL_WRITEF_NX("PASS: %@\n",0,-1,&(__Vtask_tb_ogehl_wally__DOT__check__2__description));
    __Vtask_tb_ogehl_wally__DOT__check__3__description = 
        std::string{"Reset initializes O-GEHL threshold"};
    __Vtask_tb_ogehl_wally__DOT__check__3__condition 
        = (8U == (IData)(vlSelfRef.tb_ogehl_wally__DOT__dut__DOT__thresupdate));
    vlSelfRef.tb_ogehl_wally__DOT__checks = ((IData)(1U) 
                                             + vlSelfRef.tb_ogehl_wally__DOT__checks);
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_ogehl_wally__DOT__check__3__condition)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ogehl_wally.sv:33: Assertion failed in %Ntb_ogehl_wally.check: FAIL: %@\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_ogehl_wally__DOT__check__3__description));
        VL_STOP_MT("experiments/ogehl_cbp1/verification/tb_ogehl_wally.sv", 33, "", false);
    }
    VL_WRITEF_NX("PASS: %@\n",0,-1,&(__Vtask_tb_ogehl_wally__DOT__check__3__description));
    vlSelfRef.tb_ogehl_wally__DOT__PCF = 0x80000100U;
    vlSelfRef.tb_ogehl_wally__DOT__BPBranchF = 1U;
    co_await vlSelfRef.__VtrigSched_he2eda4b2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ogehl_wally.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally.sv", 
                                                         26);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "experiments/ogehl_cbp1/verification/tb_ogehl_wally.sv", 
                                         27);
    __Vtask_tb_ogehl_wally__DOT__check__5__description = 
        std::string{"Fetch metadata captured in Decode"};
    __Vtask_tb_ogehl_wally__DOT__check__5__condition 
        = vlSelfRef.tb_ogehl_wally__DOT__dut__DOT__meta_validD;
    vlSelfRef.tb_ogehl_wally__DOT__checks = ((IData)(1U) 
                                             + vlSelfRef.tb_ogehl_wally__DOT__checks);
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_ogehl_wally__DOT__check__5__condition)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ogehl_wally.sv:33: Assertion failed in %Ntb_ogehl_wally.check: FAIL: %@\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_ogehl_wally__DOT__check__5__description));
        VL_STOP_MT("experiments/ogehl_cbp1/verification/tb_ogehl_wally.sv", 33, "", false);
    }
    VL_WRITEF_NX("PASS: %@\n",0,-1,&(__Vtask_tb_ogehl_wally__DOT__check__5__description));
    vlSelfRef.tb_ogehl_wally__DOT__BPBranchF = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__PCD = 0x80000100U;
    vlSelfRef.tb_ogehl_wally__DOT__BranchD = 1U;
    vlSelfRef.tb_ogehl_wally__DOT__InstrValidD = 1U;
    co_await vlSelfRef.__VtrigSched_he2eda4b2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ogehl_wally.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally.sv", 
                                                         26);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "experiments/ogehl_cbp1/verification/tb_ogehl_wally.sv", 
                                         27);
    __Vtask_tb_ogehl_wally__DOT__check__7__description = 
        std::string{"Decode metadata captured in Execute"};
    __Vtask_tb_ogehl_wally__DOT__check__7__condition 
        = vlSelfRef.tb_ogehl_wally__DOT__dut__DOT__meta_validE;
    vlSelfRef.tb_ogehl_wally__DOT__checks = ((IData)(1U) 
                                             + vlSelfRef.tb_ogehl_wally__DOT__checks);
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_ogehl_wally__DOT__check__7__condition)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ogehl_wally.sv:33: Assertion failed in %Ntb_ogehl_wally.check: FAIL: %@\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_ogehl_wally__DOT__check__7__description));
        VL_STOP_MT("experiments/ogehl_cbp1/verification/tb_ogehl_wally.sv", 33, "", false);
    }
    VL_WRITEF_NX("PASS: %@\n",0,-1,&(__Vtask_tb_ogehl_wally__DOT__check__7__description));
    vlSelfRef.tb_ogehl_wally__DOT__BranchD = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__InstrValidD = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__BranchE = 1U;
    vlSelfRef.tb_ogehl_wally__DOT__InstrValidE = 1U;
    vlSelfRef.tb_ogehl_wally__DOT__PCE = 0x80000100U;
    vlSelfRef.tb_ogehl_wally__DOT__PCSrcE = 1U;
    co_await vlSelfRef.__VtrigSched_he2eda4b2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ogehl_wally.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally.sv", 
                                                         26);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "experiments/ogehl_cbp1/verification/tb_ogehl_wally.sv", 
                                         27);
    __Vtask_tb_ogehl_wally__DOT__check__9__description = 
        std::string{"Resolved taken branch updates global history"};
    __Vtask_tb_ogehl_wally__DOT__check__9__condition 
        = (1U & vlSelfRef.tb_ogehl_wally__DOT__dut__DOT__committed_global_history[0U]);
    vlSelfRef.tb_ogehl_wally__DOT__checks = ((IData)(1U) 
                                             + vlSelfRef.tb_ogehl_wally__DOT__checks);
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_ogehl_wally__DOT__check__9__condition)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ogehl_wally.sv:33: Assertion failed in %Ntb_ogehl_wally.check: FAIL: %@\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_ogehl_wally__DOT__check__9__description));
        VL_STOP_MT("experiments/ogehl_cbp1/verification/tb_ogehl_wally.sv", 33, "", false);
    }
    VL_WRITEF_NX("PASS: %@\n",0,-1,&(__Vtask_tb_ogehl_wally__DOT__check__9__description));
    __Vtask_tb_ogehl_wally__DOT__check__10__description = 
        std::string{"Taken branch updates threshold counter once"};
    __Vtask_tb_ogehl_wally__DOT__check__10__condition 
        = (0xffffffffU == VL_EXTENDS_II(32,8, (IData)(vlSelfRef.tb_ogehl_wally__DOT__dut__DOT__TC)));
    vlSelfRef.tb_ogehl_wally__DOT__checks = ((IData)(1U) 
                                             + vlSelfRef.tb_ogehl_wally__DOT__checks);
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_ogehl_wally__DOT__check__10__condition)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ogehl_wally.sv:33: Assertion failed in %Ntb_ogehl_wally.check: FAIL: %@\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_ogehl_wally__DOT__check__10__description));
        VL_STOP_MT("experiments/ogehl_cbp1/verification/tb_ogehl_wally.sv", 33, "", false);
    }
    VL_WRITEF_NX("PASS: %@\n",0,-1,&(__Vtask_tb_ogehl_wally__DOT__check__10__description));
    vlSelfRef.tb_ogehl_wally__DOT__reset = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__StallD = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__StallE = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__FlushD = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__FlushE = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__FlushM = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__InstrValidD = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__InstrValidE = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__PCF = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__PCD = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__PCE = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__BPBranchF = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__BPJumpF = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__BranchD = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__JumpD = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__CallD = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__ReturnD = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__BranchE = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__JumpE = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__CallE = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__ReturnE = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__PCSrcE = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__reset = 1U;
    co_await vlSelfRef.__VtrigSched_he2eda4b2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ogehl_wally.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally.sv", 
                                                         26);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "experiments/ogehl_cbp1/verification/tb_ogehl_wally.sv", 
                                         27);
    vlSelfRef.tb_ogehl_wally__DOT__reset = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__PCF = 0x80000200U;
    co_await vlSelfRef.__VtrigSched_he2eda4b2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ogehl_wally.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally.sv", 
                                                         26);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "experiments/ogehl_cbp1/verification/tb_ogehl_wally.sv", 
                                         27);
    vlSelfRef.tb_ogehl_wally__DOT__PCD = 0x80000200U;
    vlSelfRef.tb_ogehl_wally__DOT__InstrValidD = 1U;
    vlSelfRef.tb_ogehl_wally__DOT__BranchD = 1U;
    co_await vlSelfRef.__VtrigSched_he2eda4b2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ogehl_wally.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally.sv", 
                                                         26);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "experiments/ogehl_cbp1/verification/tb_ogehl_wally.sv", 
                                         27);
    vlSelfRef.tb_ogehl_wally__DOT__InstrValidD = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__BranchD = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__InstrValidE = 1U;
    vlSelfRef.tb_ogehl_wally__DOT__BranchE = 1U;
    vlSelfRef.tb_ogehl_wally__DOT__PCE = 0x80000200U;
    vlSelfRef.tb_ogehl_wally__DOT__PCSrcE = 1U;
    vlSelfRef.tb_ogehl_wally__DOT__StallE = 1U;
    vlSelfRef.tb_ogehl_wally__DOT__StallD = 1U;
    co_await vlSelfRef.__VtrigSched_he2eda4b2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ogehl_wally.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally.sv", 
                                                         26);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "experiments/ogehl_cbp1/verification/tb_ogehl_wally.sv", 
                                         27);
    co_await vlSelfRef.__VtrigSched_he2eda4b2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ogehl_wally.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally.sv", 
                                                         26);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "experiments/ogehl_cbp1/verification/tb_ogehl_wally.sv", 
                                         27);
    co_await vlSelfRef.__VtrigSched_he2eda4b2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ogehl_wally.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally.sv", 
                                                         26);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "experiments/ogehl_cbp1/verification/tb_ogehl_wally.sv", 
                                         27);
    __Vtask_tb_ogehl_wally__DOT__check__16__description = 
        std::string{"Stalled Execute branch does not train"};
    __Vtask_tb_ogehl_wally__DOT__check__16__condition 
        = (0U == VL_EXTENDS_II(32,8, (IData)(vlSelfRef.tb_ogehl_wally__DOT__dut__DOT__TC)));
    vlSelfRef.tb_ogehl_wally__DOT__checks = ((IData)(1U) 
                                             + vlSelfRef.tb_ogehl_wally__DOT__checks);
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_ogehl_wally__DOT__check__16__condition)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ogehl_wally.sv:33: Assertion failed in %Ntb_ogehl_wally.check: FAIL: %@\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_ogehl_wally__DOT__check__16__description));
        VL_STOP_MT("experiments/ogehl_cbp1/verification/tb_ogehl_wally.sv", 33, "", false);
    }
    VL_WRITEF_NX("PASS: %@\n",0,-1,&(__Vtask_tb_ogehl_wally__DOT__check__16__description));
    __Vtask_tb_ogehl_wally__DOT__check__17__description = 
        std::string{"Stalled Execute branch does not commit history"};
    __Vtask_tb_ogehl_wally__DOT__check__17__condition 
        = (0U == ((((((vlSelfRef.tb_ogehl_wally__DOT__dut__DOT__committed_global_history[0U] 
                       | vlSelfRef.tb_ogehl_wally__DOT__dut__DOT__committed_global_history[1U]) 
                      | vlSelfRef.tb_ogehl_wally__DOT__dut__DOT__committed_global_history[2U]) 
                     | vlSelfRef.tb_ogehl_wally__DOT__dut__DOT__committed_global_history[3U]) 
                    | vlSelfRef.tb_ogehl_wally__DOT__dut__DOT__committed_global_history[4U]) 
                   | vlSelfRef.tb_ogehl_wally__DOT__dut__DOT__committed_global_history[5U]) 
                  | vlSelfRef.tb_ogehl_wally__DOT__dut__DOT__committed_global_history[6U]));
    vlSelfRef.tb_ogehl_wally__DOT__checks = ((IData)(1U) 
                                             + vlSelfRef.tb_ogehl_wally__DOT__checks);
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_ogehl_wally__DOT__check__17__condition)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ogehl_wally.sv:33: Assertion failed in %Ntb_ogehl_wally.check: FAIL: %@\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_ogehl_wally__DOT__check__17__description));
        VL_STOP_MT("experiments/ogehl_cbp1/verification/tb_ogehl_wally.sv", 33, "", false);
    }
    VL_WRITEF_NX("PASS: %@\n",0,-1,&(__Vtask_tb_ogehl_wally__DOT__check__17__description));
    vlSelfRef.tb_ogehl_wally__DOT__StallE = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__StallD = 0U;
    co_await vlSelfRef.__VtrigSched_he2eda4b2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ogehl_wally.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally.sv", 
                                                         26);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "experiments/ogehl_cbp1/verification/tb_ogehl_wally.sv", 
                                         27);
    __Vtask_tb_ogehl_wally__DOT__check__19__description = 
        std::string{"Released Execute branch trains once"};
    __Vtask_tb_ogehl_wally__DOT__check__19__condition 
        = (0xffffffffU == VL_EXTENDS_II(32,8, (IData)(vlSelfRef.tb_ogehl_wally__DOT__dut__DOT__TC)));
    vlSelfRef.tb_ogehl_wally__DOT__checks = ((IData)(1U) 
                                             + vlSelfRef.tb_ogehl_wally__DOT__checks);
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_ogehl_wally__DOT__check__19__condition)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ogehl_wally.sv:33: Assertion failed in %Ntb_ogehl_wally.check: FAIL: %@\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_ogehl_wally__DOT__check__19__description));
        VL_STOP_MT("experiments/ogehl_cbp1/verification/tb_ogehl_wally.sv", 33, "", false);
    }
    VL_WRITEF_NX("PASS: %@\n",0,-1,&(__Vtask_tb_ogehl_wally__DOT__check__19__description));
    __Vtask_tb_ogehl_wally__DOT__check__20__description = 
        std::string{"Released Execute branch commits once"};
    __Vtask_tb_ogehl_wally__DOT__check__20__condition 
        = (1U & vlSelfRef.tb_ogehl_wally__DOT__dut__DOT__committed_global_history[0U]);
    vlSelfRef.tb_ogehl_wally__DOT__checks = ((IData)(1U) 
                                             + vlSelfRef.tb_ogehl_wally__DOT__checks);
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_ogehl_wally__DOT__check__20__condition)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ogehl_wally.sv:33: Assertion failed in %Ntb_ogehl_wally.check: FAIL: %@\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_ogehl_wally__DOT__check__20__description));
        VL_STOP_MT("experiments/ogehl_cbp1/verification/tb_ogehl_wally.sv", 33, "", false);
    }
    VL_WRITEF_NX("PASS: %@\n",0,-1,&(__Vtask_tb_ogehl_wally__DOT__check__20__description));
    vlSelfRef.tb_ogehl_wally__DOT__reset = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__StallD = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__StallE = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__FlushD = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__FlushE = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__FlushM = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__InstrValidD = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__InstrValidE = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__PCF = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__PCD = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__PCE = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__BPBranchF = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__BPJumpF = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__BranchD = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__JumpD = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__CallD = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__ReturnD = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__BranchE = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__JumpE = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__CallE = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__ReturnE = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__PCSrcE = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__reset = 1U;
    co_await vlSelfRef.__VtrigSched_he2eda4b2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ogehl_wally.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally.sv", 
                                                         26);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "experiments/ogehl_cbp1/verification/tb_ogehl_wally.sv", 
                                         27);
    vlSelfRef.tb_ogehl_wally__DOT__reset = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__PCF = 0x80000300U;
    co_await vlSelfRef.__VtrigSched_he2eda4b2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ogehl_wally.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally.sv", 
                                                         26);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "experiments/ogehl_cbp1/verification/tb_ogehl_wally.sv", 
                                         27);
    vlSelfRef.tb_ogehl_wally__DOT__PCD = 0x80000300U;
    vlSelfRef.tb_ogehl_wally__DOT__InstrValidD = 1U;
    vlSelfRef.tb_ogehl_wally__DOT__BranchD = 1U;
    co_await vlSelfRef.__VtrigSched_he2eda4b2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ogehl_wally.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally.sv", 
                                                         26);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "experiments/ogehl_cbp1/verification/tb_ogehl_wally.sv", 
                                         27);
    vlSelfRef.tb_ogehl_wally__DOT__InstrValidD = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__BranchD = 0U;
    vlSelfRef.tb_ogehl_wally__DOT__InstrValidE = 1U;
    vlSelfRef.tb_ogehl_wally__DOT__BranchE = 1U;
    vlSelfRef.tb_ogehl_wally__DOT__PCE = 0x80000300U;
    vlSelfRef.tb_ogehl_wally__DOT__PCSrcE = 1U;
    vlSelfRef.tb_ogehl_wally__DOT__FlushM = 1U;
    vlSelfRef.tb_ogehl_wally__DOT__FlushE = 1U;
    vlSelfRef.tb_ogehl_wally__DOT__FlushD = 1U;
    co_await vlSelfRef.__VtrigSched_he2eda4b2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ogehl_wally.clk)", 
                                                         "experiments/ogehl_cbp1/verification/tb_ogehl_wally.sv", 
                                                         26);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "experiments/ogehl_cbp1/verification/tb_ogehl_wally.sv", 
                                         27);
    __Vtask_tb_ogehl_wally__DOT__check__26__description = 
        std::string{"Older Memory flush prevents training"};
    __Vtask_tb_ogehl_wally__DOT__check__26__condition 
        = (0U == VL_EXTENDS_II(32,8, (IData)(vlSelfRef.tb_ogehl_wally__DOT__dut__DOT__TC)));
    vlSelfRef.tb_ogehl_wally__DOT__checks = ((IData)(1U) 
                                             + vlSelfRef.tb_ogehl_wally__DOT__checks);
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_ogehl_wally__DOT__check__26__condition)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ogehl_wally.sv:33: Assertion failed in %Ntb_ogehl_wally.check: FAIL: %@\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_ogehl_wally__DOT__check__26__description));
        VL_STOP_MT("experiments/ogehl_cbp1/verification/tb_ogehl_wally.sv", 33, "", false);
    }
    VL_WRITEF_NX("PASS: %@\n",0,-1,&(__Vtask_tb_ogehl_wally__DOT__check__26__description));
    __Vtask_tb_ogehl_wally__DOT__check__27__description = 
        std::string{"Older Memory flush prevents history commit"};
    __Vtask_tb_ogehl_wally__DOT__check__27__condition 
        = (0U == ((((((vlSelfRef.tb_ogehl_wally__DOT__dut__DOT__committed_global_history[0U] 
                       | vlSelfRef.tb_ogehl_wally__DOT__dut__DOT__committed_global_history[1U]) 
                      | vlSelfRef.tb_ogehl_wally__DOT__dut__DOT__committed_global_history[2U]) 
                     | vlSelfRef.tb_ogehl_wally__DOT__dut__DOT__committed_global_history[3U]) 
                    | vlSelfRef.tb_ogehl_wally__DOT__dut__DOT__committed_global_history[4U]) 
                   | vlSelfRef.tb_ogehl_wally__DOT__dut__DOT__committed_global_history[5U]) 
                  | vlSelfRef.tb_ogehl_wally__DOT__dut__DOT__committed_global_history[6U]));
    vlSelfRef.tb_ogehl_wally__DOT__checks = ((IData)(1U) 
                                             + vlSelfRef.tb_ogehl_wally__DOT__checks);
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_ogehl_wally__DOT__check__27__condition)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ogehl_wally.sv:33: Assertion failed in %Ntb_ogehl_wally.check: FAIL: %@\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_ogehl_wally__DOT__check__27__description));
        VL_STOP_MT("experiments/ogehl_cbp1/verification/tb_ogehl_wally.sv", 33, "", false);
    }
    VL_WRITEF_NX("PASS: %@\nPASS: %0d checks completed\n",0,
                 -1,&(__Vtask_tb_ogehl_wally__DOT__check__27__description),
                 32,vlSelfRef.tb_ogehl_wally__DOT__checks);
    VL_FINISH_MT("experiments/ogehl_cbp1/verification/tb_ogehl_wally.sv", 175, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ogehl_wally___024root___dump_triggers__act(Vtb_ogehl_wally___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_ogehl_wally___024root___eval_triggers__act(Vtb_ogehl_wally___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ogehl_wally___024root___eval_triggers__act\n"); );
    Vtb_ogehl_wally__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_ogehl_wally__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ogehl_wally__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ogehl_wally__DOT__clk__0 
        = vlSelfRef.tb_ogehl_wally__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_ogehl_wally___024root___dump_triggers__act(vlSelf);
    }
#endif
}
