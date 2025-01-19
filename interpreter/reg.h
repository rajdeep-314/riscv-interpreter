// include the #IFNDEF stuff here in the future


typedef struct reg {
    int value;
} reg;


reg* new(void);
void init_reg(reg*, int);
