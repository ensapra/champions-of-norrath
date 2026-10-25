extern u8 func_001D1C80[];
extern u8 jtbl_004C006C[];
extern s32 D_010EE080[];
extern u8 D_010EE120[];
extern u8 D_010EE180[];
extern u8 D_010EE1C0[];
void func_0017EBF8(void *);
s32 WaitSema(s32);
s32 func_001AF710(const char *, ...);
s32 func_001B08B0(void *cd, s32 fno, s32 mode, void *send, s32 ssize, void *recv, s32 rsize, void (*end)(void *), void *earg);

s32 func_0017E898(s32 arg0, u8 arg1)
{
    s32 ret;

    if (*(s32 *)(func_001D1C80 + 0x488) == -1) {
        return -1;
    }
    if (arg0 >= D_010EE080[0]) {
        return -0xB;
    }
    D_010EE180[0] = arg0;
    D_010EE180[1] = arg1;
    WaitSema(*(s32 *)(func_001D1C80 + 0x488));
    ret = func_001B08B0(D_010EE120, 4, 1, D_010EE180, 0x10, D_010EE1C0, 0x10, func_0017EBF8, 0);
    if (ret != 0) {
        func_001AF710(jtbl_004C006C + 0xC7C4, ret);
        return -2;
    }
    D_010EE080[0x94 / 4] = arg0;
    D_010EE080[0x90 / 4] = 4;
    D_010EE080[0x98 / 4] = 0;
    return 0;
}
