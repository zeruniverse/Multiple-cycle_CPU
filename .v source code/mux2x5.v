`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:07:43 05/26/2014 
// Design Name: 
// Module Name:    mux2x5 
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
module mux2x5(
input wire [4:0] i0,
input wire [4:0] i1,
input wire c,
output wire [4:0] out
    );
assign out=(c==1)?i1:i0;

endmodule
