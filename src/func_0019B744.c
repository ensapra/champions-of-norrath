extern u8 D_003642D0[];
extern s32 func_001A444C(void *);

s32 func_0019B744(void) {
    s32 i;
    s32 p;
    s32 n;
    u8 *base = D_003642D0;
    n = *(s32 *)(base + 0x309C);
    p = func_001A444C(base + 0x31A4) + (s32)(base + 0x31A5);
    for (i = 0; i < n; i++) {
        p = p + func_001A444C((void *)p) + 2;
    }
    return p;
}
