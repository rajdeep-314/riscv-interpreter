#include "reg.h"
#include "utils.h"


// Register-Immediate instructions
void addi(reg* rd, reg rs1, int imm) {
    imm = truncate_12(imm);
    rd->value = rs1.value + imm;
}

void xori(reg* rd, reg rs1, int imm) {
    imm = truncate_12(imm);
    rd->value = rs1.value ^ imm;
}

void ori(reg* rd, reg rs1, int imm) {
    imm = truncate_12(imm);
    rd->value = rs1.value | imm;
}

void andi(reg* rd, reg rs1, int imm) {
    imm = truncate_12(imm);
    rd->value = rs1.value & imm;
}

void slli(reg* rd, reg rs1, int imm) {
    imm = truncate_12(imm);
    rd->value = rs1.value << imm;
}

void srli(reg* rd, reg rs1, int imm) {
    imm = truncate_12(imm);
    // right shift is logical for unsigned values
    unsigned int val = rs1.value;
    val = val >> imm;
    rd->value = val;
}

void srai(reg* rd, reg rs1, int imm) {
    imm = truncate_12(imm);
    rd->value = rs1.value >> imm;
}

void slti(reg* rd, reg rs1, int imm) {
    imm = truncate_12(imm);
    rd->value = (rs1.value < imm) ? 1 : 0;
}

void sltiu(reg* rd, reg rs1, int imm) {
    imm = mask_12(imm);
    rd->value = (rs1.value < imm) ? 1 : 0;
}

void lui(reg* rd, int imm) {
    rd->value = imm << 12;
}
void add(reg*rd, reg rs1, reg rs2){
    rd->value = rs1.value + rs2.value;
}

void sub(reg* rd, reg rs1, reg rs2){
    rd -> value = rs1.value - rs2.value;
}

void xor(reg* rd, reg rs1, reg rs2){
    rd -> value = rs1.value ^ rs2.value;
}

void or(reg* rd, reg rs1, reg rs2){
    rd -> value = rs1.value | rs2.value;
}

void and(reg* rd, reg rs1, reg rs2){
    rd -> value = rs1.value & rs2.value;
}

// Register-Register instructions
void sll(reg* rd, reg rs1, reg rs2) {
// Masking is used so that we can only shift up to 32 bits. 
// We store the value 32 in these 5 bits, 
// and then use the AND operator to extract those 5 bits for shifting.
    rd->value = rs1.value << mask(rs2.value, 5);
}

void srl(reg* rd, reg rs1, reg rs2) {
    unsigned int val = rs1.value;
    val = val >> mask(rs2.value, 5);
    rd->value = val;
}

void sra(reg* rd, reg rs1, reg rs2) {
    rd->value = rs1.value >> mask(rs2.value, 5);
}

void slt(reg* rd, reg rs1, reg rs2) {
    rd->value = (rs1.value < rs2.value) ? 1 : 0;
}

void sltu(reg* rd, reg rs1, reg rs2) {
    unsigned int val1 = rs1.value,
                 val2 = rs2.value;
    rd->value = (val1 < val2) ? 1 : 0;
}
