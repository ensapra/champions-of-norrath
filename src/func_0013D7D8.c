extern s32 D_010CFB3C[];
extern s32 D_010CFB4C[];
extern s32 D_010CFB30[];
extern s32 D_010CFB38[];
void func_0013FFF8(void);
s32 func_001404D0(void);
s32 func_001404F0(void);
void func_00140A60(s32);

void func_0013D7D8(void) {
    func_0013FFF8();
    D_010CFB3C[0] = 3;
    D_010CFB4C[0] = 3;
}

void func_0013D7A0(void) {
    func_0013FFF8();
    D_010CFB4C[0] = 2;
    D_010CFB3C[0] = 3;
}

s32 func_0013D720(void) {
    if (func_001404D0() != 0) return 0;
    D_010CFB38[0] = func_001404F0();
    func_00140A60(D_010CFB30[0]);
    return 1;
}
