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

// ======== Bridge ========
wire [31:0] cmd_bridge_rd_data;
always @(*) begin
    casex(bridge_addr)
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
    .savestate_supported(1'b0), .savestate_addr(0), .savestate_size(0), .savestate_maxloadsize(0),
    .savestate_start(savestate_start), .savestate_start_ack(0), .savestate_start_busy(0), .savestate_start_ok(0), .savestate_start_err(0),
    .savestate_load(savestate_load), .savestate_load_ack(0), .savestate_load_busy(0), .savestate_load_ok(0), .savestate_load_err(0),
    .osnotify_inmenu(osnotify_inmenu),
    .target_dataslot_read(target_dataslot_read), .target_dataslot_write(target_dataslot_write),
    .target_dataslot_getfile(target_dataslot_getfile), .target_dataslot_openfile(target_dataslot_openfile),
    .target_dataslot_ack(target_dataslot_ack), .target_dataslot_done(target_dataslot_done), .target_dataslot_err(target_dataslot_err),
    .target_dataslot_id(target_dataslot_id), .target_dataslot_slotoffset(target_dataslot_slotoffset),
    .target_dataslot_bridgeaddr(target_dataslot_bridgeaddr), .target_dataslot_length(target_dataslot_length),
    .target_buffer_param_struct(target_buffer_param_struct), .target_buffer_resp_struct(target_buffer_resp_struct),
    .datatable_addr(datatable_addr), .datatable_wren(datatable_wren), .datatable_data(datatable_data), .datatable_q(datatable_q)
);

// No target commands needed
always @(posedge clk_74a) begin
    target_dataslot_read <= 0; target_dataslot_write <= 0;
    target_dataslot_getfile <= 0; target_dataslot_openfile <= 0;
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
reg ce_2m;
always @(posedge clk_sys) begin
    reg [5:0] div;
    div <= div + 1'd1;
    if (div == 23) div <= 0;
    ce_2m <= !div;
end

// ======== Reset ========
reg [19:0] reset_cnt = 20'd200000;
wire chip_reset = |reset_cnt | cont1_key[15]; // Start button = reset
always @(posedge clk_sys)
    if (reset_cnt) reset_cnt <= reset_cnt - 1'd1;

// ======== Settings from interact registers ========
// Settings register file — captures bridge writes at 0x50xxxxxx
reg [31:0] settings [0:7];
integer si;
initial for (si = 0; si < 8; si = si + 1) settings[si] = 0;

always @(posedge clk_74a) begin
    if (bridge_wr && bridge_addr[31:24] == 8'h50 && bridge_addr[4:2] < 8)
        settings[bridge_addr[4:2]] <= bridge_wr_data;
end

// Sync to clk_sys
reg [31:0] set_sys [0:7];
reg [31:0] set_meta [0:7];
integer sj;
always @(posedge clk_sys) begin
    for (sj = 0; sj < 8; sj = sj + 1) begin
        set_meta[sj] <= settings[sj];
        set_sys[sj]  <= set_meta[sj];
    end
end

wire [2:0] game_select_val = set_sys[0][2:0]; // 0=Tennis,1=Soccer,2=Handicap,3=Squash,4=Practice
wire       auto_serve      = set_sys[1][0];
wire       bat_size        = set_sys[2][0];    // 0=Big, 1=Small
wire       ball_angle      = set_sys[3][0];    // 0=Angle1, 1=Angle2
wire       ball_speed      = set_sys[4][0];    // 0=Slow, 1=Fast
wire [2:0] color_palette   = set_sys[5][2:0];  // 0-7

reg [7:0] gameSelect;
always @(posedge clk_sys) gameSelect <= 8'd1 << game_select_val;

// ======== Paddle Emulation ========
wire [4:0] paddleMoveSpeed = ball_speed ? 5'd8 : 5'd5;
reg [8:0] p1pos = 9'd128, p2pos = 9'd128;
reg [8:0] p1cap = 0, p2cap = 0;

always @(posedge clk_sys) begin
    reg old_hs, old_vs;
    old_hs <= syncH; old_vs <= syncV;

    if (syncV & !old_vs) begin
        // Player 1 — d-pad
        p1cap <= p1pos;
        if (cont1_key[0]) p1pos <= (p1pos < paddleMoveSpeed) ? 9'd0 : p1pos - paddleMoveSpeed;
        if (cont1_key[1]) p1pos <= (p1pos + paddleMoveSpeed > 255) ? 9'd255 : p1pos + paddleMoveSpeed;

        // Player 2 — d-pad
        p2cap <= p2pos;
        if (cont2_key[0]) p2pos <= (p2pos < paddleMoveSpeed) ? 9'd0 : p2pos - paddleMoveSpeed;
        if (cont2_key[1]) p2pos <= (p2pos + paddleMoveSpeed > 255) ? 9'd255 : p2pos + paddleMoveSpeed;
    end
    else if (syncH & !old_hs) begin
        if (p1cap != 0) p1cap <= p1cap - 1'd1;
        if (p2cap != 0) p2cap <= p2cap - 1'd1;
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
    .pinRPin     (gameSelect[4] ? (p1cap == 0) : (p2cap == 0))
);

// ======== Video: Full Color Palette ========
reg [11:0] colorOut;
always @(posedge clk_sys) begin
    if (ballOut) begin
        case (color_palette)
            3'd0: colorOut <= 12'hFFF; // Mono
            3'd1: colorOut <= 12'hFFF; // Greyscale
            3'd2: colorOut <= 12'hF00; // RGB1
            3'd3: colorOut <= 12'hFFF; // RGB2
            3'd4: colorOut <= 12'h000; // Field
            3'd5: colorOut <= 12'h000; // Ice
            3'd6: colorOut <= 12'hFFF; // Christmas
            3'd7: colorOut <= 12'hFFF; // Marksman
        endcase
    end
    else if (lpOut) begin
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
    end
    else if (rpOut) begin
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
    end
    else if (sfOut) begin
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
    end
    else begin
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
always @(posedge clk_sys) begin
    reg [10:0] hcnt, vcnt;
    reg old_hs, old_vs;
    if (ce_2m) begin
        hcnt <= hcnt + 1'd1;
        old_hs <= syncH;
        if (old_hs & ~syncH) begin
            hcnt <= 0;
            vcnt <= vcnt + 1'd1;
            old_vs <= syncV;
            if (old_vs & ~syncV) vcnt <= 0;
        end
        if (hcnt == 21)  HBlank <= 0;
        if (hcnt == 100) HBlank <= 1;
        if (vcnt == 34)  VBlank_r <= 0;
        if (vcnt == 240) VBlank_r <= 1;
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

always @(posedge clk_vid) begin
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
