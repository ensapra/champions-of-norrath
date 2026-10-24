/* identical to func_0017A348 (matched), with its names changed by decompdecomp */
extern u8 D_010D12C0[];
extern u8 D_010D1340[];
s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, s32, s32);
void func_001A42B8(void *, void *);
void func_00140540(void *, void *, void *);

extern s32 func_002E0F78(s32, s32, s32, s32);
extern u8 D_00443E08[];
s32 func_002E10A0(s32 a, s32 b, s32 c)
{
    s32 r = func_002E0F78(a, b, c, 0x40);
    if (r == 0)
        *(s32 *)(D_00443E08 + 0x2268) = 0xB;
    return r;
}

void func_00140768(s32 a, s32 b, void *c, void *d)
{
    u8 *p = D_010D1340;
    *(s32 *)(p + 8) = a;
    *(s32 *)(p + 0x10) = b;
    func_001A42B8(&p[0x30], c);
    func_00140540(&p[0x230], &p[0x20], d);
    func_001B08B0(D_010D12C0, 2, 1, p, 0x1000, p, 0x1000, 0, 0);
}

void func_001406F8(s32 a, s32 b, s32 c, void *d)
{
    u8 *p = D_010D1340;
    *(s32 *)(p + 8) = a;
    *(s32 *)(p + 0xC) = b;
    *(s32 *)(p + 0x10) = c;
    func_00140540(&p[0x230], &p[0x20], d);
    func_001B08B0(D_010D12C0, 1, 1, p, 0x1000, p, 0x1000, 0, 0);
}

void func_00140690(s32 a, void *d)
{
    u8 *p = D_010D1340;
    *(s32 *)(p + 0x10) = a;
    func_00140540(&p[0x230], &p[0x20], d);
    func_001B08B0(D_010D12C0, 0, 1, p, 0x1000, p, 0x1000, 0, 0);
}
