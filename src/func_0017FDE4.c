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

extern u8 func_001D1C80[];
s32 func_0017DCF0(void);
void GetOsdConfigParam(OsdConfigParam *);

s32 ovl_ntgui2_func_0017DDB0(void)
{
    OsdConfigParam c;

    if (func_0017DCF0()) {
        return func_001D1C80[0x44A];
    }
    GetOsdConfigParam(&c);
    return c.screenType;
}

extern void *D_00480430;

void func_0017FDE4(s32 a, s32 b, s32 c, s32 d)
{
    void *p;
    f32 fa = a * 0.0078125f;
    f32 fb = b * 0.0078125f;
    f32 fc = c * 0.0078125f;
    f32 fd = d * 0.0078125f;

    p = D_00480430;
    *(f32 *)((s8 *)p + 0x70) = fa;
    p = D_00480430;
    *(f32 *)((s8 *)p + 0x74) = fb;
    p = D_00480430;
    *(f32 *)((s8 *)p + 0x78) = fc;
    p = D_00480430;
    *(f32 *)((s8 *)p + 0x7C) = fd;
}

void func_0017FE40(s32 a, s32 b, s32 c, s32 d)
{
    void *p;

    p = D_00480430; *(s32 *)((s8 *)p + 0x80) = a;
    p = D_00480430; *(s32 *)((s8 *)p + 0x84) = b;
    p = D_00480430; *(s32 *)((s8 *)p + 0x88) = c;
    p = D_00480430; *(s32 *)((s8 *)p + 0x8C) = d;
    p = D_00480430; *(s32 *)((s8 *)p + 0x90) = a;
    p = D_00480430; *(s32 *)((s8 *)p + 0x94) = b;
    p = D_00480430; *(s32 *)((s8 *)p + 0x98) = c;
    p = D_00480430; *(s32 *)((s8 *)p + 0x9C) = d;
    p = D_00480430; *(s32 *)((s8 *)p + 0xA0) = a;
    p = D_00480430; *(s32 *)((s8 *)p + 0xA4) = b;
    p = D_00480430; *(s32 *)((s8 *)p + 0xA8) = c;
    p = D_00480430; *(s32 *)((s8 *)p + 0xAC) = d;
    p = D_00480430; *(s32 *)((s8 *)p + 0xB0) = a;
    p = D_00480430; *(s32 *)((s8 *)p + 0xB4) = b;
    p = D_00480430; *(s32 *)((s8 *)p + 0xB8) = c;
    p = D_00480430; *(s32 *)((s8 *)p + 0xBC) = d;
}
