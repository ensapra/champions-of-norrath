typedef struct N { struct N *next; s32 pad[3]; } N;
extern N D_0110D480[];
extern N *D_0110D880[];
extern void func_001AFA68(void);
extern s32 jtbl_004C006C[];
f32 func_00179530(s64);
s32 func_001B9AD8(f32);

void func_001B00E8(void) {
    func_001AFA68();
    *(s32 *)((u8 *)jtbl_004C006C + 0x3EA8) = 0;
}

f32 func_001B77B8(u64 x)
{
    f32 f;
    if ((s64)x >= 0) {
        f = func_00179530(x);
    } else {
        f = func_00179530((x >> 1) | (x & 1));
        f = f + f;
    }
    return 147456000.0f / f;
}

s64 func_001B7810(f32 x)
{
    return func_001B9AD8(147456000.0f / x);
}

s32 func_001B7848(void)
{
    s32 i;
    D_0110D880[0] = D_0110D480;
    for (i = 63; i >= 0; i--)
        D_0110D480[i].next = &D_0110D480[i + 1];
    D_0110D480[63].next = 0;
    return 0;
}
