extern void *D_00480430;
extern u8 jtbl_004C006C[];
extern u8 D_00508021[];
extern s32 func_001A1568(void *, s32, void *);
extern void func_001A2660(s32 *, s32, s32);

void func_0017FD84(f32 x)
{
    *(f32 *)((s8 *)D_00480430 + 0x58) = x;
    *(s32 *)((s8 *)D_00480430 + 0x18) = 1;
}

void func_0017FD48(f32 x)
{
    f32 z = 0.0f;
    *(s32 *)((s8 *)D_00480430 + 0x3C) = (s32)(x - z);
    *(s32 *)((s8 *)D_00480430 + 0x18) = 1;
}

void func_0017FD24(s32 a)
{
    f32 t = a;
    *(s32 *)((s8 *)D_00480430 + 0x3C) = (s32)t;
    *(s32 *)((s8 *)D_00480430 + 0x18) = 1;
}

void func_0017F8D0(void)
{
    void *p;
    p = D_00480430;
    if (p == 0)
        func_001A1568(jtbl_004C006C + 0xD56C, 0xEC, D_00508021 + 0x417);
    func_001A2660(D_00480430, 0, 0x590);
}
