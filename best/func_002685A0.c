extern s32 D_00485C80;
extern u16 *D_00485C84;
extern s32 D_00485C88;
extern s32 D_00485C94;
s32 func_002685A0(u16 *src, s32 n) {
    s32 i;
    if (n > 30000 || D_00485C88 + n + 1 > 0x10000) {
        D_00485C80 = 1;
        return 1;
    }
    D_00485C84[D_00485C88++] = n;
    if (n > 0) {
        i = n;
        do {
            D_00485C84[D_00485C88++] = *src++;
            D_00485C94++;
        } while (--i);
    }
    return 0;
}
