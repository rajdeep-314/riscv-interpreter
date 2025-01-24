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


// Register-Register instructions
/* void sll(reg* rd, reg rs1, reg rs2) { */
/*     rd->value = rs1 << imm_ma */
/* } */

