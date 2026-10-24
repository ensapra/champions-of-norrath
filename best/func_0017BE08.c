extern s8 func_001D1C80[];
void func_0017DC80(void);

s32 func_0017DCF0(void)
{
    s8 *p = func_001D1C80 + 0x450;
    if (p[0] == 0)
        func_0017DC80();
    return p[4] == 0x54;
}

s32 SignalSema(s32);
s32 func_001B08B0(void *, s32, s32, s32, s32, void *, s32, s32, s32);
s32 func_0017C210(s32);
extern s32 D_001D04E8[];
extern u8 D_001D0540[];
extern u8 D_001D1690[];

s32 func_0017C380(void)
{
    s32 v;
    if (func_0017C210(2) == 0) {
        return 0;
    }
    if (func_001B08B0(D_001D1690, 14, 0, 0, 0, D_001D0540, 4, 0, 0) < 0) {
        SignalSema(D_001D04E8[0]);
        return 0;
    }
    v = *(s32 *)((u32)D_001D0540 | 0x20000000);
    SignalSema(D_001D04E8[0]);
    return v;
}

extern s32 D_001D04E4[];
extern s32 D_001D0500[];
s32 func_001B5C80(void);
void func_001B5CD8(void);
void func_001AFAD0(u32, void (*)(void), s32);
void func_0017BE08(void);

s32 func_0017BE60(void)
{
    s32 r;
    D_001D04E4[0] = 1;
    r = func_001B5C80();
    func_001AFAD0(0x80000012, func_0017BE08, 0);
    if (r != 0)
        func_001B5CD8();
    D_001D04E4[0] = 0;
    D_001D0500[0] = 1;
    return 1;
}

extern void (*D_010ECC48[])(s32);
extern s32 D_010ECC50[];

void func_0017BE08(void)
{
    void (*cb)(s32) = D_010ECC48[0];
    if (cb != 0 && D_001D04E4[0] == 0)
        cb(D_010ECC50[0]);
}
