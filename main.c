#include "reg.h"
#include <stdio.h>

int main() {
    struct reg* r = init(4);
    regprint(r);
}
