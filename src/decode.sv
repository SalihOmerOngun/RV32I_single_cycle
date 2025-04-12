`timescale 1 ns / 1 ps

module decode  // decode
(
    input  logic [31:0] reg_file  [31:0],
    input  logic [31:0] instr,
    output logic [31:0] rs1,      // source register 1 data
    output logic [31:0] rs2,      // source register 2 data
    output logic [4:0] shamt, 
    output logic [31:0] instr_mem_data      // immediate data
);

    // rd ler hep sabit onu core da atayacagiz
    always_comb begin
        instr_mem_data = 32'b0;
        rs1 = 32'b0;
        rs2 = 32'b0;
        shamt = 5'b0;
        case(instr[6:0])
            7'b0110111: begin // LUI
                instr_mem_data = {instr[31:12], 12'b0}; 
            end

            7'b0010111: begin // AUIPC
                instr_mem_data = {instr[31:12], 12'b0}; 
            end     

            7'b1101111: begin // JAL
                instr_mem_data = {{12'(signed'(instr[31]))}, instr[19:12], instr[20], instr[30:21], 1'b0};
            end    

            7'b1100111: begin // JALR
                if(instr[14:12] == 3'b000) begin 
                    instr_mem_data = {{20'(signed'(instr[31]))}, instr[31:20]};  
                    rs1 = reg_file[instr[19:15]];
                end
            end 

            7'b1100011: begin // BRANCH  // beq felan diye ayrı case yapmaya gerk var mı 
                instr_mem_data = {{19'(signed'(instr[31]))}, instr[31], instr[7], instr[30:25], instr[11:8], 1'b0};
                rs1 = reg_file[instr[19:15]];
                rs2 = reg_file[instr[24:20]];
            end  

            7'b0000011: begin  //  LOAD
                instr_mem_data = {{20'(signed'(instr[31]))}, instr[31:20]};
                rs1 = reg_file[instr[19:15]];
                rs2 = reg_file[instr[24:20]];            
            end  

            7'b0100011: begin // STORE 
                instr_mem_data = {{20'(signed'(instr[31]))}, instr[31:25], instr[11:7]};
                rs1 = reg_file[instr[19:15]];
                rs2 = reg_file[instr[24:20]];                
            end  

            7'b0010011: begin  // IMMEDIATE
                case(instr[14:12])
                    3'b000: begin // ADDI
                        instr_mem_data = {{20'(signed'(instr[31]))}, instr[31:20]};
                        rs1 = reg_file[instr[19:15]];
                    end            
                    3'b010: begin // SLTI
                        instr_mem_data = {{20'(signed'(instr[31]))}, instr[31:20]};
                        rs1 = reg_file[instr[19:15]];
                    end            
                    3'b011: begin // SLTIU
                        instr_mem_data = {{20'(signed'(instr[31]))}, instr[31:20]};
                        rs1 = reg_file[instr[19:15]];
                    end            
                    3'b100: begin // XORI
                        instr_mem_data = {{20'(signed'(instr[31]))}, instr[31:20]};
                        rs1 = reg_file[instr[19:15]];
                    end            
                    3'b110: begin // ORI
                        instr_mem_data = {{20'(signed'(instr[31]))}, instr[31:20]};
                        rs1 = reg_file[instr[19:15]];
                    end            
                    3'b111: begin // ANDI
                        instr_mem_data = {{20'(signed'(instr[31]))}, instr[31:20]};
                        rs1 = reg_file[instr[19:15]];
                    end      
                    3'b001: begin // SLLI
                        case(instr[31:25])
                            7'b0000000: begin // SLLI
                                shamt = instr[24:20];
                                rs1 = reg_file[instr[19:15]];
                            end
                            7'b0110000 : begin    // CTZ CLZ CPOP 
                                rs1 = reg_file[instr[19:15]];
                            end
                            default : begin
                                shamt = 5'b0;
                                rs1 = 32'b0;
                            end        
                        endcase
                    end      
                    3'b101: begin // SRLI, SRAI
                        shamt = instr[24:20];
                        rs1 = reg_file[instr[19:15]];
                    end      
                endcase                
            end

            7'b0110011: begin // aritmetik ve mantiksal
                rs1 = reg_file[instr[19:15]];
                rs2 = reg_file[instr[24:20]];            
            end    
            default : begin
                instr_mem_data = 32'b0;
                rs1 = 32'b0;
                rs2 = 32'b0;
                shamt = 5'b0;                
            end    
        endcase       
    end     
endmodule

