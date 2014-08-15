`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:28:15 05/26/2014 
// Design Name: 
// Module Name:    dff32 
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
//qa,clock,resetn,rega
//////////////////////////////////////////////////////////////////////////////////
module dff32(
input wire [31:0] d,
input wire clk,
input wire rst,
output reg [31:0] q
    );
always @(posedge clk) begin
 if(~rst) q<=0; else q<=d;
end

endmodule
