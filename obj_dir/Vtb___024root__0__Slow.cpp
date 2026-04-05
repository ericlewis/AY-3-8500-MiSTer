// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

VL_ATTR_COLD void Vtb___024root___eval_static__TOP(Vtb___024root* vlSelf);
void Vtb___024root___timing_ready(Vtb___024root* vlSelf);

VL_ATTR_COLD void Vtb___024root___eval_static(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_static\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clk_74a__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__dut__DOT__the_chip__DOT__flop6__0 = 0U;
    Vtb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb___024root___eval_static__TOP(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_static__TOP\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb__DOT__clk_74a = 0U;
    vlSelfRef.tb__DOT__clk_74b = 0U;
    vlSelfRef.tb__DOT__bridge_addr = 0U;
    vlSelfRef.tb__DOT__bridge_wr_data = 0U;
    vlSelfRef.tb__DOT__bridge_wr = 0U;
    vlSelfRef.tb__DOT__cont1_key = 0U;
    vlSelfRef.tb__DOT__cont2_key = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_start_ack = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_start_busy = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_start_ok = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_ack = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_busy = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_ok = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_start_d = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_d = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_save_req_toggle_74a = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_save_req_meta_sys = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_save_req_sys = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_save_req_seen_sys = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_save_done_toggle_sys = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_save_done_meta_74a = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_save_done_sys = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_save_done_seen_74a = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_save_delay_sys = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_req_toggle_74a = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_req_meta_sys = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_req_sys = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_req_seen_sys = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_done_toggle_sys = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_done_meta_74a = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_done_sys = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_done_seen_74a = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_delay_sys = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_pending_sys = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_setup_delay_sys = 0U;
    vlSelfRef.tb__DOT__dut__DOT__apply_savestate_settings_74a = 0U;
    vlSelfRef.tb__DOT__dut__DOT__state_load_sys = 0U;
    vlSelfRef.tb__DOT__dut__DOT__chip_state_load_sys = 0U;
    vlSelfRef.tb__DOT__dut__DOT__load_vid_toggle_sys = 0U;
    vlSelfRef.tb__DOT__dut__DOT__ce_2m_div = 0U;
    vlSelfRef.tb__DOT__dut__DOT__ce_2m = 0U;
    vlSelfRef.tb__DOT__dut__DOT__reset_cnt = 0x00030d40U;
    vlSelfRef.tb__DOT__dut__DOT__p1pos = 0x0080U;
    vlSelfRef.tb__DOT__dut__DOT__p2pos = 0x0080U;
    vlSelfRef.tb__DOT__dut__DOT__p1cap = 0U;
    vlSelfRef.tb__DOT__dut__DOT__p2cap = 0U;
    vlSelfRef.tb__DOT__dut__DOT__paddle_old_hs = 0U;
    vlSelfRef.tb__DOT__dut__DOT__paddle_old_vs = 0U;
    vlSelfRef.tb__DOT__dut__DOT__blank_hcnt = 0U;
    vlSelfRef.tb__DOT__dut__DOT__blank_vcnt = 0U;
    vlSelfRef.tb__DOT__dut__DOT__blank_old_hs = 0U;
    vlSelfRef.tb__DOT__dut__DOT__blank_old_vs = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__pulser0 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__pulser1 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__pulser0_delay = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__pulser1_delay = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop0 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop1 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop2 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop3 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop4 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop5 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop6 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop7 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop8 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop9 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop10 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop11 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or8_delay = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop12 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop13 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop14 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop15 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop16 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop17 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop18 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop19 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop20 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop21 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop22 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop23 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop24 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop25 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop26 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop27 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop28 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop29 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop30 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop31 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop32 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop33 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop34 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop35 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__shift_reg0 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__shift_reg0_spot = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__sr0_delay = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr0 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc0_delay = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr1 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc1_delay = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr2 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc2_delay = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr3 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc3_delay = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr4 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc4_delay = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr5 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc5_delay = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr6 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc6_delay = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr7 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc7_delay = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr8 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc8_delay = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr9 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc9_delay = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr10 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__rc10_delay = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter0 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__c0_delay = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter1 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__c1_delay = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter2 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__c2_delay = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter3 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__c3_delay = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter4 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter4_delay = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter4_jump = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter5 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter5_delay = 0U;
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter5_jump = 0U;
}

VL_ATTR_COLD void Vtb___024root___eval_initial__TOP(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb__DOT__dut__DOT__savestate_wr_buf_74a[0U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[0U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_sys[0U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_meta_74a[0U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[0U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_meta_sys[0U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[0U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_wr_buf_74a[1U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[1U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_sys[1U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_meta_74a[1U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[1U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_meta_sys[1U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[1U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_wr_buf_74a[2U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[2U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_sys[2U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_meta_74a[2U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[2U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_meta_sys[2U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[2U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_wr_buf_74a[3U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[3U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_sys[3U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_meta_74a[3U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[3U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_meta_sys[3U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[3U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_wr_buf_74a[4U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[4U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_sys[4U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_meta_74a[4U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[4U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_meta_sys[4U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[4U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_wr_buf_74a[5U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[5U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_sys[5U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_meta_74a[5U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[5U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_meta_sys[5U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[5U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_wr_buf_74a[6U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[6U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_sys[6U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_meta_74a[6U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[6U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_meta_sys[6U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[6U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_wr_buf_74a[7U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[7U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_sys[7U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_meta_74a[7U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[7U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_meta_sys[7U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[7U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_wr_buf_74a[8U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[8U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_sys[8U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_meta_74a[8U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[8U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_meta_sys[8U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[8U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_wr_buf_74a[9U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[9U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_sys[9U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_meta_74a[9U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[9U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_meta_sys[9U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[9U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_wr_buf_74a[10U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[10U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_sys[10U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_meta_74a[10U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[10U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_meta_sys[10U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[10U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_wr_buf_74a[11U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[11U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_sys[11U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_meta_74a[11U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[11U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_meta_sys[11U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[11U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_wr_buf_74a[12U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[12U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_sys[12U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_meta_74a[12U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[12U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_meta_sys[12U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[12U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_wr_buf_74a[13U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[13U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_sys[13U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_meta_74a[13U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[13U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_meta_sys[13U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[13U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_wr_buf_74a[14U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[14U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_sys[14U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_meta_74a[14U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[14U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_meta_sys[14U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[14U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_wr_buf_74a[15U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_snap_74a[15U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_sys[15U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_meta_74a[15U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_rd_buf_74a[15U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_meta_sys[15U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load_buf_sys[15U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__settings[0U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__settings[1U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__settings[2U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__settings[3U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__settings[4U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__settings[5U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__settings[6U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__settings[7U] = 0U;
    vlSelfRef.tb__DOT__dut__DOT__reset_n = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_start = 0U;
    vlSelfRef.tb__DOT__dut__DOT__savestate_load = 0U;
}

VL_ATTR_COLD void Vtb___024root___eval_final(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_final\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb___024root___eval_phase__stl(Vtb___024root* vlSelf);

VL_ATTR_COLD void Vtb___024root___eval_settle(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_settle\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/tmp/ay38500_sleep_tb.sv", 3, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtb___024root___eval_triggers_vec__stl(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_triggers_vec__stl\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtb___024root___stl_sequent__TOP__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___stl_sequent__TOP__0\n"); );
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
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<5>/*159:0*/ __Vtemp_3;
    // Body
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or111 
        = ((0U == (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter1)) 
           | (6U == (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter1)));
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
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or68 
        = (1U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr9)) 
                 | (0x1fU != (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter2))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or35 
        = (1U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop4)) 
                 | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop5)));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or41 
        = ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop4) 
           | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop5));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or74 
        = (1U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr9)) 
                 | (0x40U != (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter2))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or136 
        = (1U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr9)) 
                 | (0x18U != (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter2))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or188 
        = (1U & ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr6) 
                 | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop32)));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or145 
        = (1U & (~ ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop12) 
                    | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr9) 
                       | ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop15)) 
                          & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop20)))))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_23 
        = (1U & ((0U != vlSelfRef.tb__DOT__dut__DOT__reset_cnt) 
                 | (vlSelfRef.tb__DOT__cont1_key >> 0x0000000fU)));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or63 
        = (1U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr9)) 
                 | (0x3cU != (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter2))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or213 
        = (IData)((0x0aU != (0x0aU & (IData)(vlSelfRef.tb__DOT__dut__DOT__gameSelect))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or170 
        = (1U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop29)) 
                 | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop27)));
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_63 
        = (1U & ((~ ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr10)) 
                     & (~ vlSelfRef.tb__DOT__dut__DOT__set_sys[2U]))) 
                 & ((~ vlSelfRef.tb__DOT__dut__DOT__set_sys[2U]) 
                    | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop7))));
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
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_49 
        = (1U & (~ ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop7)) 
                    | (0x0074U != (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter3)))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or177 
        = (1U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop7)) 
                 | (0x0075U != (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter3))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or181 
        = (1U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop7)) 
                 | (0x0015U != (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter3))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or70 
        = (1U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr9)) 
                 | (0x0dU != (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter2))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or124 
        = (1U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr9)) 
                 | (0x31U != (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter2))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or14 
        = (1U & ((~ ((0x00000010U & (IData)(vlSelfRef.tb__DOT__dut__DOT__gameSelect))
                      ? (0U == (IData)(vlSelfRef.tb__DOT__dut__DOT__p1cap))
                      : (0U == (IData)(vlSelfRef.tb__DOT__dut__DOT__p2cap)))) 
                 | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop6)));
    tb__DOT__dut__DOT__the_chip__DOT__or26 = (IData)(
                                                     (0x0cU 
                                                      != 
                                                      (0x0cU 
                                                       & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr7))));
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
    tb__DOT__dut__DOT__the_chip__DOT__or29 = (IData)(
                                                     (0x0cU 
                                                      != 
                                                      (0x0cU 
                                                       & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr8))));
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_9 
        = (1U & (~ (IData)((0x12U != (0x12U & (IData)(vlSelfRef.tb__DOT__dut__DOT__gameSelect))))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or153 
        = (IData)((0x40U != (0x42U & (IData)(vlSelfRef.tb__DOT__dut__DOT__gameSelect))));
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_44 
        = (1U & (~ (IData)((0x10U != (0x12U & (IData)(vlSelfRef.tb__DOT__dut__DOT__gameSelect))))));
    tb__DOT__dut__DOT__the_chip__DOT__or72 = (1U & 
                                              (((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop23)) 
                                                & (~ 
                                                   ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr1) 
                                                    >> 1U))) 
                                               | ((~ 
                                                   ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr0) 
                                                    >> 1U)) 
                                                  & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop23))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or191 
        = (IData)((8U != (0x0aU & (IData)(vlSelfRef.tb__DOT__dut__DOT__gameSelect))));
    tb__DOT__dut__DOT__the_chip__DOT__or73 = (1U & 
                                              (((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop23)) 
                                                & (~ 
                                                   ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr1) 
                                                    >> 2U))) 
                                               | ((~ 
                                                   ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr0) 
                                                    >> 2U)) 
                                                  & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop23))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or117 
        = (1U & (((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop23)) 
                  & (~ ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr1) 
                        >> 3U))) | ((~ ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr0) 
                                        >> 3U)) & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop23))));
    tb__DOT__dut__DOT__the_chip__DOT__or112 = (1U & 
                                               (((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop23)) 
                                                 & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr1))) 
                                                | ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr0)) 
                                                   & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop23))));
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_3 
        = (1U & (~ (IData)((0x42U != (0x42U & (IData)(vlSelfRef.tb__DOT__dut__DOT__gameSelect))))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__and18 
        = (1U & ((~ (IData)((0x0fU == (0x0fU & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr4))))) 
                 & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_23))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or88 
        = (1U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or63)) 
                 | (0x0083U != (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter3))));
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_15 
        = (1U & (~ ((~ ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr7) 
                        & ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr7) 
                           >> 1U))) | (IData)(tb__DOT__dut__DOT__the_chip__DOT__or26))));
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_21 
        = (1U & (~ ((~ ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr8) 
                        & ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr8) 
                           >> 1U))) | (IData)(tb__DOT__dut__DOT__the_chip__DOT__or29))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or142 
        = (1U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr9)) 
                 | ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_44) 
                    | (0x21U != (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter2)))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or202 
        = (1U & ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_44) 
                 | (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or191))));
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_55 
        = (1U & ((~ (IData)(tb__DOT__dut__DOT__the_chip__DOT__or73)) 
                 | (IData)(tb__DOT__dut__DOT__the_chip__DOT__or72)));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or0 
        = (1U & ((~ (IData)(tb__DOT__dut__DOT__the_chip__DOT__or72)) 
                 | (~ (IData)(tb__DOT__dut__DOT__the_chip__DOT__or73))));
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
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_6 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop2)) 
                        | ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop1)) 
                           | (IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_9)))) 
                    | (IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_3))));
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_8 
        = (1U & (~ ((~ ((0x0109U != (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter5)) 
                        | ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop0)) 
                           | (IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_9)))) 
                    | (IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_3))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_52 
        = (1U & (~ ((~ (((IData)(vlSelfRef.tb__DOT__dut__DOT__gameSelect) 
                         >> 5U) | ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_3) 
                                   & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop4)))) 
                    | ((IData)(vlSelfRef.tb__DOT__dut__DOT__gameSelect) 
                       >> 1U))));
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_51 
        = (1U & (~ ((~ ((IData)(vlSelfRef.tb__DOT__dut__DOT__gameSelect) 
                        | ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_3) 
                           & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop17)))) 
                    | ((IData)(vlSelfRef.tb__DOT__dut__DOT__gameSelect) 
                       >> 1U))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or21 
        = ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or14) 
           | ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_15) 
              | (IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_63)));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or45 
        = ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_21) 
           | ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_63) 
              | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or48)));
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
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or15 
        = (1U & ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_6) 
                 | (~ ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or177)) 
                       | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_49)))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or16 
        = (1U & ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_6) 
                 | (~ ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or181)) 
                       | (~ ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop7)) 
                             | (0x0014U != (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__counter3))))))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or4 
        = ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_8) 
           | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop7));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or199 
        = ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_8) 
           | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or124) 
              & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or70)));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or205 
        = (1U & ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_52) 
                 | (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or153))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or161 
        = (1U & ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop35) 
                 | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or70) 
                    | ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_51) 
                       | (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or153))))));
    tb__DOT__dut__DOT__the_chip__DOT__or204 = ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_51) 
                                               | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or202));
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
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_64 
        = (1U & (~ ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or16) 
                    & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or15))));
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
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or152 
        = ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_8) 
           | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or161));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or158 
        = (1U & ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop35) 
                 | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or124) 
                    | ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or153)) 
                       | (IData)(tb__DOT__dut__DOT__the_chip__DOT__or204)))));
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
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_12 
        = (1U & (~ ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_8) 
                    | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or158))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_0 
        = (1U & (~ ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop18) 
                    | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or28) 
                       | ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_8) 
                          | (~ ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__flop22) 
                                | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or191))))))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or81 
        = ((IData)(tb__DOT__dut__DOT__the_chip__DOT__or107) 
           | ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_58) 
              | ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_30) 
                 | ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_31) 
                    | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_57)))));
    tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_62 
        = ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_27) 
           | (IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_58));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or193 
        = (1U & (IData)(((0x0fU != (0x0fU & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr1))) 
                         | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or183))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or200 
        = (1U & (IData)(((0x0fU != (0x0fU & (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr0))) 
                         | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or192))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or127 
        = (1U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or152)) 
                 | (~ (IData)(tb__DOT__dut__DOT__the_chip__DOT__or134))));
    tb__DOT__dut__DOT__the_chip__DOT__or118 = (1U & 
                                               ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or138)) 
                                                | (~ 
                                                   ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or191)) 
                                                    | (IData)(tb__DOT__dut__DOT__the_chip__DOT__or134)))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or155 
        = (1U & ((~ ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_64) 
                     | ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or152)) 
                        | (IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_12)))) 
                 | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or170)));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or144 
        = (1U & ((~ (IData)(tb__DOT__dut__DOT__the_chip__DOT__or134)) 
                 | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_0) 
                    | (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or138)))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or149 
        = (1U & ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_0) 
                 | ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or138)) 
                    | (IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_12))));
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
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or8 
        = (1U & ((IData)(tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_64) 
                 | ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or127) 
                    | ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or213)) 
                       | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or149)))));
    vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or76 
        = ((IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT__or109) 
           | (IData)(vlSelfRef.tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_61));
}

VL_ATTR_COLD void Vtb___024root___eval_stl(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_stl\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb___024root___eval_phase__stl(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__stl\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb.clk_74a)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb.clk_74a)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge tb.dut.the_chip.flop6)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb___024root___ctor_var_reset(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___ctor_var_reset\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb__DOT__first_save[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12848301359726159457ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb__DOT__second_save[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4838132937943214085ull);
    }
    vlSelf->tb__DOT__dut__DOT__reset_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2982549981887312224ull);
    vlSelf->tb__DOT__dut__DOT__pll_core_locked_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9296947402486107538ull);
    vlSelf->tb__DOT__dut__DOT__savestate_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16754028543332783537ull);
    vlSelf->tb__DOT__dut__DOT__savestate_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1318821197152621541ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__savestate_wr_buf_74a[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5218698593125190469ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__savestate_load_snap_74a[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8138714254084978211ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__savestate_rd_buf_sys[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7278193410415734355ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__savestate_rd_meta_74a[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2556378512274786437ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__savestate_rd_buf_74a[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12369188487507325017ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__savestate_load_meta_sys[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3801595748640268653ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__savestate_load_buf_sys[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 541335798340855599ull);
    }
    VL_SCOPED_RAND_RESET_W(96, vlSelf->tb__DOT__dut__DOT__top_state_out, __VscopeHash, 15531539040381811689ull);
    VL_SCOPED_RAND_RESET_W(160, vlSelf->tb__DOT__dut__DOT__chip_state_out_padded, __VscopeHash, 9572043704502963770ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__settings[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1639647870939221229ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__set_sys[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5229684366353842342ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__set_meta[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9394528728068624315ull);
    }
    vlSelf->tb__DOT__dut__DOT__gameSelect = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6611401773748139129ull);
    vlSelf->tb__DOT__dut__DOT__colorOut = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 4630742892004419938ull);
    vlSelf->tb__DOT__dut__DOT__HBlank = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17366517068879052954ull);
    vlSelf->tb__DOT__dut__DOT__VBlank_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8592132213204133964ull);
    vlSelf->tb__DOT__dut__DOT__s01__DOT__stage_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6665987570697573211ull);
    vlSelf->tb__DOT__dut__DOT__s01__DOT__stage_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12709652610586675526ull);
    vlSelf->tb__DOT__dut__DOT__icb__DOT__bridge_wr_data_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13775038514569103250ull);
    vlSelf->tb__DOT__dut__DOT__icb__DOT__endian_little_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15181856010105741286ull);
    vlSelf->tb__DOT__dut__DOT__icb__DOT__host_20 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14887486244682200186ull);
    vlSelf->tb__DOT__dut__DOT__icb__DOT__host_cmd_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 513909167558012903ull);
    vlSelf->tb__DOT__dut__DOT__icb__DOT__host_cmd_startval = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9144243531773974246ull);
    vlSelf->tb__DOT__dut__DOT__icb__DOT__host_cmd = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6734480202984488439ull);
    vlSelf->tb__DOT__dut__DOT__icb__DOT__hstate = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8767156086920212660ull);
    vlSelf->tb__DOT__dut__DOT__icb__DOT__s01__DOT__stage_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15121153555239950064ull);
    vlSelf->tb__DOT__dut__DOT__icb__DOT__s01__DOT__stage_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15602388822306669200ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__and18 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4865872738150022362ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12471126481057780932ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16076548206128221343ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2844871013638918880ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or14 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12023980827379534850ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or15 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15619548631679721947ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or16 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18378523545530081263ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or21 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5359018407844234314ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or22 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15554350940201764500ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or23 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17976257479057717300ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or24 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8521043390178646555ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or27 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12254116502492942503ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or28 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2285312895839514814ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or35 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4912033987287416073ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or38 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1115915977927417348ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or41 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1977483332945607731ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or45 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12199269654344890083ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or48 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8403151644984776995ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or63 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17519575890487279678ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or68 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17146766083289449933ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or70 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4654577859579127621ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or74 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6381375365921821600ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or76 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2899475885033864436ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or81 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6677537277206122010ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or88 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4285213401513579543ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or105 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9228774244202690625ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or106 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15136834900881282345ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or108 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16279443000108183185ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or109 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7726600196455465401ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or111 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2438382917571434546ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or117 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 365946889706369388ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or124 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9726675428510903864ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or127 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2586488708356316774ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or136 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15926477992725022041ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or138 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14611645268413123515ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or142 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10674773620664034953ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or144 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14654034366228143445ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or145 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18290717040906100761ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or149 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4716415285961779696ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or152 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 991863414973827993ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or153 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3003987527517724098ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or155 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17153790571276287527ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or158 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3854045132950879876ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or161 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13492008542334543016ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or170 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14254196951457957588ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or177 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4444201121747357550ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or181 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7676706640504858188ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or183 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7795865095383035382ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or188 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13396051394998030832ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or191 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12580438217838404843ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or192 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6822104612718857459ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or193 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2245949196369720072ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or199 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 975136607670001729ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or200 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15436310102506891136ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or202 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1302926873517763895ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or205 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11427306038302598673ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT__or213 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16211879160757821074ull);
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_0 = 0;
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_6 = 0;
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_23 = 0;
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_27 = 0;
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_29 = 0;
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_32 = 0;
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_47 = 0;
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_49 = 0;
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_52 = 0;
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_53 = 0;
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_56 = 0;
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_57 = 0;
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_59 = 0;
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_60 = 0;
    vlSelf->tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_61 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__clk_74a__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__dut__DOT__the_chip__DOT__flop6__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
