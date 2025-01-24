#pragma once


// a byte - RAM cell
typedef struct {
    int data;
} word;


void print_mem(word*, int, int);
void print_mem_cell(word*, int);
