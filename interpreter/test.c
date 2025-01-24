#include "reg.h"
#include "instructions.h"
#include "commands.h"
#include <stdlib.h>

int main() {
    // iniitializing 32 registers with 0
    reg* regs = malloc(32 * sizeof(reg));
    for (int i = 0; i < 32; i++) init_reg(regs + i, 0);
    reg* x0 = regs;
    reg* x1 = regs + 1;
    reg* x2 = regs + 2;
    reg* x3 = regs + 3;
    reg* x16 = regs + 16;
    reg* x17 = regs + 17;

    // printing them before any operations
    print_regarr(regs, 5);

    // some instructions
    /* addi(x1, *x0, 100); */
    /* slti(x2, *x1, 0xfff); */
    /* sltiu(x3, *x1, 0xfff); */
    addi(x1, *x0, 42);
    addi(x16, *x0, 16);
    addi(x17, *x0, 80);
    sll(x2, *x1, *x16);
    sll(x3, *x1, *x17);

    print_regarr(regs, 5);
}
