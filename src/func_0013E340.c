extern s32 D_010CFD84[];
extern s32 D_010CFD88[];
extern s32 D_010CFD8C[];
extern s32 D_010CFD90[];
extern u8 D_010CFDC0[];
void func_0013DA98(void *);
void func_0013FFF8(void);

void func_0013E330(s32 a) { D_010CFD88[0] = a; }
void func_0013E340(s32 a) { D_010CFD8C[0] = a; }

void func_0013E350(void) {
    D_010CFD90[0] = 1;
    func_0013DA98(D_010CFDC0);
    func_0013FFF8();
    D_010CFD84[0] = 3;
}
