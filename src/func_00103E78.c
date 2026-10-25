extern s32 D_001BAA04[];
extern s32 D_001BAA10[];
extern s32 D_001BAA14[];
extern s32 D_001BAA18[];
extern s32 D_001BAA1C[];
extern s32 D_001BAA20[];
extern s32 D_001BAA24[];
extern s32 D_001BAA28[];
extern s32 D_0104BB58[];

void func_00103E78(void) {
    switch (D_001BAA04[0]) {
    case 0: D_001BAA18[0] = D_001BAA14[0]; D_0104BB58[0] = 1; break;
    case 1: D_001BAA18[0] = D_001BAA10[0]; D_0104BB58[0] = 1; break;
    case 2: D_001BAA18[0] = D_001BAA14[0]; D_0104BB58[0] = 2; break;
    case 3: D_001BAA18[0] = D_001BAA14[1]; D_0104BB58[0] = 4; break;
    case 4: D_001BAA18[0] = D_001BAA1C[0]; D_0104BB58[0] = 5; break;
    case 5: D_001BAA18[0] = D_001BAA20[0]; D_0104BB58[0] = 6; break;
    case 6: D_001BAA18[0] = D_001BAA24[0]; D_0104BB58[0] = 7; break;
    case 7: D_001BAA18[0] = D_001BAA28[0]; D_0104BB58[0] = 3; break;
    }
}
