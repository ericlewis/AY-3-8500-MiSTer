// PLL: 74.25 MHz → 48 MHz (system) + 6 MHz (pixel) + 6 MHz 90° (DDR)
`timescale 1 ps / 1 ps
module pll (
    input  wire refclk,
    input  wire rst,
    output wire outclk_0, // 48 MHz
    output wire outclk_1, // 6 MHz pixel clock
    output wire outclk_2, // 6 MHz 90°
    output wire locked
);
altera_pll #(
    .fractional_vco_multiplier("true"),
    .reference_clock_frequency("74.25 MHz"),
    .operation_mode("direct"),
    .number_of_clocks(3),
    .output_clock_frequency0("48.0 MHz"),    .phase_shift0("0 ps"),    .duty_cycle0(50),
    .output_clock_frequency1("6.0 MHz"),     .phase_shift1("0 ps"),    .duty_cycle1(50),
    .output_clock_frequency2("6.0 MHz"),     .phase_shift2("41667 ps"),.duty_cycle2(50),
    .pll_type("General"), .pll_subtype("General")
) pll_inst (
    .refclk({1'b0, refclk}), .rst(rst),
    .outclk({outclk_2, outclk_1, outclk_0}), .locked(locked),
    .fboutclk(), .fbclk(1'b0), .reconfig_to_pll(64'd0), .reconfig_from_pll()
);
endmodule
