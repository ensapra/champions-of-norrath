s32 func_00301F68(void *, void *, s32);
s32 func_002CB2D8(u8 *a, u8 *b) {
    s32 ret = 0;
    if ((s8)a[2] == (s8)b[2]) {
        if (a[0] != b[0]) return 0;
        if (a[1] != b[1]) return 0;
        ret = func_00301F68(a + 3, b + 3, a[0] + 1) == 0;
    }
    return ret;
}
