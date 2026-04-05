// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

VL_ATTR_COLD void Vtb___024root___eval_initial__TOP(Vtb___024root* vlSelf);
VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__0(Vtb___024root* vlSelf);
VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1(Vtb___024root* vlSelf);
VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__2(Vtb___024root* vlSelf);

void Vtb___024root___eval_initial(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb___024root___eval_initial__TOP(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

void Vtb___024root____VbeforeTrig_h337ca4df__0(Vtb___024root* vlSelf, const char* __VeventDescription);
void Vtb___024root____VbeforeTrig_h337ca5b3__0(Vtb___024root* vlSelf, const char* __VeventDescription);
void Vtb___024root____VbeforeTrig_h7428e5d8__0(Vtb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb__DOT__unnamedblk1_7__DOT____Vrepeat6;
    tb__DOT__unnamedblk1_7__DOT____Vrepeat6 = 0;
    IData/*31:0*/ tb__DOT__unnamedblk1_8__DOT____Vrepeat7;
    tb__DOT__unnamedblk1_8__DOT____Vrepeat7 = 0;
    IData/*31:0*/ tb__DOT__unnamedblk1_9__DOT____Vrepeat8;
    tb__DOT__unnamedblk1_9__DOT____Vrepeat8 = 0;
    IData/*31:0*/ __Vtask_tb__DOT__configure_test_state__0__tb__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb__DOT__configure_test_state__0__tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ __Vtask_tb__DOT__configure_test_state__0__tb__DOT__unnamedblk1_4__DOT____Vrepeat3;
    __Vtask_tb__DOT__configure_test_state__0__tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    IData/*31:0*/ __Vtask_tb__DOT__configure_test_state__0__tb__DOT__unnamedblk1_5__DOT____Vrepeat4;
    __Vtask_tb__DOT__configure_test_state__0__tb__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0;
    IData/*31:0*/ __Vtask_tb__DOT__configure_test_state__0__tb__DOT__unnamedblk1_6__DOT____Vrepeat5;
    __Vtask_tb__DOT__configure_test_state__0__tb__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0;
    IData/*31:0*/ __Vtask_tb__DOT__bridge_write__1__addr;
    __Vtask_tb__DOT__bridge_write__1__addr = 0;
    IData/*31:0*/ __Vtask_tb__DOT__bridge_write__1__data;
    __Vtask_tb__DOT__bridge_write__1__data = 0;
    IData/*31:0*/ __Vtask_tb__DOT__bridge_write__2__addr;
    __Vtask_tb__DOT__bridge_write__2__addr = 0;
    IData/*31:0*/ __Vtask_tb__DOT__bridge_write__2__data;
    __Vtask_tb__DOT__bridge_write__2__data = 0;
    IData/*31:0*/ __Vtask_tb__DOT__bridge_write__3__addr;
    __Vtask_tb__DOT__bridge_write__3__addr = 0;
    IData/*31:0*/ __Vtask_tb__DOT__bridge_write__3__data;
    __Vtask_tb__DOT__bridge_write__3__data = 0;
    IData/*31:0*/ __Vtask_tb__DOT__bridge_write__4__addr;
    __Vtask_tb__DOT__bridge_write__4__addr = 0;
    IData/*31:0*/ __Vtask_tb__DOT__bridge_write__4__data;
    __Vtask_tb__DOT__bridge_write__4__data = 0;
    IData/*31:0*/ __Vtask_tb__DOT__bridge_write__5__addr;
    __Vtask_tb__DOT__bridge_write__5__addr = 0;
    IData/*31:0*/ __Vtask_tb__DOT__bridge_write__5__data;
    __Vtask_tb__DOT__bridge_write__5__data = 0;
    IData/*31:0*/ __Vtask_tb__DOT__bridge_write__6__addr;
    __Vtask_tb__DOT__bridge_write__6__addr = 0;
    IData/*31:0*/ __Vtask_tb__DOT__bridge_write__6__data;
    __Vtask_tb__DOT__bridge_write__6__data = 0;
    VlUnpacked<IData/*31:0*/, 16> __Vtask_tb__DOT__save_blob__7__blob;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        __Vtask_tb__DOT__save_blob__7__blob[__Vi0] = 0;
    }
    IData/*31:0*/ __Vtask_tb__DOT__save_blob__7__tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb__DOT__save_blob__7__tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb__DOT__bridge_write__8__addr;
    __Vtask_tb__DOT__bridge_write__8__addr = 0;
    IData/*31:0*/ __Vtask_tb__DOT__bridge_write__8__data;
    __Vtask_tb__DOT__bridge_write__8__data = 0;
    IData/*31:0*/ __Vtask_tb__DOT__bridge_write__9__addr;
    __Vtask_tb__DOT__bridge_write__9__addr = 0;
    IData/*31:0*/ __Vtask_tb__DOT__bridge_write__9__data;
    __Vtask_tb__DOT__bridge_write__9__data = 0;
    IData/*31:0*/ __Vtask_tb__DOT__bridge_write__10__addr;
    __Vtask_tb__DOT__bridge_write__10__addr = 0;
    IData/*31:0*/ __Vtask_tb__DOT__bridge_write__10__data;
    __Vtask_tb__DOT__bridge_write__10__data = 0;
    IData/*31:0*/ __Vtask_tb__DOT__bridge_write__11__addr;
    __Vtask_tb__DOT__bridge_write__11__addr = 0;
    IData/*31:0*/ __Vtask_tb__DOT__bridge_write__11__data;
    __Vtask_tb__DOT__bridge_write__11__data = 0;
    IData/*31:0*/ __Vtask_tb__DOT__bridge_write__12__addr;
    __Vtask_tb__DOT__bridge_write__12__addr = 0;
    IData/*31:0*/ __Vtask_tb__DOT__bridge_write__12__data;
    __Vtask_tb__DOT__bridge_write__12__data = 0;
    IData/*31:0*/ __Vtask_tb__DOT__bridge_write__13__addr;
    __Vtask_tb__DOT__bridge_write__13__addr = 0;
    IData/*31:0*/ __Vtask_tb__DOT__bridge_write__13__data;
    __Vtask_tb__DOT__bridge_write__13__data = 0;
    VlUnpacked<IData/*31:0*/, 16> __Vtask_tb__DOT__load_blob__14__blob;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        __Vtask_tb__DOT__load_blob__14__blob[__Vi0] = 0;
    }
    IData/*31:0*/ __Vtask_tb__DOT__load_blob__14__tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb__DOT__load_blob__14__tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    VlWide<3>/*95:0*/ __Vtask_tb__DOT__load_blob__14__expected_top;
    VL_ZERO_W(96, __Vtask_tb__DOT__load_blob__14__expected_top);
    VlWide<5>/*159:0*/ __Vtask_tb__DOT__load_blob__14__expected_chip_padded;
    VL_ZERO_W(160, __Vtask_tb__DOT__load_blob__14__expected_chip_padded);
    VlUnpacked<IData/*31:0*/, 16> __Vtask_tb__DOT__save_blob__15__blob;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        __Vtask_tb__DOT__save_blob__15__blob[__Vi0] = 0;
    }
    IData/*31:0*/ __Vtask_tb__DOT__save_blob__15__tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb__DOT__save_blob__15__tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    tb__DOT__unnamedblk1_7__DOT____Vrepeat6 = 0x00000028U;
    while (VL_LTS_III(32, 0U, tb__DOT__unnamedblk1_7__DOT____Vrepeat6)) {
        Vtb___024root____VbeforeTrig_h337ca4df__0(vlSelf, 
                                                  "@(posedge tb.clk_74a)");
        co_await vlSelfRef.__VtrigSched_h337ca4df__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb.clk_74a)", 
                                                             "/tmp/ay38500_sleep_tb.sv", 
                                                             187);
        tb__DOT__unnamedblk1_7__DOT____Vrepeat6 = (tb__DOT__unnamedblk1_7__DOT____Vrepeat6 
                                                   - (IData)(1U));
    }
    __Vtask_tb__DOT__configure_test_state__0__tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    __Vtask_tb__DOT__configure_test_state__0__tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    __Vtask_tb__DOT__configure_test_state__0__tb__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0;
    __Vtask_tb__DOT__configure_test_state__0__tb__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0;
    __Vtask_tb__DOT__bridge_write__1__data = 3U;
    __Vtask_tb__DOT__bridge_write__1__addr = 0x50000000U;
    Vtb___024root____VbeforeTrig_h337ca5b3__0(vlSelf, 
                                              "@(negedge tb.clk_74a)");
    co_await vlSelfRef.__VtrigSched_h337ca5b3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb.clk_74a)", 
                                                         "/tmp/ay38500_sleep_tb.sv", 
                                                         101);
    vlSelfRef.tb__DOT__bridge_addr = __Vtask_tb__DOT__bridge_write__1__addr;
    vlSelfRef.tb__DOT__bridge_wr_data = __Vtask_tb__DOT__bridge_write__1__data;
    vlSelfRef.tb__DOT__bridge_wr = 1U;
    Vtb___024root____VbeforeTrig_h337ca5b3__0(vlSelf, 
                                              "@(negedge tb.clk_74a)");
    co_await vlSelfRef.__VtrigSched_h337ca5b3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb.clk_74a)", 
                                                         "/tmp/ay38500_sleep_tb.sv", 
                                                         106);
    vlSelfRef.tb__DOT__bridge_wr = 0U;
    vlSelfRef.tb__DOT__bridge_addr = 0U;
    vlSelfRef.tb__DOT__bridge_wr_data = 0U;
    __Vtask_tb__DOT__bridge_write__2__data = 1U;
    __Vtask_tb__DOT__bridge_write__2__addr = 0x50000004U;
    Vtb___024root____VbeforeTrig_h337ca5b3__0(vlSelf, 
                                              "@(negedge tb.clk_74a)");
    co_await vlSelfRef.__VtrigSched_h337ca5b3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb.clk_74a)", 
                                                         "/tmp/ay38500_sleep_tb.sv", 
                                                         101);
    vlSelfRef.tb__DOT__bridge_addr = __Vtask_tb__DOT__bridge_write__2__addr;
    vlSelfRef.tb__DOT__bridge_wr_data = __Vtask_tb__DOT__bridge_write__2__data;
    vlSelfRef.tb__DOT__bridge_wr = 1U;
    Vtb___024root____VbeforeTrig_h337ca5b3__0(vlSelf, 
                                              "@(negedge tb.clk_74a)");
    co_await vlSelfRef.__VtrigSched_h337ca5b3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb.clk_74a)", 
                                                         "/tmp/ay38500_sleep_tb.sv", 
                                                         106);
    vlSelfRef.tb__DOT__bridge_wr = 0U;
    vlSelfRef.tb__DOT__bridge_addr = 0U;
    vlSelfRef.tb__DOT__bridge_wr_data = 0U;
    __Vtask_tb__DOT__bridge_write__3__data = 1U;
    __Vtask_tb__DOT__bridge_write__3__addr = 0x50000008U;
    Vtb___024root____VbeforeTrig_h337ca5b3__0(vlSelf, 
                                              "@(negedge tb.clk_74a)");
    co_await vlSelfRef.__VtrigSched_h337ca5b3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb.clk_74a)", 
                                                         "/tmp/ay38500_sleep_tb.sv", 
                                                         101);
    vlSelfRef.tb__DOT__bridge_addr = __Vtask_tb__DOT__bridge_write__3__addr;
    vlSelfRef.tb__DOT__bridge_wr_data = __Vtask_tb__DOT__bridge_write__3__data;
    vlSelfRef.tb__DOT__bridge_wr = 1U;
    Vtb___024root____VbeforeTrig_h337ca5b3__0(vlSelf, 
                                              "@(negedge tb.clk_74a)");
    co_await vlSelfRef.__VtrigSched_h337ca5b3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb.clk_74a)", 
                                                         "/tmp/ay38500_sleep_tb.sv", 
                                                         106);
    vlSelfRef.tb__DOT__bridge_wr = 0U;
    vlSelfRef.tb__DOT__bridge_addr = 0U;
    vlSelfRef.tb__DOT__bridge_wr_data = 0U;
    __Vtask_tb__DOT__bridge_write__4__data = 1U;
    __Vtask_tb__DOT__bridge_write__4__addr = 0x5000000cU;
    Vtb___024root____VbeforeTrig_h337ca5b3__0(vlSelf, 
                                              "@(negedge tb.clk_74a)");
    co_await vlSelfRef.__VtrigSched_h337ca5b3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb.clk_74a)", 
                                                         "/tmp/ay38500_sleep_tb.sv", 
                                                         101);
    vlSelfRef.tb__DOT__bridge_addr = __Vtask_tb__DOT__bridge_write__4__addr;
    vlSelfRef.tb__DOT__bridge_wr_data = __Vtask_tb__DOT__bridge_write__4__data;
    vlSelfRef.tb__DOT__bridge_wr = 1U;
    Vtb___024root____VbeforeTrig_h337ca5b3__0(vlSelf, 
                                              "@(negedge tb.clk_74a)");
    co_await vlSelfRef.__VtrigSched_h337ca5b3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb.clk_74a)", 
                                                         "/tmp/ay38500_sleep_tb.sv", 
                                                         106);
    vlSelfRef.tb__DOT__bridge_wr = 0U;
    vlSelfRef.tb__DOT__bridge_addr = 0U;
    vlSelfRef.tb__DOT__bridge_wr_data = 0U;
    __Vtask_tb__DOT__bridge_write__5__data = 1U;
    __Vtask_tb__DOT__bridge_write__5__addr = 0x50000010U;
    Vtb___024root____VbeforeTrig_h337ca5b3__0(vlSelf, 
                                              "@(negedge tb.clk_74a)");
    co_await vlSelfRef.__VtrigSched_h337ca5b3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb.clk_74a)", 
                                                         "/tmp/ay38500_sleep_tb.sv", 
                                                         101);
    vlSelfRef.tb__DOT__bridge_addr = __Vtask_tb__DOT__bridge_write__5__addr;
    vlSelfRef.tb__DOT__bridge_wr_data = __Vtask_tb__DOT__bridge_write__5__data;
    vlSelfRef.tb__DOT__bridge_wr = 1U;
    Vtb___024root____VbeforeTrig_h337ca5b3__0(vlSelf, 
                                              "@(negedge tb.clk_74a)");
    co_await vlSelfRef.__VtrigSched_h337ca5b3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb.clk_74a)", 
                                                         "/tmp/ay38500_sleep_tb.sv", 
                                                         106);
    vlSelfRef.tb__DOT__bridge_wr = 0U;
    vlSelfRef.tb__DOT__bridge_addr = 0U;
    vlSelfRef.tb__DOT__bridge_wr_data = 0U;
    __Vtask_tb__DOT__bridge_write__6__data = 5U;
    __Vtask_tb__DOT__bridge_write__6__addr = 0x50000014U;
    Vtb___024root____VbeforeTrig_h337ca5b3__0(vlSelf, 
                                              "@(negedge tb.clk_74a)");
    co_await vlSelfRef.__VtrigSched_h337ca5b3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb.clk_74a)", 
                                                         "/tmp/ay38500_sleep_tb.sv", 
                                                         101);
    vlSelfRef.tb__DOT__bridge_addr = __Vtask_tb__DOT__bridge_write__6__addr;
    vlSelfRef.tb__DOT__bridge_wr_data = __Vtask_tb__DOT__bridge_write__6__data;
    vlSelfRef.tb__DOT__bridge_wr = 1U;
    Vtb___024root____VbeforeTrig_h337ca5b3__0(vlSelf, 
                                              "@(negedge tb.clk_74a)");
    co_await vlSelfRef.__VtrigSched_h337ca5b3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb.clk_74a)", 
                                                         "/tmp/ay38500_sleep_tb.sv", 
                                                         106);
    vlSelfRef.tb__DOT__bridge_wr = 0U;
    vlSelfRef.tb__DOT__bridge_addr = 0U;
    vlSelfRef.tb__DOT__bridge_wr_data = 0U;
    __Vtask_tb__DOT__configure_test_state__0__tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x00000190U;
    while (VL_LTS_III(32, 0U, __Vtask_tb__DOT__configure_test_state__0__tb__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        Vtb___024root____VbeforeTrig_h337ca4df__0(vlSelf, 
                                                  "@(posedge tb.clk_74a)");
        co_await vlSelfRef.__VtrigSched_h337ca4df__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb.clk_74a)", 
                                                             "/tmp/ay38500_sleep_tb.sv", 
                                                             174);
        __Vtask_tb__DOT__configure_test_state__0__tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (__Vtask_tb__DOT__configure_test_state__0__tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    vlSelfRef.tb__DOT__cont1_key = (1U | vlSelfRef.tb__DOT__cont1_key);
    __Vtask_tb__DOT__configure_test_state__0__tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 6U;
    while (VL_LTS_III(32, 0U, __Vtask_tb__DOT__configure_test_state__0__tb__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
        Vtb___024root____VbeforeTrig_h7428e5d8__0(vlSelf, 
                                                  "@(posedge tb.dut.the_chip.flop6)");
        co_await vlSelfRef.__VtrigSched_h7428e5d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb.dut.the_chip.flop6)", 
                                                             "/tmp/ay38500_sleep_tb.sv", 
                                                             176);
        __Vtask_tb__DOT__configure_test_state__0__tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
            = (__Vtask_tb__DOT__configure_test_state__0__tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
               - (IData)(1U));
    }
    vlSelfRef.tb__DOT__cont1_key = (0xfffffffeU & vlSelfRef.tb__DOT__cont1_key);
    vlSelfRef.tb__DOT__cont2_key = (2U | vlSelfRef.tb__DOT__cont2_key);
    __Vtask_tb__DOT__configure_test_state__0__tb__DOT__unnamedblk1_5__DOT____Vrepeat4 = 9U;
    while (VL_LTS_III(32, 0U, __Vtask_tb__DOT__configure_test_state__0__tb__DOT__unnamedblk1_5__DOT____Vrepeat4)) {
        Vtb___024root____VbeforeTrig_h7428e5d8__0(vlSelf, 
                                                  "@(posedge tb.dut.the_chip.flop6)");
        co_await vlSelfRef.__VtrigSched_h7428e5d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb.dut.the_chip.flop6)", 
                                                             "/tmp/ay38500_sleep_tb.sv", 
                                                             179);
        __Vtask_tb__DOT__configure_test_state__0__tb__DOT__unnamedblk1_5__DOT____Vrepeat4 
            = (__Vtask_tb__DOT__configure_test_state__0__tb__DOT__unnamedblk1_5__DOT____Vrepeat4 
               - (IData)(1U));
    }
    vlSelfRef.tb__DOT__cont2_key = (0xfffffffdU & vlSelfRef.tb__DOT__cont2_key);
    __Vtask_tb__DOT__configure_test_state__0__tb__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0x0000012cU;
    while (VL_LTS_III(32, 0U, __Vtask_tb__DOT__configure_test_state__0__tb__DOT__unnamedblk1_6__DOT____Vrepeat5)) {
        Vtb___024root____VbeforeTrig_h337ca4df__0(vlSelf, 
                                                  "@(posedge tb.clk_74a)");
        co_await vlSelfRef.__VtrigSched_h337ca4df__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb.clk_74a)", 
                                                             "/tmp/ay38500_sleep_tb.sv", 
                                                             181);
        __Vtask_tb__DOT__configure_test_state__0__tb__DOT__unnamedblk1_6__DOT____Vrepeat5 
            = (__Vtask_tb__DOT__configure_test_state__0__tb__DOT__unnamedblk1_6__DOT____Vrepeat5 
               - (IData)(1U));
    }
    __Vtask_tb__DOT__save_blob__7__tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        __Vtask_tb__DOT__save_blob__7__blob[__Vi0] = 0;
    }
    Vtb___024root____VbeforeTrig_h337ca5b3__0(vlSelf, 
                                              "@(negedge tb.clk_74a)");
    co_await vlSelfRef.__VtrigSched_h337ca5b3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb.clk_74a)", 
                                                         "/tmp/ay38500_sleep_tb.sv", 
                                                         130);
    vlSelfRef.tb__DOT__dut__DOT__savestate_save_req_toggle_74a 
        = (1U & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__savestate_save_req_toggle_74a)));
    __Vtask_tb__DOT__save_blob__7__tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0x00000020U;
    while (VL_LTS_III(32, 0U, __Vtask_tb__DOT__save_blob__7__tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb___024root____VbeforeTrig_h337ca4df__0(vlSelf, 
                                                  "@(posedge tb.clk_74a)");
        co_await vlSelfRef.__VtrigSched_h337ca4df__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb.clk_74a)", 
                                                             "/tmp/ay38500_sleep_tb.sv", 
                                                             132);
        __Vtask_tb__DOT__save_blob__7__tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb__DOT__save_blob__7__tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    __Vtask_tb__DOT__save_blob__7__blob[0U] = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[0U];
    __Vtask_tb__DOT__save_blob__7__blob[1U] = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[1U];
    __Vtask_tb__DOT__save_blob__7__blob[2U] = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[2U];
    __Vtask_tb__DOT__save_blob__7__blob[3U] = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[3U];
    __Vtask_tb__DOT__save_blob__7__blob[4U] = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[4U];
    __Vtask_tb__DOT__save_blob__7__blob[5U] = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[5U];
    __Vtask_tb__DOT__save_blob__7__blob[6U] = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[6U];
    __Vtask_tb__DOT__save_blob__7__blob[7U] = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[7U];
    __Vtask_tb__DOT__save_blob__7__blob[8U] = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[8U];
    __Vtask_tb__DOT__save_blob__7__blob[9U] = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[9U];
    __Vtask_tb__DOT__save_blob__7__blob[10U] = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[10U];
    __Vtask_tb__DOT__save_blob__7__blob[11U] = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[11U];
    __Vtask_tb__DOT__save_blob__7__blob[12U] = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[12U];
    __Vtask_tb__DOT__save_blob__7__blob[13U] = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[13U];
    __Vtask_tb__DOT__save_blob__7__blob[14U] = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[14U];
    __Vtask_tb__DOT__save_blob__7__blob[15U] = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[15U];
    vlSelfRef.tb__DOT__first_save[0U] = __Vtask_tb__DOT__save_blob__7__blob[0U];
    vlSelfRef.tb__DOT__first_save[1U] = __Vtask_tb__DOT__save_blob__7__blob[1U];
    vlSelfRef.tb__DOT__first_save[2U] = __Vtask_tb__DOT__save_blob__7__blob[2U];
    vlSelfRef.tb__DOT__first_save[3U] = __Vtask_tb__DOT__save_blob__7__blob[3U];
    vlSelfRef.tb__DOT__first_save[4U] = __Vtask_tb__DOT__save_blob__7__blob[4U];
    vlSelfRef.tb__DOT__first_save[5U] = __Vtask_tb__DOT__save_blob__7__blob[5U];
    vlSelfRef.tb__DOT__first_save[6U] = __Vtask_tb__DOT__save_blob__7__blob[6U];
    vlSelfRef.tb__DOT__first_save[7U] = __Vtask_tb__DOT__save_blob__7__blob[7U];
    vlSelfRef.tb__DOT__first_save[8U] = __Vtask_tb__DOT__save_blob__7__blob[8U];
    vlSelfRef.tb__DOT__first_save[9U] = __Vtask_tb__DOT__save_blob__7__blob[9U];
    vlSelfRef.tb__DOT__first_save[10U] = __Vtask_tb__DOT__save_blob__7__blob[10U];
    vlSelfRef.tb__DOT__first_save[11U] = __Vtask_tb__DOT__save_blob__7__blob[11U];
    vlSelfRef.tb__DOT__first_save[12U] = __Vtask_tb__DOT__save_blob__7__blob[12U];
    vlSelfRef.tb__DOT__first_save[13U] = __Vtask_tb__DOT__save_blob__7__blob[13U];
    vlSelfRef.tb__DOT__first_save[14U] = __Vtask_tb__DOT__save_blob__7__blob[14U];
    vlSelfRef.tb__DOT__first_save[15U] = __Vtask_tb__DOT__save_blob__7__blob[15U];
    VL_WRITEF_NX("first save words:\n  [0] %08x\n  [1] %08x\n  [2] %08x\n  [3] %08x\n  [4] %08x\n  [5] %08x\n  [6] %08x\n  [7] %08x\n  [8] %08x\n  [9] %08x\n  [10] %08x\n  [11] %08x\n  [12] %08x\n  [13] %08x\n  [14] %08x\n  [15] %08x\n",0,
                 32,vlSelfRef.tb__DOT__first_save[0U],
                 32,vlSelfRef.tb__DOT__first_save[1U],
                 32,vlSelfRef.tb__DOT__first_save[2U],
                 32,vlSelfRef.tb__DOT__first_save[3U],
                 32,vlSelfRef.tb__DOT__first_save[4U],
                 32,vlSelfRef.tb__DOT__first_save[5U],
                 32,vlSelfRef.tb__DOT__first_save[6U],
                 32,vlSelfRef.tb__DOT__first_save[7U],
                 32,vlSelfRef.tb__DOT__first_save[8U],
                 32,vlSelfRef.tb__DOT__first_save[9U],
                 32,vlSelfRef.tb__DOT__first_save[10U],
                 32,vlSelfRef.tb__DOT__first_save[11U],
                 32,vlSelfRef.tb__DOT__first_save[12U],
                 32,vlSelfRef.tb__DOT__first_save[13U],
                 32,vlSelfRef.tb__DOT__first_save[14U],
                 32,vlSelfRef.tb__DOT__first_save[15U]);
    __Vtask_tb__DOT__bridge_write__8__data = 0U;
    __Vtask_tb__DOT__bridge_write__8__addr = 0x50000000U;
    Vtb___024root____VbeforeTrig_h337ca5b3__0(vlSelf, 
                                              "@(negedge tb.clk_74a)");
    co_await vlSelfRef.__VtrigSched_h337ca5b3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb.clk_74a)", 
                                                         "/tmp/ay38500_sleep_tb.sv", 
                                                         101);
    vlSelfRef.tb__DOT__bridge_addr = __Vtask_tb__DOT__bridge_write__8__addr;
    vlSelfRef.tb__DOT__bridge_wr_data = __Vtask_tb__DOT__bridge_write__8__data;
    vlSelfRef.tb__DOT__bridge_wr = 1U;
    Vtb___024root____VbeforeTrig_h337ca5b3__0(vlSelf, 
                                              "@(negedge tb.clk_74a)");
    co_await vlSelfRef.__VtrigSched_h337ca5b3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb.clk_74a)", 
                                                         "/tmp/ay38500_sleep_tb.sv", 
                                                         106);
    vlSelfRef.tb__DOT__bridge_wr = 0U;
    vlSelfRef.tb__DOT__bridge_addr = 0U;
    vlSelfRef.tb__DOT__bridge_wr_data = 0U;
    __Vtask_tb__DOT__bridge_write__9__data = 0U;
    __Vtask_tb__DOT__bridge_write__9__addr = 0x50000004U;
    Vtb___024root____VbeforeTrig_h337ca5b3__0(vlSelf, 
                                              "@(negedge tb.clk_74a)");
    co_await vlSelfRef.__VtrigSched_h337ca5b3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb.clk_74a)", 
                                                         "/tmp/ay38500_sleep_tb.sv", 
                                                         101);
    vlSelfRef.tb__DOT__bridge_addr = __Vtask_tb__DOT__bridge_write__9__addr;
    vlSelfRef.tb__DOT__bridge_wr_data = __Vtask_tb__DOT__bridge_write__9__data;
    vlSelfRef.tb__DOT__bridge_wr = 1U;
    Vtb___024root____VbeforeTrig_h337ca5b3__0(vlSelf, 
                                              "@(negedge tb.clk_74a)");
    co_await vlSelfRef.__VtrigSched_h337ca5b3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb.clk_74a)", 
                                                         "/tmp/ay38500_sleep_tb.sv", 
                                                         106);
    vlSelfRef.tb__DOT__bridge_wr = 0U;
    vlSelfRef.tb__DOT__bridge_addr = 0U;
    vlSelfRef.tb__DOT__bridge_wr_data = 0U;
    __Vtask_tb__DOT__bridge_write__10__data = 0U;
    __Vtask_tb__DOT__bridge_write__10__addr = 0x50000008U;
    Vtb___024root____VbeforeTrig_h337ca5b3__0(vlSelf, 
                                              "@(negedge tb.clk_74a)");
    co_await vlSelfRef.__VtrigSched_h337ca5b3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb.clk_74a)", 
                                                         "/tmp/ay38500_sleep_tb.sv", 
                                                         101);
    vlSelfRef.tb__DOT__bridge_addr = __Vtask_tb__DOT__bridge_write__10__addr;
    vlSelfRef.tb__DOT__bridge_wr_data = __Vtask_tb__DOT__bridge_write__10__data;
    vlSelfRef.tb__DOT__bridge_wr = 1U;
    Vtb___024root____VbeforeTrig_h337ca5b3__0(vlSelf, 
                                              "@(negedge tb.clk_74a)");
    co_await vlSelfRef.__VtrigSched_h337ca5b3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb.clk_74a)", 
                                                         "/tmp/ay38500_sleep_tb.sv", 
                                                         106);
    vlSelfRef.tb__DOT__bridge_wr = 0U;
    vlSelfRef.tb__DOT__bridge_addr = 0U;
    vlSelfRef.tb__DOT__bridge_wr_data = 0U;
    __Vtask_tb__DOT__bridge_write__11__data = 0U;
    __Vtask_tb__DOT__bridge_write__11__addr = 0x5000000cU;
    Vtb___024root____VbeforeTrig_h337ca5b3__0(vlSelf, 
                                              "@(negedge tb.clk_74a)");
    co_await vlSelfRef.__VtrigSched_h337ca5b3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb.clk_74a)", 
                                                         "/tmp/ay38500_sleep_tb.sv", 
                                                         101);
    vlSelfRef.tb__DOT__bridge_addr = __Vtask_tb__DOT__bridge_write__11__addr;
    vlSelfRef.tb__DOT__bridge_wr_data = __Vtask_tb__DOT__bridge_write__11__data;
    vlSelfRef.tb__DOT__bridge_wr = 1U;
    Vtb___024root____VbeforeTrig_h337ca5b3__0(vlSelf, 
                                              "@(negedge tb.clk_74a)");
    co_await vlSelfRef.__VtrigSched_h337ca5b3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb.clk_74a)", 
                                                         "/tmp/ay38500_sleep_tb.sv", 
                                                         106);
    vlSelfRef.tb__DOT__bridge_wr = 0U;
    vlSelfRef.tb__DOT__bridge_addr = 0U;
    vlSelfRef.tb__DOT__bridge_wr_data = 0U;
    __Vtask_tb__DOT__bridge_write__12__data = 0U;
    __Vtask_tb__DOT__bridge_write__12__addr = 0x50000010U;
    Vtb___024root____VbeforeTrig_h337ca5b3__0(vlSelf, 
                                              "@(negedge tb.clk_74a)");
    co_await vlSelfRef.__VtrigSched_h337ca5b3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb.clk_74a)", 
                                                         "/tmp/ay38500_sleep_tb.sv", 
                                                         101);
    vlSelfRef.tb__DOT__bridge_addr = __Vtask_tb__DOT__bridge_write__12__addr;
    vlSelfRef.tb__DOT__bridge_wr_data = __Vtask_tb__DOT__bridge_write__12__data;
    vlSelfRef.tb__DOT__bridge_wr = 1U;
    Vtb___024root____VbeforeTrig_h337ca5b3__0(vlSelf, 
                                              "@(negedge tb.clk_74a)");
    co_await vlSelfRef.__VtrigSched_h337ca5b3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb.clk_74a)", 
                                                         "/tmp/ay38500_sleep_tb.sv", 
                                                         106);
    vlSelfRef.tb__DOT__bridge_wr = 0U;
    vlSelfRef.tb__DOT__bridge_addr = 0U;
    vlSelfRef.tb__DOT__bridge_wr_data = 0U;
    __Vtask_tb__DOT__bridge_write__13__data = 0U;
    __Vtask_tb__DOT__bridge_write__13__addr = 0x50000014U;
    Vtb___024root____VbeforeTrig_h337ca5b3__0(vlSelf, 
                                              "@(negedge tb.clk_74a)");
    co_await vlSelfRef.__VtrigSched_h337ca5b3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb.clk_74a)", 
                                                         "/tmp/ay38500_sleep_tb.sv", 
                                                         101);
    vlSelfRef.tb__DOT__bridge_addr = __Vtask_tb__DOT__bridge_write__13__addr;
    vlSelfRef.tb__DOT__bridge_wr_data = __Vtask_tb__DOT__bridge_write__13__data;
    vlSelfRef.tb__DOT__bridge_wr = 1U;
    Vtb___024root____VbeforeTrig_h337ca5b3__0(vlSelf, 
                                              "@(negedge tb.clk_74a)");
    co_await vlSelfRef.__VtrigSched_h337ca5b3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb.clk_74a)", 
                                                         "/tmp/ay38500_sleep_tb.sv", 
                                                         106);
    vlSelfRef.tb__DOT__bridge_wr = 0U;
    vlSelfRef.tb__DOT__bridge_addr = 0U;
    vlSelfRef.tb__DOT__bridge_wr_data = 0U;
    vlSelfRef.tb__DOT__cont1_key = (0x00008000U | vlSelfRef.tb__DOT__cont1_key);
    tb__DOT__unnamedblk1_8__DOT____Vrepeat7 = 0x00000014U;
    while (VL_LTS_III(32, 0U, tb__DOT__unnamedblk1_8__DOT____Vrepeat7)) {
        Vtb___024root____VbeforeTrig_h337ca4df__0(vlSelf, 
                                                  "@(posedge tb.clk_74a)");
        co_await vlSelfRef.__VtrigSched_h337ca4df__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb.clk_74a)", 
                                                             "/tmp/ay38500_sleep_tb.sv", 
                                                             203);
        tb__DOT__unnamedblk1_8__DOT____Vrepeat7 = (tb__DOT__unnamedblk1_8__DOT____Vrepeat7 
                                                   - (IData)(1U));
    }
    vlSelfRef.tb__DOT__cont1_key = (0xffff7fffU & vlSelfRef.tb__DOT__cont1_key);
    tb__DOT__unnamedblk1_9__DOT____Vrepeat8 = 0x000000c8U;
    while (VL_LTS_III(32, 0U, tb__DOT__unnamedblk1_9__DOT____Vrepeat8)) {
        Vtb___024root____VbeforeTrig_h337ca4df__0(vlSelf, 
                                                  "@(posedge tb.clk_74a)");
        co_await vlSelfRef.__VtrigSched_h337ca4df__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb.clk_74a)", 
                                                             "/tmp/ay38500_sleep_tb.sv", 
                                                             205);
        tb__DOT__unnamedblk1_9__DOT____Vrepeat8 = (tb__DOT__unnamedblk1_9__DOT____Vrepeat8 
                                                   - (IData)(1U));
    }
    __Vtask_tb__DOT__load_blob__14__blob[0U] = vlSelfRef.tb__DOT__first_save[0U];
    __Vtask_tb__DOT__load_blob__14__blob[1U] = vlSelfRef.tb__DOT__first_save[1U];
    __Vtask_tb__DOT__load_blob__14__blob[2U] = vlSelfRef.tb__DOT__first_save[2U];
    __Vtask_tb__DOT__load_blob__14__blob[3U] = vlSelfRef.tb__DOT__first_save[3U];
    __Vtask_tb__DOT__load_blob__14__blob[4U] = vlSelfRef.tb__DOT__first_save[4U];
    __Vtask_tb__DOT__load_blob__14__blob[5U] = vlSelfRef.tb__DOT__first_save[5U];
    __Vtask_tb__DOT__load_blob__14__blob[6U] = vlSelfRef.tb__DOT__first_save[6U];
    __Vtask_tb__DOT__load_blob__14__blob[7U] = vlSelfRef.tb__DOT__first_save[7U];
    __Vtask_tb__DOT__load_blob__14__blob[8U] = vlSelfRef.tb__DOT__first_save[8U];
    __Vtask_tb__DOT__load_blob__14__blob[9U] = vlSelfRef.tb__DOT__first_save[9U];
    __Vtask_tb__DOT__load_blob__14__blob[10U] = vlSelfRef.tb__DOT__first_save[10U];
    __Vtask_tb__DOT__load_blob__14__blob[11U] = vlSelfRef.tb__DOT__first_save[11U];
    __Vtask_tb__DOT__load_blob__14__blob[12U] = vlSelfRef.tb__DOT__first_save[12U];
    __Vtask_tb__DOT__load_blob__14__blob[13U] = vlSelfRef.tb__DOT__first_save[13U];
    __Vtask_tb__DOT__load_blob__14__blob[14U] = vlSelfRef.tb__DOT__first_save[14U];
    __Vtask_tb__DOT__load_blob__14__blob[15U] = vlSelfRef.tb__DOT__first_save[15U];
    __Vtask_tb__DOT__load_blob__14__tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    VL_ZERO_W(96, __Vtask_tb__DOT__load_blob__14__expected_top);
    VL_ZERO_W(160, __Vtask_tb__DOT__load_blob__14__expected_chip_padded);
    Vtb___024root____VbeforeTrig_h337ca5b3__0(vlSelf, 
                                              "@(negedge tb.clk_74a)");
    co_await vlSelfRef.__VtrigSched_h337ca5b3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb.clk_74a)", 
                                                         "/tmp/ay38500_sleep_tb.sv", 
                                                         144);
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[0U] 
        = __Vtask_tb__DOT__load_blob__14__blob[0U];
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[1U] 
        = __Vtask_tb__DOT__load_blob__14__blob[1U];
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[2U] 
        = __Vtask_tb__DOT__load_blob__14__blob[2U];
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[3U] 
        = __Vtask_tb__DOT__load_blob__14__blob[3U];
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[4U] 
        = __Vtask_tb__DOT__load_blob__14__blob[4U];
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[5U] 
        = __Vtask_tb__DOT__load_blob__14__blob[5U];
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[6U] 
        = __Vtask_tb__DOT__load_blob__14__blob[6U];
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[7U] 
        = __Vtask_tb__DOT__load_blob__14__blob[7U];
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[8U] 
        = __Vtask_tb__DOT__load_blob__14__blob[8U];
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[9U] 
        = __Vtask_tb__DOT__load_blob__14__blob[9U];
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[10U] 
        = __Vtask_tb__DOT__load_blob__14__blob[10U];
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[11U] 
        = __Vtask_tb__DOT__load_blob__14__blob[11U];
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[12U] 
        = __Vtask_tb__DOT__load_blob__14__blob[12U];
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[13U] 
        = __Vtask_tb__DOT__load_blob__14__blob[13U];
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[14U] 
        = __Vtask_tb__DOT__load_blob__14__blob[14U];
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[15U] 
        = __Vtask_tb__DOT__load_blob__14__blob[15U];
    vlSelfRef.tb__DOT__dut__DOT__settings[0U] = __Vtask_tb__DOT__load_blob__14__blob[0U];
    vlSelfRef.tb__DOT__dut__DOT__settings[1U] = __Vtask_tb__DOT__load_blob__14__blob[1U];
    vlSelfRef.tb__DOT__dut__DOT__settings[2U] = __Vtask_tb__DOT__load_blob__14__blob[2U];
    vlSelfRef.tb__DOT__dut__DOT__settings[3U] = __Vtask_tb__DOT__load_blob__14__blob[3U];
    vlSelfRef.tb__DOT__dut__DOT__settings[4U] = __Vtask_tb__DOT__load_blob__14__blob[4U];
    vlSelfRef.tb__DOT__dut__DOT__settings[5U] = __Vtask_tb__DOT__load_blob__14__blob[5U];
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_req_toggle_74a 
        = (1U & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__savestate_load_req_toggle_74a)));
    __Vtask_tb__DOT__load_blob__14__expected_top[0U] 
        = __Vtask_tb__DOT__load_blob__14__blob[8U];
    __Vtask_tb__DOT__load_blob__14__expected_top[1U] 
        = (IData)((((QData)((IData)(__Vtask_tb__DOT__load_blob__14__blob[6U])) 
                    << 0x00000020U) | (QData)((IData)(__Vtask_tb__DOT__load_blob__14__blob[7U]))));
    __Vtask_tb__DOT__load_blob__14__expected_top[2U] 
        = (IData)(((((QData)((IData)(__Vtask_tb__DOT__load_blob__14__blob[6U])) 
                     << 0x00000020U) | (QData)((IData)(__Vtask_tb__DOT__load_blob__14__blob[7U]))) 
                   >> 0x00000020U));
    __Vtask_tb__DOT__load_blob__14__expected_chip_padded[0U] 
        = __Vtask_tb__DOT__load_blob__14__blob[13U];
    __Vtask_tb__DOT__load_blob__14__expected_chip_padded[1U] 
        = (IData)((((QData)((IData)(__Vtask_tb__DOT__load_blob__14__blob[11U])) 
                    << 0x00000020U) | (QData)((IData)(__Vtask_tb__DOT__load_blob__14__blob[12U]))));
    __Vtask_tb__DOT__load_blob__14__expected_chip_padded[2U] 
        = (IData)(((((QData)((IData)(__Vtask_tb__DOT__load_blob__14__blob[11U])) 
                     << 0x00000020U) | (QData)((IData)(__Vtask_tb__DOT__load_blob__14__blob[12U]))) 
                   >> 0x00000020U));
    __Vtask_tb__DOT__load_blob__14__expected_chip_padded[3U] 
        = (IData)((((QData)((IData)(__Vtask_tb__DOT__load_blob__14__blob[9U])) 
                    << 0x00000020U) | (QData)((IData)(__Vtask_tb__DOT__load_blob__14__blob[10U]))));
    __Vtask_tb__DOT__load_blob__14__expected_chip_padded[4U] 
        = (IData)(((((QData)((IData)(__Vtask_tb__DOT__load_blob__14__blob[9U])) 
                     << 0x00000020U) | (QData)((IData)(__Vtask_tb__DOT__load_blob__14__blob[10U]))) 
                   >> 0x00000020U));
    while ((1U & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__state_load_sys)))) {
        Vtb___024root____VbeforeTrig_h337ca4df__0(vlSelf, 
                                                  "@(posedge tb.clk_74a)");
        co_await vlSelfRef.__VtrigSched_h337ca4df__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb.clk_74a)", 
                                                             "/tmp/ay38500_sleep_tb.sv", 
                                                             157);
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/tmp/ay38500_sleep_tb.sv", 
                                         158);
    VL_WRITEF_NX("immediate top_state expected=%024x got=%024x\nimmediate chip_state expected=%040x got=%040x\n",0,
                 96,__Vtask_tb__DOT__load_blob__14__expected_top.data(),
                 96,vlSelfRef.tb__DOT__dut__DOT__top_state_out.data(),
                 160,__Vtask_tb__DOT__load_blob__14__expected_chip_padded.data(),
                 160,vlSelfRef.tb__DOT__dut__DOT__chip_state_out_padded.data());
    __Vtask_tb__DOT__load_blob__14__tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x00000020U;
    while (VL_LTS_III(32, 0U, __Vtask_tb__DOT__load_blob__14__tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vtb___024root____VbeforeTrig_h337ca4df__0(vlSelf, 
                                                  "@(posedge tb.clk_74a)");
        co_await vlSelfRef.__VtrigSched_h337ca4df__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb.clk_74a)", 
                                                             "/tmp/ay38500_sleep_tb.sv", 
                                                             161);
        __Vtask_tb__DOT__load_blob__14__tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb__DOT__load_blob__14__tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    __Vtask_tb__DOT__save_blob__15__tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        __Vtask_tb__DOT__save_blob__15__blob[__Vi0] = 0;
    }
    Vtb___024root____VbeforeTrig_h337ca5b3__0(vlSelf, 
                                              "@(negedge tb.clk_74a)");
    co_await vlSelfRef.__VtrigSched_h337ca5b3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb.clk_74a)", 
                                                         "/tmp/ay38500_sleep_tb.sv", 
                                                         130);
    vlSelfRef.tb__DOT__dut__DOT__savestate_save_req_toggle_74a 
        = (1U & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__savestate_save_req_toggle_74a)));
    __Vtask_tb__DOT__save_blob__15__tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0x00000020U;
    while (VL_LTS_III(32, 0U, __Vtask_tb__DOT__save_blob__15__tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb___024root____VbeforeTrig_h337ca4df__0(vlSelf, 
                                                  "@(posedge tb.clk_74a)");
        co_await vlSelfRef.__VtrigSched_h337ca4df__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb.clk_74a)", 
                                                             "/tmp/ay38500_sleep_tb.sv", 
                                                             132);
        __Vtask_tb__DOT__save_blob__15__tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb__DOT__save_blob__15__tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    __Vtask_tb__DOT__save_blob__15__blob[0U] = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[0U];
    __Vtask_tb__DOT__save_blob__15__blob[1U] = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[1U];
    __Vtask_tb__DOT__save_blob__15__blob[2U] = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[2U];
    __Vtask_tb__DOT__save_blob__15__blob[3U] = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[3U];
    __Vtask_tb__DOT__save_blob__15__blob[4U] = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[4U];
    __Vtask_tb__DOT__save_blob__15__blob[5U] = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[5U];
    __Vtask_tb__DOT__save_blob__15__blob[6U] = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[6U];
    __Vtask_tb__DOT__save_blob__15__blob[7U] = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[7U];
    __Vtask_tb__DOT__save_blob__15__blob[8U] = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[8U];
    __Vtask_tb__DOT__save_blob__15__blob[9U] = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[9U];
    __Vtask_tb__DOT__save_blob__15__blob[10U] = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[10U];
    __Vtask_tb__DOT__save_blob__15__blob[11U] = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[11U];
    __Vtask_tb__DOT__save_blob__15__blob[12U] = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[12U];
    __Vtask_tb__DOT__save_blob__15__blob[13U] = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[13U];
    __Vtask_tb__DOT__save_blob__15__blob[14U] = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[14U];
    __Vtask_tb__DOT__save_blob__15__blob[15U] = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[15U];
    vlSelfRef.tb__DOT__second_save[0U] = __Vtask_tb__DOT__save_blob__15__blob[0U];
    vlSelfRef.tb__DOT__second_save[1U] = __Vtask_tb__DOT__save_blob__15__blob[1U];
    vlSelfRef.tb__DOT__second_save[2U] = __Vtask_tb__DOT__save_blob__15__blob[2U];
    vlSelfRef.tb__DOT__second_save[3U] = __Vtask_tb__DOT__save_blob__15__blob[3U];
    vlSelfRef.tb__DOT__second_save[4U] = __Vtask_tb__DOT__save_blob__15__blob[4U];
    vlSelfRef.tb__DOT__second_save[5U] = __Vtask_tb__DOT__save_blob__15__blob[5U];
    vlSelfRef.tb__DOT__second_save[6U] = __Vtask_tb__DOT__save_blob__15__blob[6U];
    vlSelfRef.tb__DOT__second_save[7U] = __Vtask_tb__DOT__save_blob__15__blob[7U];
    vlSelfRef.tb__DOT__second_save[8U] = __Vtask_tb__DOT__save_blob__15__blob[8U];
    vlSelfRef.tb__DOT__second_save[9U] = __Vtask_tb__DOT__save_blob__15__blob[9U];
    vlSelfRef.tb__DOT__second_save[10U] = __Vtask_tb__DOT__save_blob__15__blob[10U];
    vlSelfRef.tb__DOT__second_save[11U] = __Vtask_tb__DOT__save_blob__15__blob[11U];
    vlSelfRef.tb__DOT__second_save[12U] = __Vtask_tb__DOT__save_blob__15__blob[12U];
    vlSelfRef.tb__DOT__second_save[13U] = __Vtask_tb__DOT__save_blob__15__blob[13U];
    vlSelfRef.tb__DOT__second_save[14U] = __Vtask_tb__DOT__save_blob__15__blob[14U];
    vlSelfRef.tb__DOT__second_save[15U] = __Vtask_tb__DOT__save_blob__15__blob[15U];
    VL_WRITEF_NX("second save words:\n  [0] %08x\n",0,
                 32,vlSelfRef.tb__DOT__second_save[0U]);
    if (VL_UNLIKELY(((vlSelfRef.tb__DOT__second_save[0U] 
                      != vlSelfRef.tb__DOT__first_save[0U])))) {
        VL_WRITEF_NX("MISMATCH word 0 expected=%08x got=%08x\n",0,
                     32,vlSelfRef.tb__DOT__first_save[0U],
                     32,vlSelfRef.tb__DOT__second_save[0U]);
    }
    VL_WRITEF_NX("  [1] %08x\n",0,32,vlSelfRef.tb__DOT__second_save[1U]);
    if (VL_UNLIKELY(((vlSelfRef.tb__DOT__second_save[1U] 
                      != vlSelfRef.tb__DOT__first_save[1U])))) {
        VL_WRITEF_NX("MISMATCH word 1 expected=%08x got=%08x\n",0,
                     32,vlSelfRef.tb__DOT__first_save[1U],
                     32,vlSelfRef.tb__DOT__second_save[1U]);
    }
    VL_WRITEF_NX("  [2] %08x\n",0,32,vlSelfRef.tb__DOT__second_save[2U]);
    if (VL_UNLIKELY(((vlSelfRef.tb__DOT__second_save[2U] 
                      != vlSelfRef.tb__DOT__first_save[2U])))) {
        VL_WRITEF_NX("MISMATCH word 2 expected=%08x got=%08x\n",0,
                     32,vlSelfRef.tb__DOT__first_save[2U],
                     32,vlSelfRef.tb__DOT__second_save[2U]);
    }
    VL_WRITEF_NX("  [3] %08x\n",0,32,vlSelfRef.tb__DOT__second_save[3U]);
    if (VL_UNLIKELY(((vlSelfRef.tb__DOT__second_save[3U] 
                      != vlSelfRef.tb__DOT__first_save[3U])))) {
        VL_WRITEF_NX("MISMATCH word 3 expected=%08x got=%08x\n",0,
                     32,vlSelfRef.tb__DOT__first_save[3U],
                     32,vlSelfRef.tb__DOT__second_save[3U]);
    }
    VL_WRITEF_NX("  [4] %08x\n",0,32,vlSelfRef.tb__DOT__second_save[4U]);
    if (VL_UNLIKELY(((vlSelfRef.tb__DOT__second_save[4U] 
                      != vlSelfRef.tb__DOT__first_save[4U])))) {
        VL_WRITEF_NX("MISMATCH word 4 expected=%08x got=%08x\n",0,
                     32,vlSelfRef.tb__DOT__first_save[4U],
                     32,vlSelfRef.tb__DOT__second_save[4U]);
    }
    VL_WRITEF_NX("  [5] %08x\n",0,32,vlSelfRef.tb__DOT__second_save[5U]);
    if (VL_UNLIKELY(((vlSelfRef.tb__DOT__second_save[5U] 
                      != vlSelfRef.tb__DOT__first_save[5U])))) {
        VL_WRITEF_NX("MISMATCH word 5 expected=%08x got=%08x\n",0,
                     32,vlSelfRef.tb__DOT__first_save[5U],
                     32,vlSelfRef.tb__DOT__second_save[5U]);
    }
    VL_WRITEF_NX("  [6] %08x\n",0,32,vlSelfRef.tb__DOT__second_save[6U]);
    if (VL_UNLIKELY(((vlSelfRef.tb__DOT__second_save[6U] 
                      != vlSelfRef.tb__DOT__first_save[6U])))) {
        VL_WRITEF_NX("MISMATCH word 6 expected=%08x got=%08x\n",0,
                     32,vlSelfRef.tb__DOT__first_save[6U],
                     32,vlSelfRef.tb__DOT__second_save[6U]);
    }
    VL_WRITEF_NX("  [7] %08x\n",0,32,vlSelfRef.tb__DOT__second_save[7U]);
    if (VL_UNLIKELY(((vlSelfRef.tb__DOT__second_save[7U] 
                      != vlSelfRef.tb__DOT__first_save[7U])))) {
        VL_WRITEF_NX("MISMATCH word 7 expected=%08x got=%08x\n",0,
                     32,vlSelfRef.tb__DOT__first_save[7U],
                     32,vlSelfRef.tb__DOT__second_save[7U]);
    }
    VL_WRITEF_NX("  [8] %08x\n",0,32,vlSelfRef.tb__DOT__second_save[8U]);
    if (VL_UNLIKELY(((vlSelfRef.tb__DOT__second_save[8U] 
                      != vlSelfRef.tb__DOT__first_save[8U])))) {
        VL_WRITEF_NX("MISMATCH word 8 expected=%08x got=%08x\n",0,
                     32,vlSelfRef.tb__DOT__first_save[8U],
                     32,vlSelfRef.tb__DOT__second_save[8U]);
    }
    VL_WRITEF_NX("  [9] %08x\n",0,32,vlSelfRef.tb__DOT__second_save[9U]);
    if (VL_UNLIKELY(((vlSelfRef.tb__DOT__second_save[9U] 
                      != vlSelfRef.tb__DOT__first_save[9U])))) {
        VL_WRITEF_NX("MISMATCH word 9 expected=%08x got=%08x\n",0,
                     32,vlSelfRef.tb__DOT__first_save[9U],
                     32,vlSelfRef.tb__DOT__second_save[9U]);
    }
    VL_WRITEF_NX("  [10] %08x\n",0,32,vlSelfRef.tb__DOT__second_save[10U]);
    if (VL_UNLIKELY(((vlSelfRef.tb__DOT__second_save[10U] 
                      != vlSelfRef.tb__DOT__first_save[10U])))) {
        VL_WRITEF_NX("MISMATCH word 10 expected=%08x got=%08x\n",0,
                     32,vlSelfRef.tb__DOT__first_save[10U],
                     32,vlSelfRef.tb__DOT__second_save[10U]);
    }
    VL_WRITEF_NX("  [11] %08x\n",0,32,vlSelfRef.tb__DOT__second_save[11U]);
    if (VL_UNLIKELY(((vlSelfRef.tb__DOT__second_save[11U] 
                      != vlSelfRef.tb__DOT__first_save[11U])))) {
        VL_WRITEF_NX("MISMATCH word 11 expected=%08x got=%08x\n",0,
                     32,vlSelfRef.tb__DOT__first_save[11U],
                     32,vlSelfRef.tb__DOT__second_save[11U]);
    }
    VL_WRITEF_NX("  [12] %08x\n",0,32,vlSelfRef.tb__DOT__second_save[12U]);
    if (VL_UNLIKELY(((vlSelfRef.tb__DOT__second_save[12U] 
                      != vlSelfRef.tb__DOT__first_save[12U])))) {
        VL_WRITEF_NX("MISMATCH word 12 expected=%08x got=%08x\n",0,
                     32,vlSelfRef.tb__DOT__first_save[12U],
                     32,vlSelfRef.tb__DOT__second_save[12U]);
    }
    VL_WRITEF_NX("  [13] %08x\n",0,32,vlSelfRef.tb__DOT__second_save[13U]);
    if (VL_UNLIKELY(((vlSelfRef.tb__DOT__second_save[13U] 
                      != vlSelfRef.tb__DOT__first_save[13U])))) {
        VL_WRITEF_NX("MISMATCH word 13 expected=%08x got=%08x\n",0,
                     32,vlSelfRef.tb__DOT__first_save[13U],
                     32,vlSelfRef.tb__DOT__second_save[13U]);
    }
    VL_WRITEF_NX("  [14] %08x\n",0,32,vlSelfRef.tb__DOT__second_save[14U]);
    if (VL_UNLIKELY(((vlSelfRef.tb__DOT__second_save[14U] 
                      != vlSelfRef.tb__DOT__first_save[14U])))) {
        VL_WRITEF_NX("MISMATCH word 14 expected=%08x got=%08x\n",0,
                     32,vlSelfRef.tb__DOT__first_save[14U],
                     32,vlSelfRef.tb__DOT__second_save[14U]);
    }
    VL_WRITEF_NX("  [15] %08x\n",0,32,vlSelfRef.tb__DOT__second_save[15U]);
    if (VL_UNLIKELY(((vlSelfRef.tb__DOT__second_save[15U] 
                      != vlSelfRef.tb__DOT__first_save[15U])))) {
        VL_WRITEF_NX("MISMATCH word 15 expected=%08x got=%08x\n",0,
                     32,vlSelfRef.tb__DOT__first_save[15U],
                     32,vlSelfRef.tb__DOT__second_save[15U]);
    }
    if (VL_UNLIKELY((((((((((((((((((vlSelfRef.tb__DOT__second_save[0U] 
                                     != vlSelfRef.tb__DOT__first_save[0U]) 
                                    | (vlSelfRef.tb__DOT__second_save[1U] 
                                       != vlSelfRef.tb__DOT__first_save[1U])) 
                                   | (vlSelfRef.tb__DOT__second_save[2U] 
                                      != vlSelfRef.tb__DOT__first_save[2U])) 
                                  | (vlSelfRef.tb__DOT__second_save[3U] 
                                     != vlSelfRef.tb__DOT__first_save[3U])) 
                                 | (vlSelfRef.tb__DOT__second_save[4U] 
                                    != vlSelfRef.tb__DOT__first_save[4U])) 
                                | (vlSelfRef.tb__DOT__second_save[5U] 
                                   != vlSelfRef.tb__DOT__first_save[5U])) 
                               | (vlSelfRef.tb__DOT__second_save[6U] 
                                  != vlSelfRef.tb__DOT__first_save[6U])) 
                              | (vlSelfRef.tb__DOT__second_save[7U] 
                                 != vlSelfRef.tb__DOT__first_save[7U])) 
                             | (vlSelfRef.tb__DOT__second_save[8U] 
                                != vlSelfRef.tb__DOT__first_save[8U])) 
                            | (vlSelfRef.tb__DOT__second_save[9U] 
                               != vlSelfRef.tb__DOT__first_save[9U])) 
                           | (vlSelfRef.tb__DOT__second_save[10U] 
                              != vlSelfRef.tb__DOT__first_save[10U])) 
                          | (vlSelfRef.tb__DOT__second_save[11U] 
                             != vlSelfRef.tb__DOT__first_save[11U])) 
                         | (vlSelfRef.tb__DOT__second_save[12U] 
                            != vlSelfRef.tb__DOT__first_save[12U])) 
                        | (vlSelfRef.tb__DOT__second_save[13U] 
                           != vlSelfRef.tb__DOT__first_save[13U])) 
                       | (vlSelfRef.tb__DOT__second_save[14U] 
                          != vlSelfRef.tb__DOT__first_save[14U])) 
                      | (vlSelfRef.tb__DOT__second_save[15U] 
                         != vlSelfRef.tb__DOT__first_save[15U]))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: ay38500_sleep_tb.sv:234: Assertion failed in %Ntb: savestate round-trip mismatch\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/tmp/ay38500_sleep_tb.sv", 234, "", false);
    }
    VL_WRITEF_NX("savestate round-trip matched\n",0);
    VL_FINISH_MT("/tmp/ay38500_sleep_tb.sv", 238, "");
    co_return;
}

VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001b58ULL, 
                                             nullptr, 
                                             "/tmp/ay38500_sleep_tb.sv", 
                                             10);
        vlSelfRef.tb__DOT__clk_74b = (1U & (~ (IData)(vlSelfRef.tb__DOT__clk_74b)));
    }
    co_return;
}

VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__2(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "/tmp/ay38500_sleep_tb.sv", 
                                             9);
        vlSelfRef.tb__DOT__clk_74a = (1U & (~ (IData)(vlSelfRef.tb__DOT__clk_74a)));
    }
    co_return;
}

void Vtb___024root___eval_triggers_vec__act(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_triggers_vec__act\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                       << 3U) 
                                                      | (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop6) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__dut__DOT__the_chip__DOT__flop6__0))) 
                                                         << 2U)) 
                                                     | ((((~ (IData)(vlSelfRef.tb__DOT__clk_74a)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clk_74a__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.tb__DOT__clk_74a) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clk_74a__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clk_74a__0 
        = vlSelfRef.tb__DOT__clk_74a;
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__dut__DOT__the_chip__DOT__flop6__0 
        = vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop6;
}

bool Vtb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtb___024root___act_comb__TOP__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___act_comb__TOP__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb__DOT__dut__DOT__icb__DOT__bridge_wr_data_in 
        = ((IData)(vlSelfRef.tb__DOT__dut__DOT__icb__DOT__endian_little_s)
            ? ((((0x0000ff00U & (vlSelfRef.tb__DOT__bridge_wr_data 
                                 << 8U)) | (0x000000ffU 
                                            & (vlSelfRef.tb__DOT__bridge_wr_data 
                                               >> 8U))) 
                << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.tb__DOT__bridge_wr_data 
                                                   >> 8U)) 
                                   | (vlSelfRef.tb__DOT__bridge_wr_data 
                                      >> 0x00000018U)))
            : vlSelfRef.tb__DOT__bridge_wr_data);
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_23 
        = (1U & ((0U != vlSelfRef.tb__DOT__dut__DOT__reset_cnt) 
                 | (vlSelfRef.tb__DOT__cont1_key >> 0x0000000fU)));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__and18 
        = (1U & ((~ (IData)((0x0fU == (0x0fU & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr4))))) 
                 & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_23))));
}

void Vtb___024root___eval_act(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_act\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x000000000000000fULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.tb__DOT__dut__DOT__icb__DOT__bridge_wr_data_in 
            = ((IData)(vlSelfRef.tb__DOT__dut__DOT__icb__DOT__endian_little_s)
                ? ((((0x0000ff00U & (vlSelfRef.tb__DOT__bridge_wr_data 
                                     << 8U)) | (0x000000ffU 
                                                & (vlSelfRef.tb__DOT__bridge_wr_data 
                                                   >> 8U))) 
                    << 0x00000010U) | ((0x0000ff00U 
                                        & (vlSelfRef.tb__DOT__bridge_wr_data 
                                           >> 8U)) 
                                       | (vlSelfRef.tb__DOT__bridge_wr_data 
                                          >> 0x00000018U)))
                : vlSelfRef.tb__DOT__bridge_wr_data);
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_23 
            = (1U & ((0U != vlSelfRef.tb__DOT__dut__DOT__reset_cnt) 
                     | (vlSelfRef.tb__DOT__cont1_key 
                        >> 0x0000000fU)));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__and18 
            = (1U & ((~ (IData)((0x0fU == (0x0fU & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr4))))) 
                     & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_23))));
    }
}

void Vtb___024root___nba_sequent__TOP__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or26;
    tb__DOT__dut__DOT__the_chip__DOT__or26 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or29;
    tb__DOT__dut__DOT__the_chip__DOT__or29 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or72;
    tb__DOT__dut__DOT__the_chip__DOT__or72 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or73;
    tb__DOT__dut__DOT__the_chip__DOT__or73 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or107;
    tb__DOT__dut__DOT__the_chip__DOT__or107 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or110;
    tb__DOT__dut__DOT__the_chip__DOT__or110 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or112;
    tb__DOT__dut__DOT__the_chip__DOT__or112 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or118;
    tb__DOT__dut__DOT__the_chip__DOT__or118 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or134;
    tb__DOT__dut__DOT__the_chip__DOT__or134 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or204;
    tb__DOT__dut__DOT__the_chip__DOT__or204 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_3;
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_3 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_8;
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_8 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_9;
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_9 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_12;
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_12 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_15;
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_15 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_21;
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_21 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_26;
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_26 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_28;
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_28 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_30;
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_30 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_31;
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_31 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_34;
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_34 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_35;
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_35 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_36;
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_36 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_37;
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_37 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_38;
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_38 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_39;
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_39 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_40;
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_40 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_44;
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_44 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_48;
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_48 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_51;
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_51 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_54;
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_54 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_55;
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_55 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_58;
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_58 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_62;
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_62 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_63;
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_63 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_64;
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_64 = 0;
    CData/*0:0*/ __Vdly__tb__DOT__dut__DOT__savestate_load_req_toggle_74a;
    __Vdly__tb__DOT__dut__DOT__savestate_load_req_toggle_74a = 0;
    CData/*0:0*/ __VdlyMask__tb__DOT__dut__DOT__savestate_load_req_toggle_74a;
    __VdlyMask__tb__DOT__dut__DOT__savestate_load_req_toggle_74a = 0;
    CData/*0:0*/ __Vdly__tb__DOT__dut__DOT__savestate_save_req_toggle_74a;
    __Vdly__tb__DOT__dut__DOT__savestate_save_req_toggle_74a = 0;
    CData/*0:0*/ __VdlyMask__tb__DOT__dut__DOT__savestate_save_req_toggle_74a;
    __VdlyMask__tb__DOT__dut__DOT__savestate_save_req_toggle_74a = 0;
    CData/*0:0*/ __Vdly__tb__DOT__dut__DOT__icb__DOT__host_cmd_start;
    __Vdly__tb__DOT__dut__DOT__icb__DOT__host_cmd_start = 0;
    CData/*0:0*/ __Vdly__tb__DOT__dut__DOT__savestate_start;
    __Vdly__tb__DOT__dut__DOT__savestate_start = 0;
    CData/*0:0*/ __Vdly__tb__DOT__dut__DOT__savestate_load;
    __Vdly__tb__DOT__dut__DOT__savestate_load = 0;
    SData/*15:0*/ __Vdly__tb__DOT__dut__DOT__icb__DOT__host_cmd;
    __Vdly__tb__DOT__dut__DOT__icb__DOT__host_cmd = 0;
    CData/*3:0*/ __Vdly__tb__DOT__dut__DOT__icb__DOT__hstate;
    __Vdly__tb__DOT__dut__DOT__icb__DOT__hstate = 0;
    CData/*0:0*/ __Vdly__tb__DOT__dut__DOT__reset_n;
    __Vdly__tb__DOT__dut__DOT__reset_n = 0;
    CData/*5:0*/ __Vdly__tb__DOT__dut__DOT__ce_2m_div;
    __Vdly__tb__DOT__dut__DOT__ce_2m_div = 0;
    IData/*19:0*/ __Vdly__tb__DOT__dut__DOT__reset_cnt;
    __Vdly__tb__DOT__dut__DOT__reset_cnt = 0;
    CData/*2:0*/ __Vdly__tb__DOT__dut__DOT__savestate_save_delay_sys;
    __Vdly__tb__DOT__dut__DOT__savestate_save_delay_sys = 0;
    CData/*0:0*/ __Vdly__tb__DOT__dut__DOT__savestate_save_done_toggle_sys;
    __Vdly__tb__DOT__dut__DOT__savestate_save_done_toggle_sys = 0;
    CData/*2:0*/ __Vdly__tb__DOT__dut__DOT__savestate_load_delay_sys;
    __Vdly__tb__DOT__dut__DOT__savestate_load_delay_sys = 0;
    CData/*0:0*/ __Vdly__tb__DOT__dut__DOT__savestate_load_pending_sys;
    __Vdly__tb__DOT__dut__DOT__savestate_load_pending_sys = 0;
    CData/*1:0*/ __Vdly__tb__DOT__dut__DOT__savestate_load_setup_delay_sys;
    __Vdly__tb__DOT__dut__DOT__savestate_load_setup_delay_sys = 0;
    SData/*8:0*/ __Vdly__tb__DOT__dut__DOT__p1pos;
    __Vdly__tb__DOT__dut__DOT__p1pos = 0;
    SData/*8:0*/ __Vdly__tb__DOT__dut__DOT__p2pos;
    __Vdly__tb__DOT__dut__DOT__p2pos = 0;
    SData/*8:0*/ __Vdly__tb__DOT__dut__DOT__p1cap;
    __Vdly__tb__DOT__dut__DOT__p1cap = 0;
    SData/*8:0*/ __Vdly__tb__DOT__dut__DOT__p2cap;
    __Vdly__tb__DOT__dut__DOT__p2cap = 0;
    SData/*10:0*/ __Vdly__tb__DOT__dut__DOT__blank_hcnt;
    __Vdly__tb__DOT__dut__DOT__blank_hcnt = 0;
    SData/*10:0*/ __Vdly__tb__DOT__dut__DOT__blank_vcnt;
    __Vdly__tb__DOT__dut__DOT__blank_vcnt = 0;
    CData/*0:0*/ __Vdly__tb__DOT__dut__DOT__blank_old_vs;
    __Vdly__tb__DOT__dut__DOT__blank_old_vs = 0;
    CData/*0:0*/ __Vdly__tb__DOT__dut__DOT__the_chip__DOT__flop25;
    __Vdly__tb__DOT__dut__DOT__the_chip__DOT__flop25 = 0;
    CData/*3:0*/ __Vdly__tb__DOT__dut__DOT__the_chip__DOT__shift_reg0_spot;
    __Vdly__tb__DOT__dut__DOT__the_chip__DOT__shift_reg0_spot = 0;
    CData/*4:0*/ __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr0;
    __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr0 = 0;
    CData/*4:0*/ __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr1;
    __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr1 = 0;
    CData/*1:0*/ __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr2;
    __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr2 = 0;
    CData/*1:0*/ __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr3;
    __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr3 = 0;
    CData/*4:0*/ __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr4;
    __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr4 = 0;
    CData/*1:0*/ __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr5;
    __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr5 = 0;
    CData/*1:0*/ __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr6;
    __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr6 = 0;
    CData/*4:0*/ __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr7;
    __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr7 = 0;
    CData/*4:0*/ __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr8;
    __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr8 = 0;
    CData/*1:0*/ __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr9;
    __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr9 = 0;
    CData/*1:0*/ __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr10;
    __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr10 = 0;
    CData/*2:0*/ __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter0;
    __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter0 = 0;
    CData/*3:0*/ __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter1;
    __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter1 = 0;
    CData/*7:0*/ __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter2;
    __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter2 = 0;
    SData/*8:0*/ __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter3;
    __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter3 = 0;
    SData/*8:0*/ __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter4;
    __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter4 = 0;
    CData/*0:0*/ __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter4_jump;
    __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter4_jump = 0;
    SData/*9:0*/ __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter5;
    __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter5 = 0;
    CData/*0:0*/ __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter5_jump;
    __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter5_jump = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v0;
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v0 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__dut__DOT__savestate_load_snap_74a__v0;
    __VdlySet__tb__DOT__dut__DOT__savestate_load_snap_74a__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v1;
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v1 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__dut__DOT__savestate_load_snap_74a__v1;
    __VdlySet__tb__DOT__dut__DOT__savestate_load_snap_74a__v1 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v2;
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v2 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v3;
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v3 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v4;
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v4 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v5;
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v5 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v6;
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v6 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v7;
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v7 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v8;
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v8 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v9;
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v9 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v10;
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v10 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v11;
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v11 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v12;
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v12 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v13;
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v13 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v14;
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v14 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v15;
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v15 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v0;
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v1;
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v1 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v2;
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v2 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v3;
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v3 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v4;
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v4 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v5;
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v5 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v6;
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v6 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v7;
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v7 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v8;
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v8 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v9;
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v9 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v10;
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v10 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v11;
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v11 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v12;
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v12 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v13;
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v13 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v14;
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v14 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v15;
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v15 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v0;
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v1;
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v1 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v2;
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v2 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v3;
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v3 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v4;
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v4 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v5;
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v5 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v6;
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v6 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v7;
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v7 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v8;
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v8 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v9;
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v9 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v10;
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v10 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v11;
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v11 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v12;
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v12 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v13;
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v13 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v14;
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v14 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v15;
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v15 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_wr_buf_74a__v0;
    __VdlyVal__tb__DOT__dut__DOT__savestate_wr_buf_74a__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tb__DOT__dut__DOT__savestate_wr_buf_74a__v0;
    __VdlyDim0__tb__DOT__dut__DOT__savestate_wr_buf_74a__v0 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__dut__DOT__savestate_wr_buf_74a__v0;
    __VdlySet__tb__DOT__dut__DOT__savestate_wr_buf_74a__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__settings__v0;
    __VdlyVal__tb__DOT__dut__DOT__settings__v0 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__dut__DOT__settings__v0;
    __VdlySet__tb__DOT__dut__DOT__settings__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__settings__v1;
    __VdlyVal__tb__DOT__dut__DOT__settings__v1 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__settings__v2;
    __VdlyVal__tb__DOT__dut__DOT__settings__v2 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__settings__v3;
    __VdlyVal__tb__DOT__dut__DOT__settings__v3 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__settings__v4;
    __VdlyVal__tb__DOT__dut__DOT__settings__v4 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__settings__v5;
    __VdlyVal__tb__DOT__dut__DOT__settings__v5 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__settings__v6;
    __VdlyVal__tb__DOT__dut__DOT__settings__v6 = 0;
    CData/*2:0*/ __VdlyDim0__tb__DOT__dut__DOT__settings__v6;
    __VdlyDim0__tb__DOT__dut__DOT__settings__v6 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__dut__DOT__settings__v6;
    __VdlySet__tb__DOT__dut__DOT__settings__v6 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__set_meta__v0;
    __VdlyVal__tb__DOT__dut__DOT__set_meta__v0 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__dut__DOT__set_meta__v0;
    __VdlySet__tb__DOT__dut__DOT__set_meta__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__set_meta__v1;
    __VdlyVal__tb__DOT__dut__DOT__set_meta__v1 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__set_meta__v2;
    __VdlyVal__tb__DOT__dut__DOT__set_meta__v2 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__set_meta__v3;
    __VdlyVal__tb__DOT__dut__DOT__set_meta__v3 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__set_meta__v4;
    __VdlyVal__tb__DOT__dut__DOT__set_meta__v4 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__set_meta__v5;
    __VdlyVal__tb__DOT__dut__DOT__set_meta__v5 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__set_meta__v6;
    __VdlyVal__tb__DOT__dut__DOT__set_meta__v6 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__dut__DOT__set_meta__v6;
    __VdlySet__tb__DOT__dut__DOT__set_meta__v6 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__set_meta__v7;
    __VdlyVal__tb__DOT__dut__DOT__set_meta__v7 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__set_meta__v8;
    __VdlyVal__tb__DOT__dut__DOT__set_meta__v8 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__set_meta__v9;
    __VdlyVal__tb__DOT__dut__DOT__set_meta__v9 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__set_meta__v10;
    __VdlyVal__tb__DOT__dut__DOT__set_meta__v10 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__set_meta__v11;
    __VdlyVal__tb__DOT__dut__DOT__set_meta__v11 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__set_meta__v12;
    __VdlyVal__tb__DOT__dut__DOT__set_meta__v12 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__set_meta__v13;
    __VdlyVal__tb__DOT__dut__DOT__set_meta__v13 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__set_sys__v0;
    __VdlyVal__tb__DOT__dut__DOT__set_sys__v0 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__dut__DOT__set_sys__v0;
    __VdlySet__tb__DOT__dut__DOT__set_sys__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__set_sys__v1;
    __VdlyVal__tb__DOT__dut__DOT__set_sys__v1 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__set_sys__v2;
    __VdlyVal__tb__DOT__dut__DOT__set_sys__v2 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__set_sys__v3;
    __VdlyVal__tb__DOT__dut__DOT__set_sys__v3 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__set_sys__v4;
    __VdlyVal__tb__DOT__dut__DOT__set_sys__v4 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__set_sys__v5;
    __VdlyVal__tb__DOT__dut__DOT__set_sys__v5 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__set_sys__v6;
    __VdlyVal__tb__DOT__dut__DOT__set_sys__v6 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__dut__DOT__set_sys__v6;
    __VdlySet__tb__DOT__dut__DOT__set_sys__v6 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__set_sys__v7;
    __VdlyVal__tb__DOT__dut__DOT__set_sys__v7 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__set_sys__v8;
    __VdlyVal__tb__DOT__dut__DOT__set_sys__v8 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__set_sys__v9;
    __VdlyVal__tb__DOT__dut__DOT__set_sys__v9 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__set_sys__v10;
    __VdlyVal__tb__DOT__dut__DOT__set_sys__v10 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__set_sys__v11;
    __VdlyVal__tb__DOT__dut__DOT__set_sys__v11 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__set_sys__v12;
    __VdlyVal__tb__DOT__dut__DOT__set_sys__v12 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__set_sys__v13;
    __VdlyVal__tb__DOT__dut__DOT__set_sys__v13 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v0;
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v1;
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v1 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v2;
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v2 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v3;
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v3 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v4;
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v4 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v5;
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v5 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v6;
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v6 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v7;
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v7 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v8;
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v8 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v9;
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v9 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v10;
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v10 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v11;
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v11 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v12;
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v12 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v13;
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v13 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v14;
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v14 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v15;
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v15 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v0;
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v0 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__dut__DOT__savestate_rd_buf_sys__v0;
    __VdlySet__tb__DOT__dut__DOT__savestate_rd_buf_sys__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v1;
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v1 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__dut__DOT__savestate_rd_buf_sys__v1;
    __VdlySet__tb__DOT__dut__DOT__savestate_rd_buf_sys__v1 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v2;
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v2 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v3;
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v3 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v4;
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v4 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v5;
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v5 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v6;
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v6 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v7;
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v7 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v8;
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v8 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v9;
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v9 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v10;
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v10 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v11;
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v11 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v12;
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v12 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v13;
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v13 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v14;
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v14 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v0;
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v1;
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v1 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v2;
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v2 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v3;
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v3 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v4;
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v4 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v5;
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v5 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v6;
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v6 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v7;
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v7 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v8;
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v8 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v9;
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v9 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v10;
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v10 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v11;
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v11 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v12;
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v12 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v13;
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v13 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v14;
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v14 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v15;
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v15 = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<5>/*159:0*/ __Vtemp_3;
    // Body
    __VdlySet__tb__DOT__dut__DOT__savestate_wr_buf_74a__v0 = 0U;
    __Vdly__tb__DOT__dut__DOT__savestate_load_delay_sys 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_load_delay_sys;
    __Vdly__tb__DOT__dut__DOT__savestate_load_pending_sys 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_load_pending_sys;
    __Vdly__tb__DOT__dut__DOT__savestate_load_setup_delay_sys 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_load_setup_delay_sys;
    __Vdly__tb__DOT__dut__DOT__reset_cnt = vlSelfRef.tb__DOT__dut__DOT__reset_cnt;
    __Vdly__tb__DOT__dut__DOT__ce_2m_div = vlSelfRef.tb__DOT__dut__DOT__ce_2m_div;
    __VdlySet__tb__DOT__dut__DOT__savestate_load_snap_74a__v0 = 0U;
    __VdlySet__tb__DOT__dut__DOT__savestate_load_snap_74a__v1 = 0U;
    __VdlySet__tb__DOT__dut__DOT__set_meta__v0 = 0U;
    __VdlySet__tb__DOT__dut__DOT__set_meta__v6 = 0U;
    __VdlySet__tb__DOT__dut__DOT__settings__v0 = 0U;
    __VdlySet__tb__DOT__dut__DOT__settings__v6 = 0U;
    __VdlySet__tb__DOT__dut__DOT__set_sys__v0 = 0U;
    __VdlySet__tb__DOT__dut__DOT__set_sys__v6 = 0U;
    __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr2 
        = vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr2;
    __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr3 
        = vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr3;
    __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr5 
        = vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr5;
    __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr6 
        = vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr6;
    __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr7 
        = vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr7;
    __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter3 
        = vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter3;
    __Vdly__tb__DOT__dut__DOT__the_chip__DOT__flop25 
        = vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop25;
    __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr4 
        = vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr4;
    __Vdly__tb__DOT__dut__DOT__icb__DOT__host_cmd_start 
        = vlSelfRef.tb__DOT__dut__DOT__icb__DOT__host_cmd_start;
    __Vdly__tb__DOT__dut__DOT__savestate_start = vlSelfRef.tb__DOT__dut__DOT__savestate_start;
    __Vdly__tb__DOT__dut__DOT__savestate_load = vlSelfRef.tb__DOT__dut__DOT__savestate_load;
    __Vdly__tb__DOT__dut__DOT__icb__DOT__host_cmd = vlSelfRef.tb__DOT__dut__DOT__icb__DOT__host_cmd;
    __Vdly__tb__DOT__dut__DOT__icb__DOT__hstate = vlSelfRef.tb__DOT__dut__DOT__icb__DOT__hstate;
    __Vdly__tb__DOT__dut__DOT__reset_n = vlSelfRef.tb__DOT__dut__DOT__reset_n;
    __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr8 
        = vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr8;
    __Vdly__tb__DOT__dut__DOT__the_chip__DOT__shift_reg0_spot 
        = vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__shift_reg0_spot;
    __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr9 
        = vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr9;
    __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter2 
        = vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter2;
    __Vdly__tb__DOT__dut__DOT__savestate_save_delay_sys 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_save_delay_sys;
    __Vdly__tb__DOT__dut__DOT__savestate_save_done_toggle_sys 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_save_done_toggle_sys;
    __VdlySet__tb__DOT__dut__DOT__savestate_rd_buf_sys__v0 = 0U;
    __VdlySet__tb__DOT__dut__DOT__savestate_rd_buf_sys__v1 = 0U;
    __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter1 
        = vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter1;
    __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr10 
        = vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr10;
    __Vdly__tb__DOT__dut__DOT__blank_hcnt = vlSelfRef.tb__DOT__dut__DOT__blank_hcnt;
    __Vdly__tb__DOT__dut__DOT__blank_vcnt = vlSelfRef.tb__DOT__dut__DOT__blank_vcnt;
    __Vdly__tb__DOT__dut__DOT__blank_old_vs = vlSelfRef.tb__DOT__dut__DOT__blank_old_vs;
    __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter0 
        = vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter0;
    __Vdly__tb__DOT__dut__DOT__p1pos = vlSelfRef.tb__DOT__dut__DOT__p1pos;
    __Vdly__tb__DOT__dut__DOT__p2pos = vlSelfRef.tb__DOT__dut__DOT__p2pos;
    __Vdly__tb__DOT__dut__DOT__p2cap = vlSelfRef.tb__DOT__dut__DOT__p2cap;
    __Vdly__tb__DOT__dut__DOT__p1cap = vlSelfRef.tb__DOT__dut__DOT__p1cap;
    __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr1 
        = vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr1;
    __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr0 
        = vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr0;
    __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter4 
        = vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter4;
    __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter4_jump 
        = vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter4_jump;
    __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter5_jump 
        = vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter5_jump;
    __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter5 
        = vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter5;
    if (((IData)(vlSelfRef.tb__DOT__bridge_wr) & (0x20U 
                                                  == 
                                                  (vlSelfRef.tb__DOT__bridge_addr 
                                                   >> 0x18U)))) {
        __VdlyVal__tb__DOT__dut__DOT__savestate_wr_buf_74a__v0 
            = vlSelfRef.tb__DOT__bridge_wr_data;
        __VdlyDim0__tb__DOT__dut__DOT__savestate_wr_buf_74a__v0 
            = (0x0000000fU & (vlSelfRef.tb__DOT__bridge_addr 
                              >> 2U));
        __VdlySet__tb__DOT__dut__DOT__savestate_wr_buf_74a__v0 = 1U;
    }
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v0 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_sys[0U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v1 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_sys[1U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v2 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_sys[2U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v3 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_sys[3U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v4 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_sys[4U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v5 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_sys[5U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v6 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_sys[6U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v7 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_sys[7U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v8 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_sys[8U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v9 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_sys[9U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v10 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_sys[10U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v11 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_sys[11U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v12 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_sys[12U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v13 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_sys[13U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v14 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_sys[14U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v15 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_sys[15U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v0 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_meta_74a[0U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v1 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_meta_74a[1U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v2 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_meta_74a[2U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v3 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_meta_74a[3U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v4 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_meta_74a[4U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v5 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_meta_74a[5U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v6 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_meta_74a[6U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v7 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_meta_74a[7U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v8 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_meta_74a[8U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v9 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_meta_74a[9U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v10 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_meta_74a[10U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v11 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_meta_74a[11U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v12 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_meta_74a[12U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v13 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_meta_74a[13U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v14 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_meta_74a[14U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v15 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_rd_meta_74a[15U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v0 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_load_meta_sys[0U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v1 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_load_meta_sys[1U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v2 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_load_meta_sys[2U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v3 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_load_meta_sys[3U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v4 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_load_meta_sys[4U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v5 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_load_meta_sys[5U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v6 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_load_meta_sys[6U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v7 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_load_meta_sys[7U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v8 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_load_meta_sys[8U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v9 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_load_meta_sys[9U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v10 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_load_meta_sys[10U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v11 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_load_meta_sys[11U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v12 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_load_meta_sys[12U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v13 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_load_meta_sys[13U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v14 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_load_meta_sys[14U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v15 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_load_meta_sys[15U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v0 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[0U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v1 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[1U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v2 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[2U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v3 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[3U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v4 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[4U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v5 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[5U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v6 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[6U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v7 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[7U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v8 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[8U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v9 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[9U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v10 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[10U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v11 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[11U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v12 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[12U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v13 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[13U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v14 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[14U];
    __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v15 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[15U];
    if (vlSelfRef.tb__DOT__dut__DOT__apply_savestate_settings_74a) {
        __VdlyVal__tb__DOT__dut__DOT__settings__v0 
            = vlSelfRef.tb__DOT__dut__DOT__savestate_wr_buf_74a[0U];
        __VdlySet__tb__DOT__dut__DOT__settings__v0 = 1U;
        __VdlyVal__tb__DOT__dut__DOT__settings__v1 
            = vlSelfRef.tb__DOT__dut__DOT__savestate_wr_buf_74a[1U];
        __VdlyVal__tb__DOT__dut__DOT__settings__v2 
            = vlSelfRef.tb__DOT__dut__DOT__savestate_wr_buf_74a[2U];
        __VdlyVal__tb__DOT__dut__DOT__settings__v3 
            = vlSelfRef.tb__DOT__dut__DOT__savestate_wr_buf_74a[3U];
        __VdlyVal__tb__DOT__dut__DOT__settings__v4 
            = vlSelfRef.tb__DOT__dut__DOT__savestate_wr_buf_74a[4U];
        __VdlyVal__tb__DOT__dut__DOT__settings__v5 
            = vlSelfRef.tb__DOT__dut__DOT__savestate_wr_buf_74a[5U];
    } else if (((IData)(vlSelfRef.tb__DOT__bridge_wr) 
                & (0x50U == (vlSelfRef.tb__DOT__bridge_addr 
                             >> 0x18U)))) {
        __VdlyVal__tb__DOT__dut__DOT__settings__v6 
            = vlSelfRef.tb__DOT__bridge_wr_data;
        __VdlyDim0__tb__DOT__dut__DOT__settings__v6 
            = (7U & (vlSelfRef.tb__DOT__bridge_addr 
                     >> 2U));
        __VdlySet__tb__DOT__dut__DOT__settings__v6 = 1U;
    }
    if (((IData)(vlSelfRef.tb__DOT__dut__DOT__savestate_save_req_sys) 
         != (IData)(vlSelfRef.tb__DOT__dut__DOT__savestate_save_req_seen_sys))) {
        vlSelfRef.tb__DOT__dut__DOT__savestate_save_req_seen_sys 
            = vlSelfRef.tb__DOT__dut__DOT__savestate_save_req_sys;
        __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v0 
            = vlSelfRef.tb__DOT__dut__DOT__set_sys[0U];
        __VdlySet__tb__DOT__dut__DOT__savestate_rd_buf_sys__v0 = 1U;
        __Vdly__tb__DOT__dut__DOT__savestate_save_delay_sys = 6U;
        __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v1 
            = vlSelfRef.tb__DOT__dut__DOT__set_sys[1U];
        __VdlySet__tb__DOT__dut__DOT__savestate_rd_buf_sys__v1 = 1U;
        __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v2 
            = vlSelfRef.tb__DOT__dut__DOT__set_sys[2U];
        __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v3 
            = vlSelfRef.tb__DOT__dut__DOT__set_sys[3U];
        __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v4 
            = vlSelfRef.tb__DOT__dut__DOT__set_sys[4U];
        __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v5 
            = vlSelfRef.tb__DOT__dut__DOT__set_sys[5U];
        __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v6 
            = vlSelfRef.tb__DOT__dut__DOT__top_state_out[2U];
        __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v7 
            = vlSelfRef.tb__DOT__dut__DOT__top_state_out[1U];
        __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v8 
            = vlSelfRef.tb__DOT__dut__DOT__top_state_out[0U];
        __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v9 
            = vlSelfRef.tb__DOT__dut__DOT__chip_state_out_padded[4U];
        __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v10 
            = vlSelfRef.tb__DOT__dut__DOT__chip_state_out_padded[3U];
        __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v11 
            = vlSelfRef.tb__DOT__dut__DOT__chip_state_out_padded[2U];
        __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v12 
            = vlSelfRef.tb__DOT__dut__DOT__chip_state_out_padded[1U];
        __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v13 
            = vlSelfRef.tb__DOT__dut__DOT__chip_state_out_padded[0U];
        __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v14 
            = ((vlSelfRef.tb__DOT__dut__DOT__reset_cnt 
                << 9U) | (((IData)(vlSelfRef.tb__DOT__dut__DOT__paddle_old_hs) 
                           << 8U) | ((IData)(vlSelfRef.tb__DOT__dut__DOT__paddle_old_vs) 
                                     << 7U)));
    } else if ((0U != (IData)(vlSelfRef.tb__DOT__dut__DOT__savestate_save_delay_sys))) {
        __Vdly__tb__DOT__dut__DOT__savestate_save_delay_sys 
            = (7U & ((IData)(vlSelfRef.tb__DOT__dut__DOT__savestate_save_delay_sys) 
                     - (IData)(1U)));
        if ((1U == (IData)(vlSelfRef.tb__DOT__dut__DOT__savestate_save_delay_sys))) {
            __Vdly__tb__DOT__dut__DOT__savestate_save_done_toggle_sys 
                = (1U & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__savestate_save_done_toggle_sys)));
        }
    }
    if (vlSelfRef.tb__DOT__dut__DOT__state_load_sys) {
        __Vdly__tb__DOT__dut__DOT__reset_cnt = (0x000fffffU 
                                                & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[14U] 
                                                   >> 9U));
        __VdlyVal__tb__DOT__dut__DOT__set_meta__v0 
            = vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[0U];
        __VdlySet__tb__DOT__dut__DOT__set_meta__v0 = 1U;
        __VdlyVal__tb__DOT__dut__DOT__set_meta__v1 
            = vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[1U];
        __VdlyVal__tb__DOT__dut__DOT__set_meta__v2 
            = vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[2U];
        __VdlyVal__tb__DOT__dut__DOT__set_meta__v3 
            = vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[3U];
        __VdlyVal__tb__DOT__dut__DOT__set_meta__v4 
            = vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[4U];
        __VdlyVal__tb__DOT__dut__DOT__set_meta__v5 
            = vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[5U];
        __VdlyVal__tb__DOT__dut__DOT__set_sys__v0 = vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[0U];
        __VdlySet__tb__DOT__dut__DOT__set_sys__v0 = 1U;
        __VdlyVal__tb__DOT__dut__DOT__set_sys__v1 = vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[1U];
        __VdlyVal__tb__DOT__dut__DOT__set_sys__v2 = vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[2U];
        __VdlyVal__tb__DOT__dut__DOT__set_sys__v3 = vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[3U];
        __VdlyVal__tb__DOT__dut__DOT__set_sys__v4 = vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[4U];
        __VdlyVal__tb__DOT__dut__DOT__set_sys__v5 = vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[5U];
        __Vdly__tb__DOT__dut__DOT__p1pos = ((0x000001e0U 
                                             & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[7U] 
                                                << 5U)) 
                                            | (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[8U] 
                                               >> 0x0000001bU));
        __Vdly__tb__DOT__dut__DOT__p2pos = (0x000001ffU 
                                            & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[8U] 
                                               >> 0x00000012U));
        __Vdly__tb__DOT__dut__DOT__p1cap = (0x000001ffU 
                                            & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[8U] 
                                               >> 9U));
        __Vdly__tb__DOT__dut__DOT__p2cap = (0x000001ffU 
                                            & vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[8U]);
        vlSelfRef.tb__DOT__dut__DOT__HBlank = (1U & 
                                               (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[6U] 
                                                >> 9U));
        vlSelfRef.tb__DOT__dut__DOT__VBlank_r = (1U 
                                                 & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[6U] 
                                                    >> 8U));
        __Vdly__tb__DOT__dut__DOT__blank_hcnt = ((0x000007f8U 
                                                  & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[6U] 
                                                     << 3U)) 
                                                 | (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[7U] 
                                                    >> 0x0000001dU));
        __Vdly__tb__DOT__dut__DOT__blank_vcnt = (0x000007ffU 
                                                 & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[7U] 
                                                    >> 0x00000012U));
        __Vdly__tb__DOT__dut__DOT__blank_old_vs = (1U 
                                                   & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[7U] 
                                                      >> 0x00000010U));
        vlSelfRef.tb__DOT__dut__DOT__gameSelect = (0x000000ffU 
                                                   & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[6U] 
                                                      >> 0x00000011U));
        vlSelfRef.tb__DOT__dut__DOT__colorOut = (0x00000fffU 
                                                 & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[7U] 
                                                    >> 4U));
        vlSelfRef.tb__DOT__dut__DOT__paddle_old_hs 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[14U] 
                     >> 8U));
        vlSelfRef.tb__DOT__dut__DOT__paddle_old_vs 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[14U] 
                     >> 7U));
        vlSelfRef.tb__DOT__dut__DOT__blank_old_hs = 
            (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[7U] 
                   >> 0x00000011U));
    } else {
        if ((0U != vlSelfRef.tb__DOT__dut__DOT__reset_cnt)) {
            __Vdly__tb__DOT__dut__DOT__reset_cnt = 
                (0x000fffffU & (vlSelfRef.tb__DOT__dut__DOT__reset_cnt 
                                - (IData)(1U)));
        }
        __VdlyVal__tb__DOT__dut__DOT__set_meta__v6 
            = vlSelfRef.tb__DOT__dut__DOT__settings[0U];
        __VdlySet__tb__DOT__dut__DOT__set_meta__v6 = 1U;
        __VdlyVal__tb__DOT__dut__DOT__set_meta__v7 
            = vlSelfRef.tb__DOT__dut__DOT__settings[1U];
        __VdlyVal__tb__DOT__dut__DOT__set_meta__v8 
            = vlSelfRef.tb__DOT__dut__DOT__settings[2U];
        __VdlyVal__tb__DOT__dut__DOT__set_meta__v9 
            = vlSelfRef.tb__DOT__dut__DOT__settings[3U];
        __VdlyVal__tb__DOT__dut__DOT__set_meta__v10 
            = vlSelfRef.tb__DOT__dut__DOT__settings[4U];
        __VdlyVal__tb__DOT__dut__DOT__set_meta__v11 
            = vlSelfRef.tb__DOT__dut__DOT__settings[5U];
        __VdlyVal__tb__DOT__dut__DOT__set_meta__v12 
            = vlSelfRef.tb__DOT__dut__DOT__settings[6U];
        __VdlyVal__tb__DOT__dut__DOT__set_meta__v13 
            = vlSelfRef.tb__DOT__dut__DOT__settings[7U];
        __VdlyVal__tb__DOT__dut__DOT__set_sys__v6 = vlSelfRef.tb__DOT__dut__DOT__set_meta[0U];
        __VdlySet__tb__DOT__dut__DOT__set_sys__v6 = 1U;
        __VdlyVal__tb__DOT__dut__DOT__set_sys__v7 = vlSelfRef.tb__DOT__dut__DOT__set_meta[1U];
        __VdlyVal__tb__DOT__dut__DOT__set_sys__v8 = vlSelfRef.tb__DOT__dut__DOT__set_meta[2U];
        __VdlyVal__tb__DOT__dut__DOT__set_sys__v9 = vlSelfRef.tb__DOT__dut__DOT__set_meta[3U];
        __VdlyVal__tb__DOT__dut__DOT__set_sys__v10 
            = vlSelfRef.tb__DOT__dut__DOT__set_meta[4U];
        __VdlyVal__tb__DOT__dut__DOT__set_sys__v11 
            = vlSelfRef.tb__DOT__dut__DOT__set_meta[5U];
        __VdlyVal__tb__DOT__dut__DOT__set_sys__v12 
            = vlSelfRef.tb__DOT__dut__DOT__set_meta[6U];
        __VdlyVal__tb__DOT__dut__DOT__set_sys__v13 
            = vlSelfRef.tb__DOT__dut__DOT__set_meta[7U];
        if (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop6) 
             & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__paddle_old_vs)))) {
            __Vdly__tb__DOT__dut__DOT__p1cap = vlSelfRef.tb__DOT__dut__DOT__p1pos;
            __Vdly__tb__DOT__dut__DOT__p2cap = vlSelfRef.tb__DOT__dut__DOT__p2pos;
            if ((1U & vlSelfRef.tb__DOT__cont1_key)) {
                __Vdly__tb__DOT__dut__DOT__p1pos = 
                    (((IData)(vlSelfRef.tb__DOT__dut__DOT__p1pos) 
                      < ((1U & vlSelfRef.tb__DOT__dut__DOT__set_sys[4U])
                          ? 8U : 5U)) ? 0U : (0x000001ffU 
                                              & ((IData)(vlSelfRef.tb__DOT__dut__DOT__p1pos) 
                                                 - 
                                                 ((1U 
                                                   & vlSelfRef.tb__DOT__dut__DOT__set_sys[4U])
                                                   ? 8U
                                                   : 5U))));
            }
            if ((1U & vlSelfRef.tb__DOT__cont2_key)) {
                __Vdly__tb__DOT__dut__DOT__p2pos = 
                    (((IData)(vlSelfRef.tb__DOT__dut__DOT__p2pos) 
                      < ((1U & vlSelfRef.tb__DOT__dut__DOT__set_sys[4U])
                          ? 8U : 5U)) ? 0U : (0x000001ffU 
                                              & ((IData)(vlSelfRef.tb__DOT__dut__DOT__p2pos) 
                                                 - 
                                                 ((1U 
                                                   & vlSelfRef.tb__DOT__dut__DOT__set_sys[4U])
                                                   ? 8U
                                                   : 5U))));
            }
            if ((2U & vlSelfRef.tb__DOT__cont1_key)) {
                __Vdly__tb__DOT__dut__DOT__p1pos = 
                    ((0x000000ffU < ((IData)(vlSelfRef.tb__DOT__dut__DOT__p1pos) 
                                     + ((1U & vlSelfRef.tb__DOT__dut__DOT__set_sys[4U])
                                         ? 8U : 5U)))
                      ? 0x000000ffU : (0x000001ffU 
                                       & ((IData)(vlSelfRef.tb__DOT__dut__DOT__p1pos) 
                                          + ((1U & vlSelfRef.tb__DOT__dut__DOT__set_sys[4U])
                                              ? 8U : 5U))));
            }
            if ((2U & vlSelfRef.tb__DOT__cont2_key)) {
                __Vdly__tb__DOT__dut__DOT__p2pos = 
                    ((0x000000ffU < ((IData)(vlSelfRef.tb__DOT__dut__DOT__p2pos) 
                                     + ((1U & vlSelfRef.tb__DOT__dut__DOT__set_sys[4U])
                                         ? 8U : 5U)))
                      ? 0x000000ffU : (0x000001ffU 
                                       & ((IData)(vlSelfRef.tb__DOT__dut__DOT__p2pos) 
                                          + ((1U & vlSelfRef.tb__DOT__dut__DOT__set_sys[4U])
                                              ? 8U : 5U))));
            }
        } else if ((1U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop7)) 
                          & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__paddle_old_hs))))) {
            if ((0U != (IData)(vlSelfRef.tb__DOT__dut__DOT__p1cap))) {
                __Vdly__tb__DOT__dut__DOT__p1cap = 
                    (0x000001ffU & ((IData)(vlSelfRef.tb__DOT__dut__DOT__p1cap) 
                                    - (IData)(1U)));
            }
            if ((0U != (IData)(vlSelfRef.tb__DOT__dut__DOT__p2cap))) {
                __Vdly__tb__DOT__dut__DOT__p2cap = 
                    (0x000001ffU & ((IData)(vlSelfRef.tb__DOT__dut__DOT__p2cap) 
                                    - (IData)(1U)));
            }
        }
        if (vlSelfRef.tb__DOT__dut__DOT__ce_2m) {
            __Vdly__tb__DOT__dut__DOT__blank_hcnt = 
                (0x000007ffU & ((IData)(1U) + (IData)(vlSelfRef.tb__DOT__dut__DOT__blank_hcnt)));
            if (((IData)(vlSelfRef.tb__DOT__dut__DOT__blank_old_hs) 
                 & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop7))) {
                __Vdly__tb__DOT__dut__DOT__blank_vcnt 
                    = (0x000007ffU & ((IData)(1U) + (IData)(vlSelfRef.tb__DOT__dut__DOT__blank_vcnt)));
                __Vdly__tb__DOT__dut__DOT__blank_hcnt = 0U;
                if (((IData)(vlSelfRef.tb__DOT__dut__DOT__blank_old_vs) 
                     & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop6)))) {
                    __Vdly__tb__DOT__dut__DOT__blank_vcnt = 0U;
                }
                __Vdly__tb__DOT__dut__DOT__blank_old_vs 
                    = vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop6;
            }
            if ((0x0015U == (IData)(vlSelfRef.tb__DOT__dut__DOT__blank_hcnt))) {
                vlSelfRef.tb__DOT__dut__DOT__HBlank = 0U;
            }
            if ((0x0064U == (IData)(vlSelfRef.tb__DOT__dut__DOT__blank_hcnt))) {
                vlSelfRef.tb__DOT__dut__DOT__HBlank = 1U;
            }
            if ((0x0022U == (IData)(vlSelfRef.tb__DOT__dut__DOT__blank_vcnt))) {
                vlSelfRef.tb__DOT__dut__DOT__VBlank_r = 0U;
            }
            if ((0x00f0U == (IData)(vlSelfRef.tb__DOT__dut__DOT__blank_vcnt))) {
                vlSelfRef.tb__DOT__dut__DOT__VBlank_r = 1U;
            }
            vlSelfRef.tb__DOT__dut__DOT__blank_old_hs 
                = (1U & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop7)));
        }
        vlSelfRef.tb__DOT__dut__DOT__gameSelect = (0x000000ffU 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (7U 
                                                       & vlSelfRef.tb__DOT__dut__DOT__set_sys[0U])));
        vlSelfRef.tb__DOT__dut__DOT__colorOut = (0x00000fffU 
                                                 & ((1U 
                                                     & ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_6) 
                                                        | ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop28)) 
                                                           | ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_47)) 
                                                              | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop34)))))
                                                     ? 
                                                    ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or38)
                                                      ? 
                                                     ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or28)
                                                       ? 
                                                      ((((((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop34) 
                                                           | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or202) 
                                                              | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or68))) 
                                                          & (((~ 
                                                               ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_49) 
                                                                | (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or181)))) 
                                                              | ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop28)) 
                                                                 | (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr9)))) 
                                                             & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr10)) 
                                                                | (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or161) 
                                                                    & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or158)) 
                                                                   | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop34))))) 
                                                         | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or205)) 
                                                        & ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop12) 
                                                           | ((~ 
                                                               ((5U 
                                                                 >= 
                                                                 (7U 
                                                                  & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__shift_reg0_spot))) 
                                                                & (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__shift_reg0) 
                                                                    >> 
                                                                    (7U 
                                                                     & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__shift_reg0_spot))) 
                                                                   & ((0x1dU 
                                                                       != (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter2)) 
                                                                      & (0x26U 
                                                                         != (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter2)))))) 
                                                              | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop33))))
                                                        ? 
                                                       ((4U 
                                                         & vlSelfRef.tb__DOT__dut__DOT__set_sys[5U])
                                                         ? 
                                                        ((2U 
                                                          & vlSelfRef.tb__DOT__dut__DOT__set_sys[5U])
                                                          ? 
                                                         ((1U 
                                                           & vlSelfRef.tb__DOT__dut__DOT__set_sys[5U])
                                                           ? 0x00d0U
                                                           : 0U)
                                                          : 
                                                         ((1U 
                                                           & vlSelfRef.tb__DOT__dut__DOT__set_sys[5U])
                                                           ? 0x0ccfU
                                                           : 0x04f4U))
                                                         : 
                                                        ((2U 
                                                          & vlSelfRef.tb__DOT__dut__DOT__set_sys[5U])
                                                          ? 0U
                                                          : 
                                                         ((1U 
                                                           & vlSelfRef.tb__DOT__dut__DOT__set_sys[5U])
                                                           ? 0x0999U
                                                           : 0U)))
                                                        : 
                                                       ((4U 
                                                         & vlSelfRef.tb__DOT__dut__DOT__set_sys[5U])
                                                         ? 
                                                        ((2U 
                                                          & vlSelfRef.tb__DOT__dut__DOT__set_sys[5U])
                                                          ? 0x0fffU
                                                          : 
                                                         ((1U 
                                                           & vlSelfRef.tb__DOT__dut__DOT__set_sys[5U])
                                                           ? 0x055fU
                                                           : 0x0fffU))
                                                         : 
                                                        ((2U 
                                                          & vlSelfRef.tb__DOT__dut__DOT__set_sys[5U])
                                                          ? 
                                                         ((1U 
                                                           & vlSelfRef.tb__DOT__dut__DOT__set_sys[5U])
                                                           ? 0x00f0U
                                                           : 0x000fU)
                                                          : 0x0fffU)))
                                                       : 
                                                      ((4U 
                                                        & vlSelfRef.tb__DOT__dut__DOT__set_sys[5U])
                                                        ? 
                                                       ((2U 
                                                         & vlSelfRef.tb__DOT__dut__DOT__set_sys[5U])
                                                         ? 
                                                        ((1U 
                                                          & vlSelfRef.tb__DOT__dut__DOT__set_sys[5U])
                                                          ? 0U
                                                          : 0x0030U)
                                                         : 
                                                        ((1U 
                                                          & vlSelfRef.tb__DOT__dut__DOT__set_sys[5U])
                                                          ? 0x0030U
                                                          : 0x000fU))
                                                        : 
                                                       ((2U 
                                                         & vlSelfRef.tb__DOT__dut__DOT__set_sys[5U])
                                                         ? 
                                                        ((1U 
                                                          & vlSelfRef.tb__DOT__dut__DOT__set_sys[5U])
                                                          ? 0x0f00U
                                                          : 0x00f0U)
                                                         : 
                                                        ((1U 
                                                          & vlSelfRef.tb__DOT__dut__DOT__set_sys[5U])
                                                          ? 0U
                                                          : 0x0fffU))))
                                                      : 
                                                     ((4U 
                                                       & vlSelfRef.tb__DOT__dut__DOT__set_sys[5U])
                                                       ? 
                                                      ((2U 
                                                        & vlSelfRef.tb__DOT__dut__DOT__set_sys[5U])
                                                        ? 
                                                       ((1U 
                                                         & vlSelfRef.tb__DOT__dut__DOT__set_sys[5U])
                                                         ? 0x0ff0U
                                                         : 0x0f00U)
                                                        : 0x0f00U)
                                                       : 
                                                      ((2U 
                                                        & vlSelfRef.tb__DOT__dut__DOT__set_sys[5U])
                                                        ? 
                                                       ((1U 
                                                         & vlSelfRef.tb__DOT__dut__DOT__set_sys[5U])
                                                         ? 0x000fU
                                                         : 0x00f0U)
                                                        : 0x0fffU)))
                                                     : 
                                                    ((4U 
                                                      & vlSelfRef.tb__DOT__dut__DOT__set_sys[5U])
                                                      ? 
                                                     ((2U 
                                                       & vlSelfRef.tb__DOT__dut__DOT__set_sys[5U])
                                                       ? 0x0fffU
                                                       : 0U)
                                                      : 
                                                     ((2U 
                                                       & vlSelfRef.tb__DOT__dut__DOT__set_sys[5U])
                                                       ? 
                                                      ((1U 
                                                        & vlSelfRef.tb__DOT__dut__DOT__set_sys[5U])
                                                        ? 0x0fffU
                                                        : 0x0f00U)
                                                       : 0x0fffU))));
        vlSelfRef.tb__DOT__dut__DOT__paddle_old_hs 
            = (1U & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop7)));
        vlSelfRef.tb__DOT__dut__DOT__paddle_old_vs 
            = (1U & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop6));
    }
    if (vlSelfRef.tb__DOT__dut__DOT__chip_state_load_sys) {
        __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr2 
            = (3U & vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[11U]);
        __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr3 
            = (3U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[11U] 
                     >> 3U));
        __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr5 
            = (3U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[11U] 
                     >> 0x0000000cU));
        __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr6 
            = (3U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[11U] 
                     >> 0x0000000fU));
        __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr7 
            = (0x0000001fU & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[11U] 
                              >> 0x00000012U));
        __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter3 
            = (0x000001ffU & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[10U] 
                              >> 0x00000016U));
        __Vdly__tb__DOT__dut__DOT__the_chip__DOT__flop25 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[13U] 
                     >> 0x0000001dU));
        __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr4 
            = (0x0000001fU & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[11U] 
                              >> 6U));
        __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr8 
            = (0x0000001fU & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[11U] 
                              >> 0x00000018U));
        __Vdly__tb__DOT__dut__DOT__the_chip__DOT__shift_reg0_spot 
            = (0x0000000fU & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[12U] 
                              >> 0x0000000fU));
        __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr9 
            = (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[11U] 
               >> 0x0000001eU);
        __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter2 
            = (0x000000ffU & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[10U] 
                              >> 0x0000000dU));
        __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter1 
            = (0x0000000fU & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[10U] 
                              >> 8U));
        __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr10 
            = (3U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[10U] 
                     >> 1U));
        __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter0 
            = (7U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[10U] 
                     >> 4U));
        __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr1 
            = (0x0000001fU & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[12U] 
                              >> 0x0000001aU));
        __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr0 
            = (0x0000001fU & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[12U] 
                              >> 0x00000014U));
        __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter4 
            = (0x000001ffU & vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[9U]);
        __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter4_jump 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[9U] 
                     >> 0x0000000aU));
        __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter5 
            = (0x000003ffU & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[9U] 
                              >> 0x0000000bU));
        __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter5_jump 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[9U] 
                     >> 0x00000016U));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop16 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[13U] 
                     >> 0x00000014U));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop19 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[13U] 
                     >> 0x00000017U));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop30 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[12U] 
                     >> 2U));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop18 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[13U] 
                     >> 0x00000016U));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop1 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[13U] 
                     >> 5U));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop15 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[13U] 
                     >> 0x00000013U));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop20 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[13U] 
                     >> 0x00000018U));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop22 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[13U] 
                     >> 0x0000001aU));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop14 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[13U] 
                     >> 0x00000012U));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop0 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[13U] 
                     >> 4U));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop35 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[12U] 
                     >> 7U));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop32 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[12U] 
                     >> 4U));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop27 
            = (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[13U] 
               >> 0x0000001fU);
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop29 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[12U] 
                     >> 1U));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop23 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[13U] 
                     >> 0x0000001bU));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc2_delay 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[11U] 
                     >> 2U));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc3_delay 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[11U] 
                     >> 5U));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc5_delay 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[11U] 
                     >> 0x0000000eU));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc6_delay 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[11U] 
                     >> 0x00000011U));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc7_delay 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[11U] 
                     >> 0x00000017U));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__c3_delay 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[10U] 
                     >> 0x0000001fU));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc4_delay 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[11U] 
                     >> 0x0000000bU));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop31 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[12U] 
                     >> 3U));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc8_delay 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[11U] 
                     >> 0x0000001dU));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__sr0_delay 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[12U] 
                     >> 0x00000013U));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc9_delay 
            = (1U & vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[10U]);
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__c2_delay 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[10U] 
                     >> 0x00000015U));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__c1_delay 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[10U] 
                     >> 0x0000000cU));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc10_delay 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[10U] 
                     >> 3U));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__c0_delay 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[10U] 
                     >> 7U));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc1_delay 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[12U] 
                     >> 0x0000001fU));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc0_delay 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[12U] 
                     >> 0x00000019U));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop3 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[13U] 
                     >> 7U));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter4_delay 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[9U] 
                     >> 9U));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter5_delay 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[9U] 
                     >> 0x00000015U));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop8 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[13U] 
                     >> 0x0000000cU));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop9 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[13U] 
                     >> 0x0000000dU));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop10 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[13U] 
                     >> 0x0000000eU));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop11 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[13U] 
                     >> 0x0000000fU));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__pulser0 
            = (1U & vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[13U]);
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop2 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[13U] 
                     >> 6U));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__pulser1 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[13U] 
                     >> 1U));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop13 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[13U] 
                     >> 0x00000011U));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop21 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[13U] 
                     >> 0x00000019U));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop17 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[13U] 
                     >> 0x00000015U));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop28 
            = (1U & vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[12U]);
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop33 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[12U] 
                     >> 5U));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop34 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[12U] 
                     >> 6U));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop12 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[13U] 
                     >> 0x00000010U));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__shift_reg0 
            = (0x0000003fU & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[12U] 
                              >> 9U));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or8_delay 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[12U] 
                     >> 8U));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop5 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[13U] 
                     >> 9U));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop4 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[13U] 
                     >> 8U));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__pulser0_delay 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[13U] 
                     >> 2U));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__pulser1_delay 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[13U] 
                     >> 3U));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop26 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[13U] 
                     >> 0x0000001eU));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop7 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[13U] 
                     >> 0x0000000bU));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop24 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[13U] 
                     >> 0x0000001cU));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop6 
            = (1U & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[13U] 
                     >> 0x0000000aU));
    } else {
        if (vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or213) {
            if (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr10) 
                 & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc2_delay))) {
                __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr2 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr2)));
            }
            if (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr2) 
                 & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc3_delay))) {
                __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr3 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr3)));
            }
            if (((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__ce_2m)) 
                 & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc9_delay))) {
                __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr9 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr9)));
            }
            if (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop7) 
                 & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc10_delay)))) {
                __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr10 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr10)));
            }
        } else {
            __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr2 = 0U;
            __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr3 = 0U;
            __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr9 = 0U;
            __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr10 = 0U;
        }
        if (vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_23) {
            __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr5 = 0U;
            __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr6 = 0U;
            __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr1 = 0U;
            __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr0 = 0U;
            __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter4 = 0U;
            __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter5 = 0U;
            __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter5_jump = 0U;
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop18 = 0U;
        } else {
            if (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr3) 
                 & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc5_delay))) {
                __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr5 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr5)));
            }
            if (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr5) 
                 & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc6_delay))) {
                __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr6 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr6)));
            }
            if (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or183) 
                 & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc1_delay)))) {
                __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr1 
                    = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr1)));
            }
            if (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or192) 
                 & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc0_delay)))) {
                __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr0 
                    = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr0)));
            }
            if (((IData)(vlSelfRef.tb__DOT__dut__DOT__ce_2m) 
                 & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter4_delay)))) {
                if ((0x0081U == (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter4))) {
                    __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter4 
                        = ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter4_jump)
                            ? ((1U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop17)) 
                                      | (~ vlSelfRef.tb__DOT__dut__DOT__set_sys[4U])))
                                ? ((1U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop17)) 
                                          | vlSelfRef.tb__DOT__dut__DOT__set_sys[4U]))
                                    ? ((1U & ((~ vlSelfRef.tb__DOT__dut__DOT__set_sys[4U]) 
                                              | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop17)))
                                        ? ((1U & (vlSelfRef.tb__DOT__dut__DOT__set_sys[4U] 
                                                  | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop17)))
                                            ? 0U : 3U)
                                        : 4U) : 1U)
                                : 0U) : 2U);
                    __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter4_jump = 0U;
                } else {
                    __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter4 
                        = (0x000001ffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter4)));
                }
            }
            if (((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop7)) 
                 & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter5_delay))) {
                if ((0x010bU == (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter5))) {
                    __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter5 
                        = ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter5_jump)
                            ? ((1U & (vlSelfRef.tb__DOT__dut__DOT__set_sys[4U] 
                                      | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop9)))
                                ? ((1U & ((~ vlSelfRef.tb__DOT__dut__DOT__set_sys[4U]) 
                                          | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop8)))
                                    ? ((1U & ((~ vlSelfRef.tb__DOT__dut__DOT__set_sys[4U]) 
                                              | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop9)))
                                        ? ((1U & (vlSelfRef.tb__DOT__dut__DOT__set_sys[4U] 
                                                  | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop11)))
                                            ? ((1U 
                                                & (vlSelfRef.tb__DOT__dut__DOT__set_sys[4U] 
                                                   | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop8)))
                                                ? (
                                                   (1U 
                                                    & ((~ vlSelfRef.tb__DOT__dut__DOT__set_sys[4U]) 
                                                       | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop11)))
                                                    ? 
                                                   ((1U 
                                                     & (vlSelfRef.tb__DOT__dut__DOT__set_sys[4U] 
                                                        | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop10)))
                                                     ? 
                                                    ((1U 
                                                      & ((~ vlSelfRef.tb__DOT__dut__DOT__set_sys[4U]) 
                                                         | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop10)))
                                                      ? 0U
                                                      : 1U)
                                                     : 3U)
                                                    : 4U)
                                                : 9U)
                                            : 5U) : 8U)
                                    : 0x000bU) : 7U)
                            : 6U);
                    __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter5_jump = 0U;
                } else {
                    __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter5 
                        = (0x000003ffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter5)));
                }
            }
            if (vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__pulser0) {
                __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter5_jump = 1U;
            }
            if ((1U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or193)) 
                       | (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or200))))) {
                vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop18 = 1U;
            }
        }
        if (vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or14) {
            __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr7 = 0U;
        } else if (((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or21)) 
                    & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc7_delay))) {
            __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr7 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr7)));
        }
        if ((1U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or88)) 
                   | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_23)))) {
            __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter3 = 0U;
        } else if ((1U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr10)) 
                          & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__c3_delay))))) {
            __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter3 
                = ((0x00d8U == (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter3))
                    ? 0U : (0x000001ffU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter3))));
        }
        if (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or142) 
             & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or136))) {
            __Vdly__tb__DOT__dut__DOT__the_chip__DOT__flop25 = 1U;
        } else if ((1U & ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr9) 
                          | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop24)))) {
            __Vdly__tb__DOT__dut__DOT__the_chip__DOT__flop25 = 0U;
        }
        if (vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop31) {
            __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr4 = 0U;
        } else if (((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or188)) 
                    & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc4_delay))) {
            __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr4 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr4)));
        }
        if (vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or48) {
            __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr8 = 0U;
        } else if (((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or45)) 
                    & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc8_delay))) {
            __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr8 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr8)));
        }
        if (vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop24) {
            if (((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or145)) 
                 & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__sr0_delay))) {
                if ((0U != (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__shift_reg0_spot))) {
                    __Vdly__tb__DOT__dut__DOT__the_chip__DOT__shift_reg0_spot 
                        = (0x0000000fU & ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__shift_reg0_spot) 
                                          - (IData)(1U)));
                }
            }
        } else {
            __Vdly__tb__DOT__dut__DOT__the_chip__DOT__shift_reg0_spot = 5U;
        }
        if ((1U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or74)) 
                   | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_23)))) {
            __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter2 = 0U;
        } else if ((1U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr9)) 
                          & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__c2_delay))))) {
            __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter2 
                = ((0x7eU == (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter2))
                    ? 0U : (0x000000ffU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter2))));
        }
        if (vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop12) {
            __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter1 = 0U;
            __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter0 = 0U;
        } else {
            if (((3U != (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter0)) 
                 & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__c1_delay))) {
                __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter1 
                    = ((6U == (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter1))
                        ? 0U : (0x0000000fU & ((IData)(1U) 
                                               + (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter1))));
            }
            if (((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop7)) 
                 & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__c0_delay))) {
                __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter0 
                    = ((3U == (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter0))
                        ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter0))));
            }
        }
        if (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_23) 
             | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop3))) {
            __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter4_jump = 0U;
        } else if (vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__pulser0) {
            __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter4_jump = 1U;
        }
        if (vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or144) {
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop16 = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__and18)))) {
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop16 = 1U;
        }
        if (vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or155) {
            if ((1U & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__and18)))) {
                vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop19 = 1U;
            }
        } else {
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop19 = 0U;
        }
        if ((1U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or199)) 
                   | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or205)))) {
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop30 = 0U;
        } else if (vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_23) {
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop30 = 1U;
        }
        if ((1U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or213)) 
                   | (0x010bU == (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter5))))) {
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop1 = 0U;
        } else if ((1U & ((~ ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or205)) 
                              | (0x00feU != (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter5)))) 
                          | (~ ((0x0107U != (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter5)) 
                                | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or205)))))) {
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop1 = 1U;
        }
        if ((1U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr9)) 
                   | (0x1dU != (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter2))))) {
            if ((1U & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or136)))) {
                vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop15 = 1U;
            }
        } else {
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop15 = 0U;
        }
        if ((1U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr9)) 
                   | (0x26U != (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter2))))) {
            if ((1U & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or142)))) {
                vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop20 = 1U;
            }
        } else {
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop20 = 0U;
        }
        if (vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or152) {
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop22 
                = vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop21;
        }
        if (vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__pulser1) {
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop14 = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__and18)))) {
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop14 = 1U;
        }
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop0 
            = (1U & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop2));
        if ((1U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop7)) 
                   | (0x0060U != (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter3))))) {
            if ((1U & (~ ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop7)) 
                          | ((0x0029U != (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter3)) 
                             | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_52) 
                                | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or202))))))) {
                vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop35 = 1U;
            }
        } else {
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop35 = 0U;
        }
        if ((1U & ((((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop13)) 
                     | (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or155))) 
                    | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or144)) 
                   | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__pulser1)))) {
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop32 = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__and18)))) {
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop32 = 1U;
        }
        if (vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or199) {
            if ((1U & (~ ((((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop17)) 
                            | (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or191))) 
                           & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop21)) 
                              | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or191))) 
                          | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or4))))) {
                vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop27 = 1U;
            }
        } else {
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop27 = 0U;
        }
        if (((((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or191)) 
               | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop17)) 
              & ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop21) 
                 | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or191))) 
             | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or4))) {
            if ((1U & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or199)))) {
                vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop29 = 1U;
            }
        } else {
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop29 = 0U;
        }
        if (vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or70) {
            if ((1U & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or68)))) {
                vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop23 = 1U;
            }
        } else {
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop23 = 0U;
        }
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc2_delay 
            = (1U & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr10)));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc3_delay 
            = (1U & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr2)));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc5_delay 
            = (1U & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr3)));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc6_delay 
            = (1U & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr5)));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc7_delay 
            = (1U & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or21));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__c3_delay 
            = (1U & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr10)));
        if (vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or188) {
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc4_delay = 1U;
            if ((1U & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__and18)))) {
                vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop31 = 1U;
            }
        } else {
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc4_delay = 0U;
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop31 = 0U;
        }
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc8_delay 
            = (1U & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or45));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__sr0_delay 
            = (1U & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or145));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc9_delay 
            = (1U & (IData)(vlSelfRef.tb__DOT__dut__DOT__ce_2m));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__c2_delay 
            = (1U & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr9)));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__c1_delay 
            = (1U & (3U == (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter0)));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc10_delay 
            = (1U & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop7));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__c0_delay 
            = (1U & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop7));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc1_delay 
            = (1U & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or183));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc0_delay 
            = (1U & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or192));
        if ((1U & (vlSelfRef.tb__DOT__dut__DOT__set_sys[1U] 
                   | ((vlSelfRef.tb__DOT__cont1_key 
                       | vlSelfRef.tb__DOT__cont2_key) 
                      >> 4U)))) {
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop3 = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or4)))) {
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop3 = 1U;
        }
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter4_delay 
            = (1U & (IData)(vlSelfRef.tb__DOT__dut__DOT__ce_2m));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter5_delay 
            = (1U & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop7));
        if (((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or8)) 
             & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or8_delay))) {
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop8 
                = (1U & ((~ vlSelfRef.tb__DOT__dut__DOT__set_sys[3U]) 
                         | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or35)));
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop9 
                = (1U & ((vlSelfRef.tb__DOT__dut__DOT__set_sys[3U] 
                          | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or35)) 
                         & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop5)) 
                            | (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop4)))));
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop10 
                = (1U & ((~ vlSelfRef.tb__DOT__dut__DOT__set_sys[3U]) 
                         | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or41)));
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop11 
                = (1U & ((vlSelfRef.tb__DOT__dut__DOT__set_sys[3U] 
                          | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or41)) 
                         & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop5)) 
                            | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop4))));
        }
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__pulser0 
            = (1U & ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop6) 
                     & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__pulser0_delay))));
        if ((1U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or213)) 
                   | (0x0081U == (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter4))))) {
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop2 = 0U;
        } else if ((1U & ((~ ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or205)) 
                              | (0x007dU != (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter4)))) 
                          | (~ ((0x0080U != (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter4)) 
                                | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or205)))))) {
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop2 = 1U;
        }
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__pulser1 
            = (1U & ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or170) 
                     & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__pulser1_delay))));
        if (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_47) 
             | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop26))) {
            if ((1U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop26)) 
                       | (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__and18))))) {
                vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop13 = 1U;
            }
        } else {
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop13 = 0U;
        }
        if (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_0) 
             | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_23))) {
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop21 = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or138)))) {
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop21 = 1U;
        }
        if (vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or149) {
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop17 = 0U;
        } else if ((1U & (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or127) 
                           | (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or153))) 
                          | (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or213))))) {
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop17 = 1U;
        }
        if (vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or124) {
            if ((1U & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or70)))) {
                vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop28 = 1U;
            }
        } else {
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop28 = 0U;
        }
        if ((1U & (((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or193)) 
                    | (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or200))) 
                   | (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or205))))) {
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop33 = 0U;
        } else if ((1U & (~ ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or205)) 
                             | (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_23)))))) {
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop33 = 1U;
        }
        if (vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or181) {
            if ((1U & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or177)))) {
                vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop34 = 1U;
            }
        } else {
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop34 = 0U;
        }
        if ((1U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop7)) 
                   | (0x0016U != (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter3))))) {
            if ((1U & (~ ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop7)) 
                          | (0x0022U != (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter3)))))) {
                vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop12 = 1U;
            }
        } else {
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop12 = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop24)))) {
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__shift_reg0 
                = ((0x38U & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__shift_reg0)) 
                   | ((4U & ((~ ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_53) 
                                 | (((~ ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_29) 
                                         | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or81))) 
                                     & (1U == (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter1))) 
                                    | (((~ ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or108) 
                                            | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_59))) 
                                        & (3U == (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter1))) 
                                       | (((2U == (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter1)) 
                                           | (4U == (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter1))) 
                                          | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or111)))))) 
                             << 2U)) | (2U & ((~ ((
                                                   (~ 
                                                    ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or108) 
                                                     | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or76))) 
                                                   & (1U 
                                                      == (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter1))) 
                                                  | (((~ 
                                                       ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_27) 
                                                        | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_60) 
                                                           | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_56) 
                                                              | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or109) 
                                                                 | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or108)))))) 
                                                      & (2U 
                                                         == (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter1))) 
                                                     | (((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or76)) 
                                                         & (4U 
                                                            == (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter1))) 
                                                        | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or111))))) 
                                              << 1U))));
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__shift_reg0 
                = ((7U & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__shift_reg0)) 
                   | (((4U & ((~ ((~ ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or117)) 
                                      & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or0))) 
                                  | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or111))) 
                              << 2U)) | (1U & (~ ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_53) 
                                                  | (((~ 
                                                       ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or108) 
                                                        | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_61))) 
                                                      & (1U 
                                                         == (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter1))) 
                                                     | (((~ 
                                                          ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_59) 
                                                           | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_57))) 
                                                         & (3U 
                                                            == (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter1))) 
                                                        | ((((~ 
                                                              ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or106) 
                                                               | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or105) 
                                                                  | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_32) 
                                                                     | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_56))))) 
                                                             & (2U 
                                                                == (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter1))) 
                                                            | ((~ 
                                                                ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_32) 
                                                                 | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_57))) 
                                                               & (4U 
                                                                  == (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter1)))) 
                                                           | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or111)))))))) 
                      << 3U));
        }
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or8_delay 
            = (1U & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or8));
        if (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or27) 
             | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or22))) {
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop5 = 0U;
        } else if ((1U & (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or24) 
                           | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or23)) 
                          | (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or213))))) {
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop5 = 1U;
        }
        if ((1U & ((((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or16)) 
                     | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or24)) 
                    | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or27)) 
                   | (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or213))))) {
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop4 = 0U;
        } else if ((1U & (((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or15)) 
                           | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or23)) 
                          | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or22)))) {
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop4 = 1U;
        }
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__pulser0_delay 
            = (1U & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop6));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__pulser1_delay 
            = (1U & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or170));
        if (vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_47) {
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop26 = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__and18)))) {
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop26 = 1U;
        }
        if ((1U & ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_23) 
                   | (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or63))))) {
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop7 = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or74)))) {
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop7 = 1U;
        }
        if (vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop25) {
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop24 = 1U;
        } else if ((1U & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr9))) {
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop24 = 0U;
        }
        if ((1U & ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_23) 
                   | (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or88))))) {
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop6 = 0U;
        } else if ((1U & (~ ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or63)) 
                             | (0x0081U != (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter3)))))) {
            vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop6 = 1U;
        }
    }
    if (vlSelfRef.tb__DOT__dut__DOT__state_load_sys) {
        __Vdly__tb__DOT__dut__DOT__ce_2m_div = (0x0000003fU 
                                                & (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[6U] 
                                                   >> 0x0000000bU));
        vlSelfRef.tb__DOT__dut__DOT__ce_2m = (1U & 
                                              (vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[6U] 
                                               >> 0x0000000aU));
    } else {
        __Vdly__tb__DOT__dut__DOT__ce_2m_div = (0x0000003fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.tb__DOT__dut__DOT__ce_2m_div)));
        if ((0x17U == (IData)(vlSelfRef.tb__DOT__dut__DOT__ce_2m_div))) {
            __Vdly__tb__DOT__dut__DOT__ce_2m_div = 0U;
        }
        vlSelfRef.tb__DOT__dut__DOT__ce_2m = (1U & 
                                              (~ (0U 
                                                  != (IData)(vlSelfRef.tb__DOT__dut__DOT__ce_2m_div))));
    }
    if (vlSelfRef.tb__DOT__dut__DOT__state_load_sys) {
        vlSelfRef.tb__DOT__dut__DOT__state_load_sys = 0U;
        vlSelfRef.tb__DOT__dut__DOT__chip_state_load_sys = 0U;
    }
    vlSelfRef.tb__DOT__dut__DOT__icb__DOT__endian_little_s 
        = vlSelfRef.tb__DOT__dut__DOT__icb__DOT__s01__DOT__stage_2;
    if (vlSelfRef.tb__DOT__bridge_wr) {
        if ((0xf8000000U == (0xff00ff00U & vlSelfRef.tb__DOT__bridge_addr))) {
            if ((0U == (0x000000ffU & vlSelfRef.tb__DOT__bridge_addr))) {
                if ((0x434dU == (vlSelfRef.tb__DOT__dut__DOT__icb__DOT__bridge_wr_data_in 
                                 >> 0x10U))) {
                    __Vdly__tb__DOT__dut__DOT__icb__DOT__host_cmd_start = 1U;
                }
            }
        }
    }
    if ((0U == (IData)(vlSelfRef.tb__DOT__dut__DOT__icb__DOT__hstate))) {
        __Vdly__tb__DOT__dut__DOT__savestate_start = 0U;
        __Vdly__tb__DOT__dut__DOT__savestate_load = 0U;
        if (vlSelfRef.tb__DOT__dut__DOT__icb__DOT__host_cmd_start) {
            __Vdly__tb__DOT__dut__DOT__icb__DOT__host_cmd_start = 0U;
            __Vdly__tb__DOT__dut__DOT__icb__DOT__host_cmd 
                = vlSelfRef.tb__DOT__dut__DOT__icb__DOT__host_cmd_startval;
            __Vdly__tb__DOT__dut__DOT__icb__DOT__hstate = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.tb__DOT__dut__DOT__icb__DOT__hstate))) {
        if (((((((((0U == (IData)(vlSelfRef.tb__DOT__dut__DOT__icb__DOT__host_cmd)) 
                   | (0x0010U == (IData)(vlSelfRef.tb__DOT__dut__DOT__icb__DOT__host_cmd))) 
                  | (0x0011U == (IData)(vlSelfRef.tb__DOT__dut__DOT__icb__DOT__host_cmd))) 
                 | (0x0080U == (IData)(vlSelfRef.tb__DOT__dut__DOT__icb__DOT__host_cmd))) 
                | (0x0082U == (IData)(vlSelfRef.tb__DOT__dut__DOT__icb__DOT__host_cmd))) 
               | (0x008aU == (IData)(vlSelfRef.tb__DOT__dut__DOT__icb__DOT__host_cmd))) 
              | (0x008fU == (IData)(vlSelfRef.tb__DOT__dut__DOT__icb__DOT__host_cmd))) 
             | (0x0090U == (IData)(vlSelfRef.tb__DOT__dut__DOT__icb__DOT__host_cmd)))) {
            if ((0U == (IData)(vlSelfRef.tb__DOT__dut__DOT__icb__DOT__host_cmd))) {
                __Vdly__tb__DOT__dut__DOT__icb__DOT__hstate = 0x0eU;
            } else if ((0x0010U == (IData)(vlSelfRef.tb__DOT__dut__DOT__icb__DOT__host_cmd))) {
                __Vdly__tb__DOT__dut__DOT__reset_n = 0U;
                __Vdly__tb__DOT__dut__DOT__icb__DOT__hstate = 0x0dU;
            } else if ((0x0011U == (IData)(vlSelfRef.tb__DOT__dut__DOT__icb__DOT__host_cmd))) {
                __Vdly__tb__DOT__dut__DOT__reset_n = 1U;
                __Vdly__tb__DOT__dut__DOT__icb__DOT__hstate = 0x0dU;
            } else {
                __Vdly__tb__DOT__dut__DOT__icb__DOT__hstate 
                    = ((0x0080U == (IData)(vlSelfRef.tb__DOT__dut__DOT__icb__DOT__host_cmd))
                        ? 0x0eU : ((0x0082U == (IData)(vlSelfRef.tb__DOT__dut__DOT__icb__DOT__host_cmd))
                                    ? 0x0eU : 0x0dU));
            }
        } else if ((0x00a0U == (IData)(vlSelfRef.tb__DOT__dut__DOT__icb__DOT__host_cmd))) {
            if ((1U & vlSelfRef.tb__DOT__dut__DOT__icb__DOT__host_20)) {
                __Vdly__tb__DOT__dut__DOT__savestate_start = 1U;
                if (vlSelfRef.tb__DOT__dut__DOT__savestate_start_ack) {
                    __Vdly__tb__DOT__dut__DOT__icb__DOT__hstate = 0x0eU;
                }
            } else {
                __Vdly__tb__DOT__dut__DOT__icb__DOT__hstate = 0x0eU;
            }
        } else if ((0x00a4U == (IData)(vlSelfRef.tb__DOT__dut__DOT__icb__DOT__host_cmd))) {
            if ((1U & vlSelfRef.tb__DOT__dut__DOT__icb__DOT__host_20)) {
                __Vdly__tb__DOT__dut__DOT__savestate_load = 1U;
                if (vlSelfRef.tb__DOT__dut__DOT__savestate_load_ack) {
                    __Vdly__tb__DOT__dut__DOT__icb__DOT__hstate = 0x0eU;
                }
            } else {
                __Vdly__tb__DOT__dut__DOT__icb__DOT__hstate = 0x0eU;
            }
        } else {
            __Vdly__tb__DOT__dut__DOT__icb__DOT__hstate 
                = ((0x00b0U == (IData)(vlSelfRef.tb__DOT__dut__DOT__icb__DOT__host_cmd))
                    ? 0x0dU : 0x0fU);
        }
    } else if ((2U == (IData)(vlSelfRef.tb__DOT__dut__DOT__icb__DOT__hstate))) {
        __Vdly__tb__DOT__dut__DOT__icb__DOT__hstate = 0U;
    } else if ((0x0dU == (IData)(vlSelfRef.tb__DOT__dut__DOT__icb__DOT__hstate))) {
        __Vdly__tb__DOT__dut__DOT__icb__DOT__hstate = 0U;
    } else if ((0x0eU == (IData)(vlSelfRef.tb__DOT__dut__DOT__icb__DOT__hstate))) {
        __Vdly__tb__DOT__dut__DOT__icb__DOT__hstate = 0U;
    } else if ((0x0fU == (IData)(vlSelfRef.tb__DOT__dut__DOT__icb__DOT__hstate))) {
        __Vdly__tb__DOT__dut__DOT__icb__DOT__hstate = 0U;
    }
    if (vlSelfRef.tb__DOT__bridge_wr) {
        if ((0xf8000000U == (0xff00ff00U & vlSelfRef.tb__DOT__bridge_addr))) {
            if ((0U == (0x000000ffU & vlSelfRef.tb__DOT__bridge_addr))) {
                if ((0x434dU == (vlSelfRef.tb__DOT__dut__DOT__icb__DOT__bridge_wr_data_in 
                                 >> 0x10U))) {
                    vlSelfRef.tb__DOT__dut__DOT__icb__DOT__host_cmd_startval 
                        = (0x0000ffffU & vlSelfRef.tb__DOT__dut__DOT__icb__DOT__bridge_wr_data_in);
                }
            }
            if ((0U != (0x000000ffU & vlSelfRef.tb__DOT__bridge_addr))) {
                if ((0x20U == (0x000000ffU & vlSelfRef.tb__DOT__bridge_addr))) {
                    vlSelfRef.tb__DOT__dut__DOT__icb__DOT__host_20 
                        = vlSelfRef.tb__DOT__dut__DOT__icb__DOT__bridge_wr_data_in;
                }
            }
        }
    }
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_meta_74a[0U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v0;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_meta_74a[1U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v1;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_meta_74a[2U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v2;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_meta_74a[3U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v3;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_meta_74a[4U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v4;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_meta_74a[5U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v5;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_meta_74a[6U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v6;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_meta_74a[7U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v7;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_meta_74a[8U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v8;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_meta_74a[9U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v9;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_meta_74a[10U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v10;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_meta_74a[11U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v11;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_meta_74a[12U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v12;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_meta_74a[13U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v13;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_meta_74a[14U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v14;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_meta_74a[15U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_rd_meta_74a__v15;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[0U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v0;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[1U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v1;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[2U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v2;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[3U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v3;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[4U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v4;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[5U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v5;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[6U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v6;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[7U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v7;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[8U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v8;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[9U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v9;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[10U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v10;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[11U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v11;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[12U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v12;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[13U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v13;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[14U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v14;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[15U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_74a__v15;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_meta_sys[0U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v0;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_meta_sys[1U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v1;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_meta_sys[2U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v2;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_meta_sys[3U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v3;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_meta_sys[4U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v4;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_meta_sys[5U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v5;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_meta_sys[6U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v6;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_meta_sys[7U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v7;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_meta_sys[8U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v8;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_meta_sys[9U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v9;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_meta_sys[10U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v10;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_meta_sys[11U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v11;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_meta_sys[12U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v12;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_meta_sys[13U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v13;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_meta_sys[14U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v14;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_meta_sys[15U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_load_meta_sys__v15;
    if (__VdlySet__tb__DOT__dut__DOT__settings__v0) {
        vlSelfRef.tb__DOT__dut__DOT__settings[0U] = __VdlyVal__tb__DOT__dut__DOT__settings__v0;
        vlSelfRef.tb__DOT__dut__DOT__settings[1U] = __VdlyVal__tb__DOT__dut__DOT__settings__v1;
        vlSelfRef.tb__DOT__dut__DOT__settings[2U] = __VdlyVal__tb__DOT__dut__DOT__settings__v2;
        vlSelfRef.tb__DOT__dut__DOT__settings[3U] = __VdlyVal__tb__DOT__dut__DOT__settings__v3;
        vlSelfRef.tb__DOT__dut__DOT__settings[4U] = __VdlyVal__tb__DOT__dut__DOT__settings__v4;
        vlSelfRef.tb__DOT__dut__DOT__settings[5U] = __VdlyVal__tb__DOT__dut__DOT__settings__v5;
    }
    if (__VdlySet__tb__DOT__dut__DOT__settings__v6) {
        vlSelfRef.tb__DOT__dut__DOT__settings[__VdlyDim0__tb__DOT__dut__DOT__settings__v6] 
            = __VdlyVal__tb__DOT__dut__DOT__settings__v6;
    }
    if (__VdlySet__tb__DOT__dut__DOT__set_meta__v0) {
        vlSelfRef.tb__DOT__dut__DOT__set_meta[0U] = __VdlyVal__tb__DOT__dut__DOT__set_meta__v0;
        vlSelfRef.tb__DOT__dut__DOT__set_meta[1U] = __VdlyVal__tb__DOT__dut__DOT__set_meta__v1;
        vlSelfRef.tb__DOT__dut__DOT__set_meta[2U] = __VdlyVal__tb__DOT__dut__DOT__set_meta__v2;
        vlSelfRef.tb__DOT__dut__DOT__set_meta[3U] = __VdlyVal__tb__DOT__dut__DOT__set_meta__v3;
        vlSelfRef.tb__DOT__dut__DOT__set_meta[4U] = __VdlyVal__tb__DOT__dut__DOT__set_meta__v4;
        vlSelfRef.tb__DOT__dut__DOT__set_meta[5U] = __VdlyVal__tb__DOT__dut__DOT__set_meta__v5;
    }
    if (__VdlySet__tb__DOT__dut__DOT__set_meta__v6) {
        vlSelfRef.tb__DOT__dut__DOT__set_meta[0U] = __VdlyVal__tb__DOT__dut__DOT__set_meta__v6;
        vlSelfRef.tb__DOT__dut__DOT__set_meta[1U] = __VdlyVal__tb__DOT__dut__DOT__set_meta__v7;
        vlSelfRef.tb__DOT__dut__DOT__set_meta[2U] = __VdlyVal__tb__DOT__dut__DOT__set_meta__v8;
        vlSelfRef.tb__DOT__dut__DOT__set_meta[3U] = __VdlyVal__tb__DOT__dut__DOT__set_meta__v9;
        vlSelfRef.tb__DOT__dut__DOT__set_meta[4U] = __VdlyVal__tb__DOT__dut__DOT__set_meta__v10;
        vlSelfRef.tb__DOT__dut__DOT__set_meta[5U] = __VdlyVal__tb__DOT__dut__DOT__set_meta__v11;
        vlSelfRef.tb__DOT__dut__DOT__set_meta[6U] = __VdlyVal__tb__DOT__dut__DOT__set_meta__v12;
        vlSelfRef.tb__DOT__dut__DOT__set_meta[7U] = __VdlyVal__tb__DOT__dut__DOT__set_meta__v13;
    }
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr6 
        = __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr6;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr7 
        = __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr7;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr4 
        = __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr4;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr8 
        = __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr8;
    vlSelfRef.tb__DOT__dut__DOT__savestate_save_delay_sys 
        = __Vdly__tb__DOT__dut__DOT__savestate_save_delay_sys;
    vlSelfRef.tb__DOT__dut__DOT__reset_cnt = __Vdly__tb__DOT__dut__DOT__reset_cnt;
    if (__VdlySet__tb__DOT__dut__DOT__savestate_rd_buf_sys__v0) {
        vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_sys[0U] 
            = __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v0;
    }
    if (__VdlySet__tb__DOT__dut__DOT__savestate_rd_buf_sys__v1) {
        vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_sys[1U] 
            = __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v1;
        vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_sys[2U] 
            = __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v2;
        vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_sys[3U] 
            = __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v3;
        vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_sys[4U] 
            = __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v4;
        vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_sys[5U] 
            = __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v5;
        vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_sys[6U] 
            = __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v6;
        vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_sys[7U] 
            = __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v7;
        vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_sys[8U] 
            = __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v8;
        vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_sys[9U] 
            = __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v9;
        vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_sys[10U] 
            = __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v10;
        vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_sys[11U] 
            = __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v11;
        vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_sys[12U] 
            = __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v12;
        vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_sys[13U] 
            = __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v13;
        vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_sys[14U] 
            = __VdlyVal__tb__DOT__dut__DOT__savestate_rd_buf_sys__v14;
        vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_sys[15U] = 0x41595353U;
    }
    vlSelfRef.tb__DOT__dut__DOT__p1pos = __Vdly__tb__DOT__dut__DOT__p1pos;
    vlSelfRef.tb__DOT__dut__DOT__p2pos = __Vdly__tb__DOT__dut__DOT__p2pos;
    vlSelfRef.tb__DOT__dut__DOT__p2cap = __Vdly__tb__DOT__dut__DOT__p2cap;
    vlSelfRef.tb__DOT__dut__DOT__p1cap = __Vdly__tb__DOT__dut__DOT__p1cap;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr1 
        = __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr1;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr0 
        = __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr0;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter4_jump 
        = __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter4_jump;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter5_jump 
        = __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter5_jump;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter5 
        = __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter5;
    vlSelfRef.tb__DOT__dut__DOT__icb__DOT__host_cmd_start 
        = __Vdly__tb__DOT__dut__DOT__icb__DOT__host_cmd_start;
    vlSelfRef.tb__DOT__dut__DOT__icb__DOT__host_cmd 
        = __Vdly__tb__DOT__dut__DOT__icb__DOT__host_cmd;
    vlSelfRef.tb__DOT__dut__DOT__icb__DOT__hstate = __Vdly__tb__DOT__dut__DOT__icb__DOT__hstate;
    vlSelfRef.tb__DOT__dut__DOT__blank_hcnt = __Vdly__tb__DOT__dut__DOT__blank_hcnt;
    vlSelfRef.tb__DOT__dut__DOT__blank_vcnt = __Vdly__tb__DOT__dut__DOT__blank_vcnt;
    vlSelfRef.tb__DOT__dut__DOT__blank_old_vs = __Vdly__tb__DOT__dut__DOT__blank_old_vs;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__shift_reg0_spot 
        = __Vdly__tb__DOT__dut__DOT__the_chip__DOT__shift_reg0_spot;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter2 
        = __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter2;
    tb__DOT__dut__DOT__the_chip__DOT__or26 = (IData)(
                                                     (0x0cU 
                                                      != 
                                                      (0x0cU 
                                                       & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr7))));
    tb__DOT__dut__DOT__the_chip__DOT__or29 = (IData)(
                                                     (0x0cU 
                                                      != 
                                                      (0x0cU 
                                                       & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr8))));
    vlSelfRef.tb__DOT__dut__DOT__savestate_save_req_sys 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_save_req_meta_sys;
    vlSelfRef.tb__DOT__dut__DOT__icb__DOT__s01__DOT__stage_2 
        = vlSelfRef.tb__DOT__dut__DOT__icb__DOT__s01__DOT__stage_1;
    vlSelfRef.tb__DOT__dut__DOT__pll_core_locked_s 
        = vlSelfRef.tb__DOT__dut__DOT__s01__DOT__stage_2;
    vlSelfRef.tb__DOT__dut__DOT__savestate_start_ack = 0U;
    if (((IData)(vlSelfRef.tb__DOT__dut__DOT__savestate_start) 
         & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__savestate_start_d)))) {
        __Vdly__tb__DOT__dut__DOT__savestate_save_req_toggle_74a 
            = (1U & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__savestate_save_req_toggle_74a)));
        __VdlyMask__tb__DOT__dut__DOT__savestate_save_req_toggle_74a = 1U;
        vlSelfRef.tb__DOT__dut__DOT__savestate_start_ack = 1U;
        vlSelfRef.tb__DOT__dut__DOT__savestate_start_ok = 0U;
        vlSelfRef.tb__DOT__dut__DOT__savestate_start_busy = 1U;
    }
    if (((IData)(vlSelfRef.tb__DOT__dut__DOT__savestate_save_done_sys) 
         != (IData)(vlSelfRef.tb__DOT__dut__DOT__savestate_save_done_seen_74a))) {
        vlSelfRef.tb__DOT__dut__DOT__savestate_save_done_seen_74a 
            = vlSelfRef.tb__DOT__dut__DOT__savestate_save_done_sys;
        vlSelfRef.tb__DOT__dut__DOT__savestate_start_busy = 0U;
        vlSelfRef.tb__DOT__dut__DOT__savestate_start_ok = 1U;
    }
    vlSelfRef.tb__DOT__dut__DOT__apply_savestate_settings_74a = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_ack = 0U;
    if (((IData)(vlSelfRef.tb__DOT__dut__DOT__savestate_load) 
         & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__savestate_load_d)))) {
        __Vdly__tb__DOT__dut__DOT__savestate_load_req_toggle_74a 
            = (1U & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__savestate_load_req_toggle_74a)));
        __VdlyMask__tb__DOT__dut__DOT__savestate_load_req_toggle_74a = 1U;
        __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v0 
            = vlSelfRef.tb__DOT__dut__DOT__savestate_wr_buf_74a[0U];
        __VdlySet__tb__DOT__dut__DOT__savestate_load_snap_74a__v0 = 1U;
        vlSelfRef.tb__DOT__dut__DOT__savestate_load_ack = 1U;
        vlSelfRef.tb__DOT__dut__DOT__savestate_load_ok = 0U;
        vlSelfRef.tb__DOT__dut__DOT__savestate_load_busy = 1U;
        vlSelfRef.tb__DOT__dut__DOT__apply_savestate_settings_74a = 1U;
        __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v1 
            = vlSelfRef.tb__DOT__dut__DOT__savestate_wr_buf_74a[1U];
        __VdlySet__tb__DOT__dut__DOT__savestate_load_snap_74a__v1 = 1U;
        __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v2 
            = vlSelfRef.tb__DOT__dut__DOT__savestate_wr_buf_74a[2U];
        __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v3 
            = vlSelfRef.tb__DOT__dut__DOT__savestate_wr_buf_74a[3U];
        __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v4 
            = vlSelfRef.tb__DOT__dut__DOT__savestate_wr_buf_74a[4U];
        __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v5 
            = vlSelfRef.tb__DOT__dut__DOT__savestate_wr_buf_74a[5U];
        __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v6 
            = vlSelfRef.tb__DOT__dut__DOT__savestate_wr_buf_74a[6U];
        __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v7 
            = vlSelfRef.tb__DOT__dut__DOT__savestate_wr_buf_74a[7U];
        __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v8 
            = vlSelfRef.tb__DOT__dut__DOT__savestate_wr_buf_74a[8U];
        __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v9 
            = vlSelfRef.tb__DOT__dut__DOT__savestate_wr_buf_74a[9U];
        __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v10 
            = vlSelfRef.tb__DOT__dut__DOT__savestate_wr_buf_74a[10U];
        __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v11 
            = vlSelfRef.tb__DOT__dut__DOT__savestate_wr_buf_74a[11U];
        __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v12 
            = vlSelfRef.tb__DOT__dut__DOT__savestate_wr_buf_74a[12U];
        __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v13 
            = vlSelfRef.tb__DOT__dut__DOT__savestate_wr_buf_74a[13U];
        __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v14 
            = vlSelfRef.tb__DOT__dut__DOT__savestate_wr_buf_74a[14U];
        __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v15 
            = vlSelfRef.tb__DOT__dut__DOT__savestate_wr_buf_74a[15U];
    }
    if (((IData)(vlSelfRef.tb__DOT__dut__DOT__savestate_load_done_sys) 
         != (IData)(vlSelfRef.tb__DOT__dut__DOT__savestate_load_done_seen_74a))) {
        vlSelfRef.tb__DOT__dut__DOT__savestate_load_done_seen_74a 
            = vlSelfRef.tb__DOT__dut__DOT__savestate_load_done_sys;
        vlSelfRef.tb__DOT__dut__DOT__savestate_load_busy = 0U;
        vlSelfRef.tb__DOT__dut__DOT__savestate_load_ok = 1U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__reset_n)))) {
        vlSelfRef.tb__DOT__dut__DOT__savestate_start_busy = 0U;
        vlSelfRef.tb__DOT__dut__DOT__savestate_start_ok = 0U;
        vlSelfRef.tb__DOT__dut__DOT__savestate_load_busy = 0U;
        vlSelfRef.tb__DOT__dut__DOT__savestate_load_ok = 0U;
    }
    tb__DOT__dut__DOT__the_chip__DOT__or72 = (1U & 
                                              (((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop23)) 
                                                & (~ 
                                                   ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr1) 
                                                    >> 1U))) 
                                               | ((~ 
                                                   ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr0) 
                                                    >> 1U)) 
                                                  & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop23))));
    tb__DOT__dut__DOT__the_chip__DOT__or73 = (1U & 
                                              (((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop23)) 
                                                & (~ 
                                                   ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr1) 
                                                    >> 2U))) 
                                               | ((~ 
                                                   ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr0) 
                                                    >> 2U)) 
                                                  & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop23))));
    tb__DOT__dut__DOT__the_chip__DOT__or112 = (1U & 
                                               (((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop23)) 
                                                 & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr1))) 
                                                | ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr0)) 
                                                   & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop23))));
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_9 
        = (1U & (~ (IData)((0x12U != (0x12U & (IData)(vlSelfRef.tb__DOT__dut__DOT__gameSelect))))));
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_44 
        = (1U & (~ (IData)((0x10U != (0x12U & (IData)(vlSelfRef.tb__DOT__dut__DOT__gameSelect))))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or191 
        = (IData)((8U != (0x0aU & (IData)(vlSelfRef.tb__DOT__dut__DOT__gameSelect))));
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_3 
        = (1U & (~ (IData)((0x42U != (0x42U & (IData)(vlSelfRef.tb__DOT__dut__DOT__gameSelect))))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr2 
        = __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr2;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr3 
        = __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr3;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr5 
        = __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr5;
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_15 
        = (1U & (~ ((~ ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr7) 
                        & ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr7) 
                           >> 1U))) | (IData)(tb__DOT__dut__DOT__the_chip__DOT__or26))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr10 
        = __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr10;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or188 
        = (1U & ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr6) 
                 | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop32)));
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_21 
        = (1U & (~ ((~ ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr8) 
                        & ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr8) 
                           >> 1U))) | (IData)(tb__DOT__dut__DOT__the_chip__DOT__or29))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter0 
        = __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter0;
    if (__VdlySet__tb__DOT__dut__DOT__set_sys__v0) {
        vlSelfRef.tb__DOT__dut__DOT__set_sys[0U] = __VdlyVal__tb__DOT__dut__DOT__set_sys__v0;
        vlSelfRef.tb__DOT__dut__DOT__set_sys[1U] = __VdlyVal__tb__DOT__dut__DOT__set_sys__v1;
        vlSelfRef.tb__DOT__dut__DOT__set_sys[2U] = __VdlyVal__tb__DOT__dut__DOT__set_sys__v2;
        vlSelfRef.tb__DOT__dut__DOT__set_sys[3U] = __VdlyVal__tb__DOT__dut__DOT__set_sys__v3;
        vlSelfRef.tb__DOT__dut__DOT__set_sys[4U] = __VdlyVal__tb__DOT__dut__DOT__set_sys__v4;
        vlSelfRef.tb__DOT__dut__DOT__set_sys[5U] = __VdlyVal__tb__DOT__dut__DOT__set_sys__v5;
    }
    if (__VdlySet__tb__DOT__dut__DOT__set_sys__v6) {
        vlSelfRef.tb__DOT__dut__DOT__set_sys[0U] = __VdlyVal__tb__DOT__dut__DOT__set_sys__v6;
        vlSelfRef.tb__DOT__dut__DOT__set_sys[1U] = __VdlyVal__tb__DOT__dut__DOT__set_sys__v7;
        vlSelfRef.tb__DOT__dut__DOT__set_sys[2U] = __VdlyVal__tb__DOT__dut__DOT__set_sys__v8;
        vlSelfRef.tb__DOT__dut__DOT__set_sys[3U] = __VdlyVal__tb__DOT__dut__DOT__set_sys__v9;
        vlSelfRef.tb__DOT__dut__DOT__set_sys[4U] = __VdlyVal__tb__DOT__dut__DOT__set_sys__v10;
        vlSelfRef.tb__DOT__dut__DOT__set_sys[5U] = __VdlyVal__tb__DOT__dut__DOT__set_sys__v11;
        vlSelfRef.tb__DOT__dut__DOT__set_sys[6U] = __VdlyVal__tb__DOT__dut__DOT__set_sys__v12;
        vlSelfRef.tb__DOT__dut__DOT__set_sys[7U] = __VdlyVal__tb__DOT__dut__DOT__set_sys__v13;
    }
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter4 
        = __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter4;
    vlSelfRef.tb__DOT__dut__DOT__reset_n = __Vdly__tb__DOT__dut__DOT__reset_n;
    if (__VdlySet__tb__DOT__dut__DOT__savestate_wr_buf_74a__v0) {
        vlSelfRef.tb__DOT__dut__DOT__savestate_wr_buf_74a[__VdlyDim0__tb__DOT__dut__DOT__savestate_wr_buf_74a__v0] 
            = __VdlyVal__tb__DOT__dut__DOT__savestate_wr_buf_74a__v0;
    }
    if (__VdlySet__tb__DOT__dut__DOT__savestate_load_snap_74a__v0) {
        vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[0U] 
            = __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v0;
    }
    if (__VdlySet__tb__DOT__dut__DOT__savestate_load_snap_74a__v1) {
        vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[1U] 
            = __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v1;
        vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[2U] 
            = __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v2;
        vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[3U] 
            = __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v3;
        vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[4U] 
            = __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v4;
        vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[5U] 
            = __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v5;
        vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[6U] 
            = __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v6;
        vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[7U] 
            = __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v7;
        vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[8U] 
            = __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v8;
        vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[9U] 
            = __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v9;
        vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[10U] 
            = __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v10;
        vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[11U] 
            = __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v11;
        vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[12U] 
            = __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v12;
        vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[13U] 
            = __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v13;
        vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[14U] 
            = __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v14;
        vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[15U] 
            = __VdlyVal__tb__DOT__dut__DOT__savestate_load_snap_74a__v15;
    }
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or153 
        = (IData)((0x40U != (0x42U & (IData)(vlSelfRef.tb__DOT__dut__DOT__gameSelect))));
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_55 
        = (1U & ((~ (IData)(tb__DOT__dut__DOT__the_chip__DOT__or73)) 
                 | (IData)(tb__DOT__dut__DOT__the_chip__DOT__or72)));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or202 
        = (1U & ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_44) 
                 | (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or191))));
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_8 
        = (1U & (~ ((~ ((0x0109U != (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter5)) 
                        | ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop0)) 
                           | (IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_9)))) 
                    | (IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_3))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter1 
        = __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter1;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or0 
        = (1U & ((~ (IData)(tb__DOT__dut__DOT__the_chip__DOT__or72)) 
                 | (~ (IData)(tb__DOT__dut__DOT__the_chip__DOT__or73))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or117 
        = (1U & (((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop23)) 
                  & (~ ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr1) 
                        >> 3U))) | ((~ ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr0) 
                                        >> 3U)) & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop23))));
    vlSelfRef.tb__DOT__dut__DOT__savestate_save_req_meta_sys 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_save_req_toggle_74a;
    vlSelfRef.tb__DOT__dut__DOT__icb__DOT__s01__DOT__stage_1 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_6 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop2)) 
                        | ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop1)) 
                           | (IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_9)))) 
                    | (IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_3))));
    vlSelfRef.tb__DOT__dut__DOT__s01__DOT__stage_2 
        = vlSelfRef.tb__DOT__dut__DOT__s01__DOT__stage_1;
    vlSelfRef.tb__DOT__dut__DOT__savestate_start_d 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_start;
    vlSelfRef.tb__DOT__dut__DOT__savestate_save_done_sys 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_save_done_meta_74a;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_d = vlSelfRef.tb__DOT__dut__DOT__savestate_load;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_done_sys 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_load_done_meta_74a;
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_51 
        = (1U & (~ ((~ ((IData)(vlSelfRef.tb__DOT__dut__DOT__gameSelect) 
                        | ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_3) 
                           & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop17)))) 
                    | ((IData)(vlSelfRef.tb__DOT__dut__DOT__gameSelect) 
                       >> 1U))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or111 
        = ((0U == (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter1)) 
           | (6U == (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter1)));
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_34 
        = (1U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or117)) 
                 | (IData)(tb__DOT__dut__DOT__the_chip__DOT__or112)));
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_37 
        = (1U & ((~ (IData)(tb__DOT__dut__DOT__the_chip__DOT__or112)) 
                 | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or117)));
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_38 
        = ((IData)(tb__DOT__dut__DOT__the_chip__DOT__or112) 
           | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or117));
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_26 
        = (1U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or117)) 
                 | (~ (IData)(tb__DOT__dut__DOT__the_chip__DOT__or112))));
    vlSelfRef.tb__DOT__dut__DOT__savestate_save_req_toggle_74a 
        = (((IData)(__Vdly__tb__DOT__dut__DOT__savestate_save_req_toggle_74a) 
            & (IData)(__VdlyMask__tb__DOT__dut__DOT__savestate_save_req_toggle_74a)) 
           | ((IData)(vlSelfRef.tb__DOT__dut__DOT__savestate_save_req_toggle_74a) 
              & (~ (IData)(__VdlyMask__tb__DOT__dut__DOT__savestate_save_req_toggle_74a))));
    __VdlyMask__tb__DOT__dut__DOT__savestate_save_req_toggle_74a = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or213 
        = (IData)((0x0aU != (0x0aU & (IData)(vlSelfRef.tb__DOT__dut__DOT__gameSelect))));
    vlSelfRef.tb__DOT__dut__DOT__savestate_start = __Vdly__tb__DOT__dut__DOT__savestate_start;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load = __Vdly__tb__DOT__dut__DOT__savestate_load;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or170 
        = (1U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop29)) 
                 | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop27)));
    tb__DOT__dut__DOT__the_chip__DOT__or204 = ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_51) 
                                               | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or202));
    vlSelfRef.tb__DOT__dut__DOT__ce_2m_div = __Vdly__tb__DOT__dut__DOT__ce_2m_div;
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_36 
        = ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_34) 
           | (IData)(tb__DOT__dut__DOT__the_chip__DOT__or73));
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_30 
        = (1U & (~ ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_37) 
                    | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or0))));
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_39 
        = ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_37) 
           | (IData)(tb__DOT__dut__DOT__the_chip__DOT__or73));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or109 
        = (1U & (~ (((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_34) 
                     | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or0)) 
                    & ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_38) 
                       | (IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_55)))));
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_31 
        = (1U & (~ ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_38) 
                    | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or0))));
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_40 
        = ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_38) 
           | (IData)(tb__DOT__dut__DOT__the_chip__DOT__or73));
    tb__DOT__dut__DOT__the_chip__DOT__or110 = (1U & 
                                               (~ (
                                                   ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_26) 
                                                    | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or0)) 
                                                   & ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_37) 
                                                      | (IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_55)))));
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_35 
        = ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_26) 
           | (IData)(tb__DOT__dut__DOT__the_chip__DOT__or73));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop25 
        = __Vdly__tb__DOT__dut__DOT__the_chip__DOT__flop25;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr9 
        = __Vdly__tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr9;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or35 
        = (1U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop4)) 
                 | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop5)));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or41 
        = ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop4) 
           | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop5));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_52 
        = (1U & (~ ((~ (((IData)(vlSelfRef.tb__DOT__dut__DOT__gameSelect) 
                         >> 5U) | ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_3) 
                                   & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop4)))) 
                    | ((IData)(vlSelfRef.tb__DOT__dut__DOT__gameSelect) 
                       >> 1U))));
    vlSelfRef.tb__DOT__dut__DOT__s01__DOT__stage_1 = 1U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_save_done_meta_74a 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_save_done_toggle_sys;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_done_meta_74a 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_load_done_toggle_sys;
    __Vtemp_1[1U] = (((IData)((((QData)((IData)((((IData)(vlSelfRef.tb__DOT__dut__DOT__gameSelect) 
                                                  << 9U) 
                                                 | (((IData)(vlSelfRef.tb__DOT__dut__DOT__ce_2m_div) 
                                                     << 3U) 
                                                    | (((IData)(vlSelfRef.tb__DOT__dut__DOT__ce_2m) 
                                                        << 2U) 
                                                       | (((IData)(vlSelfRef.tb__DOT__dut__DOT__HBlank) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.tb__DOT__dut__DOT__VBlank_r))))))) 
                                << 0x00000018U) | (QData)((IData)(
                                                                  (((IData)(vlSelfRef.tb__DOT__dut__DOT__blank_hcnt) 
                                                                    << 0x0000000dU) 
                                                                   | (((IData)(vlSelfRef.tb__DOT__dut__DOT__blank_vcnt) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSelfRef.tb__DOT__dut__DOT__blank_old_hs) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelfRef.tb__DOT__dut__DOT__blank_old_vs)))))))) 
                      << 0x00000010U) | (IData)(((((QData)((IData)(
                                                                   (((IData)(vlSelfRef.tb__DOT__dut__DOT__colorOut) 
                                                                     << 9U) 
                                                                    | (IData)(vlSelfRef.tb__DOT__dut__DOT__p1pos)))) 
                                                   << 0x0000001bU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelfRef.tb__DOT__dut__DOT__p2pos) 
                                                                      << 0x00000012U) 
                                                                     | (((IData)(vlSelfRef.tb__DOT__dut__DOT__p1cap) 
                                                                         << 9U) 
                                                                        | (IData)(vlSelfRef.tb__DOT__dut__DOT__p2cap)))))) 
                                                 >> 0x00000020U)));
    __Vtemp_1[2U] = (((IData)((((QData)((IData)((((IData)(vlSelfRef.tb__DOT__dut__DOT__gameSelect) 
                                                  << 9U) 
                                                 | (((IData)(vlSelfRef.tb__DOT__dut__DOT__ce_2m_div) 
                                                     << 3U) 
                                                    | (((IData)(vlSelfRef.tb__DOT__dut__DOT__ce_2m) 
                                                        << 2U) 
                                                       | (((IData)(vlSelfRef.tb__DOT__dut__DOT__HBlank) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.tb__DOT__dut__DOT__VBlank_r))))))) 
                                << 0x00000018U) | (QData)((IData)(
                                                                  (((IData)(vlSelfRef.tb__DOT__dut__DOT__blank_hcnt) 
                                                                    << 0x0000000dU) 
                                                                   | (((IData)(vlSelfRef.tb__DOT__dut__DOT__blank_vcnt) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSelfRef.tb__DOT__dut__DOT__blank_old_hs) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelfRef.tb__DOT__dut__DOT__blank_old_vs)))))))) 
                      >> 0x00000010U) | ((IData)(((
                                                   ((QData)((IData)(
                                                                    (((IData)(vlSelfRef.tb__DOT__dut__DOT__gameSelect) 
                                                                      << 9U) 
                                                                     | (((IData)(vlSelfRef.tb__DOT__dut__DOT__ce_2m_div) 
                                                                         << 3U) 
                                                                        | (((IData)(vlSelfRef.tb__DOT__dut__DOT__ce_2m) 
                                                                            << 2U) 
                                                                           | (((IData)(vlSelfRef.tb__DOT__dut__DOT__HBlank) 
                                                                               << 1U) 
                                                                              | (IData)(vlSelfRef.tb__DOT__dut__DOT__VBlank_r))))))) 
                                                    << 0x00000018U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelfRef.tb__DOT__dut__DOT__blank_hcnt) 
                                                                       << 0x0000000dU) 
                                                                      | (((IData)(vlSelfRef.tb__DOT__dut__DOT__blank_vcnt) 
                                                                          << 2U) 
                                                                         | (((IData)(vlSelfRef.tb__DOT__dut__DOT__blank_old_hs) 
                                                                             << 1U) 
                                                                            | (IData)(vlSelfRef.tb__DOT__dut__DOT__blank_old_vs))))))) 
                                                  >> 0x00000020U)) 
                                         << 0x00000010U));
    vlSelfRef.tb__DOT__dut__DOT__top_state_out[0U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.tb__DOT__dut__DOT__colorOut) 
                                      << 9U) | (IData)(vlSelfRef.tb__DOT__dut__DOT__p1pos)))) 
                    << 0x0000001bU) | (QData)((IData)(
                                                      (((IData)(vlSelfRef.tb__DOT__dut__DOT__p2pos) 
                                                        << 0x00000012U) 
                                                       | (((IData)(vlSelfRef.tb__DOT__dut__DOT__p1cap) 
                                                           << 9U) 
                                                          | (IData)(vlSelfRef.tb__DOT__dut__DOT__p2cap)))))));
    vlSelfRef.tb__DOT__dut__DOT__top_state_out[1U] 
        = __Vtemp_1[1U];
    vlSelfRef.tb__DOT__dut__DOT__top_state_out[2U] 
        = __Vtemp_1[2U];
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or4 
        = ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_8) 
           | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop7));
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_63 
        = (1U & ((~ ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr10)) 
                     & (~ vlSelfRef.tb__DOT__dut__DOT__set_sys[2U]))) 
                 & ((~ vlSelfRef.tb__DOT__dut__DOT__set_sys[2U]) 
                    | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop7))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_29 
        = (1U & (~ ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_36) 
                    | (IData)(tb__DOT__dut__DOT__the_chip__DOT__or72))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or108 
        = (1U & (~ (((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_26) 
                     | (IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_55)) 
                    & ((~ (IData)(tb__DOT__dut__DOT__the_chip__DOT__or72)) 
                       | (IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_39)))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or105 
        = (1U & (~ (((~ (IData)(tb__DOT__dut__DOT__the_chip__DOT__or72)) 
                     | (IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_36)) 
                    & ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_40) 
                       | (IData)(tb__DOT__dut__DOT__the_chip__DOT__or72)))));
    tb__DOT__dut__DOT__the_chip__DOT__or107 = (1U & 
                                               (~ (
                                                   ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_34) 
                                                    | (IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_55)) 
                                                   & ((~ (IData)(tb__DOT__dut__DOT__the_chip__DOT__or72)) 
                                                      | (IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_40)))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_56 
        = ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_31) 
           | (IData)(tb__DOT__dut__DOT__the_chip__DOT__or110));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or106 
        = (1U & (~ (((~ (IData)(tb__DOT__dut__DOT__the_chip__DOT__or72)) 
                     | (IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_35)) 
                    & ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_39) 
                       | (IData)(tb__DOT__dut__DOT__the_chip__DOT__or72)))));
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_28 
        = (1U & (~ ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_35) 
                    | (IData)(tb__DOT__dut__DOT__the_chip__DOT__or72))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or68 
        = (1U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr9)) 
                 | (0x1fU != (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter2))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or74 
        = (1U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr9)) 
                 | (0x40U != (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter2))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or136 
        = (1U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr9)) 
                 | (0x18U != (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter2))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or142 
        = (1U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr9)) 
                 | ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_44) 
                    | (0x21U != (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter2)))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or145 
        = (1U & (~ ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop12) 
                    | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr9) 
                       | ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop15)) 
                          & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop20)))))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or70 
        = (1U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr9)) 
                 | (0x0dU != (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter2))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or124 
        = (1U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr9)) 
                 | (0x31U != (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter2))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or205 
        = (1U & ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_52) 
                 | (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or153))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or63 
        = (1U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr9)) 
                 | (0x3cU != (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter2))));
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[0U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v0;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[1U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v1;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[2U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v2;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[3U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v3;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[4U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v4;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[5U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v5;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[6U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v6;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[7U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v7;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[8U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v8;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[9U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v9;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[10U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v10;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[11U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v11;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[12U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v12;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[13U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v13;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[14U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v14;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[15U] 
        = __VdlyVal__tb__DOT__dut__DOT__savestate_load_buf_sys__v15;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter3 
        = __Vdly__tb__DOT__dut__DOT__the_chip__DOT__counter3;
    vlSelfRef.tb__DOT__dut__DOT__savestate_save_done_toggle_sys 
        = __Vdly__tb__DOT__dut__DOT__savestate_save_done_toggle_sys;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_60 
        = ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_29) 
           | (IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_30));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_57 
        = ((IData)(tb__DOT__dut__DOT__the_chip__DOT__or110) 
           | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or108));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_27 
        = ((IData)(tb__DOT__dut__DOT__the_chip__DOT__or107) 
           | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or106));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_32 
        = ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_28) 
           | (IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_30));
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_58 
        = ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or105) 
           | (IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_28));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or161 
        = (1U & ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop35) 
                 | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or70) 
                    | ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_51) 
                       | (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or153))))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or199 
        = ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_8) 
           | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or124) 
              & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or70)));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or158 
        = (1U & ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop35) 
                 | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or124) 
                    | ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or153)) 
                       | (IData)(tb__DOT__dut__DOT__the_chip__DOT__or204)))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_47 
        = (1U & (((((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr3)) 
                    | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop14)) 
                   & (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr5) 
                       | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop16)) 
                      & ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr6) 
                         | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop19)))) 
                  | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or205)) 
                 & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or205)) 
                    | ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr3)) 
                       | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop13)))));
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_48 
        = (1U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or205)) 
                 | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop18)));
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_54 
        = ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or205) 
           | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop18));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or88 
        = (1U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or63)) 
                 | (0x0083U != (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter3))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_49 
        = (1U & (~ ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop7)) 
                    | (0x0074U != (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter3)))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or177 
        = (1U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop7)) 
                 | (0x0075U != (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter3))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or181 
        = (1U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop7)) 
                 | (0x0015U != (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter3))));
    if ((0U != (IData)(vlSelfRef.tb__DOT__dut__DOT__savestate_load_delay_sys))) {
        __Vdly__tb__DOT__dut__DOT__savestate_load_delay_sys 
            = (7U & ((IData)(vlSelfRef.tb__DOT__dut__DOT__savestate_load_delay_sys) 
                     - (IData)(1U)));
        if ((1U == (IData)(vlSelfRef.tb__DOT__dut__DOT__savestate_load_delay_sys))) {
            vlSelfRef.tb__DOT__dut__DOT__savestate_load_done_toggle_sys 
                = (1U & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__savestate_load_done_toggle_sys)));
        }
    }
    if (((IData)(vlSelfRef.tb__DOT__dut__DOT__savestate_load_req_sys) 
         != (IData)(vlSelfRef.tb__DOT__dut__DOT__savestate_load_req_seen_sys))) {
        vlSelfRef.tb__DOT__dut__DOT__savestate_load_req_seen_sys 
            = vlSelfRef.tb__DOT__dut__DOT__savestate_load_req_sys;
        __Vdly__tb__DOT__dut__DOT__savestate_load_pending_sys = 1U;
        __Vdly__tb__DOT__dut__DOT__savestate_load_setup_delay_sys = 2U;
    } else if (vlSelfRef.tb__DOT__dut__DOT__savestate_load_pending_sys) {
        if ((0U != (IData)(vlSelfRef.tb__DOT__dut__DOT__savestate_load_setup_delay_sys))) {
            __Vdly__tb__DOT__dut__DOT__savestate_load_setup_delay_sys 
                = (3U & ((IData)(vlSelfRef.tb__DOT__dut__DOT__savestate_load_setup_delay_sys) 
                         - (IData)(1U)));
        } else {
            vlSelfRef.tb__DOT__dut__DOT__load_vid_toggle_sys 
                = (1U & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__load_vid_toggle_sys)));
            __Vdly__tb__DOT__dut__DOT__savestate_load_pending_sys = 0U;
            vlSelfRef.tb__DOT__dut__DOT__state_load_sys = 1U;
            vlSelfRef.tb__DOT__dut__DOT__chip_state_load_sys = 1U;
            __Vdly__tb__DOT__dut__DOT__savestate_load_delay_sys = 4U;
        }
    }
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or14 
        = (1U & ((~ ((0x00000010U & (IData)(vlSelfRef.tb__DOT__dut__DOT__gameSelect))
                      ? (0U == (IData)(vlSelfRef.tb__DOT__dut__DOT__p1cap))
                      : (0U == (IData)(vlSelfRef.tb__DOT__dut__DOT__p2cap)))) 
                 | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop6)));
    __Vtemp_2[0U] = (((((((((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop27) 
                            << 3U) | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop26) 
                                      << 2U)) | (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop25) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop24))) 
                         << 0x0000000cU) | (((((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop23) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop22) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop21) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop20))) 
                                            << 8U)) 
                       | ((((((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop19) 
                              << 3U) | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop18) 
                                        << 2U)) | (
                                                   ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop17) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop16))) 
                           << 4U) | ((((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop15) 
                                       << 3U) | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop14) 
                                                 << 2U)) 
                                     | (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop13) 
                                         << 1U) | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop12))))) 
                      << 0x00000010U) | (((((((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop11) 
                                              << 3U) 
                                             | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop10) 
                                                << 2U)) 
                                            | (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop9) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop8))) 
                                           << 0x0000000cU) 
                                          | (((((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop7) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop6) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop5) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop4))) 
                                             << 8U)) 
                                         | ((((((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop3) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop2) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop1) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop0))) 
                                             << 4U) 
                                            | ((((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__pulser1_delay) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__pulser0_delay) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__pulser1) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__pulser0))))));
    __Vtemp_2[1U] = (IData)((((QData)((IData)(((((((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr9) 
                                                   << 0x0000000dU) 
                                                  | (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc8_delay) 
                                                      << 0x0000000cU) 
                                                     | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr8) 
                                                        << 7U))) 
                                                 | (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc7_delay) 
                                                     << 6U) 
                                                    | (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr7) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc6_delay)))) 
                                                << 0x00000011U) 
                                               | ((((((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr6) 
                                                      << 4U) 
                                                     | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc5_delay) 
                                                        << 3U)) 
                                                    | (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr5) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc4_delay))) 
                                                   << 0x0000000bU) 
                                                  | ((((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr4) 
                                                       << 6U) 
                                                      | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc3_delay) 
                                                         << 5U)) 
                                                     | (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr3) 
                                                         << 3U) 
                                                        | (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc2_delay) 
                                                            << 2U) 
                                                           | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr2)))))))) 
                              << 0x00000020U) | (QData)((IData)(
                                                                ((((((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc1_delay) 
                                                                     << 0x0000000cU) 
                                                                    | (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr1) 
                                                                        << 7U) 
                                                                       | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc0_delay) 
                                                                          << 6U))) 
                                                                   | (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr0) 
                                                                       << 1U) 
                                                                      | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__sr0_delay))) 
                                                                  << 0x00000013U) 
                                                                 | ((((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__shift_reg0_spot) 
                                                                      << 0x0000000fU) 
                                                                     | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__shift_reg0) 
                                                                        << 9U)) 
                                                                    | ((((((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or8_delay) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop35) 
                                                                              << 3U) 
                                                                             | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop34) 
                                                                                << 2U))) 
                                                                         | (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop33) 
                                                                             << 1U) 
                                                                            | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop32))) 
                                                                        << 4U) 
                                                                       | ((((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop31) 
                                                                            << 3U) 
                                                                           | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop30) 
                                                                              << 2U)) 
                                                                          | (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop29) 
                                                                              << 1U) 
                                                                             | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop28))))))))));
    __Vtemp_2[2U] = (IData)(((((QData)((IData)(((((
                                                   ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr9) 
                                                    << 0x0000000dU) 
                                                   | (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc8_delay) 
                                                       << 0x0000000cU) 
                                                      | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr8) 
                                                         << 7U))) 
                                                  | (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc7_delay) 
                                                      << 6U) 
                                                     | (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr7) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc6_delay)))) 
                                                 << 0x00000011U) 
                                                | ((((((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr6) 
                                                       << 4U) 
                                                      | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc5_delay) 
                                                         << 3U)) 
                                                     | (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr5) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc4_delay))) 
                                                    << 0x0000000bU) 
                                                   | ((((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr4) 
                                                        << 6U) 
                                                       | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc3_delay) 
                                                          << 5U)) 
                                                      | (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr3) 
                                                          << 3U) 
                                                         | (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc2_delay) 
                                                             << 2U) 
                                                            | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr2)))))))) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 ((((((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc1_delay) 
                                                                      << 0x0000000cU) 
                                                                     | (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr1) 
                                                                         << 7U) 
                                                                        | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc0_delay) 
                                                                           << 6U))) 
                                                                    | (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr0) 
                                                                        << 1U) 
                                                                       | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__sr0_delay))) 
                                                                   << 0x00000013U) 
                                                                  | ((((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__shift_reg0_spot) 
                                                                       << 0x0000000fU) 
                                                                      | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__shift_reg0) 
                                                                         << 9U)) 
                                                                     | ((((((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or8_delay) 
                                                                            << 4U) 
                                                                           | (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop35) 
                                                                               << 3U) 
                                                                              | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop34) 
                                                                                << 2U))) 
                                                                          | (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop33) 
                                                                              << 1U) 
                                                                             | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop32))) 
                                                                         << 4U) 
                                                                        | ((((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop31) 
                                                                             << 3U) 
                                                                            | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop30) 
                                                                               << 2U)) 
                                                                           | (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop29) 
                                                                               << 1U) 
                                                                              | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop28))))))))) 
                             >> 0x00000020U));
    __Vtemp_3[3U] = (IData)((((QData)((IData)(((((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter5_jump) 
                                                 << 0x00000016U) 
                                                | (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter5_delay) 
                                                    << 0x00000015U) 
                                                   | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter5) 
                                                      << 0x0000000bU))) 
                                               | (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter4_jump) 
                                                   << 0x0000000aU) 
                                                  | (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter4_delay) 
                                                      << 9U) 
                                                     | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter4)))))) 
                              << 0x00000020U) | (QData)((IData)(
                                                                ((((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__c3_delay) 
                                                                   << 0x0000001fU) 
                                                                  | (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter3) 
                                                                      << 0x00000016U) 
                                                                     | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__c2_delay) 
                                                                        << 0x00000015U))) 
                                                                 | ((((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter2) 
                                                                      << 0x0000000dU) 
                                                                     | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__c1_delay) 
                                                                        << 0x0000000cU)) 
                                                                    | ((((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter1) 
                                                                         << 8U) 
                                                                        | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__c0_delay) 
                                                                           << 7U)) 
                                                                       | ((((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter0) 
                                                                            << 4U) 
                                                                           | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc10_delay) 
                                                                              << 3U)) 
                                                                          | (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr10) 
                                                                              << 1U) 
                                                                             | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc9_delay))))))))));
    __Vtemp_3[4U] = (IData)(((((QData)((IData)(((((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter5_jump) 
                                                  << 0x00000016U) 
                                                 | (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter5_delay) 
                                                     << 0x00000015U) 
                                                    | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter5) 
                                                       << 0x0000000bU))) 
                                                | (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter4_jump) 
                                                    << 0x0000000aU) 
                                                   | (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter4_delay) 
                                                       << 9U) 
                                                      | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter4)))))) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 ((((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__c3_delay) 
                                                                    << 0x0000001fU) 
                                                                   | (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter3) 
                                                                       << 0x00000016U) 
                                                                      | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__c2_delay) 
                                                                         << 0x00000015U))) 
                                                                  | ((((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter2) 
                                                                       << 0x0000000dU) 
                                                                      | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__c1_delay) 
                                                                         << 0x0000000cU)) 
                                                                     | ((((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter1) 
                                                                          << 8U) 
                                                                         | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__c0_delay) 
                                                                            << 7U)) 
                                                                        | ((((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter0) 
                                                                             << 4U) 
                                                                            | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc10_delay) 
                                                                               << 3U)) 
                                                                           | (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr10) 
                                                                               << 1U) 
                                                                              | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc9_delay))))))))) 
                             >> 0x00000020U));
    vlSelfRef.tb__DOT__dut__DOT__chip_state_out_padded[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.tb__DOT__dut__DOT__chip_state_out_padded[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.tb__DOT__dut__DOT__chip_state_out_padded[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.tb__DOT__dut__DOT__chip_state_out_padded[3U] 
        = __Vtemp_3[3U];
    vlSelfRef.tb__DOT__dut__DOT__chip_state_out_padded[4U] 
        = __Vtemp_3[4U];
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or48 
        = ((0U != (IData)(vlSelfRef.tb__DOT__dut__DOT__p1cap)) 
           | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop6));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or81 
        = ((IData)(tb__DOT__dut__DOT__the_chip__DOT__or107) 
           | ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_58) 
              | ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_30) 
                 | ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_31) 
                    | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_57)))));
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_62 
        = ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_27) 
           | (IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_58));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or152 
        = ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_8) 
           | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or161));
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_12 
        = (1U & (~ ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_8) 
                    | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or158))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or183 
        = (1U & ((~ ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_48) 
                     & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop27)) 
                        | (IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_54)))) 
                 | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop30)));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or192 
        = (1U & ((~ (((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop29) 
                      | (IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_54)) 
                     & ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_47) 
                        | (IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_48)))) 
                 | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop30)));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or15 
        = (1U & ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_6) 
                 | (~ ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or177)) 
                       | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_49)))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or16 
        = (1U & ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_6) 
                 | (~ ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or181)) 
                       | (~ ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop7)) 
                             | (0x0014U != (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter3))))))));
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_delay_sys 
        = __Vdly__tb__DOT__dut__DOT__savestate_load_delay_sys;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_pending_sys 
        = __Vdly__tb__DOT__dut__DOT__savestate_load_pending_sys;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_setup_delay_sys 
        = __Vdly__tb__DOT__dut__DOT__savestate_load_setup_delay_sys;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or21 
        = ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or14) 
           | ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_15) 
              | (IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_63)));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or28 
        = (1U & ((((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr9)) 
                   | ((0x27U != (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter2)) 
                      | ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_51) 
                         | ((IData)(vlSelfRef.tb__DOT__dut__DOT__gameSelect) 
                            >> 1U)))) & (((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr9)) 
                                          | ((0x16U 
                                              != (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter2)) 
                                             | (IData)(tb__DOT__dut__DOT__the_chip__DOT__or204))) 
                                         & ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or202) 
                                            | ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr9)) 
                                               | (0x30U 
                                                  != (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter2)))))) 
                 | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop34) 
                    | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or14) 
                       | ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_15) 
                          | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or205))))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or45 
        = ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_21) 
           | ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_63) 
              | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or48)));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or38 
        = (1U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr9)) 
                 | ((((0x28U != (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter2)) 
                      | ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_44) 
                         | (IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_51))) 
                     & ((0x0eU != (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter2)) 
                        | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or202))) 
                    | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop34) 
                       | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or48) 
                          | ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_21) 
                             | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or205)))))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_53 
        = ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or81)) 
           & (5U == (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter1)));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_59 
        = ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_62) 
           | ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_30) 
              | (IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_31)));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_61 
        = ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_62) 
           | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_60) 
              | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_56)));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or193 
        = (1U & (IData)(((0x0fU != (0x0fU & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr1))) 
                         | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or183))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or200 
        = (1U & (IData)(((0x0fU != (0x0fU & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr0))) 
                         | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or192))));
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_64 
        = (1U & (~ ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or16) 
                    & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or15))));
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_req_sys 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_load_req_meta_sys;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_0 
        = (1U & (~ ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop18) 
                    | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or28) 
                       | ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_8) 
                          | (~ ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop22) 
                                | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or191))))))));
    tb__DOT__dut__DOT__the_chip__DOT__or134 = (1U & 
                                               ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_8) 
                                                | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or38) 
                                                   | ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or191)) 
                                                      | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop18)))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or138 
        = (1U & ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or191) 
                 | ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_8) 
                    | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop18) 
                       | ((~ ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop22)) 
                              | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or191))) 
                          | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or38))))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or76 
        = ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or109) 
           | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_61));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or155 
        = (1U & ((~ ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_64) 
                     | ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or152)) 
                        | (IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_12)))) 
                 | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or170)));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or127 
        = (1U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or152)) 
                 | (~ (IData)(tb__DOT__dut__DOT__the_chip__DOT__or134))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or144 
        = (1U & ((~ (IData)(tb__DOT__dut__DOT__the_chip__DOT__or134)) 
                 | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_0) 
                    | (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or138)))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or149 
        = (1U & ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_0) 
                 | ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or138)) 
                    | (IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_12))));
    tb__DOT__dut__DOT__the_chip__DOT__or118 = (1U & 
                                               ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or138)) 
                                                | (~ 
                                                   ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or191)) 
                                                    | (IData)(tb__DOT__dut__DOT__the_chip__DOT__or134)))));
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_req_meta_sys 
        = vlSelfRef.tb__DOT__dut__DOT__savestate_load_req_toggle_74a;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or8 
        = (1U & ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_64) 
                 | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or127) 
                    | ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or213)) 
                       | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or149)))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or22 
        = (((~ (IData)((0U != (0x0cU & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr7))))) 
            & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_0)) 
           | ((~ (IData)((0U != (0x0cU & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr8))))) 
              & (IData)(tb__DOT__dut__DOT__the_chip__DOT__or118)));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or23 
        = (((~ (IData)((4U != (0x0cU & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr7))))) 
            & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_0)) 
           | ((~ (IData)((4U != (0x0cU & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr8))))) 
              & (IData)(tb__DOT__dut__DOT__the_chip__DOT__or118)));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or24 
        = (((~ (IData)((8U != (0x0cU & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr7))))) 
            & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_0)) 
           | ((~ (IData)((8U != (0x0cU & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr8))))) 
              & (IData)(tb__DOT__dut__DOT__the_chip__DOT__or118)));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or27 
        = (((~ (IData)(tb__DOT__dut__DOT__the_chip__DOT__or26)) 
            & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_0)) 
           | ((~ (IData)(tb__DOT__dut__DOT__the_chip__DOT__or29)) 
              & (IData)(tb__DOT__dut__DOT__the_chip__DOT__or118)));
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_req_toggle_74a 
        = (((IData)(__Vdly__tb__DOT__dut__DOT__savestate_load_req_toggle_74a) 
            & (IData)(__VdlyMask__tb__DOT__dut__DOT__savestate_load_req_toggle_74a)) 
           | ((IData)(vlSelfRef.tb__DOT__dut__DOT__savestate_load_req_toggle_74a) 
              & (~ (IData)(__VdlyMask__tb__DOT__dut__DOT__savestate_load_req_toggle_74a))));
    __VdlyMask__tb__DOT__dut__DOT__savestate_load_req_toggle_74a = 0U;
}

void Vtb___024root___eval_nba(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_nba\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x000000000000000fULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.tb__DOT__dut__DOT__icb__DOT__bridge_wr_data_in 
            = ((IData)(vlSelfRef.tb__DOT__dut__DOT__icb__DOT__endian_little_s)
                ? ((((0x0000ff00U & (vlSelfRef.tb__DOT__bridge_wr_data 
                                     << 8U)) | (0x000000ffU 
                                                & (vlSelfRef.tb__DOT__bridge_wr_data 
                                                   >> 8U))) 
                    << 0x00000010U) | ((0x0000ff00U 
                                        & (vlSelfRef.tb__DOT__bridge_wr_data 
                                           >> 8U)) 
                                       | (vlSelfRef.tb__DOT__bridge_wr_data 
                                          >> 0x00000018U)))
                : vlSelfRef.tb__DOT__bridge_wr_data);
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_23 
            = (1U & ((0U != vlSelfRef.tb__DOT__dut__DOT__reset_cnt) 
                     | (vlSelfRef.tb__DOT__cont1_key 
                        >> 0x0000000fU)));
        vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__and18 
            = (1U & ((~ (IData)((0x0fU == (0x0fU & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr4))))) 
                     & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_23))));
    }
}

void Vtb___024root___timing_ready(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___timing_ready\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h337ca4df__0.ready("@(posedge tb.clk_74a)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready("@(negedge tb.clk_74a)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h7428e5d8__0.ready("@(posedge tb.dut.the_chip.flop6)");
    }
}

void Vtb___024root___timing_resume(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___timing_resume\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h337ca4df__0.moveToResumeQueue(
                                                          "@(posedge tb.clk_74a)");
    vlSelfRef.__VtrigSched_h337ca5b3__0.moveToResumeQueue(
                                                          "@(negedge tb.clk_74a)");
    vlSelfRef.__VtrigSched_h7428e5d8__0.moveToResumeQueue(
                                                          "@(posedge tb.dut.the_chip.flop6)");
    vlSelfRef.__VtrigSched_h337ca4df__0.resume("@(posedge tb.clk_74a)");
    vlSelfRef.__VtrigSched_h337ca5b3__0.resume("@(negedge tb.clk_74a)");
    vlSelfRef.__VtrigSched_h7428e5d8__0.resume("@(posedge tb.dut.the_chip.flop6)");
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb___024root___eval_phase__act(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__act\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb___024root___eval_triggers_vec__act(vlSelf);
    Vtb___024root___timing_ready(vlSelf);
    Vtb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb___024root___timing_resume(vlSelf);
        Vtb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb___024root___eval_phase__inact(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__inact\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("/tmp/ay38500_sleep_tb.sv", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb___024root___eval_phase__nba(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__nba\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb___024root___eval_nba(vlSelf);
        Vtb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb___024root___eval(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/tmp/ay38500_sleep_tb.sv", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("/tmp/ay38500_sleep_tb.sv", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("/tmp/ay38500_sleep_tb.sv", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb___024root____VbeforeTrig_h337ca4df__0(Vtb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____VbeforeTrig_h337ca4df__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb__DOT__clk_74a)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clk_74a__0)) 
                                   << 1U) | ((IData)(vlSelfRef.tb__DOT__clk_74a) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clk_74a__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clk_74a__0 
        = vlSelfRef.tb__DOT__clk_74a;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h337ca4df__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca4df__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca4df__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca4df__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca4df__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca4df__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca4df__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca4df__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca4df__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb___024root____VbeforeTrig_h337ca5b3__0(Vtb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____VbeforeTrig_h337ca5b3__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb__DOT__clk_74a)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clk_74a__0)) 
                                   << 1U) | ((IData)(vlSelfRef.tb__DOT__clk_74a) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clk_74a__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clk_74a__0 
        = vlSelfRef.tb__DOT__clk_74a;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h337ca4df__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca4df__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca4df__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca4df__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca4df__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca4df__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca4df__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca4df__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca4df__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h337ca5b3__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb___024root____VbeforeTrig_h7428e5d8__0(Vtb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____VbeforeTrig_h7428e5d8__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop6) 
                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__dut__DOT__the_chip__DOT__flop6__0))) 
                                  << 2U)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__dut__DOT__the_chip__DOT__flop6__0 
        = vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop6;
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h7428e5d8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7428e5d8__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb___024root___eval_debug_assertions(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_debug_assertions\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
