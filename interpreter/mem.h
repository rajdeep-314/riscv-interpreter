#pragma once


// a byte - RAM cell
typedef struct {
    char data;
} byte;


void print_mem(byte*, int, int);
void print_mem_cell(byte*, int);
