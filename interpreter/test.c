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

    // printing them before any operations
    print_regarr(regs, 5);

    // some instructions
    addi(x1, x0, -1);
    srli(x2, x1, 8);
    srai(x3, x1, 8);

    print_regarr(regs, 5);
}
