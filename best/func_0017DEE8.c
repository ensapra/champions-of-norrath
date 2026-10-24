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

s32 func_0017DEE8(void)
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
    return c2.daylight;
}
