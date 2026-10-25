extern void func_0010A4D0(s32, s32, s32);
extern s32 func_0011E378();
extern s32 func_001A1640(s32);
extern s32 func_001BD870[];
extern s32 func_001BD878[];
extern s32 *D_010C6EB0[];

void func_00121990(void) {
    s32 found = 0;
    s32 i;
    if (func_001BD870[0] != 0) {
        func_0010A4D0(func_001BD870[0], func_0011E378() == 0, 0x40);
    }
    for (i = 0; i < 4; i++) {
        if (func_001A1640(*D_010C6EB0[0] + i * 0x258) != 0) {
            found = 1;
            break;
        }
    }
    if (func_001BD878[0] != 0) {
        func_0010A4D0(func_001BD878[0], found, 0x40);
    }
}
