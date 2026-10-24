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

void func_0014FBEC(void *);
void func_0015183C(void *);
void func_00152214(void *);
void func_0014F5F4(u8 *o) {
    *(s32 *)(o + 0x9C8) = 0;
    *(s32 *)(o + 0x9C4) = 0;
    *(s32 *)(o + 0x9C0) = 0;
    *(s32 *)(o + 0x9CC) = 0;
    *(s32 *)(o + 0x998) = 0;
    *(s32 *)(o + 0x99C) = 0;
    *(s32 *)(o + 0x9A0) = 0;
    *(s32 *)(o + 0x9A4) = 0;
    func_0015183C(o + 0x9D0);
    func_00152214(o);
    func_0014FBEC(o);
    *(void **)(o + 0x9B8) = o + 0x9B4;
    *(s32 *)(o + 0x990) = 1;
    *(s32 *)(o + 0x994) = 2;
    *(s32 *)(o + 0x9BC) = 0;
    *(void **)(o + 0x9B4) = o + 0x9B4;
}

void func_0015175C(void *, s32, s32, s32);
void func_0014F5CC(void *p, s32 unused, s32 x, s32 y)
{
    volatile s32 a[2];
    a[0] = x;
    a[1] = y;
    ((void (*)(void *, s32))func_0015175C)((char *)p + 0x9AC, 0xE);
}

s32 func_0014EDF8(u8 *o, s32 x0, s32 y0, s32 x1, s32 y1) {
    s32 dx = x1 - x0;
    s32 dy = y1 - y0;
    if (*(s32 *)(o + 0x5FC) != 0)
        return 1;
    if (dx < *(s32 *)(o + 0xB8))
        return 0;
    if (dx >= *(s32 *)(o + 0xC0))
        return 0;
    if (dy < *(s32 *)(o + 0xBC))
        return 0;
    if (dy < *(s32 *)(o + 0xC4))
        return 1;
    return 0;
}
