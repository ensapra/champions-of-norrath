extern s32 D_010CFD84[], D_010CFD88[], D_010CFD8C[], D_010CFD90[];
extern char D_010CFDC0[];
extern char *D_001C6828[], *D_001C682C[], *D_001C6830[];
s32 func_00140020(void);
s32 func_001404D0(void);
void func_001403B8(void);
void func_00140768(char *, s32, char *, s32);
void func_0013E598(void);

s32 func_0013E418(s32 *self) {
    if (func_00140020() != 0) return 0;
    if (func_001404D0() != 0) return 0;
    if (D_010CFD84[0] > 0) {
        D_010CFD84[0]--;
        return 0;
    }
    func_001403B8();
    switch (D_010CFD90[0]) {
    case 1:
        func_00140768(D_010CFDC0, 0, D_001C6828[0] + D_010CFD8C[0] * 0x20C + 0x10C, D_010CFD88[0]);
        break;
    case 2:
        func_00140768(D_010CFDC0, 2, D_001C6830[0] + D_010CFD8C[0] * 0x20C + 0x10C, D_010CFD88[0]);
        break;
    case 3:
        func_00140768(D_010CFDC0, 1, D_001C682C[0] + D_010CFD8C[0] * 0x20C + 0x10C, D_010CFD88[0]);
        break;
    }
    self[6] = (s32)func_0013E598;
    return 0;
}
