extern s32 D_010CFD84[];
extern s32 D_010CFD90[];
extern char D_010CFDC0[];
s32 func_0013DA98(void *);
s32 func_0013FFF8(void);

void func_0013E350(void) {
    D_010CFD90[0] = 1;
    func_0013DA98(D_010CFDC0);
    func_0013FFF8();
    D_010CFD84[0] = 3;
}
