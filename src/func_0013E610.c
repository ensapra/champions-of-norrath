extern s32 D_010D10E0[];
extern u8 D_004CAF78[];
extern u8 D_004CAF80[];
extern u8 D_004CAF88[];
extern s32 D_001BAC80[];
s32 func_001B4110(void *, s32, s32, s32, s32, s32);
s32 func_001B3C48(void *, void *, s32, s32, s32);

void func_0013E610(void) {
    s32 r = func_001B4110(D_004CAF78, 0x4807, 0, 0, 0, 0);
    D_010D10E0[0] = r;
    if (r == 0) {
        if (func_001B3C48(D_004CAF80, D_004CAF88, 0, 0, 0) < 0)
            D_010D10E0[0] = 1;
        if (D_010D10E0[0] == 0)
            D_001BAC80[0] |= 4;
    }
}
