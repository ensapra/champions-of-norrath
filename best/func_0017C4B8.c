typedef struct { u32 spdifMode : 1; u32 screenType : 2; u32 videoOutput : 1; u32 japLanguage : 1; u32 ps1drvConfig : 8; u32 version : 3; u32 language : 5; u32 timezoneOffset : 11; } OsdConfigParam;
extern u8 func_001D1C80[];
s32 func_0017DCF0(void);
void GetOsdConfigParam(OsdConfigParam *);
s32 func_0017DDF0(void) {
    OsdConfigParam c;
    if (func_0017DCF0()) return func_001D1C80[0x44D];
    GetOsdConfigParam(&c);
    return c.spdifMode;
}

extern s32 D_001D04E8, D_001D04EC;
extern u8 D_001D0540[], D_001D05C0[], D_001D1690[], D_001D16C0[], D_001D1B00[], D_001D2040[];
s32 func_0017C698(u32 id, s32 *out) {
    s32 v;
    if (id == 0x8001) v = D_001D04E8;
    else if (id == 0x8003) v = (s32)D_001D0540;
    else if (id == 0x8002) v = (s32)D_001D05C0;
    else if (id == 0x8004) v = (s32)D_001D1690;
    else if (id == 0x8011) { *out = D_001D04EC; return 1; }
    else if (id == 0x8013) v = (s32)D_001D16C0;
    else if (id == 0x8012) v = (s32)D_001D1B00;
    else if (id == 0x8014) v = (s32)D_001D2040;
    else v = 0;
    *out = v;
    return 1;
}

extern s32 D_001D04D0, D_001D04DC;
extern u8 D_004CC560[], D_004CC550[];
s32 func_001AE780(s32);
s32 func_001AF710(void *);
s32 func_001B0AA8(void *);
s32 func_0017C4B8(s32 a) {
    if (a == 0) {
        if (D_001D04D0 > 0) func_001AF710(D_004CC560);
        while (func_001B0AA8(D_001D2040) != 0) func_001AE780(4000);
        return 0;
    }
    return func_001B0AA8(D_001D2040);
}

s32 func_0017C418(s32 a) {
    if (a == 0) {
        if (D_001D04D0 > 0) func_001AF710(D_004CC550);
        while (D_001D04DC != 0 || func_001B0AA8(D_001D1690) != 0) func_001AE780(4000);
        return 0;
    }
    if (D_001D04DC != 0 || func_001B0AA8(D_001D1690) != 0) return 1;
    return 0;
}
