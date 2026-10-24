extern s32 D_010D44F8[];
extern s32 D_010D4508[];
extern s32 D_010D450C[];
extern s32 D_010D4538[];
extern s32 D_001BAC84[];
extern s32 D_001BD870[];
extern s32 D_001BD878[];
void func_0014D240(s32);
void func_0014D270(s32);
void func_0010A4D0(s32, s32, s32);

void func_00148730(s32 arg0) {
    if (arg0 != 0) {
        func_0014D240(D_010D44F8[0]);
        return;
    }
    func_0014D270(D_010D44F8[0]);
}

void func_00148768(void) {
    if (D_001BD870[0] != 0) {
        func_0010A4D0(D_001BD870[0], 0, 0);
    }
    if (D_001BD878[0] != 0) {
        func_0010A4D0(D_001BD878[0], 0, 0);
    }
    if (D_010D4538[0] != 0 && D_010D4508[0] != 0) {
        func_0014D270(D_010D4508[0]);
    }
    if ((D_001BAC84[0] & 2) && D_010D450C[0] != 0) {
        func_0014D270(D_010D450C[0]);
    }
}
