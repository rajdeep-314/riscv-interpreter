#include "reg.h"
#include "instructions.h"
#include "commands.h"
#include "globals.h"
#include "mem.h"


int main() {
    reg_setup();
    mem_setup(256);

    print_mem(RAM, 0, 10);

    addi(t1, *zero, 2025);
    sw(*x6, 0, *x0);

    print_mem(RAM, 0, 10);

    /* addi(x1, *x0, 42); */
    /* addi(x16, *x0, 16); */
    /* addi(x17, *x0, 80); */
    /* sll(x2, *x1, *x16); */
    /* sll(x3, *x1, *x17); */

    /* print_regarr(regs, 5); */
}
