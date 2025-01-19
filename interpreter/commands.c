/* commands.c
 * 
 * Here, commands refer to the prompts a user can give in
 * the REPL session.
 * This incorporates RISCV instructions, as well as some "meta-instructions".
 * to perform tasks like displaying the value in a register, or displaying
 * a block of memory, etc.
 */

#include "reg.h"
#include <stdio.h>


// prints the hex value in a register
// (add functions for other bases, and maybe a format)
void print_reg(reg* r) {
    printf("Register value: 0x%.8X\n", r->value);
}

// prints values from an array of registers
void print_regarr(reg* r, int size) {
    for (int i = 0; i < size; i++) {
        reg* current_reg = r + i;
        printf("Register %d\t:\t0x%.8X\n", i, current_reg->value);
    }
    printf("\n");
}

