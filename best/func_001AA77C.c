void *func_001AA77C(unsigned char *s, int c, unsigned int n) {
    c &= 0xFF;
    while (n-- != 0) {
        if (*s == c) return s;
        s++;
    }
    return 0;
}
