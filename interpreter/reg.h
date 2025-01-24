#pragma once

typedef struct {
    int value;
} reg;


reg* new(void);
void init_reg(reg*, int);
