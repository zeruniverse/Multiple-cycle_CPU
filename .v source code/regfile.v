`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:19:24 05/26/2014 
// Design Name: 
// Module Name:    regfile 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//inst[25:21],inst[20:16],res,wn,wreg,clock,resetn,qa,qb
//////////////////////////////////////////////////////////////////////////////////
module regfile (regA, regB, Wdat,regW, RegWrite, clk, resetn, Adat, Bdat,regTEST,TESTdat);
    input clk,RegWrite,resetn;		// write enable
    input [4:0] regA, regB, regW,regTEST;	// source/dest register address
    input [31:0] Wdat;			// data writing to dest
    output wire [31:0] Adat, Bdat,TESTdat;		// data read from source
	 reg [31:0] regfile [0:31];
	 reg [5:0] i;
	 assign  Adat=regfile[regA];
	 assign  Bdat=regfile[regB];
	 assign  TESTdat=regfile[regTEST];

	 always @(posedge clk) begin
        //Deal with asynchronized Reset signal
		  if (~resetn) for (i=0;i<32;i=i+1) regfile[i]=0; else
		if(RegWrite) regfile[regW]=(regW==0)?32'b0:Wdat;
	end
endmodule
