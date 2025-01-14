// include the #IFNDEF stuff here in the future


struct reg {
    int value;
};


struct reg* new(void);
struct reg* init(int);
void regprint(struct reg*);

