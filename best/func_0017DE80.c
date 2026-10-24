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
    u8 format : 4;
    u8 daylight : 1;
    u8 summer : 1;
    u8 timeFormat : 2;
} OsdConfig2;
s32 func_0017DCF0(void);
void GetOsdConfigParam(OsdConfig *);
s32 GetOsdConfigParam2(void *, s32, s32);
extern u8 func_001D1C80[];

s32 func_0017DE30(void)
{
    OsdConfig c;
    s32 r;
    if (func_0017DCF0()) {
        r = *(s16 *)(func_001D1C80 + 0x448);
    } else {
        GetOsdConfigParam(&c);
        if (c.version == 0) {
            r = 0x21C;
        } else {
            r = c.timezoneOffset;
        }
    }
    return r;
}

s32 func_0017DE80(void)
{
    OsdConfig c;
    OsdConfig2 c2;
    s32 r;
    if (func_0017DCF0()) {
        r = func_001D1C80[0x44B];
    } else {
        GetOsdConfigParam(&c);
        if (c.version == 0) {
            r = 0;
        } else {
            GetOsdConfigParam2(&c2, 1, 1);
            r = c2.timeFormat;
        }
    }
    return r;
}

s32 func_0017DEE8(void)
{
    OsdConfig c;
    OsdConfig2 c2;
    s32 r;
    if (func_0017DCF0()) {
        r = func_001D1C80[0x44E];
    } else {
        GetOsdConfigParam(&c);
        if (c.version == 0) {
            r = 0;
        } else {
            GetOsdConfigParam2(&c2, 1, 1);
            r = c2.daylight;
        }
    }
    return r;
}
