extern u8 D_010EB640[], D_010EB6C0[], D_010ECC00[];
extern s32 D_001D0468, D_001D0484;
extern s32 PollSema(s32);
extern s32 SignalSema(s32);
extern s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, void *, s32);
extern void func_0017A088(void);

s32 func_0017A440(s32 a0, s32 a1, s32 a2) {
    s32 r;
    if (*(s32 *)(D_010EB640 + 0x24) == 0)
        return -100;
    if (PollSema(D_001D0484) < 0)
        return -200;
    *(s32 *)D_010EB6C0 = a0;
    *(s32 *)(D_010EB6C0 + 0x10) = a1;
    *(s32 *)(D_010EB6C0 + 0x14) = a2;
    r = func_001B08B0(D_010EB640, 4, 1, D_010EB6C0, 0x30, D_010ECC00, 4, func_0017A088, 0);
    if (r == 0)
        D_001D0468 = 4;
    else
        SignalSema(D_001D0484);
    return r;
}
