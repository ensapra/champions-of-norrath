extern s32 D_010CFD80[];
extern s32 D_010CFD84[];
extern s32 D_010CFD90[];
extern char D_010CFDC0[];
s32 func_001404D0(void);
s32 func_001404F0(void);
void func_0013DA98(void *);
void func_0013FFF8(void);

s32 func_0013E598(void) {
    if (func_001404D0() != 0)
        return 0;
    D_010CFD80[0] = func_001404F0();
    return 1;
}

void func_0013E3D0(void) {
    D_010CFD90[0] = 3;
    func_0013DA98(D_010CFDC0);
    func_0013FFF8();
    D_010CFD84[0] = 3;
}

void func_0013E390(void) {
    D_010CFD90[0] = 2;
    func_0013DA98(D_010CFDC0);
    func_0013FFF8();
    D_010CFD84[0] = 3;
}
