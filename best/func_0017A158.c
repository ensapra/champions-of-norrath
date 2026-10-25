extern s32 D_001D0484;
extern u8 D_010EB640[];
extern u8 D_010EB6C0[];
extern u8 D_010ECC00[];

s32 PollSema(s32);
s32 SignalSema(s32);
s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, s32, s32);

s32 func_0017A158(s32 arg0) {
    u8 *v = D_010EB640;
    if (*(s32 *)(v + 0x24) == 0) {
        return -0x64;
    }
    if (PollSema(D_001D0484) < 0) {
        return -0xC8;
    }
    u8 *w = D_010EB6C0;
    *(s32 *)(w + 4) = arg0;
    s32 r = func_001B08B0(v, 0x15, 0, w, 0x30, D_010ECC00, 4, 0, 0);
    if (r != 0) {
        SignalSema(D_001D0484);
        return r;
    }
    SignalSema(D_001D0484);
    return *(s32 *)D_010ECC00;
}
