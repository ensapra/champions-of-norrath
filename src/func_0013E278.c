extern s32 D_010CFD80[];
extern s32 D_010CFD84[];
extern s32 D_010CFD88[];
extern s32 D_010CFD8C[];
extern s32 D_010CFD90[];
extern s32 D_010CFDC0[];
extern s32 D_010CFC60[];
extern s32 D_010CFC64[];
extern s32 D_010CFC68[];
extern s32 D_010CFC6C[];
extern s32 D_001C6828[];
extern void func_0013DA98(void *);
extern s32 func_001404D0(void);
extern s32 func_001404F0(void);
extern s32 func_00140020(void);
extern void func_001403B8(void);
extern void func_00140900(s32, s32, s32);

void func_0013E2E8(void) {
    D_010CFD80[0] = 0;
    D_010CFD84[0] = 0;
    D_010CFD88[0] = 0;
    D_010CFD8C[0] = -1;
    D_010CFD90[0] = 0;
    func_0013DA98(D_010CFDC0);
}

s32 func_0013E278(void) {
    if (func_001404D0() != 0) return 0;
    D_010CFC60[0] = func_001404F0();
    return 1;
}

s32 func_0013E1C0(u8 *o) {
    if (func_00140020() != 0) return 0;
    if (func_001404D0() != 0) return 0;
    if (D_010CFC64[0] > 0) {
        D_010CFC64[0]--;
        return 0;
    }
    func_001403B8();
    func_00140900(0, D_001C6828[0] + D_010CFC6C[0] * 0x20C + 0x10C, D_010CFC68[0]);
    *(void **)(o + 0x18) = func_0013E278;
    return 0;
}
