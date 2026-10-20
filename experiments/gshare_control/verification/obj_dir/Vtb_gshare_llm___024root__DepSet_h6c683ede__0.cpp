// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_gshare_llm.h for the primary calling header

#include "Vtb_gshare_llm__pch.h"
#include "Vtb_gshare_llm__Syms.h"
#include "Vtb_gshare_llm___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_gshare_llm___024root___eval_initial__TOP__Vtiming__0(Vtb_gshare_llm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gshare_llm___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_gshare_llm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_gshare_llm__DOT__do_reset__1__tb_gshare_llm__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_gshare_llm__DOT__do_reset__1__tb_gshare_llm__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_gshare_llm__DOT__do_reset__3__tb_gshare_llm__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_gshare_llm__DOT__do_reset__3__tb_gshare_llm__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_gshare_llm__DOT__run_branch__5__pc;
    __Vtask_tb_gshare_llm__DOT__run_branch__5__pc = 0;
    CData/*0:0*/ __Vtask_tb_gshare_llm__DOT__run_branch__5__actual_taken;
    __Vtask_tb_gshare_llm__DOT__run_branch__5__actual_taken = 0;
    CData/*1:0*/ __Vtask_tb_gshare_llm__DOT__run_branch__5__expected_before;
    __Vtask_tb_gshare_llm__DOT__run_branch__5__expected_before = 0;
    CData/*1:0*/ __Vtask_tb_gshare_llm__DOT__run_branch__5__expected_after;
    __Vtask_tb_gshare_llm__DOT__run_branch__5__expected_after = 0;
    CData/*0:0*/ __Vtask_tb_gshare_llm__DOT__run_branch__5__expected_wrong;
    __Vtask_tb_gshare_llm__DOT__run_branch__5__expected_wrong = 0;
    CData/*3:0*/ __Vtask_tb_gshare_llm__DOT__run_branch__5__expected_index;
    __Vtask_tb_gshare_llm__DOT__run_branch__5__expected_index = 0;
    CData/*3:0*/ __Vfunc_tb_gshare_llm__DOT__hash_pc__6__Vfuncout;
    __Vfunc_tb_gshare_llm__DOT__hash_pc__6__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_gshare_llm__DOT__hash_pc__6__pc;
    __Vfunc_tb_gshare_llm__DOT__hash_pc__6__pc = 0;
    IData/*31:0*/ __Vtask_tb_gshare_llm__DOT__do_reset__7__tb_gshare_llm__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_gshare_llm__DOT__do_reset__7__tb_gshare_llm__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_gshare_llm__DOT__run_branch__9__pc;
    __Vtask_tb_gshare_llm__DOT__run_branch__9__pc = 0;
    CData/*0:0*/ __Vtask_tb_gshare_llm__DOT__run_branch__9__actual_taken;
    __Vtask_tb_gshare_llm__DOT__run_branch__9__actual_taken = 0;
    CData/*1:0*/ __Vtask_tb_gshare_llm__DOT__run_branch__9__expected_before;
    __Vtask_tb_gshare_llm__DOT__run_branch__9__expected_before = 0;
    CData/*1:0*/ __Vtask_tb_gshare_llm__DOT__run_branch__9__expected_after;
    __Vtask_tb_gshare_llm__DOT__run_branch__9__expected_after = 0;
    CData/*0:0*/ __Vtask_tb_gshare_llm__DOT__run_branch__9__expected_wrong;
    __Vtask_tb_gshare_llm__DOT__run_branch__9__expected_wrong = 0;
    CData/*3:0*/ __Vtask_tb_gshare_llm__DOT__run_branch__9__expected_index;
    __Vtask_tb_gshare_llm__DOT__run_branch__9__expected_index = 0;
    CData/*3:0*/ __Vfunc_tb_gshare_llm__DOT__hash_pc__10__Vfuncout;
    __Vfunc_tb_gshare_llm__DOT__hash_pc__10__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_gshare_llm__DOT__hash_pc__10__pc;
    __Vfunc_tb_gshare_llm__DOT__hash_pc__10__pc = 0;
    IData/*31:0*/ __Vtask_tb_gshare_llm__DOT__do_reset__11__tb_gshare_llm__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_gshare_llm__DOT__do_reset__11__tb_gshare_llm__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_gshare_llm__DOT__run_branch__13__pc;
    __Vtask_tb_gshare_llm__DOT__run_branch__13__pc = 0;
    CData/*0:0*/ __Vtask_tb_gshare_llm__DOT__run_branch__13__actual_taken;
    __Vtask_tb_gshare_llm__DOT__run_branch__13__actual_taken = 0;
    CData/*1:0*/ __Vtask_tb_gshare_llm__DOT__run_branch__13__expected_before;
    __Vtask_tb_gshare_llm__DOT__run_branch__13__expected_before = 0;
    CData/*1:0*/ __Vtask_tb_gshare_llm__DOT__run_branch__13__expected_after;
    __Vtask_tb_gshare_llm__DOT__run_branch__13__expected_after = 0;
    CData/*0:0*/ __Vtask_tb_gshare_llm__DOT__run_branch__13__expected_wrong;
    __Vtask_tb_gshare_llm__DOT__run_branch__13__expected_wrong = 0;
    CData/*3:0*/ __Vtask_tb_gshare_llm__DOT__run_branch__13__expected_index;
    __Vtask_tb_gshare_llm__DOT__run_branch__13__expected_index = 0;
    CData/*3:0*/ __Vfunc_tb_gshare_llm__DOT__hash_pc__14__Vfuncout;
    __Vfunc_tb_gshare_llm__DOT__hash_pc__14__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_gshare_llm__DOT__hash_pc__14__pc;
    __Vfunc_tb_gshare_llm__DOT__hash_pc__14__pc = 0;
    IData/*31:0*/ __Vtask_tb_gshare_llm__DOT__run_branch__15__pc;
    __Vtask_tb_gshare_llm__DOT__run_branch__15__pc = 0;
    CData/*0:0*/ __Vtask_tb_gshare_llm__DOT__run_branch__15__actual_taken;
    __Vtask_tb_gshare_llm__DOT__run_branch__15__actual_taken = 0;
    CData/*1:0*/ __Vtask_tb_gshare_llm__DOT__run_branch__15__expected_before;
    __Vtask_tb_gshare_llm__DOT__run_branch__15__expected_before = 0;
    CData/*1:0*/ __Vtask_tb_gshare_llm__DOT__run_branch__15__expected_after;
    __Vtask_tb_gshare_llm__DOT__run_branch__15__expected_after = 0;
    CData/*0:0*/ __Vtask_tb_gshare_llm__DOT__run_branch__15__expected_wrong;
    __Vtask_tb_gshare_llm__DOT__run_branch__15__expected_wrong = 0;
    CData/*3:0*/ __Vtask_tb_gshare_llm__DOT__run_branch__15__expected_index;
    __Vtask_tb_gshare_llm__DOT__run_branch__15__expected_index = 0;
    CData/*3:0*/ __Vfunc_tb_gshare_llm__DOT__hash_pc__16__Vfuncout;
    __Vfunc_tb_gshare_llm__DOT__hash_pc__16__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_gshare_llm__DOT__hash_pc__16__pc;
    __Vfunc_tb_gshare_llm__DOT__hash_pc__16__pc = 0;
    // Body
    vlSelfRef.tb_gshare_llm__DOT__clk = 0U;
    __Vtask_tb_gshare_llm__DOT__do_reset__1__tb_gshare_llm__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    vlSelfRef.tb_gshare_llm__DOT__StallF = 0U;
    vlSelfRef.tb_gshare_llm__DOT__StallD = 0U;
    vlSelfRef.tb_gshare_llm__DOT__StallE = 0U;
    vlSelfRef.tb_gshare_llm__DOT__FlushD = 0U;
    vlSelfRef.tb_gshare_llm__DOT__FlushE = 0U;
    vlSelfRef.tb_gshare_llm__DOT__PCF = 0U;
    vlSelfRef.tb_gshare_llm__DOT__BPBranchF = 0U;
    vlSelfRef.tb_gshare_llm__DOT__BranchD = 0U;
    vlSelfRef.tb_gshare_llm__DOT__BranchE = 0U;
    vlSelfRef.tb_gshare_llm__DOT__PCSrcE = 0U;
    vlSelfRef.tb_gshare_llm__DOT__reset = 1U;
    co_await vlSelfRef.__VtrigSched_h1b6aa2eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gshare_llm.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                                         108);
    __Vtask_tb_gshare_llm__DOT__do_reset__1__tb_gshare_llm__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h1b6aa2eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gshare_llm.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                                         108);
    __Vtask_tb_gshare_llm__DOT__do_reset__1__tb_gshare_llm__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    co_await vlSelfRef.__VtrigSched_h1b6aa2aa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gshare_llm.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                                         110);
    vlSelfRef.tb_gshare_llm__DOT__reset = 0U;
    co_await vlSelfRef.__VtrigSched_h1b6aa2eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gshare_llm.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                                         113);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                         114);
    if (VL_UNLIKELY(((1U != vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht
                      [0U])))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_llm.sv:201: Assertion failed in %Ntb_gshare_llm: Reset PHT mismatch at index 0: got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     2,vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht
                     [0U]);
        VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 201, "", false);
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht
                      [1U])))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_llm.sv:201: Assertion failed in %Ntb_gshare_llm: Reset PHT mismatch at index 1: got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     2,vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht
                     [1U]);
        VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 201, "", false);
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht
                      [2U])))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_llm.sv:201: Assertion failed in %Ntb_gshare_llm: Reset PHT mismatch at index 2: got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     2,vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht
                     [2U]);
        VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 201, "", false);
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht
                      [3U])))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_llm.sv:201: Assertion failed in %Ntb_gshare_llm: Reset PHT mismatch at index 3: got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     2,vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht
                     [3U]);
        VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 201, "", false);
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht
                      [4U])))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_llm.sv:201: Assertion failed in %Ntb_gshare_llm: Reset PHT mismatch at index 4: got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     2,vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht
                     [4U]);
        VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 201, "", false);
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht
                      [5U])))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_llm.sv:201: Assertion failed in %Ntb_gshare_llm: Reset PHT mismatch at index 5: got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     2,vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht
                     [5U]);
        VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 201, "", false);
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht
                      [6U])))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_llm.sv:201: Assertion failed in %Ntb_gshare_llm: Reset PHT mismatch at index 6: got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     2,vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht
                     [6U]);
        VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 201, "", false);
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht
                      [7U])))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_llm.sv:201: Assertion failed in %Ntb_gshare_llm: Reset PHT mismatch at index 7: got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     2,vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht
                     [7U]);
        VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 201, "", false);
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht
                      [8U])))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_llm.sv:201: Assertion failed in %Ntb_gshare_llm: Reset PHT mismatch at index 8: got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     2,vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht
                     [8U]);
        VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 201, "", false);
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht
                      [9U])))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_llm.sv:201: Assertion failed in %Ntb_gshare_llm: Reset PHT mismatch at index 9: got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     2,vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht
                     [9U]);
        VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 201, "", false);
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht
                      [0xaU])))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_llm.sv:201: Assertion failed in %Ntb_gshare_llm: Reset PHT mismatch at index 10: got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     2,vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht
                     [0xaU]);
        VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 201, "", false);
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht
                      [0xbU])))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_llm.sv:201: Assertion failed in %Ntb_gshare_llm: Reset PHT mismatch at index 11: got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     2,vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht
                     [0xbU]);
        VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 201, "", false);
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht
                      [0xcU])))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_llm.sv:201: Assertion failed in %Ntb_gshare_llm: Reset PHT mismatch at index 12: got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     2,vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht
                     [0xcU]);
        VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 201, "", false);
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht
                      [0xdU])))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_llm.sv:201: Assertion failed in %Ntb_gshare_llm: Reset PHT mismatch at index 13: got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     2,vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht
                     [0xdU]);
        VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 201, "", false);
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht
                      [0xeU])))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_llm.sv:201: Assertion failed in %Ntb_gshare_llm: Reset PHT mismatch at index 14: got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     2,vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht
                     [0xeU]);
        VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 201, "", false);
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht
                      [0xfU])))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_llm.sv:201: Assertion failed in %Ntb_gshare_llm: Reset PHT mismatch at index 15: got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     2,vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht
                     [0xfU]);
        VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 201, "", false);
    }
    VL_WRITEF_NX("PASS: reset initializes PHT to weakly not taken\n",0);
    __Vtask_tb_gshare_llm__DOT__do_reset__3__tb_gshare_llm__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    vlSelfRef.tb_gshare_llm__DOT__StallF = 0U;
    vlSelfRef.tb_gshare_llm__DOT__StallD = 0U;
    vlSelfRef.tb_gshare_llm__DOT__StallE = 0U;
    vlSelfRef.tb_gshare_llm__DOT__FlushD = 0U;
    vlSelfRef.tb_gshare_llm__DOT__FlushE = 0U;
    vlSelfRef.tb_gshare_llm__DOT__PCF = 0U;
    vlSelfRef.tb_gshare_llm__DOT__BPBranchF = 0U;
    vlSelfRef.tb_gshare_llm__DOT__BranchD = 0U;
    vlSelfRef.tb_gshare_llm__DOT__BranchE = 0U;
    vlSelfRef.tb_gshare_llm__DOT__PCSrcE = 0U;
    vlSelfRef.tb_gshare_llm__DOT__reset = 1U;
    co_await vlSelfRef.__VtrigSched_h1b6aa2eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gshare_llm.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                                         108);
    __Vtask_tb_gshare_llm__DOT__do_reset__3__tb_gshare_llm__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h1b6aa2eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gshare_llm.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                                         108);
    __Vtask_tb_gshare_llm__DOT__do_reset__3__tb_gshare_llm__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    co_await vlSelfRef.__VtrigSched_h1b6aa2aa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gshare_llm.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                                         110);
    vlSelfRef.tb_gshare_llm__DOT__reset = 0U;
    co_await vlSelfRef.__VtrigSched_h1b6aa2eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gshare_llm.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                                         113);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                         114);
    __Vtask_tb_gshare_llm__DOT__run_branch__5__expected_wrong = 0U;
    __Vtask_tb_gshare_llm__DOT__run_branch__5__expected_after = 0U;
    __Vtask_tb_gshare_llm__DOT__run_branch__5__expected_before = 1U;
    __Vtask_tb_gshare_llm__DOT__run_branch__5__actual_taken = 0U;
    __Vtask_tb_gshare_llm__DOT__run_branch__5__pc = 0x100U;
    __Vtask_tb_gshare_llm__DOT__run_branch__5__expected_index = 0;
    __Vfunc_tb_gshare_llm__DOT__hash_pc__6__pc = __Vtask_tb_gshare_llm__DOT__run_branch__5__pc;
    __Vfunc_tb_gshare_llm__DOT__hash_pc__6__Vfuncout 
        = ((8U & (VL_REDXOR_8((0x22U & __Vfunc_tb_gshare_llm__DOT__hash_pc__6__pc)) 
                  << 3U)) | (7U & (__Vfunc_tb_gshare_llm__DOT__hash_pc__6__pc 
                                   >> 2U)));
    __Vtask_tb_gshare_llm__DOT__run_branch__5__expected_index 
        = __Vfunc_tb_gshare_llm__DOT__hash_pc__6__Vfuncout;
    co_await vlSelfRef.__VtrigSched_h1b6aa2aa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gshare_llm.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                                         132);
    vlSelfRef.tb_gshare_llm__DOT__PCF = __Vtask_tb_gshare_llm__DOT__run_branch__5__pc;
    vlSelfRef.tb_gshare_llm__DOT__BPBranchF = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                         137);
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht_readF) 
                      != (IData)(__Vtask_tb_gshare_llm__DOT__run_branch__5__expected_before))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_llm.sv:140: Assertion failed in %Ntb_gshare_llm.run_branch: Prediction mismatch: expected %b got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     2,(IData)(__Vtask_tb_gshare_llm__DOT__run_branch__5__expected_before),
                     2,vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht_readF);
        VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 140, "", false);
    }
    co_await vlSelfRef.__VtrigSched_h1b6aa2eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gshare_llm.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                                         144);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                         145);
    co_await vlSelfRef.__VtrigSched_h1b6aa2aa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gshare_llm.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                                         148);
    vlSelfRef.tb_gshare_llm__DOT__BPBranchF = 0U;
    vlSelfRef.tb_gshare_llm__DOT__BranchD = 1U;
    co_await vlSelfRef.__VtrigSched_h1b6aa2eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gshare_llm.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                                         153);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                         154);
    co_await vlSelfRef.__VtrigSched_h1b6aa2aa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gshare_llm.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                                         157);
    vlSelfRef.tb_gshare_llm__DOT__BranchD = 0U;
    vlSelfRef.tb_gshare_llm__DOT__BranchE = 1U;
    vlSelfRef.tb_gshare_llm__DOT__PCSrcE = __Vtask_tb_gshare_llm__DOT__run_branch__5__actual_taken;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                         163);
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_gshare_llm__DOT__BPDirWrongE) 
                      != (IData)(__Vtask_tb_gshare_llm__DOT__run_branch__5__expected_wrong))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_llm.sv:166: Assertion failed in %Ntb_gshare_llm.run_branch: Mispredict mismatch: expected %b got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     1,(IData)(__Vtask_tb_gshare_llm__DOT__run_branch__5__expected_wrong),
                     1,vlSelfRef.tb_gshare_llm__DOT__BPDirWrongE);
        VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 166, "", false);
    }
    co_await vlSelfRef.__VtrigSched_h1b6aa2eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gshare_llm.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                                         171);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                         172);
    if (VL_UNLIKELY(((vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht
                      [__Vtask_tb_gshare_llm__DOT__run_branch__5__expected_index] 
                      != (IData)(__Vtask_tb_gshare_llm__DOT__run_branch__5__expected_after))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_llm.sv:175: Assertion failed in %Ntb_gshare_llm.run_branch: PHT mismatch at index %0#: expected %b got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     4,(IData)(__Vtask_tb_gshare_llm__DOT__run_branch__5__expected_index),
                     2,__Vtask_tb_gshare_llm__DOT__run_branch__5__expected_after,
                     2,vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht
                     [__Vtask_tb_gshare_llm__DOT__run_branch__5__expected_index]);
        VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 175, "", false);
    }
    co_await vlSelfRef.__VtrigSched_h1b6aa2aa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gshare_llm.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                                         181);
    vlSelfRef.tb_gshare_llm__DOT__BranchE = 0U;
    vlSelfRef.tb_gshare_llm__DOT__PCSrcE = 0U;
    VL_WRITEF_NX("PASS: not-taken counter update\n",0);
    __Vtask_tb_gshare_llm__DOT__do_reset__7__tb_gshare_llm__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    vlSelfRef.tb_gshare_llm__DOT__StallF = 0U;
    vlSelfRef.tb_gshare_llm__DOT__StallD = 0U;
    vlSelfRef.tb_gshare_llm__DOT__StallE = 0U;
    vlSelfRef.tb_gshare_llm__DOT__FlushD = 0U;
    vlSelfRef.tb_gshare_llm__DOT__FlushE = 0U;
    vlSelfRef.tb_gshare_llm__DOT__PCF = 0U;
    vlSelfRef.tb_gshare_llm__DOT__BPBranchF = 0U;
    vlSelfRef.tb_gshare_llm__DOT__BranchD = 0U;
    vlSelfRef.tb_gshare_llm__DOT__BranchE = 0U;
    vlSelfRef.tb_gshare_llm__DOT__PCSrcE = 0U;
    vlSelfRef.tb_gshare_llm__DOT__reset = 1U;
    co_await vlSelfRef.__VtrigSched_h1b6aa2eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gshare_llm.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                                         108);
    __Vtask_tb_gshare_llm__DOT__do_reset__7__tb_gshare_llm__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h1b6aa2eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gshare_llm.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                                         108);
    __Vtask_tb_gshare_llm__DOT__do_reset__7__tb_gshare_llm__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    co_await vlSelfRef.__VtrigSched_h1b6aa2aa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gshare_llm.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                                         110);
    vlSelfRef.tb_gshare_llm__DOT__reset = 0U;
    co_await vlSelfRef.__VtrigSched_h1b6aa2eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gshare_llm.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                                         113);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                         114);
    __Vtask_tb_gshare_llm__DOT__run_branch__9__expected_wrong = 1U;
    __Vtask_tb_gshare_llm__DOT__run_branch__9__expected_after = 2U;
    __Vtask_tb_gshare_llm__DOT__run_branch__9__expected_before = 1U;
    __Vtask_tb_gshare_llm__DOT__run_branch__9__actual_taken = 1U;
    __Vtask_tb_gshare_llm__DOT__run_branch__9__pc = 0x100U;
    __Vtask_tb_gshare_llm__DOT__run_branch__9__expected_index = 0;
    __Vfunc_tb_gshare_llm__DOT__hash_pc__10__pc = __Vtask_tb_gshare_llm__DOT__run_branch__9__pc;
    __Vfunc_tb_gshare_llm__DOT__hash_pc__10__Vfuncout 
        = ((8U & (VL_REDXOR_8((0x22U & __Vfunc_tb_gshare_llm__DOT__hash_pc__10__pc)) 
                  << 3U)) | (7U & (__Vfunc_tb_gshare_llm__DOT__hash_pc__10__pc 
                                   >> 2U)));
    __Vtask_tb_gshare_llm__DOT__run_branch__9__expected_index 
        = __Vfunc_tb_gshare_llm__DOT__hash_pc__10__Vfuncout;
    co_await vlSelfRef.__VtrigSched_h1b6aa2aa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gshare_llm.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                                         132);
    vlSelfRef.tb_gshare_llm__DOT__PCF = __Vtask_tb_gshare_llm__DOT__run_branch__9__pc;
    vlSelfRef.tb_gshare_llm__DOT__BPBranchF = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                         137);
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht_readF) 
                      != (IData)(__Vtask_tb_gshare_llm__DOT__run_branch__9__expected_before))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_llm.sv:140: Assertion failed in %Ntb_gshare_llm.run_branch: Prediction mismatch: expected %b got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     2,(IData)(__Vtask_tb_gshare_llm__DOT__run_branch__9__expected_before),
                     2,vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht_readF);
        VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 140, "", false);
    }
    co_await vlSelfRef.__VtrigSched_h1b6aa2eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gshare_llm.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                                         144);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                         145);
    co_await vlSelfRef.__VtrigSched_h1b6aa2aa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gshare_llm.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                                         148);
    vlSelfRef.tb_gshare_llm__DOT__BPBranchF = 0U;
    vlSelfRef.tb_gshare_llm__DOT__BranchD = 1U;
    co_await vlSelfRef.__VtrigSched_h1b6aa2eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gshare_llm.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                                         153);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                         154);
    co_await vlSelfRef.__VtrigSched_h1b6aa2aa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gshare_llm.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                                         157);
    vlSelfRef.tb_gshare_llm__DOT__BranchD = 0U;
    vlSelfRef.tb_gshare_llm__DOT__BranchE = 1U;
    vlSelfRef.tb_gshare_llm__DOT__PCSrcE = __Vtask_tb_gshare_llm__DOT__run_branch__9__actual_taken;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                         163);
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_gshare_llm__DOT__BPDirWrongE) 
                      != (IData)(__Vtask_tb_gshare_llm__DOT__run_branch__9__expected_wrong))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_llm.sv:166: Assertion failed in %Ntb_gshare_llm.run_branch: Mispredict mismatch: expected %b got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     1,(IData)(__Vtask_tb_gshare_llm__DOT__run_branch__9__expected_wrong),
                     1,vlSelfRef.tb_gshare_llm__DOT__BPDirWrongE);
        VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 166, "", false);
    }
    co_await vlSelfRef.__VtrigSched_h1b6aa2eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gshare_llm.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                                         171);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                         172);
    if (VL_UNLIKELY(((vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht
                      [__Vtask_tb_gshare_llm__DOT__run_branch__9__expected_index] 
                      != (IData)(__Vtask_tb_gshare_llm__DOT__run_branch__9__expected_after))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_llm.sv:175: Assertion failed in %Ntb_gshare_llm.run_branch: PHT mismatch at index %0#: expected %b got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     4,(IData)(__Vtask_tb_gshare_llm__DOT__run_branch__9__expected_index),
                     2,__Vtask_tb_gshare_llm__DOT__run_branch__9__expected_after,
                     2,vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht
                     [__Vtask_tb_gshare_llm__DOT__run_branch__9__expected_index]);
        VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 175, "", false);
    }
    co_await vlSelfRef.__VtrigSched_h1b6aa2aa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gshare_llm.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                                         181);
    vlSelfRef.tb_gshare_llm__DOT__BranchE = 0U;
    vlSelfRef.tb_gshare_llm__DOT__PCSrcE = 0U;
    VL_WRITEF_NX("PASS: taken counter update and misprediction\n",0);
    __Vtask_tb_gshare_llm__DOT__do_reset__11__tb_gshare_llm__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    vlSelfRef.tb_gshare_llm__DOT__StallF = 0U;
    vlSelfRef.tb_gshare_llm__DOT__StallD = 0U;
    vlSelfRef.tb_gshare_llm__DOT__StallE = 0U;
    vlSelfRef.tb_gshare_llm__DOT__FlushD = 0U;
    vlSelfRef.tb_gshare_llm__DOT__FlushE = 0U;
    vlSelfRef.tb_gshare_llm__DOT__PCF = 0U;
    vlSelfRef.tb_gshare_llm__DOT__BPBranchF = 0U;
    vlSelfRef.tb_gshare_llm__DOT__BranchD = 0U;
    vlSelfRef.tb_gshare_llm__DOT__BranchE = 0U;
    vlSelfRef.tb_gshare_llm__DOT__PCSrcE = 0U;
    vlSelfRef.tb_gshare_llm__DOT__reset = 1U;
    co_await vlSelfRef.__VtrigSched_h1b6aa2eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gshare_llm.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                                         108);
    __Vtask_tb_gshare_llm__DOT__do_reset__11__tb_gshare_llm__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h1b6aa2eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gshare_llm.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                                         108);
    __Vtask_tb_gshare_llm__DOT__do_reset__11__tb_gshare_llm__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    co_await vlSelfRef.__VtrigSched_h1b6aa2aa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gshare_llm.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                                         110);
    vlSelfRef.tb_gshare_llm__DOT__reset = 0U;
    co_await vlSelfRef.__VtrigSched_h1b6aa2eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gshare_llm.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                                         113);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                         114);
    __Vtask_tb_gshare_llm__DOT__run_branch__13__expected_wrong = 0U;
    __Vtask_tb_gshare_llm__DOT__run_branch__13__expected_after = 0U;
    __Vtask_tb_gshare_llm__DOT__run_branch__13__expected_before = 1U;
    __Vtask_tb_gshare_llm__DOT__run_branch__13__actual_taken = 0U;
    __Vtask_tb_gshare_llm__DOT__run_branch__13__pc = 0x100U;
    __Vtask_tb_gshare_llm__DOT__run_branch__13__expected_index = 0;
    __Vfunc_tb_gshare_llm__DOT__hash_pc__14__pc = __Vtask_tb_gshare_llm__DOT__run_branch__13__pc;
    __Vfunc_tb_gshare_llm__DOT__hash_pc__14__Vfuncout 
        = ((8U & (VL_REDXOR_8((0x22U & __Vfunc_tb_gshare_llm__DOT__hash_pc__14__pc)) 
                  << 3U)) | (7U & (__Vfunc_tb_gshare_llm__DOT__hash_pc__14__pc 
                                   >> 2U)));
    __Vtask_tb_gshare_llm__DOT__run_branch__13__expected_index 
        = __Vfunc_tb_gshare_llm__DOT__hash_pc__14__Vfuncout;
    co_await vlSelfRef.__VtrigSched_h1b6aa2aa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gshare_llm.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                                         132);
    vlSelfRef.tb_gshare_llm__DOT__PCF = __Vtask_tb_gshare_llm__DOT__run_branch__13__pc;
    vlSelfRef.tb_gshare_llm__DOT__BPBranchF = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                         137);
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht_readF) 
                      != (IData)(__Vtask_tb_gshare_llm__DOT__run_branch__13__expected_before))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_llm.sv:140: Assertion failed in %Ntb_gshare_llm.run_branch: Prediction mismatch: expected %b got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     2,(IData)(__Vtask_tb_gshare_llm__DOT__run_branch__13__expected_before),
                     2,vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht_readF);
        VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 140, "", false);
    }
    co_await vlSelfRef.__VtrigSched_h1b6aa2eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gshare_llm.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                                         144);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                         145);
    co_await vlSelfRef.__VtrigSched_h1b6aa2aa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gshare_llm.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                                         148);
    vlSelfRef.tb_gshare_llm__DOT__BPBranchF = 0U;
    vlSelfRef.tb_gshare_llm__DOT__BranchD = 1U;
    co_await vlSelfRef.__VtrigSched_h1b6aa2eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gshare_llm.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                                         153);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                         154);
    co_await vlSelfRef.__VtrigSched_h1b6aa2aa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gshare_llm.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                                         157);
    vlSelfRef.tb_gshare_llm__DOT__BranchD = 0U;
    vlSelfRef.tb_gshare_llm__DOT__BranchE = 1U;
    vlSelfRef.tb_gshare_llm__DOT__PCSrcE = __Vtask_tb_gshare_llm__DOT__run_branch__13__actual_taken;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                         163);
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_gshare_llm__DOT__BPDirWrongE) 
                      != (IData)(__Vtask_tb_gshare_llm__DOT__run_branch__13__expected_wrong))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_llm.sv:166: Assertion failed in %Ntb_gshare_llm.run_branch: Mispredict mismatch: expected %b got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     1,(IData)(__Vtask_tb_gshare_llm__DOT__run_branch__13__expected_wrong),
                     1,vlSelfRef.tb_gshare_llm__DOT__BPDirWrongE);
        VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 166, "", false);
    }
    co_await vlSelfRef.__VtrigSched_h1b6aa2eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gshare_llm.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                                         171);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                         172);
    if (VL_UNLIKELY(((vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht
                      [__Vtask_tb_gshare_llm__DOT__run_branch__13__expected_index] 
                      != (IData)(__Vtask_tb_gshare_llm__DOT__run_branch__13__expected_after))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_llm.sv:175: Assertion failed in %Ntb_gshare_llm.run_branch: PHT mismatch at index %0#: expected %b got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     4,(IData)(__Vtask_tb_gshare_llm__DOT__run_branch__13__expected_index),
                     2,__Vtask_tb_gshare_llm__DOT__run_branch__13__expected_after,
                     2,vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht
                     [__Vtask_tb_gshare_llm__DOT__run_branch__13__expected_index]);
        VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 175, "", false);
    }
    co_await vlSelfRef.__VtrigSched_h1b6aa2aa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gshare_llm.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                                         181);
    vlSelfRef.tb_gshare_llm__DOT__BranchE = 0U;
    vlSelfRef.tb_gshare_llm__DOT__PCSrcE = 0U;
    __Vtask_tb_gshare_llm__DOT__run_branch__15__expected_wrong = 0U;
    __Vtask_tb_gshare_llm__DOT__run_branch__15__expected_after = 0U;
    __Vtask_tb_gshare_llm__DOT__run_branch__15__expected_before = 0U;
    __Vtask_tb_gshare_llm__DOT__run_branch__15__actual_taken = 0U;
    __Vtask_tb_gshare_llm__DOT__run_branch__15__pc = 0x100U;
    __Vtask_tb_gshare_llm__DOT__run_branch__15__expected_index = 0;
    __Vfunc_tb_gshare_llm__DOT__hash_pc__16__pc = __Vtask_tb_gshare_llm__DOT__run_branch__15__pc;
    __Vfunc_tb_gshare_llm__DOT__hash_pc__16__Vfuncout 
        = ((8U & (VL_REDXOR_8((0x22U & __Vfunc_tb_gshare_llm__DOT__hash_pc__16__pc)) 
                  << 3U)) | (7U & (__Vfunc_tb_gshare_llm__DOT__hash_pc__16__pc 
                                   >> 2U)));
    __Vtask_tb_gshare_llm__DOT__run_branch__15__expected_index 
        = __Vfunc_tb_gshare_llm__DOT__hash_pc__16__Vfuncout;
    co_await vlSelfRef.__VtrigSched_h1b6aa2aa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gshare_llm.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                                         132);
    vlSelfRef.tb_gshare_llm__DOT__PCF = __Vtask_tb_gshare_llm__DOT__run_branch__15__pc;
    vlSelfRef.tb_gshare_llm__DOT__BPBranchF = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                         137);
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht_readF) 
                      != (IData)(__Vtask_tb_gshare_llm__DOT__run_branch__15__expected_before))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_llm.sv:140: Assertion failed in %Ntb_gshare_llm.run_branch: Prediction mismatch: expected %b got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     2,(IData)(__Vtask_tb_gshare_llm__DOT__run_branch__15__expected_before),
                     2,vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht_readF);
        VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 140, "", false);
    }
    co_await vlSelfRef.__VtrigSched_h1b6aa2eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gshare_llm.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                                         144);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                         145);
    co_await vlSelfRef.__VtrigSched_h1b6aa2aa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gshare_llm.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                                         148);
    vlSelfRef.tb_gshare_llm__DOT__BPBranchF = 0U;
    vlSelfRef.tb_gshare_llm__DOT__BranchD = 1U;
    co_await vlSelfRef.__VtrigSched_h1b6aa2eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gshare_llm.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                                         153);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                         154);
    co_await vlSelfRef.__VtrigSched_h1b6aa2aa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gshare_llm.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                                         157);
    vlSelfRef.tb_gshare_llm__DOT__BranchD = 0U;
    vlSelfRef.tb_gshare_llm__DOT__BranchE = 1U;
    vlSelfRef.tb_gshare_llm__DOT__PCSrcE = __Vtask_tb_gshare_llm__DOT__run_branch__15__actual_taken;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                         163);
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_gshare_llm__DOT__BPDirWrongE) 
                      != (IData)(__Vtask_tb_gshare_llm__DOT__run_branch__15__expected_wrong))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_llm.sv:166: Assertion failed in %Ntb_gshare_llm.run_branch: Mispredict mismatch: expected %b got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     1,(IData)(__Vtask_tb_gshare_llm__DOT__run_branch__15__expected_wrong),
                     1,vlSelfRef.tb_gshare_llm__DOT__BPDirWrongE);
        VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 166, "", false);
    }
    co_await vlSelfRef.__VtrigSched_h1b6aa2eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gshare_llm.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                                         171);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                         172);
    if (VL_UNLIKELY(((vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht
                      [__Vtask_tb_gshare_llm__DOT__run_branch__15__expected_index] 
                      != (IData)(__Vtask_tb_gshare_llm__DOT__run_branch__15__expected_after))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_llm.sv:175: Assertion failed in %Ntb_gshare_llm.run_branch: PHT mismatch at index %0#: expected %b got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     4,(IData)(__Vtask_tb_gshare_llm__DOT__run_branch__15__expected_index),
                     2,__Vtask_tb_gshare_llm__DOT__run_branch__15__expected_after,
                     2,vlSelfRef.tb_gshare_llm__DOT__dut__DOT__pht
                     [__Vtask_tb_gshare_llm__DOT__run_branch__15__expected_index]);
        VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 175, "", false);
    }
    co_await vlSelfRef.__VtrigSched_h1b6aa2aa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gshare_llm.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 
                                                         181);
    vlSelfRef.tb_gshare_llm__DOT__BranchE = 0U;
    vlSelfRef.tb_gshare_llm__DOT__PCSrcE = 0U;
    VL_WRITEF_NX("PASS: counter saturation\nALL BASIC DIRECTED TESTS PASSED\n",0);
    VL_FINISH_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_llm.sv", 257, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_gshare_llm___024root___dump_triggers__act(Vtb_gshare_llm___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_gshare_llm___024root___eval_triggers__act(Vtb_gshare_llm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gshare_llm___024root___eval_triggers__act\n"); );
    Vtb_gshare_llm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_gshare_llm__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_gshare_llm__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.tb_gshare_llm__DOT__clk)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_gshare_llm__DOT__clk__0)));
    vlSelfRef.__VactTriggered.setBit(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_gshare_llm__DOT__clk__0 
        = vlSelfRef.tb_gshare_llm__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_gshare_llm___024root___dump_triggers__act(vlSelf);
    }
#endif
}
