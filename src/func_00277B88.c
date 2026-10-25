extern char D_0034B6B1[], D_00485E70[];
s32 func_003044FC(char *, char *);
void func_002716A8(s32, s32);
void func_00277B88(s32 a) {
    void (*fp)(s32, s32);
    if (func_003044FC(D_0034B6B1, D_00485E70) == 0) {
        func_002716A8(a, 0);
        func_002716A8(a, 1);
        func_002716A8(a, 2);
        fp = func_002716A8;
        fp(a, 3);
    }
}
