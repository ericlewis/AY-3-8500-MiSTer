//============================================================================
//  AY-3-8500 (Pong) for Analogue Pocket
//  Copyright (C) 2026 Eric Lewis — GPL-3.0-or-later
//============================================================================
`default_nettype none

module core_top (
input   wire            clk_74a, clk_74b,
inout   wire    [7:0]   cart_tran_bank2,  output wire cart_tran_bank2_dir,
inout   wire    [7:0]   cart_tran_bank3,  output wire cart_tran_bank3_dir,
inout   wire    [7:0]   cart_tran_bank1,  output wire cart_tran_bank1_dir,
inout   wire    [7:4]   cart_tran_bank0,  output wire cart_tran_bank0_dir,
inout   wire            cart_tran_pin30,  output wire cart_tran_pin30_dir,
output  wire            cart_pin30_pwroff_reset,
inout   wire            cart_tran_pin31,  output wire cart_tran_pin31_dir,
input   wire            port_ir_rx,       output wire port_ir_tx, port_ir_rx_disable,
inout   wire            port_tran_si,     output wire port_tran_si_dir,
inout   wire            port_tran_so,     output wire port_tran_so_dir,
inout   wire            port_tran_sck,    output wire port_tran_sck_dir,
inout   wire            port_tran_sd,     output wire port_tran_sd_dir,
output  wire [21:16] cram0_a, output wire cram0_clk, cram0_adv_n, cram0_cre, cram0_ce0_n, cram0_ce1_n, cram0_oe_n, cram0_we_n, cram0_ub_n, cram0_lb_n,
inout   wire [15:0]  cram0_dq, input wire cram0_wait,
output  wire [21:16] cram1_a, output wire cram1_clk, cram1_adv_n, cram1_cre, cram1_ce0_n, cram1_ce1_n, cram1_oe_n, cram1_we_n, cram1_ub_n, cram1_lb_n,
inout   wire [15:0]  cram1_dq, input wire cram1_wait,
output  wire [12:0] dram_a, output wire [1:0] dram_ba, dram_dqm,
inout   wire [15:0] dram_dq,
output  wire dram_clk, dram_cke, dram_ras_n, dram_cas_n, dram_we_n,
output  wire [16:0] sram_a, output wire sram_oe_n, sram_we_n, sram_ub_n, sram_lb_n,
inout   wire [15:0] sram_dq,
input   wire vblank,
output  wire dbg_tx, input wire dbg_rx, output wire user1, input wire user2,
inout   wire aux_sda, output wire aux_scl, output wire vpll_feed,
output  wire [23:0] video_rgb,
output  wire video_rgb_clock, video_rgb_clock_90, video_de, video_skip, video_vs, video_hs,
output  wire audio_mclk, audio_dac, audio_lrck, input wire audio_adc,
output  wire bridge_endian_little,
input   wire [31:0] bridge_addr, bridge_wr_data,
input   wire bridge_rd, bridge_wr,
output  reg  [31:0] bridge_rd_data,
input   wire [31:0] cont1_key, cont2_key, cont3_key, cont4_key,
input   wire [31:0] cont1_joy, cont2_joy, cont3_joy, cont4_joy,
input   wire [15:0] cont1_trig, cont2_trig, cont3_trig, cont4_trig
);

// ======== Tie-offs ========
assign port_ir_tx=0; assign port_ir_rx_disable=1; assign bridge_endian_little=0;
assign cart_tran_bank3=8'hzz; assign cart_tran_bank3_dir=0;
assign cart_tran_bank2=8'hzz; assign cart_tran_bank2_dir=0;
assign cart_tran_bank1=8'hzz; assign cart_tran_bank1_dir=0;
assign cart_tran_bank0=4'hf;  assign cart_tran_bank0_dir=1;
assign cart_tran_pin30=0;     assign cart_tran_pin30_dir=1'bz;
assign cart_pin30_pwroff_reset=0;
assign cart_tran_pin31=1'bz;  assign cart_tran_pin31_dir=0;
assign port_tran_so=1'bz; assign port_tran_so_dir=0;
assign port_tran_si=1'bz; assign port_tran_si_dir=0;
assign port_tran_sck=1'bz; assign port_tran_sck_dir=0;
assign port_tran_sd=1'bz; assign port_tran_sd_dir=0;
assign cram0_a=0; assign cram0_dq={16{1'bZ}}; assign cram0_clk=0;
assign cram0_adv_n=1; assign cram0_cre=0; assign cram0_ce0_n=1; assign cram0_ce1_n=1;
assign cram0_oe_n=1; assign cram0_we_n=1; assign cram0_ub_n=1; assign cram0_lb_n=1;
assign cram1_a=0; assign cram1_dq={16{1'bZ}}; assign cram1_clk=0;
assign cram1_adv_n=1; assign cram1_cre=0; assign cram1_ce0_n=1; assign cram1_ce1_n=1;
assign cram1_oe_n=1; assign cram1_we_n=1; assign cram1_ub_n=1; assign cram1_lb_n=1;
assign dram_a=0; assign dram_ba=0; assign dram_dq={16{1'bZ}};
assign dram_dqm=0; assign dram_clk=0; assign dram_cke=0;
assign dram_ras_n=1; assign dram_cas_n=1; assign dram_we_n=1;
assign sram_a=0; assign sram_dq={16{1'bZ}};
assign sram_oe_n=1; assign sram_we_n=1; assign sram_ub_n=1; assign sram_lb_n=1;
assign dbg_tx=1'bZ; assign user1=1'bZ; assign aux_scl=1'bZ; assign vpll_feed=1'bZ;

localparam integer SAVESTATE_WORDS = 16;
localparam [31:0] SAVESTATE_BASE  = 32'h2000_0000;
localparam [31:0] SAVESTATE_BYTES = SAVESTATE_WORDS * 4;
localparam integer TOP_STATE_BITS  = 96;
localparam integer CHIP_STATE_BITS = 151;

wire [31:0] savestate_rd_word;

// ======== Bridge ========
wire [31:0] cmd_bridge_rd_data;
always @(*) begin
    casex(bridge_addr)
    32'h20xxxxxx: bridge_rd_data <= savestate_rd_word;
    32'h50xxxxxx: bridge_rd_data <= settings[bridge_addr[4:2]];
    32'hF8xxxxxx: bridge_rd_data <= cmd_bridge_rd_data;
    default:      bridge_rd_data <= 0;
    endcase
end

wire reset_n, pll_core_locked, pll_core_locked_s;
synch_3 s01(pll_core_locked, pll_core_locked_s, clk_74a);

wire dataslot_requestread, dataslot_requestwrite, dataslot_update, dataslot_allcomplete;
wire [15:0] dataslot_requestread_id, dataslot_requestwrite_id, dataslot_update_id;
wire [31:0] dataslot_requestwrite_size, dataslot_update_size;
wire [31:0] rtc_epoch_seconds, rtc_date_bcd, rtc_time_bcd;
wire rtc_valid, osnotify_inmenu;
wire savestate_start, savestate_load;
wire savestate_supported = 1'b1;
wire [31:0] savestate_addr = SAVESTATE_BASE;
wire [31:0] savestate_size = SAVESTATE_BYTES;
wire [31:0] savestate_maxloadsize = SAVESTATE_BYTES;
reg  savestate_start_ack = 0;
reg  savestate_start_busy = 0;
reg  savestate_start_ok = 0;
wire savestate_start_err = 1'b0;
reg  savestate_load_ack = 0;
reg  savestate_load_busy = 0;
reg  savestate_load_ok = 0;
wire savestate_load_err = 1'b0;
reg  savestate_start_d = 0;
reg  savestate_load_d = 0;
reg target_dataslot_read=0, target_dataslot_write=0, target_dataslot_getfile=0, target_dataslot_openfile=0;
wire target_dataslot_ack, target_dataslot_done;
wire [2:0] target_dataslot_err;
reg [15:0] target_dataslot_id;
reg [31:0] target_dataslot_slotoffset, target_dataslot_bridgeaddr, target_dataslot_length;
wire [31:0] target_buffer_param_struct, target_buffer_resp_struct;
wire [9:0] datatable_addr; wire datatable_wren; wire [31:0] datatable_data, datatable_q;

core_bridge_cmd icb(
    .clk(clk_74a), .reset_n(reset_n),
    .bridge_endian_little(bridge_endian_little),
    .bridge_addr(bridge_addr), .bridge_rd(bridge_rd), .bridge_rd_data(cmd_bridge_rd_data),
    .bridge_wr(bridge_wr), .bridge_wr_data(bridge_wr_data),
    .status_boot_done(pll_core_locked_s), .status_setup_done(pll_core_locked_s), .status_running(reset_n),
    .dataslot_requestread(dataslot_requestread), .dataslot_requestread_id(dataslot_requestread_id),
    .dataslot_requestread_ack(1'b1), .dataslot_requestread_ok(1'b1),
    .dataslot_requestwrite(dataslot_requestwrite), .dataslot_requestwrite_id(dataslot_requestwrite_id),
    .dataslot_requestwrite_size(dataslot_requestwrite_size),
    .dataslot_requestwrite_ack(1'b1), .dataslot_requestwrite_ok(1'b1),
    .dataslot_update(dataslot_update), .dataslot_update_id(dataslot_update_id), .dataslot_update_size(dataslot_update_size),
    .dataslot_allcomplete(dataslot_allcomplete),
    .rtc_epoch_seconds(rtc_epoch_seconds), .rtc_date_bcd(rtc_date_bcd), .rtc_time_bcd(rtc_time_bcd), .rtc_valid(rtc_valid),
    .savestate_supported(savestate_supported), .savestate_addr(savestate_addr), .savestate_size(savestate_size), .savestate_maxloadsize(savestate_maxloadsize),
    .savestate_start(savestate_start), .savestate_start_ack(savestate_start_ack), .savestate_start_busy(savestate_start_busy), .savestate_start_ok(savestate_start_ok), .savestate_start_err(savestate_start_err),
    .savestate_load(savestate_load), .savestate_load_ack(savestate_load_ack), .savestate_load_busy(savestate_load_busy), .savestate_load_ok(savestate_load_ok), .savestate_load_err(savestate_load_err),
    .osnotify_inmenu(osnotify_inmenu),
    .target_dataslot_read(target_dataslot_read), .target_dataslot_write(target_dataslot_write),
    .target_dataslot_getfile(target_dataslot_getfile), .target_dataslot_openfile(target_dataslot_openfile),
    .target_dataslot_ack(target_dataslot_ack), .target_dataslot_done(target_dataslot_done), .target_dataslot_err(target_dataslot_err),
    .target_dataslot_id(target_dataslot_id), .target_dataslot_slotoffset(target_dataslot_slotoffset),
    .target_dataslot_bridgeaddr(target_dataslot_bridgeaddr), .target_dataslot_length(target_dataslot_length),
    .target_buffer_param_struct(target_buffer_param_struct), .target_buffer_resp_struct(target_buffer_resp_struct),
    .datatable_addr(datatable_addr), .datatable_wren(datatable_wren), .datatable_data(datatable_data), .datatable_q(datatable_q)
);

assign datatable_addr = 10'd0;
assign datatable_wren = 1'b0;
assign datatable_data = 32'd0;

reg  [31:0] savestate_wr_buf_74a [0:SAVESTATE_WORDS-1];
reg  [31:0] savestate_rd_buf_sys [0:SAVESTATE_WORDS-1];
reg  [31:0] savestate_rd_meta_74a [0:SAVESTATE_WORDS-1];
reg  [31:0] savestate_rd_buf_74a [0:SAVESTATE_WORDS-1];
reg  [31:0] savestate_wr_meta_sys [0:SAVESTATE_WORDS-1];
reg  [31:0] savestate_wr_buf_sys [0:SAVESTATE_WORDS-1];

reg savestate_save_req_toggle_74a = 0;
reg savestate_save_req_meta_sys = 0, savestate_save_req_sys = 0, savestate_save_req_seen_sys = 0;
reg savestate_save_done_toggle_sys = 0;
reg savestate_save_done_meta_74a = 0, savestate_save_done_sys = 0, savestate_save_done_seen_74a = 0;
reg [2:0] savestate_save_delay_sys = 0;

reg savestate_load_req_toggle_74a = 0;
reg savestate_load_req_meta_sys = 0, savestate_load_req_sys = 0, savestate_load_req_seen_sys = 0;
reg savestate_load_done_toggle_sys = 0;
reg savestate_load_done_meta_74a = 0, savestate_load_done_sys = 0, savestate_load_done_seen_74a = 0;
reg [2:0] savestate_load_delay_sys = 0;

reg apply_savestate_settings_74a = 0;
reg state_load_sys = 0;
reg chip_state_load_sys = 0;
reg load_vid_toggle_sys = 0;

wire [TOP_STATE_BITS-1:0] top_state_out = {
    7'd0,
    gameSelect,
    ce_2m_div,
    ce_2m,
    HBlank,
    VBlank_r,
    blank_hcnt,
    blank_vcnt,
    blank_old_hs,
    blank_old_vs,
    colorOut,
    p1pos,
    p2pos,
    p1cap,
    p2cap
};

wire [TOP_STATE_BITS-1:0] top_state_in = {savestate_wr_buf_sys[6], savestate_wr_buf_sys[7], savestate_wr_buf_sys[8]};
wire [7:0] savestate_gameSelect;
wire [5:0] savestate_ce_2m_div;
wire savestate_ce_2m;
wire savestate_HBlank, savestate_VBlank_r;
wire [10:0] savestate_blank_hcnt, savestate_blank_vcnt;
wire savestate_blank_old_hs, savestate_blank_old_vs;
wire [11:0] savestate_colorOut;
wire [6:0] savestate_top_pad;
wire [8:0] savestate_p1pos, savestate_p2pos, savestate_p1cap, savestate_p2cap;
assign {
    savestate_top_pad,
    savestate_gameSelect,
    savestate_ce_2m_div,
    savestate_ce_2m,
    savestate_HBlank,
    savestate_VBlank_r,
    savestate_blank_hcnt,
    savestate_blank_vcnt,
    savestate_blank_old_hs,
    savestate_blank_old_vs,
    savestate_colorOut,
    savestate_p1pos,
    savestate_p2pos,
    savestate_p1cap,
    savestate_p2cap
} = top_state_in;

wire [31:0] extra_state_in = savestate_wr_buf_sys[14];
wire [31:0] extra_state_out = {3'd0, reset_cnt, paddle_old_hs, paddle_old_vs, vid_state_s1};
wire [19:0] savestate_reset_cnt = extra_state_in[28:9];
wire        savestate_paddle_old_hs = extra_state_in[8];
wire        savestate_paddle_old_vs = extra_state_in[7];
wire [6:0]  savestate_vid_state = extra_state_in[6:0];
wire        savestate_hblank_d1 = savestate_vid_state[6];
wire        savestate_hblank_d2 = savestate_vid_state[5];
wire        savestate_vblank_d1 = savestate_vid_state[4];
wire        savestate_vblank_d2 = savestate_vid_state[3];
wire        savestate_vid_hs = savestate_vid_state[2];
wire        savestate_vid_vs = savestate_vid_state[1];
wire        savestate_vid_de = savestate_vid_state[0];

wire [CHIP_STATE_BITS-1:0] chip_state_out;
wire [159:0] chip_state_out_padded = {9'd0, chip_state_out};
wire [159:0] chip_state_in_padded = {
    savestate_wr_buf_sys[9],
    savestate_wr_buf_sys[10],
    savestate_wr_buf_sys[11],
    savestate_wr_buf_sys[12],
    savestate_wr_buf_sys[13]
};
wire [CHIP_STATE_BITS-1:0] chip_state_in = chip_state_in_padded[CHIP_STATE_BITS-1:0];

assign savestate_rd_word = (bridge_addr[5:2] < SAVESTATE_WORDS) ? savestate_rd_buf_74a[bridge_addr[5:2]] : 32'd0;

integer ssi;
initial begin
    for (ssi = 0; ssi < SAVESTATE_WORDS; ssi = ssi + 1) begin
        savestate_wr_buf_74a[ssi] = 32'd0;
        savestate_rd_buf_sys[ssi] = 32'd0;
        savestate_rd_meta_74a[ssi] = 32'd0;
        savestate_rd_buf_74a[ssi] = 32'd0;
        savestate_wr_meta_sys[ssi] = 32'd0;
        savestate_wr_buf_sys[ssi] = 32'd0;
    end
end

always @(posedge clk_74a) begin
    integer i;
    target_dataslot_read <= 0; target_dataslot_write <= 0;
    target_dataslot_getfile <= 0; target_dataslot_openfile <= 0;
    apply_savestate_settings_74a <= 0;
    savestate_start_ack <= 0;
    savestate_load_ack <= 0;
    savestate_start_d <= savestate_start;
    savestate_load_d <= savestate_load;
    savestate_save_done_meta_74a <= savestate_save_done_toggle_sys;
    savestate_save_done_sys <= savestate_save_done_meta_74a;
    savestate_load_done_meta_74a <= savestate_load_done_toggle_sys;
    savestate_load_done_sys <= savestate_load_done_meta_74a;

    for (i = 0; i < SAVESTATE_WORDS; i = i + 1) begin
        savestate_rd_meta_74a[i] <= savestate_rd_buf_sys[i];
        savestate_rd_buf_74a[i] <= savestate_rd_meta_74a[i];
    end

    if (bridge_wr && bridge_addr[31:24] == SAVESTATE_BASE[31:24] && bridge_addr[5:2] < SAVESTATE_WORDS)
        savestate_wr_buf_74a[bridge_addr[5:2]] <= bridge_wr_data;

    if (savestate_start && !savestate_start_d) begin
        savestate_start_ack <= 1;
        savestate_start_ok <= 0;
        savestate_start_busy <= 1;
        savestate_save_req_toggle_74a <= ~savestate_save_req_toggle_74a;
    end

    if (savestate_load && !savestate_load_d) begin
        savestate_load_ack <= 1;
        savestate_load_ok <= 0;
        savestate_load_busy <= 1;
        apply_savestate_settings_74a <= 1;
        savestate_load_req_toggle_74a <= ~savestate_load_req_toggle_74a;
    end

    if (savestate_save_done_sys != savestate_save_done_seen_74a) begin
        savestate_save_done_seen_74a <= savestate_save_done_sys;
        savestate_start_busy <= 0;
        savestate_start_ok <= 1;
    end

    if (savestate_load_done_sys != savestate_load_done_seen_74a) begin
        savestate_load_done_seen_74a <= savestate_load_done_sys;
        savestate_load_busy <= 0;
        savestate_load_ok <= 1;
    end

    if (!reset_n) begin
        savestate_start_busy <= 0;
        savestate_start_ok <= 0;
        savestate_load_busy <= 0;
        savestate_load_ok <= 0;
    end
end

// ======== Interact → Settings ========
// Reg 0: Game select (0-4)
// Reg 1: Auto serve
// Reg 2: Paddle size
// Reg 3: Ball angle
// Reg 4: Ball speed
// Reg 5: Color palette (0-7)
// ======== Clocks ========
wire clk_sys, clk_vid, clk_vid_90;
pll pll_inst(.refclk(clk_74a), .rst(1'b0),
    .outclk_0(clk_sys), .outclk_1(clk_vid), .outclk_2(clk_vid_90), .locked(pll_core_locked));

// 2 MHz clock enable (48/24)
reg [5:0] ce_2m_div = 0;
reg ce_2m = 0;
always @(posedge clk_sys) begin
    if (state_load_sys) begin
        ce_2m_div <= savestate_ce_2m_div;
        ce_2m <= savestate_ce_2m;
    end else begin
        ce_2m_div <= ce_2m_div + 1'd1;
        if (ce_2m_div == 23) ce_2m_div <= 0;
        ce_2m <= !ce_2m_div;
    end
end

// ======== Reset ========
reg [19:0] reset_cnt = 20'd200000;
wire chip_reset = |reset_cnt | cont1_key[15]; // Start button = reset
always @(posedge clk_sys) begin
    if (state_load_sys)
        reset_cnt <= savestate_reset_cnt;
    else if (reset_cnt)
        reset_cnt <= reset_cnt - 1'd1;
end

// ======== Settings from interact registers ========
// Settings register file — captures bridge writes at 0x50xxxxxx
reg [31:0] settings [0:7];
integer si;
initial for (si = 0; si < 8; si = si + 1) settings[si] = 0;

always @(posedge clk_74a) begin
    if (apply_savestate_settings_74a) begin
        settings[0] <= savestate_wr_buf_74a[0];
        settings[1] <= savestate_wr_buf_74a[1];
        settings[2] <= savestate_wr_buf_74a[2];
        settings[3] <= savestate_wr_buf_74a[3];
        settings[4] <= savestate_wr_buf_74a[4];
        settings[5] <= savestate_wr_buf_74a[5];
    end else if (bridge_wr && bridge_addr[31:24] == 8'h50 && bridge_addr[4:2] < 8) begin
        settings[bridge_addr[4:2]] <= bridge_wr_data;
    end
end

// Sync to clk_sys
reg [31:0] set_sys [0:7];
reg [31:0] set_meta [0:7];
integer sj;
always @(posedge clk_sys) begin
    if (state_load_sys) begin
        set_meta[0] <= savestate_wr_buf_sys[0];
        set_meta[1] <= savestate_wr_buf_sys[1];
        set_meta[2] <= savestate_wr_buf_sys[2];
        set_meta[3] <= savestate_wr_buf_sys[3];
        set_meta[4] <= savestate_wr_buf_sys[4];
        set_meta[5] <= savestate_wr_buf_sys[5];
        set_sys[0] <= savestate_wr_buf_sys[0];
        set_sys[1] <= savestate_wr_buf_sys[1];
        set_sys[2] <= savestate_wr_buf_sys[2];
        set_sys[3] <= savestate_wr_buf_sys[3];
        set_sys[4] <= savestate_wr_buf_sys[4];
        set_sys[5] <= savestate_wr_buf_sys[5];
    end else begin
        for (sj = 0; sj < 8; sj = sj + 1) begin
            set_meta[sj] <= settings[sj];
            set_sys[sj]  <= set_meta[sj];
        end
    end
end

wire [2:0] game_select_val = set_sys[0][2:0]; // 0=Tennis,1=Soccer,2=Handicap,3=Squash,4=Practice
wire       auto_serve      = set_sys[1][0];
wire       bat_size        = set_sys[2][0];    // 0=Big, 1=Small
wire       ball_angle      = set_sys[3][0];    // 0=Angle1, 1=Angle2
wire       ball_speed      = set_sys[4][0];    // 0=Slow, 1=Fast
wire [2:0] color_palette   = set_sys[5][2:0];  // 0-7

always @(posedge clk_sys) begin
    integer i;
    for (i = 0; i < SAVESTATE_WORDS; i = i + 1) begin
        savestate_wr_meta_sys[i] <= savestate_wr_buf_74a[i];
        savestate_wr_buf_sys[i] <= savestate_wr_meta_sys[i];
    end

    savestate_save_req_meta_sys <= savestate_save_req_toggle_74a;
    savestate_save_req_sys <= savestate_save_req_meta_sys;
    savestate_load_req_meta_sys <= savestate_load_req_toggle_74a;
    savestate_load_req_sys <= savestate_load_req_meta_sys;

    if (state_load_sys) begin
        state_load_sys <= 0;
        chip_state_load_sys <= 0;
    end

    if (savestate_load_delay_sys != 0) begin
        savestate_load_delay_sys <= savestate_load_delay_sys - 1'd1;
        if (savestate_load_delay_sys == 1)
            savestate_load_done_toggle_sys <= ~savestate_load_done_toggle_sys;
    end

    if (savestate_save_req_sys != savestate_save_req_seen_sys) begin
        savestate_save_req_seen_sys <= savestate_save_req_sys;
        savestate_rd_buf_sys[0] <= set_sys[0];
        savestate_rd_buf_sys[1] <= set_sys[1];
        savestate_rd_buf_sys[2] <= set_sys[2];
        savestate_rd_buf_sys[3] <= set_sys[3];
        savestate_rd_buf_sys[4] <= set_sys[4];
        savestate_rd_buf_sys[5] <= set_sys[5];
        {savestate_rd_buf_sys[6], savestate_rd_buf_sys[7], savestate_rd_buf_sys[8]} <= top_state_out;
        {savestate_rd_buf_sys[9], savestate_rd_buf_sys[10], savestate_rd_buf_sys[11], savestate_rd_buf_sys[12], savestate_rd_buf_sys[13]} <= chip_state_out_padded;
        savestate_rd_buf_sys[14] <= extra_state_out;
        savestate_rd_buf_sys[15] <= 32'h41595353;
        savestate_save_delay_sys <= 3'd6;
    end else if (savestate_save_delay_sys != 0) begin
        savestate_save_delay_sys <= savestate_save_delay_sys - 1'd1;
        if (savestate_save_delay_sys == 1)
            savestate_save_done_toggle_sys <= ~savestate_save_done_toggle_sys;
    end

    if (savestate_load_req_sys != savestate_load_req_seen_sys) begin
        savestate_load_req_seen_sys <= savestate_load_req_sys;
        state_load_sys <= 1;
        chip_state_load_sys <= 1;
        load_vid_toggle_sys <= ~load_vid_toggle_sys;
        savestate_load_delay_sys <= 3'd4;
    end
end

reg [7:0] gameSelect;
always @(posedge clk_sys) begin
    if (state_load_sys)
        gameSelect <= savestate_gameSelect;
    else
        gameSelect <= 8'd1 << game_select_val;
end

// ======== Paddle Emulation ========
wire [4:0] paddleMoveSpeed = ball_speed ? 5'd8 : 5'd5;
reg [8:0] p1pos = 9'd128, p2pos = 9'd128;
reg [8:0] p1cap = 0, p2cap = 0;
reg paddle_old_hs = 0, paddle_old_vs = 0;

always @(posedge clk_sys) begin
    if (state_load_sys) begin
        p1pos <= savestate_p1pos;
        p2pos <= savestate_p2pos;
        p1cap <= savestate_p1cap;
        p2cap <= savestate_p2cap;
        paddle_old_hs <= savestate_paddle_old_hs;
        paddle_old_vs <= savestate_paddle_old_vs;
    end else begin
        paddle_old_hs <= syncH;
        paddle_old_vs <= syncV;

        if (syncV & !paddle_old_vs) begin
            p1cap <= p1pos;
            if (cont1_key[0]) p1pos <= (p1pos < paddleMoveSpeed) ? 9'd0 : p1pos - paddleMoveSpeed;
            if (cont1_key[1]) p1pos <= (p1pos + paddleMoveSpeed > 255) ? 9'd255 : p1pos + paddleMoveSpeed;

            p2cap <= p2pos;
            if (cont2_key[0]) p2pos <= (p2pos < paddleMoveSpeed) ? 9'd0 : p2pos - paddleMoveSpeed;
            if (cont2_key[1]) p2pos <= (p2pos + paddleMoveSpeed > 255) ? 9'd255 : p2pos + paddleMoveSpeed;
        end
        else if (syncH & !paddle_old_hs) begin
            if (p1cap != 0) p1cap <= p1cap - 1'd1;
            if (p2cap != 0) p2cap <= p2cap - 1'd1;
        end
    end
end

// ======== AY-3-8500 Chip ========
wire pong_audio, rpOut, lpOut, ballOut, sfOut, syncH, syncV;

ay38500NTSC the_chip (
    .superclock  (clk_sys),
    .clk         (ce_2m),
    .reset       (!chip_reset),
    .pinRPout    (rpOut),
    .pinLPout    (lpOut),
    .pinBallOut  (ballOut),
    .pinSFout    (sfOut),
    .syncH       (syncH),
    .syncV       (syncV),
    .pinSound    (pong_audio),
    .pinManualServe(!(auto_serve | cont1_key[4] | cont2_key[4])),
    .pinBallAngle(!ball_angle),
    .pinBatSize  (!bat_size),
    .pinBallSpeed(!ball_speed),
    .pinPractice (!gameSelect[4]),
    .pinSquash   (!gameSelect[3]),
    .pinSoccer   (!gameSelect[1]),
    .pinTennis   (!gameSelect[0]),
    .pinRifle1   (!gameSelect[5]),
    .pinRifle2   (!gameSelect[6]),
    .pinHitIn    (pong_audio),
    .pinShotIn   (1'b1),
    .pinLPin     (p1cap == 0),
    .pinRPin     (gameSelect[4] ? (p1cap == 0) : (p2cap == 0)),
    .state_load  (chip_state_load_sys),
    .state_in    (chip_state_in),
    .state_out   (chip_state_out)
);

// ======== Video: Full Color Palette ========
reg [11:0] colorOut;
always @(posedge clk_sys) begin
    if (state_load_sys) begin
        colorOut <= savestate_colorOut;
    end else if (ballOut) begin
        case (color_palette)
            3'd0: colorOut <= 12'hFFF;
            3'd1: colorOut <= 12'hFFF;
            3'd2: colorOut <= 12'hF00;
            3'd3: colorOut <= 12'hFFF;
            3'd4: colorOut <= 12'h000;
            3'd5: colorOut <= 12'h000;
            3'd6: colorOut <= 12'hFFF;
            3'd7: colorOut <= 12'hFFF;
        endcase
    end else if (lpOut) begin
        case (color_palette)
            3'd0: colorOut <= 12'hFFF;
            3'd1: colorOut <= 12'hFFF;
            3'd2: colorOut <= 12'h0F0;
            3'd3: colorOut <= 12'h00F;
            3'd4: colorOut <= 12'hF00;
            3'd5: colorOut <= 12'hF00;
            3'd6: colorOut <= 12'hF00;
            3'd7: colorOut <= 12'hFF0;
        endcase
    end else if (rpOut) begin
        case (color_palette)
            3'd0: colorOut <= 12'hFFF;
            3'd1: colorOut <= 12'h000;
            3'd2: colorOut <= 12'h0F0;
            3'd3: colorOut <= 12'hF00;
            3'd4: colorOut <= 12'h00F;
            3'd5: colorOut <= 12'h030;
            3'd6: colorOut <= 12'h030;
            3'd7: colorOut <= 12'h000;
        endcase
    end else if (sfOut) begin
        case (color_palette)
            3'd0: colorOut <= 12'hFFF;
            3'd1: colorOut <= 12'hFFF;
            3'd2: colorOut <= 12'h00F;
            3'd3: colorOut <= 12'h0F0;
            3'd4: colorOut <= 12'hFFF;
            3'd5: colorOut <= 12'h55F;
            3'd6: colorOut <= 12'hFFF;
            3'd7: colorOut <= 12'hFFF;
        endcase
    end else begin
        case (color_palette)
            3'd0: colorOut <= 12'h000;
            3'd1: colorOut <= 12'h999;
            3'd2: colorOut <= 12'h000;
            3'd3: colorOut <= 12'h000;
            3'd4: colorOut <= 12'h4F4;
            3'd5: colorOut <= 12'hCCF;
            3'd6: colorOut <= 12'h000;
            3'd7: colorOut <= 12'h0D0;
        endcase
    end
end

// ======== Blanking ========
reg HBlank, VBlank_r;
reg [10:0] blank_hcnt = 0, blank_vcnt = 0;
reg blank_old_hs = 0, blank_old_vs = 0;
always @(posedge clk_sys) begin
    if (state_load_sys) begin
        HBlank <= savestate_HBlank;
        VBlank_r <= savestate_VBlank_r;
        blank_hcnt <= savestate_blank_hcnt;
        blank_vcnt <= savestate_blank_vcnt;
        blank_old_hs <= savestate_blank_old_hs;
        blank_old_vs <= savestate_blank_old_vs;
    end else if (ce_2m) begin
        blank_hcnt <= blank_hcnt + 1'd1;
        blank_old_hs <= syncH;
        if (blank_old_hs & ~syncH) begin
            blank_hcnt <= 0;
            blank_vcnt <= blank_vcnt + 1'd1;
            blank_old_vs <= syncV;
            if (blank_old_vs & ~syncV) blank_vcnt <= 0;
        end
        if (blank_hcnt == 21)  HBlank <= 0;
        if (blank_hcnt == 100) HBlank <= 1;
        if (blank_vcnt == 34)  VBlank_r <= 0;
        if (blank_vcnt == 240) VBlank_r <= 1;
    end
end

// ======== Video Output ========
assign video_rgb_clock    = clk_vid;
assign video_rgb_clock_90 = clk_vid_90;
assign video_skip = 1'b0;

// Double-register HBlank through clk_vid to align with color data
reg       hblank_d1, hblank_d2;
reg       vblank_d1, vblank_d2;
reg [7:0] vid_r, vid_g, vid_b;
reg       vid_hs, vid_vs, vid_de;
reg [6:0] vid_state_s0 = 0, vid_state_s1 = 0;
reg       load_vid_meta = 0, load_vid_sync = 0, load_vid_prev = 0;

always @(posedge clk_sys) begin
    vid_state_s0 <= {hblank_d1, hblank_d2, vblank_d1, vblank_d2, vid_hs, vid_vs, vid_de};
    vid_state_s1 <= vid_state_s0;
end

always @(posedge clk_vid) begin
    load_vid_meta <= load_vid_toggle_sys;
    load_vid_sync <= load_vid_meta;
    load_vid_prev <= load_vid_sync;

    if (load_vid_sync != load_vid_prev) begin
        hblank_d1 <= savestate_hblank_d1;
        hblank_d2 <= savestate_hblank_d2;
        vblank_d1 <= savestate_vblank_d1;
        vblank_d2 <= savestate_vblank_d2;
        vid_hs <= savestate_vid_hs;
        vid_vs <= savestate_vid_vs;
        vid_de <= savestate_vid_de;
        if (savestate_vid_de) begin
            vid_r <= {savestate_colorOut[11:8], savestate_colorOut[11:8]};
            vid_g <= {savestate_colorOut[7:4],  savestate_colorOut[7:4]};
            vid_b <= {savestate_colorOut[3:0],  savestate_colorOut[3:0]};
        end else begin
            vid_r <= 0;
            vid_g <= 0;
            vid_b <= 0;
        end
    end else begin
        hblank_d1 <= HBlank;
        hblank_d2 <= hblank_d1;
        vblank_d1 <= VBlank_r;
        vblank_d2 <= vblank_d1;
        vid_de <= ~hblank_d2 & ~vblank_d2;
        vid_hs <= !syncH;
        vid_vs <= !syncV;
        if (~hblank_d2 & ~vblank_d2) begin
            vid_r <= {colorOut[11:8], colorOut[11:8]};
            vid_g <= {colorOut[7:4],  colorOut[7:4]};
            vid_b <= {colorOut[3:0],  colorOut[3:0]};
        end else begin
            vid_r <= 0;
            vid_g <= 0;
            vid_b <= 0;
        end
    end
end

assign video_rgb = {vid_r, vid_g, vid_b};
assign video_de  = vid_de;
assign video_vs  = vid_vs;
assign video_hs  = vid_hs;

// ======== Audio: 1-bit → I2S via agg23 sound_i2s ========
// Expand 1-bit pong audio to 15-bit unsigned (0 or max)
wire [14:0] pong_audio_exp = pong_audio ? 15'h7FFF : 15'h0000;

sound_i2s #(.CHANNEL_WIDTH(15), .SIGNED_INPUT(0)) sound_i2s_inst (
    .clk_74a   (clk_74a),
    .clk_audio (clk_sys),
    .audio_l   (pong_audio_exp),
    .audio_r   (pong_audio_exp),
    .audio_mclk(audio_mclk),
    .audio_lrck(audio_lrck),
    .audio_dac (audio_dac)
);

endmodule
