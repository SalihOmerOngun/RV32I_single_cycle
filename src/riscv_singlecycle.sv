`timescale 1 ns / 1 ps

module riscv_singlecycle
  import riscv_pkg::*;
#(
    parameter DMemInitFile  = "dmem.mem",       // data memory initialization file
    parameter IMemInitFile  = "imem.mem"       // instruction memory initialization file
)    (
    input  logic clk_i,
    input  logic rstn_i,
    input  logic  [XLEN-1:0] addr_i, // data_o icin
    output logic             update_o, 
    output logic  [XLEN-1:0] data_o, // testbenchte bakılacak unutma 
    output logic  [XLEN-1:0] pc_o,
    output logic  [XLEN-1:0] instr_o,
    output logic  [     4:0] reg_addr_o,
    output logic  [XLEN-1:0] reg_data_o,
    output logic  [XLEN-1:0] mem_addr_o,  // retired memory address
    output logic  [XLEN-1:0] mem_data_o  // retired memory data
);
    //parameter int mem_num = 2048;
    logic [31:0] pc_next;
    logic [31:0] pc_excte; // execute wire
    logic [31:0] jump_pc;
    logic jump_ok ;  // execute wire 
    logic [31:0] instr;
    logic [31:0] instr_mem [2047:0]; 
    logic [31:0] data_mem  [2047:0]; 
    logic [31:0] reg_file  [31:0]; 
    initial begin  
        $readmemh("D:/SSTU_lab_project/imem.mem", instr_mem, 0, 2047); //Windows için
        //$readmemh(IMemInitFile, instr_mem, 0, 2047);
        //$readmemh(DMemInitFile, data_mem, 0, 2047);
    end     
    logic [31:0] rs1;      // source register 1 data // execute decode wire 
    logic [31:0] rs2;      // source register 2 data // execute decode wire
    logic [31:0] instr_mem_data; // immediate data  // execute ve decode wire
    logic [4:0] shamt; // decode execute wire // alu icin ayri yap
    logic [31:0] reg_data; // alu dan gelen adresin verisi
    logic [31:0] reg_data_adres; // aludan gelen sonuc
    logic reg_file_en;  // register file write enable  // execute wire 
    logic [31:0] mem_data;   // memory write data  // execute wire 
    logic [31:0] mem_adres;   // memory write address // alu dan gelen sonuc
    logic mem_en; // memory write enable   // execute wire
    
    logic  [4:0] sel; // alu mux selection  // alu wire
    logic  [31:0] alu_out;     // alu wire 

    logic  [31:0] number1;    // alu ve execute wire
    logic  [31:0] number2;  // alu ve execute wire
    logic  [4:0] shamt_data;  // alu ve execute wire

    assign data_o = data_mem[addr_i];                         // port atamasi       
    assign instr_o = instr;// port atamasi
    assign reg_addr_o = reg_file_en ? instr[11:7] : 5'b0;// port atamasi
    assign reg_data_o = reg_data; // port atamasi
    assign mem_addr_o = mem_en ? {21'b0,mem_adres[10:0]} : 32'b0;
    assign mem_data_o = mem_data; 
    assign pc_o = pc_excte; // port atamasi


    always_ff @(posedge clk_i) begin  // update yaz 
       if (rstn_i == 0) begin
            pc_excte <= 32'h8000_0000;  // 32'b0 mı bu mu 
            update_o <= 0;
       end else begin
            pc_excte <= pc_next;
            update_o<= 1;
       end
    end
 
    always_comb begin 
        pc_next = pc_excte;  // bunu ekledim
        if (jump_ok) begin
            pc_next = jump_pc;
        end 
        else begin
            pc_next = pc_excte + 4;
        end
    end

    assign instr = instr_mem[pc_excte[12:2]]; // fetch

// register ve data memory ve jump_pc ataması burada olacak 
    always_comb begin
        mem_adres = 0;
        reg_data = 32'b0;
        jump_pc = 32'b0;        
        if (mem_en) begin
            mem_adres = alu_out;
        end   
        if(reg_file_en) begin
            if(instr[6:0] == 7'b1101111 || instr[6:0] == 7'b1100111) begin //JAL, JALR
                reg_data = pc_excte + 4;
            end
            else if(instr[6:0] == 7'b0000011) begin  // LOAD
                case(instr[14:12])
                    3'b000  : begin
                        reg_data = {{24{data_mem[alu_out[10:0]][7]}}, data_mem[alu_out[10:0]][7:0]};
                    end 
                    3'b001  : begin
                        reg_data = {{16{data_mem[alu_out[10:0]][15]}}, data_mem[alu_out[10:0]][15:0]};
                    end 
                    3'b010  : begin
                        reg_data = data_mem[alu_out[10:0]];
                    end 
                    3'b100 : begin
                        reg_data = {{24'b0}, data_mem[alu_out[10:0]][7:0]};
                    end 
                    3'b101 : begin
                        reg_data = {{16'b0}, data_mem[alu_out[10:0]][15:0]};
                    end  
                    default:    reg_data = 32'b0; // new
                endcase       
            end 
            else begin   // ekledim 
                reg_data = alu_out;
            end    
        end
        if(jump_ok) begin
            jump_pc = alu_out;
        end      
    end    


    always_ff @(posedge clk_i) begin
        if (!rstn_i) begin
            for (int i = 0; i < 2048; i = i + 1) begin
                data_mem[i] <= 0;    
            end    
        end 
        else if (mem_en) begin
            if (instr[14:12] == 3'b000) begin  // 10:0 mı 12:0 mı olacak tam kavrayamadim
                data_mem[mem_adres[10:0]][7:0] <= mem_data[7:0];  // Byte
            end
            else if (instr[14:12] == 3'b001) begin
                data_mem[mem_adres[10:0]][15:0] <= mem_data[15:0];  // Halfword
            end
            else if (instr[14:12] == 3'b010) begin
                data_mem[mem_adres[10:0]] <= mem_data;        // Word
            end
       end
    end    

    always_ff @(posedge clk_i) begin
       if (!rstn_i) begin
         for (int i=0; i<32; ++i) begin
           reg_file[i] <= '0;
         end
       end else if (reg_file_en && instr[11:7] != 5'b0) begin
         reg_file[instr[11:7]] <= reg_data;
       end
    end

    decode dec_inst
    (
        .reg_file(reg_file),
        .instr(instr),
        .rs1(rs1), 
        .rs2(rs2),
        .shamt(shamt),
        .instr_mem_data(instr_mem_data)
    );

    execute execute_inst
    (
        .instr(instr),
        .rs1(rs1),
        .rs2(rs2),
        .instr_mem_data(instr_mem_data),
        .shamt(shamt),
        .pc_excte(pc_excte),
        .jump_ok(jump_ok),
        .number1(number1),
        .number2(number2),
        .shamt_data(shamt_data),
        .sel(sel),
        .mem_data(mem_data),
        .reg_file_en(reg_file_en),
        .mem_en(mem_en)
    );

    alu alu_inst
    (
        .number1(number1),
        .number2(number2),
        .shamt_data(shamt_data),
        .sel(sel),
        .alu_out(alu_out)
    );


// pc ataması unutma OK

// register file da atama yaparken jal ve jalr icin özel durum yap.  OK

// register file da LOAD işleminde reg_data ya yazılacak verinin adresini rs1+ imm_data ile bulacağım
//o alu dan gelecek.  burada rd_data atacağım. oyle register ataması olacak. o yüzden onun icinde ozel durum var  OK

// store komutarında mem_adres aludan gelen sonuc olacak  OK

// load komutlarında reg_data aluda ngelen sonuc olacak   OK
endmodule    
