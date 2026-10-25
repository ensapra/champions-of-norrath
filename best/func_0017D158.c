extern u8 func_001D1AE0[];
extern u8 func_001D1C80[];
extern u8 func_001CE218[];
extern u8 func_001D1570[];
s32 func_0017C528(s32);
s32 func_001AFE98(void *, s32);
s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, s32, s32);
s32 SignalSema(s32);
s32 func_0017D158(s32 arg0) {
    s32 r;
    if (func_0017C528(0x22) != 0) {
        *(s32 *)(func_001D1AE0 + 0x20) = arg0;
        func_001AFE98(func_001D1AE0 + 0x20, 4);
        if (func_001B08B0(func_001D1C80 + 0x3C0,
                          *(s32 *)(func_001D1C80 + 0x3E8),
                          0,
                          func_001D1AE0 + 0x20,
                          *(s32 *)(func_001D1C80 + 0x3EC),
                          func_001D1570 + 0x150,
                          *(s32 *)(func_001D1C80 + 0x3F0),
                          0, 0) < 0) {
            SignalSema(*(s32 *)(func_001CE218 + 0x22D4));
            return 0;
        }
        r = *(s32 *)((u32)(func_001D1570 + 0x150) | 0x20000000);
        SignalSema(*(s32 *)(func_001CE218 + 0x22D4));
        return r;
    }
    return 0;
}
