u8 func_0017DFE8(u8);
void func_0017E008(u8 *a)
{
    a[7] = func_0017DFE8(a[7]);
    a[6] = func_0017DFE8(a[6]);
    a[5] = func_0017DFE8(a[5]);
    a[3] = func_0017DFE8(a[3]);
    a[2] = func_0017DFE8(a[2]);
    a[1] = func_0017DFE8(a[1]);
}

typedef struct {
    u32 spdifMode : 1;
    u32 screenType : 2;
    u32 videoOutput : 1;
    u32 japLanguage : 1;
    u32 ps1drvConfig : 8;
    u32 version : 3;
    u32 language : 5;
    s32 timezoneOffset : 11;
} OsdConfig;
typedef struct {
    u8 b0;
    u8 b1;
    u16 pad;
} OsdConfig2;
s32 func_0017DCF0(void);
void GetOsdConfigParam(OsdConfig *);
s32 GetOsdConfigParam2(void *, s32, s32);
extern u8 func_001D1C80[];

s32 func_0017DE30(void)
{
    OsdConfig c;
    if (func_0017DCF0()) {
        return *(s16 *)(func_001D1C80 + 0x448);
    }
    GetOsdConfigParam(&c);
    if (c.version == 0) {
        return 0x21C;
    }
    return c.timezoneOffset;
}

u8 func_0017DE80(void)
{
    OsdConfig c;
    OsdConfig2 c2;
    if (func_0017DCF0()) {
        return func_001D1C80[0x44B];
    }
    GetOsdConfigParam(&c);
    if (c.version == 0) {
        return 0;
    }
    GetOsdConfigParam2(&c2, 1, 1);
    return c2.b0 >> 6;
}

u8 func_0017DEE8(void)
{
    OsdConfig c;
    OsdConfig2 c2;
    if (func_0017DCF0()) {
        return func_001D1C80[0x44E];
    }
    GetOsdConfigParam(&c);
    if (c.version == 0) {
        return 0;
    }
    GetOsdConfigParam2(&c2, 1, 1);
    return (c2.b0 >> 4) & 1;
}
