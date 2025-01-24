#include "reg.h"


// Register-Immediate instructions
void addi(reg* rd, reg* rs1, int imm) {
    rd->value = rs1->value + imm;
}

void xori(reg* rd, reg* rs1, int imm) {
    rd->value = rs1->value ^ imm;
}

void ori(reg* rd, reg* rs1, int imm) {
    rd->value = rs1->value | imm;
}

void andi(reg* rd, reg* rs1, int imm) {
    rd->value = rs1->value & imm;
}

void slli(reg* rd, reg* rs1, int imm) {
    rd->value = rs1->value << imm;
}

void srli(reg* rd, reg* rs1, int imm) {
    // right shift is logical for unsigned values
    unsigned int val = rs1->value;
    val = val >> imm;
    rd->value = val;
}

void srai(reg* rd, reg* rs1, int imm) {
    rd->value = rs1->value >> imm;
}


// Register-Register instructions

