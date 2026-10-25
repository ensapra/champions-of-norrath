s32 func_0017DCF0(void);
void GetOsdConfigParam(u32 *);
s32 GetOsdConfigParam2(void *, s32, s32);
extern u8 func_001D1C80[];
u8 func_0017DE80(void) {
    struct { u32 config; u8 ext[4]; } c;
    u8 r;
    if (func_0017DCF0()) {
        r = func_001D1C80[0x44B];
    } else {
        GetOsdConfigParam(&c.config);
        if (((c.config >> 13) & 7) == 0) return 0;
        GetOsdConfigParam2((void *)((u32)&c | 4), 1, 1);
        r = c.ext[0] >> 6;
    }
    return r;
}
