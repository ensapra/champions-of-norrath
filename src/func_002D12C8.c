/* identical to func_0017DF50 (matched), with its names changed by decompdecomp */
s32 func_002D1068(void);
void GetOsdConfigParam_2(u32 *);
s32 GetOsdConfigParam2_2(void *, s32, s32);
extern u8 D_00444408[];
u8 func_002D12C8(void) {
    struct { u32 config; u8 ext[4]; } c;
    u8 r;
    if (func_002D1068()) {
        r = D_00444408[0x44F];
    } else {
        GetOsdConfigParam_2(&c.config);
        if (((c.config >> 13) & 7) == 0) return 0;
        GetOsdConfigParam2_2((void *)((u32)&c | 4), 1, 1);
        r = (c.ext[0] >> 5) & 1;
    }
    return r;
}
