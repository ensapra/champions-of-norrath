extern s32 func_0010A4D0(s32, s32, s32);
extern s32 func_001BD870[];
extern s32 func_001BD878[];
extern s32 D_010CB040[];
extern s32 D_010CB060[];

void func_0012A230(void) {
    if (func_001BD870[0] != 0) {
        func_0010A4D0(func_001BD870[0], 0, 0);
    }
    if (func_001BD878[0] != 0) {
        func_0010A4D0(func_001BD878[0], 0, 0);
    }
    if (D_010CB060[0] != 0) {
        if (D_010CB040[0] != 0) {
            func_0010A4D0(D_010CB040[0], 1, 0x40);
        }
    } else if (D_010CB040[0] != 0) {
        func_0010A4D0(D_010CB040[0], 0, 0x40);
    }
    if (D_010CB060[1] != 0) {
        if (D_010CB040[1] != 0) {
            func_0010A4D0(D_010CB040[1], 1, 0x40);
        }
    } else if (D_010CB040[1] != 0) {
        func_0010A4D0(D_010CB040[1], 0, 0x40);
    }
}
