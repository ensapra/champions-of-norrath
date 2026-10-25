char *func_001A4738(char *dst, const char *src, unsigned int n) {
    char *d = dst;
    unsigned int al = ((unsigned int)d | (unsigned int)src);
    unsigned int sz = 8;
    if ((al & 7) == 0) {
        if ((al & 15) == 0) sz = 16;
        if ((al & 15) == 0) {
        } else if (n >= 8) {
            u64 *dw = (u64 *)d;
            u64 *sw = (u64 *)src;
            u64 w = *sw;
            if (!((w - 0x0101010101010101UL) & ~w & 0x8080808080808080UL)) {
                do {
                    w = *sw;
                    n -= 8;
                    sw++;
                    *dw++ = w;
                    if (n < 8) break;
                    w = *sw;
                } while (!((w - 0x0101010101010101UL) & ~w & 0x8080808080808080UL));
            }
            d = (char *)dw;
            src = (char *)sw;
        }
    }
    while (n) {
        char c = *src++;
        n--;
        *d++ = c;
        if (c == 0) {
            while (n--) *d++ = 0;
            break;
        }
    }
    return dst;
}
