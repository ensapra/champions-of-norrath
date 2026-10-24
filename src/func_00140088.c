extern s32 D_010D1278[];
extern s32 D_010D127C[];
extern s32 D_010D1280[];
extern s32 D_010D1284[];
extern s32 D_010D1288[];
s32 func_00140020(void *);
s32 func_0017AE78(s32, s32);
s32 func_00140088(void);

s32 func_001400F8(void *arg0) {
    s32 r;
    r = func_00140020(arg0);
    if (r != 0)
        return 0;
    if (D_010D1280[0] > 0) {
        D_010D1280[0]--;
        return r;
    }
    func_0017AE78(D_010D1288[0], 0);
    *(void **)((u8 *)arg0 + 0x18) = func_00140088;
    return 0;
}

s32 func_0017A848(s32, void *, s32 *);

s32 func_00140088(void) {
    s32 *st = D_010D127C;
    s32 r;
    r = func_0017A848(1, D_010D1278, st);
    if (r == 0)
        return r;
    if (*st == 0) {
        D_010D1284[0] = 0;
        return 1;
    }
    D_010D1284[0] = 1;
    return 1;
}
