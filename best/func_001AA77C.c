void *func_001AA77C(unsigned char *s, int c, unsigned int n) {
    c &= 0xFF;
    if (n >= 16 && ((unsigned long)s & 0xF) == 0) {
        unsigned long pat = (unsigned long)c * 0x0101010101010101UL;
        while (n >= 16) {
            unsigned long a = ((unsigned long *)s)[0] ^ pat;
            unsigned long b = ((unsigned long *)s)[1] ^ pat;
            unsigned long m = 0x0101010101010101UL, h = 0x8080808080808080UL;
            if ((((a - m) & ~a) | ((b - m) & ~b)) & h) break;
            s += 16;
            n -= 16;
        }
    }
    while (n-- != 0) {
        if (*s == c) return s;
        s++;
    }
    return 0;
}
