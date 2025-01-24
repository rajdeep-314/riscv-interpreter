#pragma once


// Register-Immediate instructions
void addi(reg*, reg, int);
void xori(reg*, reg, int);
void ori(reg*, reg, int);
void andi(reg*, reg, int);
void slli(reg*, reg, int);
void srli(reg*, reg, int);
void srai(reg*, reg, int);
void slti(reg*, reg, int);
void sltiu(reg*, reg, int);

void lui(reg*, int);

// Register-Register instructions
void add(reg*, reg, reg);
void sub(reg*, reg,reg);
void xor(reg*, reg, reg);
void or(reg*, reg, reg);
void and(reg*, reg, reg);
void sll(reg*, reg, reg);
void srl(reg*, reg, reg);
void sra(reg*, reg, reg);
void slt(reg*, reg, reg);
void sltu(reg*, reg, reg);
