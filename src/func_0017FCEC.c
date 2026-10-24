extern void *D_00480430;

void func_0017FCEC(s32 a, s32 b)
{
    void *p;
    p = D_00480430;
    *(f32 *)((s8 *)p + 0x60) = a;
    p = D_00480430;
    *(f32 *)((s8 *)p + 0x64) = b;
}

void func_0017FD10(f32 a, f32 b)
{
    void *p;
    p = D_00480430;
    *(f32 *)((s8 *)p + 0x60) = a;
    p = D_00480430;
    *(f32 *)((s8 *)p + 0x64) = b;
}

void func_0017FD24(s32 a)
{
    void *p;
    f32 t = a;
    p = D_00480430;
    *(s32 *)((s8 *)p + 0x3C) = t;
    p = D_00480430;
    *(s32 *)((s8 *)p + 0x18) = 1;
}
