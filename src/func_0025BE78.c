s8 func_002D46E0(s32);
s32 func_00303EB8(char *, const char *, ...);
extern char D_00485B18[];
extern char D_00485BA8[];
extern char D_00485BD8[];
extern s32 D_00485C00;
extern s32 D_00485C04;
extern char D_00486C30[4];

char *func_0025BE78(s32 a, s32 b, s8 *tbl) {
    s32 n;
    if (a == -1 && b == a) {
        a = D_00485C00;
        b = D_00485C04;
    }
    if (a != -1 && b != -1) {
        if (tbl != 0) {
            n = tbl[a];
        } else {
            n = func_002D46E0(a);
        }
        if (n >= 2) {
            func_00303EB8(D_00486C30, D_00485BD8, a + 1, b + 0x41);
        } else {
            func_00303EB8(D_00486C30, D_00485BA8, a + 1);
        }
    } else {
        D_00486C30[0] = D_00485B18[0];
    }
    return D_00486C30;
}
