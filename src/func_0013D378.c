extern s32 D_010CFB30[];
extern s32 D_010CFB34[];
extern s32 D_010CFB38[];
extern s32 D_010CFB3C[];
extern s32 D_010CFB40[];
extern s32 D_010CFB44[];
extern s32 D_010CFB48[];
extern s32 D_010CFB4C[];
extern s32 D_010CFA20[];
extern void func_00140010(void *);
extern s32 func_001404D0(void);
extern s32 func_001404F0(void);

void func_0013D3E8(void) {
    D_010CFB30[0] = 0;
    D_010CFB34[0] = 0;
    D_010CFB38[0] = 0;
    D_010CFB3C[0] = 0;
    D_010CFB40[0] = 0;
    D_010CFB44[0] = 0;
    D_010CFB48[0] = -1;
    D_010CFB4C[0] = 0;
}

void func_0013D3B0(void *arg0) {
    void (*fn)(s32);
    func_00140010(arg0);
    fn = *(void (**)(s32))((u8 *)arg0 + 8);
    if (fn != 0) fn(D_010CFA20[0]);
}

s32 func_0013D378(void) {
    if (func_001404D0() != 0) return 0;
    D_010CFA20[0] = func_001404F0();
    return 1;
}
