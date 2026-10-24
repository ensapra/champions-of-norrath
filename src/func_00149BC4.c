extern s32 jtbl_004C006C[];
extern u8 D_0110B000[];
extern s32 D_0110B040[];
s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, s32, s32);

u32 func_001B4AD0(void)
{
    if (jtbl_004C006C[0x3F48 / 4] < 0)
        return 0;
    if (func_001B08B0(D_0110B000, 7, 0, 0, 0, D_0110B040, 4, 0, 0) < 0)
        return 0xFFFFFFFF;
    return D_0110B040[0];
}

void func_0014CF0C(u8 *, s32, s32, s32);

void func_00149E88(u8 *o)
{
    s32 a;
    *(s32 *)(o + 0x890) = 1;
    a = *(s32 *)(o + 0x89C);
    *(s32 *)(o + 0x4D0) = 0;
    *(s32 *)(o + 0x870) = 0;
    *(s32 *)(o + 0x878) = 0;
    *(s32 *)(o + 0x880) = 0;
    *(s32 *)(o + 0x884) = 0;
    *(s32 *)(o + 0x888) = 0;
    *(s32 *)(o + 0x88C) = 1;
    func_0014CF0C(o, *(s32 *)(o + 0x5AC),
                  *(s32 *)(o + 0x898) * (*(s32 *)(o + 0x8A0) + a) - a + *(s32 *)(o + 0x8A8) * 2, a);
}

extern void func_0014B558(void *, void *, s32);
void func_00149BC4(u8 *a)
{
    func_0014B558(a, a + 0x13C, 0xC);
}

s64 func_00149B98(u8 *o)
{
    void *p = *(void **)(o + 0x4C);
    p = *(void **)((u8 *)p + 0x164);
    return ((s32 (*)(void *))p)(o);
}
