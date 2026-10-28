typedef struct { u64 lo, hi; } P128;
s32 func_0016C9C8(u8 *p, s32 index) {
    s32 r;
    P128 *e;
    P128 *t;
    if (*(u16 *)(p + 0x10) & 2) {
        index <<= 4;
        e = (P128 *)(p + (p[0x21] << 4) + index);
        t = e;
        r = 0;
        if (t->lo != 0 || e->hi != 0) r = 1;
        return r;
    }
    return 0;
}
