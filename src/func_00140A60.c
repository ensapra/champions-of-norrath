extern s32 jtbl_004C006C[];
extern u8 D_0110B000[];
extern s32 D_0110B040[];
extern s32 D_0110B080[];
extern u8 D_010D12C0[];
extern u8 D_010D1340[];
s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, s32, s32);
void func_00140540(void *, void *, void *);

s32 func_001B47E8(s32 a, s32 b, s32 c)
{
    if (jtbl_004C006C[0x3F48 / 4] < 0)
        return 0;
    D_0110B080[0] = b;
    D_0110B080[1] = a;
    D_0110B080[2] = c;
    if (func_001B08B0(D_0110B000, 4, 0, D_0110B080, 0xC, D_0110B040, 4, 0, 0) < 0)
        return 0;
    return D_0110B040[0];
}

void func_00140B10(s32 a, s32 b)
{
    u8 *p = D_010D1340;
    *(s32 *)(p + 8) = a;
    *(s32 *)(p + 0xC) = b;
    func_00140540(&p[0x230], &p[0x20], NULL);
    func_001B08B0(D_010D12C0, 0xB, 1, p, 0x1000, p, 0x1000, 0, 0);
}

void func_00140AB0(void *t)
{
    u8 *p = D_010D1340;
    func_00140540(&p[0x230], &p[0x20], t);
    func_001B08B0(D_010D12C0, 0xA, 1, p, 0x1000, p, 0x1000, 0, 0);
}

void func_00140A60(s32 a)
{
    u8 *p = D_010D1340;
    *(s32 *)p = a;
    func_001B08B0(D_010D12C0, 9, 1, p, 0x1000, p, 0x1000, 0, 0);
}
