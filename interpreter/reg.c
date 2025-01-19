#include <stdlib.h>
#include "reg.h"


reg* new() {
    reg* r = malloc(sizeof(reg));
    return r;
}

void init_reg(reg* r, int v) {
    r->value = v;
}
