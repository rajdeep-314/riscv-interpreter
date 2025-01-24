#include "mem.h"
#include <stdio.h>


void print_mem(byte* base, int start, int end) {
    printf("Address\t\t\tData\n");
    printf("--------------------------------------\n");
    for (int i = start; i <= end; i += 4)
        printf("0x%.8X\t\t0x%.2X%.2X%.2X%.2X\n", i, (base+i+3)->data, (base+i+2)->data, (base+i+1)->data, (base+i)->data);
}

void print_mem_cell(byte* base, int offset) {
    print_mem(base, offset, offset);
}

