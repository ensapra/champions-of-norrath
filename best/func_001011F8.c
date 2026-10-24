extern char D_004C58D8[];
extern char D_004C58E0[];
extern char D_004C57C8[];
extern char D_004C58F0[];
extern void func_001A2660(void *, s32, s32);
extern void func_0011C298(s32, const char *, ...);
extern void func_0018ACA0(char **, char *);

void func_00101150(char **list) {
    char buf[0x400];
    char *p;
    char **pp;
    buf[0] = D_004C58D8[0];
    func_001A2660(buf + 1, 0, 0x3FF);
    func_0011C298(4, D_004C58E0);
    pp = &p;
    p = buf;
    while (*list) {
        func_0018ACA0(pp, *list);
        list++;
    }
    **pp = 0;
    func_0011C298(0, buf);
    func_0011C298(4, D_004C57C8);
}

extern s32 func_0018ABA0(char **);

s32 func_001011F8(char *s, s32 *out, s32 n) {
    s32 i = 0;
    s32 *p;
    if (out == 0 || n == 0) return -1;
    p = out;
    while (*s) {
        if (i < (u32)(n - 1)) {
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

extern s32 D_B0BA98[];
extern s32 D_B0BA9C[];
extern s32 D_B0BAA0[];
extern s32 D_B0BAA4[];
extern s32 D_B0BAA8[];
extern s32 D_B0BAAC[];
extern s32 D_B0BAB0[];
extern s32 ovl_ntgui2_func_0017E370(void *);
extern void func_001A2850(const char *);
extern void func_0017E898(s32, u8);

s32 func_00101CC8(s32 a0, s32 a1, s32 a2, s32 a3) {
    char buf[16];
    s32 *pa0 = D_B0BAA0;
    s32 *pa4 = D_B0BAA4;
    D_B0BAB0[1] = a0;
    D_B0BAB0[2] = a1;
    D_B0BAB0[3] = a2;
    D_B0BAB0[0] = a3;
    *pa4 = 1;
    D_B0BA98[0] = 0;
    D_B0BA9C[0] = 0;
    D_B0BAA8[0] = 0;
    D_B0BAAC[0] = 0;
    *pa0 = 1;
    if (ovl_ntgui2_func_0017E370(buf) == -1) {
        func_001A2850(D_004C58F0);
    }
    func_0017E898(*pa4, *pa0);
    return 0;
}
