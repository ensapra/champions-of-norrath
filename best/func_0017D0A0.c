extern s32 D_010ECF00[4];
s32 sceSifSetDma(void *, s32);
s32 sceSifDmaStat(s32);
s32 func_0017D4C0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 id;
    if (a3 == 0) return -1;
    D_010ECF00[0] = a0;
    D_010ECF00[1] = a1;
    D_010ECF00[2] = a2;
    D_010ECF00[3] = 0;
    id = sceSifSetDma(D_010ECF00, 1);
    if (id == 0) return -1;
    if (a3 == 1) {
        while (sceSifDmaStat(id) >= 0) ;
    }
    return 0;
}

extern u8 func_001D1C80[];
extern u8 func_001CE218[];
extern s32 func_0017C528(s32);
extern s32 func_001B08B0(void *, s32, s32, s32, s32, void *, s32, s32, s32);
void SignalSema(s32);
s32 func_0017D0A0(s32 *arg0) {
    s32 r;
    if (func_0017C528(0x21) == 0) return 0;
    if (func_001B08B0(func_001D1C80 + 0x3C0, 0x21, 0, 0, 0, func_001CE218 + 0x34A8, 8, 0, 0) < 0) {
        SignalSema(*(s32 *)(func_001CE218 + 0x22D4));
        return 0;
    }
    *arg0 = *(s32 *)((u32)(func_001CE218 + 0x34AC) | 0x20000000);
    r = *(s32 *)((u32)(func_001CE218 + 0x34A8) | 0x20000000);
    SignalSema(*(s32 *)(func_001CE218 + 0x22D4));
    return r;
}
