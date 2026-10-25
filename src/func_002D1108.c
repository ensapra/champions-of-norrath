/* identical to ovl_ntgui2_func_0017DD90 (matched), with its names changed by decompdecomp */
typedef struct {
    u32 spdifMode : 1;
    u32 screenType : 2;
    u32 videoOutput : 1;
    u32 japLanguage : 1;
    u32 ps1drvConfig : 8;
    u32 version : 3;
    u32 language : 5;
    u32 timezoneOffset : 11;
} OsdConfigParam;

typedef struct {
    u8 b[8];
} Cfg8;

extern u8 D_00444408[];
s32 func_0017DCF0(void);
void GetOsdConfigParam(OsdConfigParam *);

s32 func_0017DD30(void)
{
    OsdConfigParam c;

    GetOsdConfigParam(&c);
    if (func_0017DCF0()) {
        return D_00444408[0x44C];
    }
    GetOsdConfigParam(&c);
    if (c.version != 0) {
        return c.language;
    }
    return c.japLanguage;
}

void func_002D1108(Cfg8 *p)
{
    *(Cfg8 *)(D_00444408 + 0x448) = *p;
}

s32 ovl_ntgui2_func_0017DDB0(void)
{
    OsdConfigParam c;

    if (func_0017DCF0()) {
        return D_00444408[0x44A];
    }
    GetOsdConfigParam(&c);
    return c.screenType;
}

s32 func_0017DDF0(void)
{
    OsdConfigParam c;

    if (func_0017DCF0()) {
        return D_00444408[0x44D];
    }
    GetOsdConfigParam(&c);
    return c.spdifMode;
}
