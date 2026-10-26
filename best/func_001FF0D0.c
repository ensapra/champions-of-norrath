extern int func_00180D78(void *, int, int, int, int, int, int, int, float, float, float, int, int, int, int, int);
extern float D_00481094;
extern float D_00481098;
extern char D_007D6DE0[], D_007D6E30[], D_007D6E80[], D_007D6ED0[], D_007D6F20[], D_007D6F70[], D_007D6FC0[], D_007D7010[], D_007D7060[];

void func_001FF0D0(int a, int b) {
    int i;
    if (b != 0xFFFF) return;
    for (i = 0; i < 9; i++) {
        if (a != 1) return;
        switch (i) {
        case 0: func_00180D78(D_007D6DE0, 0, 0xFF, 0, 0xFF, 0, 0xFF, 0, 80.0f, 30.0f, 0, 0xFF, 2, 3, 0, 0); break;
        case 1: func_00180D78(D_007D6E30, 0xFF, 0, 0, 0xFF, 0xFF, 0, 0, 80.0f, 30.0f, 0, 0xFF, 2, 3, 6, 0); break;
        case 2: func_00180D78(D_007D6E80, 0xFF, 0, 0, 0xFF, 0xFF, 0, 0, 80.0f, 30.0f, 0, 0xFF, a, 3, 6, 0); break;
        case 3: func_00180D78(D_007D6ED0, 0xDC, 0xF, 0, 0x5A, 0x21, 0x1E, 0x1C, 10.0f, 20.0f, 0, 0, a, a, 4, 0); break;
        case 4: func_00180D78(D_007D6F20, 0x8E, 0x6C, 0x33, 0x6E, 0x6C, 5, 0, 20.0f, 8.0f, 0, 0, a, a, 2, 0); break;
        case 5: func_00180D78(D_007D6F70, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 5.0f, 5.0f, 0, 0, a, a, 2, 0); break;
        case 6: func_00180D78(D_007D6FC0, 0xDC, 0xF, 0, 0x5A, 0x73, 0xA, 0xA, 3.0f, 3.0f, 0, 0, 0, a, 4, 0); break;
        case 7: func_00180D78(D_007D7010, 0, 0, 0, 0x50, 0x21, 0x1E, 0x1C, 8.0f, 75.0f, 0, 0, 2, 0, 6, 0); break;
        case 8: func_00180D78(D_007D7060, 0x105, 0x122, 0x40, 0x101, 0x10B, 0x14, 0x19, D_00481094, D_00481098, 0, 0, 3, a, 8, 0); break;
        }
    }
}
