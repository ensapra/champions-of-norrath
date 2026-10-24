s32 func_00164130(u8 *p, s32 mask) {
    s32 i = 0;
    s32 r;
    s32 n = ((s8 *)p)[4];
    s16 v;
    u8 *q;
    if (n > 0) {
        q = p + 0x10;
        do {
            v = *(s16 *)(q + 0x14);
            q += 0x20;
            r = i;
            i++;
            if (v & mask) return r;
        } while (i < n);
    }
    return 0xC4653600;
}
