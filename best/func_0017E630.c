extern s32 D_001D2108[];
extern u8 D_004C006C[];
extern u8 D_010EE120[];
extern u8 D_010EE180[];
extern u8 D_010EE1C0[];
extern s32 D_010EE080[];
void func_0017EBF8(void);
s32 WaitSema(s32);
s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, void (*)(void), s32);
void func_001AF710(u8 *, s32);

s32 func_0017E630(s32 arg0) {
    s32 sema = D_001D2108[0];
    s32 r;
    u8 *msg;
    s32 pad[4];
    if (sema == -1) return -1;
    WaitSema(sema);
    msg = D_004C006C + 0xC744;
    r = func_001B08B0(D_010EE120, 1, 1, D_010EE180, 0x10, D_010EE1C0, 0x90, func_0017EBF8, 0);
    if (r != 0) {
        func_001AF710(msg, r);
        return -2;
    }
    D_010EE080[0x90 / 4] = 1;
    D_010EE080[0x98 / 4] = arg0;
    (void)pad;
    return 0;
}
