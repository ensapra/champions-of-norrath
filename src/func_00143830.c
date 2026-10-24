s32 func_00194390(void *, void *, void *);
s32 func_001944A0(s32);
extern s32 D_00486878[2];
extern s32 D_00483AD0;
extern u8 D_004FBFD0[];

s64 func_00143830(u8 *a) {
    s32 t = *(s32 *)(a + 4);
    if (t != 0) {
        func_001944A0(t);
    }
    return func_00194390(D_00486878, a + 4, a);
}

s64 func_00143878(u8 *a) {
    s32 t = *(s32 *)(a + 4);
    if (t != 0) {
        return func_001944A0(t);
    }
}

s64 func_001438A0(u8 *a) {
    s32 t = *(s32 *)(a + 4);
    s32 n;
    if (t != 0) {
        func_001944A0(t);
    }
    n = D_00483AD0 + 1;
    if (n >= 0x3C) n = 0;
    D_00483AD0 = n;
    return func_00194390(D_004FBFD0 + n * 4, a + 4, a);
}
