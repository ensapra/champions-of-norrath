extern void func_00101150(void);
extern void func_001047E8(s32, s32);
extern void func_0011C298(s32, void *);
extern void func_0011C3B8(s32, s32, s32, s32);
extern s32 func_00184198(void);
extern s32 func_00185430(s32);
extern s32 D_B08A40[];
extern u8 jtbl_004C006C[];
extern s32 D_00B08A40;
extern s32 func_001B9FD8;

s32 func_00100850(u32 a, s32 b) {
    switch (a) {
    case 0: {
        void *table = jtbl_004C006C + 0x56CC;
        if (b) {
            func_00101150();
            func_0011C298(1, table);
        } else {
            func_0011C298(1, table);
        }
        break;
    }
    case 1:
        func_0011C3B8(0, 1, 3, 0);
        *(s32 *)((char *)&func_001B9FD8 + 0x3C8) = 1;
        break;
    case 2:
        func_0011C3B8(0, 1, 0, 0);
        break;
    case 3:
        func_0011C3B8(4, 1, 3, 8);
        break;
    case 4:
        *(s32 *)((char *)&func_001B9FD8 + 0x3C8) = 0;
        if (func_00184198()) {
            if (func_00185430(0x3000)) func_0011C3B8(4,1,3,0);
            else func_0011C3B8(4,1,3,9);
        } else {
            if (func_00185430(0x20)) func_0011C3B8(4,1,3,0);
            else func_0011C3B8(4,1,3,9);
        }
        break;
    case 5:
    case 6:
    case 7: {
        if (D_B08A40[0] != 0) {
            switch (b) {
            case 0: func_001047E8(0x48,0x60); break;
            case 1: func_001047E8(0x40,0x60); break;
            case 3: func_001047E8(0x4C,0x60); break;
            case 4: func_001047E8(0x47,0x60); break;
            case 5: func_001047E8(0x51,0x60); break;
            case 6: func_001047E8(0x49,0x60); break;
            case 7: func_001047E8(0x4E,0x60); break;
            case 8: func_001047E8(0x3F,0x60); break;
            case 9: func_001047E8(0x41,0x60); break;
            case 10: func_001047E8(0x4F,0x60); break;
            case 11: func_001047E8(0x44,0x60); break;
            case 12: func_001047E8(0x42,0x60); break;
            }
            D_B08A40[0]--;
        }
        break;
    }
    default:
        break;
    }
    return 0;
}
