#include "mem.h"
#include <stdio.h>


void print_mem(word* base, int start, int end) {
    printf("Address\t\t\tData\n");
    printf("--------------------------------------\n");
    for (int i = start; i <= end; i += 4) printf("0x%.8X\t\t0x%.8X\n", i, (base + i)->data);
}

void print_mem_cell(word* base, int offset) {
    print_mem(base, offset, offset);
}

