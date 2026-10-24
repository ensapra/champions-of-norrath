void *D_00480430;

void func_0017FD48(f32 x)
{
    void *p;
    f32 z = 0.0f;
    p = D_00480430;
    x = x - z;
    *(s32 *)((s8 *)p + 0x3C) = (s32)x;
    p = D_00480430;
    *(s32 *)((s8 *)p + 0x18) = 1;
}

void func_0017FD84(f32 x)
{
    void *p;
    p = D_00480430;
    *(f32 *)((s8 *)p + 0x58) = x;
    p = D_00480430;
    *(s32 *)((s8 *)p + 0x18) = 1;
}

void func_0017FDCC(f32 x)
{
    void *p;
    p = D_00480430;
    *(f32 *)((s8 *)p + 0x54) = x;
    p = D_00480430;
    *(s32 *)((s8 *)p + 0x18) = 1;
}

typedef struct { u8 pad0; u8 b1; u8 b2; u8 hour; } Date;
void ovl_ntgui2_func_0017E0D8(Date *);

void func_0017E238(Date *p)
{
    if (++p->hour == 24) {
        p->hour = 0;
        ovl_ntgui2_func_0017E0D8(p);
    }
}
