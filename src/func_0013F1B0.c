extern s32 D_010D1234[], D_010D1238[], D_010D123C[], D_010D1240[];
extern char *D_001C6828[], *D_001C682C[], *D_001C6830[];
s32 func_00140020(void);
s32 func_001404D0(void);
void func_001403B8(void);
void func_00140D20(s32, char *, s32);
void func_0013F308(void);

s32 func_0013F1B0(s32 *self) {
    if (func_00140020() != 0) return 0;
    if (func_001404D0() != 0) return 0;
    if (D_010D1234[0] > 0) {
        D_010D1234[0]--;
        return 0;
    }
    func_001403B8();
    switch (D_010D1240[0]) {
    case 0:
        func_00140D20(0, D_001C6828[0] + D_010D123C[0] * 0x20C + 0x10C, D_010D1238[0]);
        break;
    case 1:
        func_00140D20(1, D_001C682C[0] + D_010D123C[0] * 0x20C + 0x10C, D_010D1238[0]);
        break;
    case 2:
        func_00140D20(2, D_001C6830[0] + D_010D123C[0] * 0x20C + 0x10C, D_010D1238[0]);
        break;
    }
    self[6] = (s32)func_0013F308;
    return 0;
}
