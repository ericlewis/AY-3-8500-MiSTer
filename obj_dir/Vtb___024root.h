// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB___024ROOT_H_
#define VERILATED_VTB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb__DOT__clk_74a;
        CData/*0:0*/ tb__DOT__clk_74b;
        CData/*0:0*/ tb__DOT__bridge_wr;
        CData/*0:0*/ tb__DOT__dut__DOT__reset_n;
        CData/*0:0*/ tb__DOT__dut__DOT__pll_core_locked_s;
        CData/*0:0*/ tb__DOT__dut__DOT__savestate_start;
        CData/*0:0*/ tb__DOT__dut__DOT__savestate_load;
        CData/*0:0*/ tb__DOT__dut__DOT__savestate_start_ack;
        CData/*0:0*/ tb__DOT__dut__DOT__savestate_start_busy;
        CData/*0:0*/ tb__DOT__dut__DOT__savestate_start_ok;
        CData/*0:0*/ tb__DOT__dut__DOT__savestate_load_ack;
        CData/*0:0*/ tb__DOT__dut__DOT__savestate_load_busy;
        CData/*0:0*/ tb__DOT__dut__DOT__savestate_load_ok;
        CData/*0:0*/ tb__DOT__dut__DOT__savestate_start_d;
        CData/*0:0*/ tb__DOT__dut__DOT__savestate_load_d;
        CData/*0:0*/ tb__DOT__dut__DOT__savestate_save_req_toggle_74a;
        CData/*0:0*/ tb__DOT__dut__DOT__savestate_save_req_meta_sys;
        CData/*0:0*/ tb__DOT__dut__DOT__savestate_save_req_sys;
        CData/*0:0*/ tb__DOT__dut__DOT__savestate_save_req_seen_sys;
        CData/*0:0*/ tb__DOT__dut__DOT__savestate_save_done_toggle_sys;
        CData/*0:0*/ tb__DOT__dut__DOT__savestate_save_done_meta_74a;
        CData/*0:0*/ tb__DOT__dut__DOT__savestate_save_done_sys;
        CData/*0:0*/ tb__DOT__dut__DOT__savestate_save_done_seen_74a;
        CData/*2:0*/ tb__DOT__dut__DOT__savestate_save_delay_sys;
        CData/*0:0*/ tb__DOT__dut__DOT__savestate_load_req_toggle_74a;
        CData/*0:0*/ tb__DOT__dut__DOT__savestate_load_req_meta_sys;
        CData/*0:0*/ tb__DOT__dut__DOT__savestate_load_req_sys;
        CData/*0:0*/ tb__DOT__dut__DOT__savestate_load_req_seen_sys;
        CData/*0:0*/ tb__DOT__dut__DOT__savestate_load_done_toggle_sys;
        CData/*0:0*/ tb__DOT__dut__DOT__savestate_load_done_meta_74a;
        CData/*0:0*/ tb__DOT__dut__DOT__savestate_load_done_sys;
        CData/*0:0*/ tb__DOT__dut__DOT__savestate_load_done_seen_74a;
        CData/*2:0*/ tb__DOT__dut__DOT__savestate_load_delay_sys;
        CData/*0:0*/ tb__DOT__dut__DOT__savestate_load_pending_sys;
        CData/*1:0*/ tb__DOT__dut__DOT__savestate_load_setup_delay_sys;
        CData/*0:0*/ tb__DOT__dut__DOT__apply_savestate_settings_74a;
        CData/*0:0*/ tb__DOT__dut__DOT__state_load_sys;
        CData/*0:0*/ tb__DOT__dut__DOT__chip_state_load_sys;
        CData/*0:0*/ tb__DOT__dut__DOT__load_vid_toggle_sys;
        CData/*5:0*/ tb__DOT__dut__DOT__ce_2m_div;
        CData/*0:0*/ tb__DOT__dut__DOT__ce_2m;
        CData/*7:0*/ tb__DOT__dut__DOT__gameSelect;
        CData/*0:0*/ tb__DOT__dut__DOT__paddle_old_hs;
        CData/*0:0*/ tb__DOT__dut__DOT__paddle_old_vs;
        CData/*0:0*/ tb__DOT__dut__DOT__HBlank;
        CData/*0:0*/ tb__DOT__dut__DOT__VBlank_r;
        CData/*0:0*/ tb__DOT__dut__DOT__blank_old_hs;
        CData/*0:0*/ tb__DOT__dut__DOT__blank_old_vs;
        CData/*0:0*/ tb__DOT__dut__DOT__s01__DOT__stage_1;
        CData/*0:0*/ tb__DOT__dut__DOT__s01__DOT__stage_2;
        CData/*0:0*/ tb__DOT__dut__DOT__icb__DOT__endian_little_s;
        CData/*0:0*/ tb__DOT__dut__DOT__icb__DOT__host_cmd_start;
        CData/*3:0*/ tb__DOT__dut__DOT__icb__DOT__hstate;
        CData/*0:0*/ tb__DOT__dut__DOT__icb__DOT__s01__DOT__stage_1;
        CData/*0:0*/ tb__DOT__dut__DOT__icb__DOT__s01__DOT__stage_2;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__pulser0;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__pulser1;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__pulser0_delay;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__pulser1_delay;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__flop0;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__flop1;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__flop2;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__flop3;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__flop4;
    };
    struct {
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__flop5;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__flop6;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__flop7;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__flop8;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__flop9;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__flop10;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__flop11;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or8_delay;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__flop12;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__flop13;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__flop14;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__flop15;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__flop16;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__flop17;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__flop18;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__flop19;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__flop20;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__flop21;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__flop22;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__flop23;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__flop24;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__flop25;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__flop26;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__flop27;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__flop28;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__flop29;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__flop30;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__flop31;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__flop32;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__flop33;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__flop34;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__flop35;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__and18;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or0;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or4;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or8;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or14;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or15;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or16;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or21;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or22;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or23;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or24;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or27;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or28;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or35;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or38;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or41;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or45;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or48;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or63;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or68;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or70;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or74;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or76;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or81;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or88;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or105;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or106;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or108;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or109;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or111;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or117;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or124;
    };
    struct {
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or127;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or136;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or138;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or142;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or144;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or145;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or149;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or152;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or153;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or155;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or158;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or161;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or170;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or177;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or181;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or183;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or188;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or191;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or192;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or193;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or199;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or200;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or202;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or205;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__or213;
        CData/*5:0*/ tb__DOT__dut__DOT__the_chip__DOT__shift_reg0;
        CData/*3:0*/ tb__DOT__dut__DOT__the_chip__DOT__shift_reg0_spot;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__sr0_delay;
        CData/*4:0*/ tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr0;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__rc0_delay;
        CData/*4:0*/ tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr1;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__rc1_delay;
        CData/*1:0*/ tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr2;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__rc2_delay;
        CData/*1:0*/ tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr3;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__rc3_delay;
        CData/*4:0*/ tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr4;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__rc4_delay;
        CData/*1:0*/ tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr5;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__rc5_delay;
        CData/*1:0*/ tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr6;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__rc6_delay;
        CData/*4:0*/ tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr7;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__rc7_delay;
        CData/*4:0*/ tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr8;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__rc8_delay;
        CData/*1:0*/ tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr9;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__rc9_delay;
        CData/*1:0*/ tb__DOT__dut__DOT__the_chip__DOT__ripple_ctr10;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__rc10_delay;
        CData/*2:0*/ tb__DOT__dut__DOT__the_chip__DOT__counter0;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__c0_delay;
        CData/*3:0*/ tb__DOT__dut__DOT__the_chip__DOT__counter1;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__c1_delay;
        CData/*7:0*/ tb__DOT__dut__DOT__the_chip__DOT__counter2;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__c2_delay;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__c3_delay;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__counter4_delay;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__counter4_jump;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__counter5_delay;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT__counter5_jump;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_0;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_6;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_23;
    };
    struct {
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_27;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_29;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_32;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_47;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_49;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_52;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_53;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_56;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_57;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_59;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_60;
        CData/*0:0*/ tb__DOT__dut__DOT__the_chip__DOT____VdfgRegularize_he732239a_0_61;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__clk_74a__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__dut__DOT__the_chip__DOT__flop6__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VinactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        SData/*8:0*/ tb__DOT__dut__DOT__p1pos;
        SData/*8:0*/ tb__DOT__dut__DOT__p2pos;
        SData/*8:0*/ tb__DOT__dut__DOT__p1cap;
        SData/*8:0*/ tb__DOT__dut__DOT__p2cap;
        SData/*11:0*/ tb__DOT__dut__DOT__colorOut;
        SData/*10:0*/ tb__DOT__dut__DOT__blank_hcnt;
        SData/*10:0*/ tb__DOT__dut__DOT__blank_vcnt;
        SData/*15:0*/ tb__DOT__dut__DOT__icb__DOT__host_cmd_startval;
        SData/*15:0*/ tb__DOT__dut__DOT__icb__DOT__host_cmd;
        SData/*8:0*/ tb__DOT__dut__DOT__the_chip__DOT__counter3;
        SData/*8:0*/ tb__DOT__dut__DOT__the_chip__DOT__counter4;
        SData/*9:0*/ tb__DOT__dut__DOT__the_chip__DOT__counter5;
        IData/*31:0*/ tb__DOT__bridge_addr;
        IData/*31:0*/ tb__DOT__bridge_wr_data;
        IData/*31:0*/ tb__DOT__cont1_key;
        IData/*31:0*/ tb__DOT__cont2_key;
        VlWide<3>/*95:0*/ tb__DOT__dut__DOT__top_state_out;
        VlWide<5>/*159:0*/ tb__DOT__dut__DOT__chip_state_out_padded;
        IData/*19:0*/ tb__DOT__dut__DOT__reset_cnt;
        IData/*31:0*/ tb__DOT__dut__DOT__icb__DOT__bridge_wr_data_in;
        IData/*31:0*/ tb__DOT__dut__DOT__icb__DOT__host_20;
        IData/*31:0*/ __VactIterCount;
        IData/*31:0*/ __VinactIterCount;
        IData/*31:0*/ __Vi;
        VlUnpacked<IData/*31:0*/, 16> tb__DOT__first_save;
        VlUnpacked<IData/*31:0*/, 16> tb__DOT__second_save;
        VlUnpacked<IData/*31:0*/, 16> tb__DOT__dut__DOT__savestate_wr_buf_74a;
        VlUnpacked<IData/*31:0*/, 16> tb__DOT__dut__DOT__savestate_load_snap_74a;
        VlUnpacked<IData/*31:0*/, 16> tb__DOT__dut__DOT__savestate_rd_buf_sys;
        VlUnpacked<IData/*31:0*/, 16> tb__DOT__dut__DOT__savestate_rd_meta_74a;
        VlUnpacked<IData/*31:0*/, 16> tb__DOT__dut__DOT__savestate_rd_buf_74a;
        VlUnpacked<IData/*31:0*/, 16> tb__DOT__dut__DOT__savestate_load_meta_sys;
        VlUnpacked<IData/*31:0*/, 16> tb__DOT__dut__DOT__savestate_load_buf_sys;
        VlUnpacked<IData/*31:0*/, 8> tb__DOT__dut__DOT__settings;
        VlUnpacked<IData/*31:0*/, 8> tb__DOT__dut__DOT__set_sys;
        VlUnpacked<IData/*31:0*/, 8> tb__DOT__dut__DOT__set_meta;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h337ca4df__0;
    VlTriggerScheduler __VtrigSched_h337ca5b3__0;
    VlTriggerScheduler __VtrigSched_h7428e5d8__0;

    // INTERNAL VARIABLES
    Vtb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb___024root(Vtb__Syms* symsp, const char* namep);
    ~Vtb___024root();
    VL_UNCOPYABLE(Vtb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
