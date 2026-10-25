s32 func_00165DC0(char *, char *);
void func_00172708(s32, s32, s32, s32, u32);
extern char D_0047AAD0[];
extern char D_0047AAE0[];
extern char D_0047AAF0[];
extern char D_0047AB08[];
extern char D_0047AB28[];
extern char D_0047AB48[];
extern char D_0047AB68[];
extern s32 D_004844A4;
extern s8 D_004844B4;

s32 func_002CD6C0(void) {
    func_00172708(func_00165DC0(D_0047AAD0, D_0047AAE0), 0, 0, 3, 0x80808080);
    switch (D_004844B4) {
    case 0:
    case 5:
        func_00172708(func_00165DC0(D_0047AAD0, D_0047AAF0), 0, 0x100, 3, 0x80808080);
        break;
    case 1:
        func_00172708(func_00165DC0(D_0047AAD0, D_0047AB08), 0, 0x100, 3, 0x80808080);
        break;
    case 3:
        func_00172708(func_00165DC0(D_0047AAD0, D_0047AB28), 0, 0x100, 3, 0x80808080);
        break;
    case 4:
        func_00172708(func_00165DC0(D_0047AAD0, D_0047AB48), 0, 0x100, 3, 0x80808080);
        break;
    case 2:
        func_00172708(func_00165DC0(D_0047AAD0, D_0047AB68), 0, 0x100, 3, 0x80808080);
        break;
    }
    if (D_004844A4 > 600) {
        return 1;
    }
    return 0;
}
