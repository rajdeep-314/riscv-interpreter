int power(int b, int e) {
    int acc = 1;
    for (int i = 0; i < e; i++) acc *= b;
    return acc;
}

// truncates the value of `k` to the right-most `b`
// bits and sign-extends to 32 bits
int truncate(int k, int b) {
    return ((k << (32 - b)) >> (32 - b));
}

// truncates the right-most 12 bits and sign extends
// used for register-immediate instructions
int truncate_12(int k) {
    return truncate(k, 12);
}


// masks the right-most `b` bits and zero-extends
// to 32 bits
int mask(int k, int b) {
    return (k & (power(2, b) - 1));
}

// masks the right-most 12 bits and zero-extends
int mask_12(int k) {
    return mask(k, 12);
}
