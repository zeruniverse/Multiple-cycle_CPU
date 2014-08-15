`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:36:03 05/26/2014
// Design Name:   mccomp
// Module Name:   E:/3120101980/muti_cpu/test.v
// Project Name:  muti_cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mccomp
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg clock;
	reg resetn;
	reg mem_clk;

	// Outputs
	wire [2:0] q;
	wire [31:0] a;
	wire [31:0] b;
	wire [31:0] alu;
	wire [31:0] adr;
	wire [31:0] tom;
	wire [31:0] fromm;
	wire [31:0] pc;
	wire [31:0] ir;

	// Instantiate the Unit Under Test (UUT)
	mccomp uut (
		.clock(clock), 
		.resetn(resetn), 
		.q(q), 
		.a(a), 
		.b(b), 
		.alu(alu), 
		.adr(adr), 
		.tom(tom), 
		.fromm(fromm), 
		.pc(pc), 
		.ir(ir), 
		.mem_clk(mem_clk)
	);

	initial begin
		// Initialize Inputs
		clock = 0;
		resetn = 0;
		mem_clk = 0;

		// Wait 100 ns for global reset to finish
		
		#11; resetn = 1;
		// Add stimulus here

	end
   initial forever begin
    #1; mem_clk=~mem_clk;
	 #1; mem_clk=~mem_clk;clock=~clock;
	end
endmodule

