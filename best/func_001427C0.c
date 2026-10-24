extern s32 D_010D444C[];
extern s32 D_010D4468[];
extern s32 D_010D446C[];
extern s32 D_010D4478[];
s32 func_00142888(void);
void func_00149AE4(s32, s32, s32, s32 *);
void func_001427C0(s32 a, s32 b, u8 *c) {
    s32 t, m, x;
    if (func_00142888() != 0) {
        t = D_010D4478[0] - (*(s32 *)(c + 0xC) >> 4);
        if (t < 0) t = 0;
        m = D_010D446C[0] - D_010D4468[0];
        D_010D4478[0] = t;
        x = t;
        if (m < x) { D_010D4478[0] = m; x = m; }
        func_00149AE4(D_010D444C[0], x, m, D_010D4478);
    }
}
