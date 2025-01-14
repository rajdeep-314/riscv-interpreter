#include <stdio.h>
#include <stdlib.h>
#include "reg.h"

struct reg* new() {
    struct reg* r = malloc(sizeof(struct reg));
    return r;
}

struct reg* init(int v) {
    struct reg* r = new();
    r->value = v;
    return r;
}

void regprint(struct reg* r) {
    printf("Register value: %d\n", r->value);
}

