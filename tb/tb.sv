`timescale 1 ns / 1 ps

module tb ();
     logic [riscv_pkg::XLEN-1:0] addr;
     logic [riscv_pkg::XLEN-1:0] data;
     logic [riscv_pkg::XLEN-1:0] pc;
     logic [riscv_pkg::XLEN-1:0] instr;
     logic [                4:0] reg_addr;
     logic [riscv_pkg::XLEN-1:0] reg_data;
     logic [riscv_pkg::XLEN-1:0] mem_addr;
     logic [riscv_pkg::XLEN-1:0] mem_data;     
     logic                       update;
     logic clk;
     logic rstn;
 
     riscv_singlecycle i_core_model(
         .clk_i(clk),
         .rstn_i(rstn),
         .addr_i(addr),
         .update_o(update),
         .data_o(data),
         .pc_o(pc),
         .instr_o(instr),
         .reg_addr_o(reg_addr),
         .reg_data_o(reg_data),
         .mem_addr_o(mem_addr),
         .mem_data_o(mem_data)
     );
        integer file_pointer;   
        initial begin
            file_pointer = $fopen("model.log", "w");
            #2;
            $fdisplay(file_pointer, "0x%8h (0x%8h)", pc, instr);   // 4 ns delay gelince clk vuruyor pc 80000004 oluyor. 80000000 olması icin buraya ekledim         
            #2;        
            forever begin
                if (update) begin
                    if (reg_addr == 0) begin
                        $fdisplay(file_pointer, "0x%8h (0x%8h)", pc, instr);
                    end else begin
                        if (reg_addr>9) begin
                            $fdisplay(file_pointer, "0x%8h (0x%8h) x%0d 0x%8h", pc, instr, reg_addr, reg_data);
                        end else begin
                            $fdisplay(file_pointer, "0x%8h (0x%8h) x%0d  0x%8h", pc, instr, reg_addr, reg_data);
                        end 
                    end
                    #2;
                end
            end
        end
        initial forever begin
            clk = 0;
            #1;
            clk = 1;
            #1;
        end
        initial begin
            rstn = 0;
            #2;
            rstn = 1;
            //#10000;
            #4000;
            for (int i=0; i<10; i++) begin
                addr = i;
                $display("data @ mem[0x%8h] = %8h", addr, data);
            end
            $finish;
        end
 
 
        initial begin
        $dumpfile("dump.vcd");
        $dumpvars();
        end
 endmodule
