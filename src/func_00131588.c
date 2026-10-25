extern s32 D_001BD870[];
extern s32 D_001BD878[];
extern s32 D_001BAC84[];
extern s32 D_010CD448[];
extern s32 D_010CD780[];
void func_0010A4D0(s32, s32, s32);
void func_0014D270(s32);

void func_00131588(void) {
    if (D_001BD870[0] != 0) func_0010A4D0(D_001BD870[0], 0, 0);
    if (D_001BD878[0] != 0) func_0010A4D0(D_001BD878[0], 0, 0);

    if (D_010CD780[0] != 0) {
        if (D_010CD448[0] != 0) func_0010A4D0(D_010CD448[0], 1, 0x40);
    } else {
        if (D_010CD448[0] != 0) func_0010A4D0(D_010CD448[0], 0, 0x40);
    }

    if (D_001BAC84[0] & 2) {
        if (D_010CD448[1] != 0) func_0014D270(D_010CD448[1]);
    } else if (D_010CD780[1] != 0) {
        if (D_010CD448[1] != 0) func_0010A4D0(D_010CD448[1], 1, 0x40);
    } else {
        if (D_010CD448[1] != 0) func_0010A4D0(D_010CD448[1], 0, 0x40);
    }

    if (D_001BAC84[0] & 4) {
        if (D_010CD448[2] != 0) func_0014D270(D_010CD448[2]);
    } else if (D_010CD780[2] != 0) {
        if (D_010CD448[2] != 0) func_0010A4D0(D_010CD448[2], 1, 0x40);
    } else {
        if (D_010CD448[2] != 0) func_0010A4D0(D_010CD448[2], 0, 0x40);
    }
}
