extern void func_00101150(void);
extern void func_001047E8(s32, s32);
extern void func_0011C298(s32, void *);
extern void func_0011C3B8(s32, s32, s32, s32);
extern s32 func_00184198(void);
extern s32 func_00185430(s32);
extern u8 jtbl_004C006C[];
extern s32 D_00B08A40;
extern s32 func_001B9FD8;

s32 func_00100850(u32 a, s32 b) {
    switch (a) {
    case 0:
        if (b) func_00101150();
        func_0011C298(1, jtbl_004C006C + 0x56CC);
        break;
    case 1:
        func_0011C3B8(0, 1, 3, 0);
        break;
    case 2:
        func_0011C3B8(0, 1, 0, 0);
        break;
    case 3:
        func_0011C3B8(4, 1, 3, 8);
        break;
    case 4:
        if (func_00185430(func_00184198() ? 0x3000 : 0x20))
            func_0011C3B8(4, 1, 3, 0);
        else
            func_0011C3B8(4, 1, 3, 9);
        break;
    default:
        break;
    }
    return 0;
}
