extern s32 D_010D1270[];
extern s32 D_010D1274[];
void func_0013FFF8(void) { D_010D1270[0] = 1; D_010D1274[0] = 1; }
void func_00140010(void) { D_010D1270[0] = 0; }
s32 func_00140020(void) { return D_010D1274[0]; }

extern s32 D_0110B1C0[];
extern u8 D_0110B3C0[];
s32 func_001B4C40();
s32 func_001B4D40();
s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, s32, s32);
u32 func_001B5218(s32 a) {
    if (func_001B4C40() >= 0) {
        if (func_001B4D40() != 0) return 0xFFFEFFFC;
        D_0110B1C0[0] = a;
        if (func_001B08B0(D_0110B3C0, 8, 0, D_0110B1C0, 4, D_0110B1C0, 4, 0, 0) < 0) return 0xFFFEFFFF;
        return D_0110B1C0[0];
    }
    return 0xFFFF0000;
}
