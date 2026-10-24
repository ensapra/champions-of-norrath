typedef int TI __attribute__((mode(TI)));
void *func_001A255C(char *dst, const char *src, int n) {
    char *d = dst;
    if (src < d && d < src + n) {
        const char *se = src + n;
        char *de = d + n;
        while (n-- != 0) {
            *--de = *--se;
        }
        return dst;
    }
    if ((unsigned)n >= 0x20 && !(((unsigned int)src | (unsigned int)d) & 0xF)) {
        TI *dq = (TI *)d;
        const TI *sq = (const TI *)src;
        do {
            n -= 0x20;
            *dq++ = *sq++;
            *dq++ = *sq++;
        } while ((unsigned)n >= 0x20);
        d = (char *)dq; src = (const char *)sq;
        if ((unsigned)n >= 8) {
            long *dl = (long *)d;
            const long *sl = (const long *)src;
            do {
                n -= 8;
                *dl++ = *sl++;
            } while ((unsigned)n >= 8);
            d = (char *)dl; src = (const char *)sl;
        }
    }
    while (n-- != 0) {
        *d++ = *src++;
    }
    return dst;
}
