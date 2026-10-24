extern u8 func_001C7330[];
s32 func_0014B9F0(void *, void *);
s32 func_001568E4(u8 *o, u8 *b, u8 *c) {
    s32 r;
    s32 v;
    s32 w;
    void *p = func_001C7330;
    p = *(void **)((u8 *)p + 0x1C8);
    r = ((s32 (*)(void))p)();
    if (func_0014B9F0(b + 0x8D0, c + 0x8D0) == 0) {
        v = *(s32 *)(b + 0x8D0);
        *(s32 *)(o + 0x98) = 2;
        r = 1;
        *(s32 *)(o + 0x8C0) = v;
        *(s32 *)(o + 0x8D0) = v;
        *(s32 *)(o + 0x8B0) = v;
        *(s8 *)(o + 0x8C3) = 0;
    }
    w = *(s32 *)(b + 0x8D4);
    if (w != *(s32 *)(c + 0x8D4)) {
        *(s32 *)(o + 0x8D4) = w;
        *(s32 *)(o + 0x98) = 2;
        r = 1;
    }
    return r;
}
