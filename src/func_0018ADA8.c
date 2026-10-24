extern s32 D_00362CE4[];
extern u16 D_00362CE0[];
extern u16 *D_00362CEC[];

s32 func_0018ADD8(s32 a)
{
    s32 t = D_00362CE4[0];
    D_00362CE4[0] = a;
    return t;
}

u16 func_0018ADC8(u16 a)
{
    u16 t = D_00362CE0[0];
    D_00362CE0[0] = a;
    return t;
}

void func_001A2660(void *, s32, s32);

void func_0018ADF8(void *p)
{
    func_001A2660(p, 0, 0x3A0);
}

s32 func_0018ADA8(u16 id, s32 def)
{
    s32 v = D_00362CEC[0][id];
    if (v == 0)
        v = def;
    return v;
}
