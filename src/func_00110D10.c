extern s32 func_0013B6F0(void*,s32); extern s32 func_0011BA18(s32); extern s32 func_001A3D78(void*,s32); extern void func_00114948(s32,s32,s32,void*,void*,s32); extern char jtbl_004C006C[]; extern char D_010C2A50[]; extern char D_010C2A58[]; extern char D_010C2250[]; extern char func_001B9FD8[]; extern char func_00110AF0[];
#define CALL(c) func_001A3D78(D_010C2250, func_0011BA18(c))
void func_00110D10(s32 arg0, s32 arg1) {
    s32 mode;
    *(s32*)D_010C2A50 = arg1;
    *(s32*)D_010C2A58 = 1;
    mode = func_0013B6F0(jtbl_004C006C + 0x756C, -1);
    switch (mode) {
    case 1:
        switch (arg0) {
        case -15: CALL(0x12); break;
        case -14: CALL(0x15); break;
        case -1: CALL(0x15); break;
        }
        break;
    case 2:
        switch (arg0) {
        case -15: CALL(0x13); break;
        case -14: CALL(0x16); break;
        case -1: CALL(0x16); break;
        }
        break;
    case 3:
        switch (arg0) {
        case -15: CALL(0x14); break;
        case -14:
        case -1: CALL(0x17); break;
        }
        break;
    }
    func_00114948(3, 0x1F4, 0xFA, D_010C2250, func_00110AF0, *(s32*)(func_001B9FD8 + 0x16EC));
}
