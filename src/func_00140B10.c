extern u8 D_010D12C0[];
extern u8 D_010D1340[];
s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, s32, s32);
void func_00140540(void *, void *, void *);

void func_00140B10(s32 a, s32 b, void *t)
{
    u8 *p = D_010D1340;
    *(s32 *)(p + 8) = a;
    *(s32 *)(p + 0xC) = b;
    func_00140540(&p[0x230], &p[0x20], t);
    func_001B08B0(D_010D12C0, 0xB, 1, p, 0x1000, p, 0x1000, 0, 0);
}
