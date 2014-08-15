`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:30:25 05/26/2014 
// Design Name: 
// Module Name:    dffe32 
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
//npc,clock,resetn,wpc,pc
//////////////////////////////////////////////////////////////////////////////////
module dffe32(d,clk,rst,en,q);
input wire [31:0] d;
input wire clk,rst,en;
output reg [31:0] q;
always @(posedge clk) begin
	if(~rst) q<=0; else begin
		if(en) q<=d;
	end
end

endmodule
