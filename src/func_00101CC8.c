extern s32 func_0018ABA0(char **);

s32 func_001011F8(char *s, s32 *out, s32 n) {
    s32 i = 0;
    s32 *p;
    u32 lim;
    if (out == 0 || n == 0) return -1;
    p = out;
    lim = n - 1;
    while (*s) {
        if (i < lim) {
            i++;
            *p = func_0018ABA0(&s);
            p++;
        } else {
            *p = 0;
            return -i;
        }
    }
    out[i] = 0;
    return i;
}

typedef struct { s32 a, b, c, d; } S_B0BAB0;
extern S_B0BAB0 D_B0BAB0;
extern char D_004C58F0[];
extern s32 D_B0BA98[];
extern s32 D_B0BA9C[];
extern s32 D_B0BAA0[];
extern s32 D_B0BAA4[];
extern s32 D_B0BAA8[];
extern s32 D_B0BAAC[];
extern s32 ovl_ntgui2_func_0017E370(void *);
extern void func_001A2850(const char *);
extern void func_0017E898(s32, u8);

s32 func_00101CC8(s32 a0, s32 a1, s32 a2, s32 a3) {
    char buf[16];
    s32 *pa0 = D_B0BAA0;
    s32 *pa4 = D_B0BAA4;
    D_B0BAB0.a = a3;
    D_B0BAB0.b = a0;
    D_B0BAB0.c = a1;
    D_B0BAB0.d = a2;
    D_B0BA98[0] = 0;
    D_B0BA9C[0] = 0;
    *pa0 = 1;
    *pa4 = 1;
    D_B0BAA8[0] = 0;
    D_B0BAAC[0] = 0;
    if (ovl_ntgui2_func_0017E370(buf) == -1) {
        func_001A2850(D_004C58F0);
    }
    func_0017E898(*pa4, *pa0);
    return 0;
}
