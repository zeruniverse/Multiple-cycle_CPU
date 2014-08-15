`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:12:32 05/26/2014 
// Design Name: 
// Module Name:    mux4x32 
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
//
//////////////////////////////////////////////////////////////////////////////////
module mux4x32(i0,i1,i2,i3,c,out);
input wire [31:0] i0,i1,i2,i3;
input wire [1:0] c;
output wire [31:0] out;
assign out=(c==0)?i0:((c==1)?i1:((c==2)?i2:i3));


endmodule
