extern s32 D_010D1100[], D_010D1104[], D_010D1110[], D_010D1114[], D_010D1118[], D_010D111C[];
extern char D_010D1120[];
extern char *D_001C682C[];
extern char func_0013EC10[];
s32 func_001404D0(void);
s32 func_00141078(s32);
void func_001407E8(s32, s32, void *, s32);
void func_00140868(s32, s32, void *, void *, s32);
void func_00140BC8(s32, void *, void *, s32, s32);

s32 func_0013EAA8(s32 *a) {
    s32 ret = 0;
    if (func_001404D0() != 0) return ret;
    if (func_00141078(D_010D1104[0]) >= 0) return ret;
    switch (D_010D111C[0]) {
    case 1:
        func_001407E8(D_010D1100[0], 1, D_010D1120, D_010D1110[0]);
        ret = 0;
        break;
    case 2:
        func_00140868(D_010D1100[0], 1, D_001C682C[0] + D_010D1118[0] * 0x20C + 0x10C, D_010D1120, D_010D1110[0]);
        ret = 0;
        break;
    case 3:
        func_00140BC8(1, D_001C682C[0] + D_010D1118[0] * 0x20C + 0x10C, D_010D1120, D_010D1110[0], D_010D1114[0]);
        ret = 0;
        break;
    default:
        ret = 0;
        break;
    }
    a[6] = (s32)func_0013EC10;
    return ret;
}
