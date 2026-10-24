s32 func_002FF8C0(s32, void *, s32, s32, void *);
s32 func_002FAB30(s32 idx, u8 *a) {
    u8 *b = a + 0xC;
    s32 off = idx + 0x3F0;
    s8 st = b[off];
    if (st == 2) {
        do {
            idx = (s32)*(s64 *)(a + idx * 8 + 0x20);
            off = idx + 0x3F0;
            st = b[off];
        } while (st == 2);
    }
    if (st == 1)
        return *(s32 *)a + *(s32 *)(a + idx * 8 + 0x20);
    return func_002FF8C0(1, a, idx, off, b);
}
