extern s32 jtbl_004C006C[];
extern u8 D_0110B3E8[];
extern u8 D_004CE1B0[];
extern u8 D_004CE108[];
extern u8 D_004CE128[];
s32 func_001A2660(void *, s32, s32);
void func_001A2850(void *, s32);
void func_001A1568(void *, s32, void *);

s32 func_001B4DD0(void) {
    jtbl_004C006C[0x3F4C / 4] = -1;
    func_001A2660(D_0110B3E8, 0, 4);
    return 0;
}

s32 *func_00188378(u8 *arg0, s32 arg1) {
    s32 *p;
    s32 i;

    if (arg1 >= *(u16 *)(arg0 + 6)) {
        func_001A2850(D_004CE1B0, arg1);
        return 0;
    }
    if (arg0[5] != 0) {
        p = (s32 *)(arg0 + 0x80);
    } else {
        p = (s32 *)(arg0 + 0x10);
    }
    for (i = arg1; i > 0; i--) {
        p = (s32 *)((u8 *)p + *p);
    }
    return p;
}

void func_00187808(u8 *arg0, s32 arg1) {
    if (arg0 == 0) {
        func_001A1568(D_004CE108, 0x138, D_004CE128);
    }
    *(s32 *)(arg0 + 0x300) = arg1;
}

void func_001877A8(u8 *arg0, s32 arg1, u8 arg2) {
    if (arg0 == 0) {
        func_001A1568(D_004CE108, 0x12A, D_004CE128);
    }
    arg0[arg1 + 0x2A0] = arg2;
}
