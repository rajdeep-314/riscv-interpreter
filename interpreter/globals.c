#include "globals.h"
#include "mem.h"
#include "reg.h"
#include <stdlib.h>


reg *regs;
reg *x0, *x1, *x2, *x3, *x4, *x5, *x6, *x7,
    *x8, *x9, *x10, *x11, *x12, *x13, *x14, *x15,
    *x16, *x17, *x18, *x19, *x20, *x21, *x22, *x23,
    *x24, *x25, *x26, *x27, *x28, *x29, *x30, *x31;
reg *zero, *ra, *sp, *gp, *tp, *t0, *t1, *t2, *s0, *fp,
    *s1, *a0, *a1, *a2, *a3, *a4, *a5, *a6, *a7, *s2,
    *s3, *s4, *s5, *s6, *s7, *s8, *s9, *s10, *s11, *t3,
    *t4, *t5, *t6;

word* RAM;


void reg_setup() {
    // allocating memory for x0-x31
    regs = malloc(32 * sizeof(reg));

    // initializing each of them with 0
    for (int i = 0; i < 32; i++) init_reg(regs + i, 0);

    // assigning values to the variables x0-x31
    x0 = regs + 0;
    x1 = regs + 1;
    x2 = regs + 2;
    x3 = regs + 3;
    x4 = regs + 4;
    x5 = regs + 5;
    x6 = regs + 6;
    x7 = regs + 7;
    x8 = regs + 8;
    x9 = regs + 9;
    x10 = regs + 10;
    x11 = regs + 11;
    x12 = regs + 12;
    x13 = regs + 13;
    x14 = regs + 14;
    x15 = regs + 15;
    x16 = regs + 16;
    x17 = regs + 17;
    x18 = regs + 18;
    x19 = regs + 19;
    x20 = regs + 20;
    x21 = regs + 21;
    x22 = regs + 22;
    x23 = regs + 23;
    x24 = regs + 24;
    x25 = regs + 25;
    x26 = regs + 26;
    x27 = regs + 27;
    x28 = regs + 28;
    x29 = regs + 29;
    x30 = regs + 30;
    x31 = regs + 31;

    // ABI variables
    zero = x0;
    ra = x1;
    sp = x2;
    gp = x3;
    tp = x4;
    t0 = x5;
    t1 = x6;
    t2 = x7;
    s0 = x8;
    fp = x8;
    s1 = x9;
    a0 = x10;
    a1 = x11;
    a2 = x12;
    a3 = x13;
    a4 = x14;
    a5 = x15;
    a6 = x16;
    a7 = x17;
    s2 = x18;
    s3 = x19;
    s4 = x20;
    s5 = x21;
    s6 = x22;
    s7 = x23;
    s8 = x24;
    s9 = x25;
    s10 = x26;
    s11 = x27;
    t3 = x28;
    t4 = x29;
    t5 = x30;
    t6 = x31;
}


void mem_setup(int size) {
    RAM = malloc(size * sizeof(word));
}

