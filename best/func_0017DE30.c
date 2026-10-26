typedef struct { u32 spdifMode:1; u32 screenType:2; u32 videoOutput:1; u32 japLanguage:1; u32 ps1drvConfig:8; u32 version:3; u32 language:5; s32 timezoneOffset:11; } OsdConfig;
s32 func_0017DCF0(void);
void GetOsdConfigParam(OsdConfig *);
extern u8 func_001D1C80[];
s32 func_0017DE30(void) {
    OsdConfig c;
    if (func_0017DCF0()) return *(s16 *)(func_001D1C80 + 0x448);
    GetOsdConfigParam(&c);
    return c.version ? c.timezoneOffset : 0x21C;
}
