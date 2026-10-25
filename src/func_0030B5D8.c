/* identical to func_001AAA40 (matched), with its names changed by decompdecomp */
typedef struct { s32 pad[4]; s32 f10; s32 f14; } Big;
Big *func_0030B3F8(s32, s32);
Big *func_0030B4D0(s32, Big *, s32, s32);

Big *func_0030B5D8(s32 ctx, char *s, s32 n, s32 total, s32 sign) {
    s32 cnt = (total + 8) / 9;
    s32 pw = 1;
    s32 bits = 0;
    s32 i;
    Big *r;
    while (pw < cnt) {
        pw <<= 1;
        bits++;
    }
    r = func_0030B3F8(ctx, bits);
    r->f14 = sign;
    r->f10 = 1;
    i = 9;
    if (n >= 10) {
        s += 9;
        do {
            r = func_0030B4D0(ctx, r, 10, *s++ - 48);
            i++;
        } while (i < n);
        s++;
    } else {
        s += 10;
    }
    if (i < total) {
        i = total - i;
        do {
            r = func_0030B4D0(ctx, r, 10, *s++ - 48);
        } while (--i);
    }
    return r;
}
