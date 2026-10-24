/* identical to func_001B7F60 (matched), with its names changed by decompdecomp */
s32 Deci2Call_2(s32, u32 *);

s32 func_002DF920(u8 a, u32 b, u32 c)
{
    u32 args[5];
    args[0] = a;
    args[1] = b;
    args[2] = c;
    return Deci2Call_2(0x20, args);
}

extern u8 D_010F45C0[];
extern s32 D_010F4800[];
s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, s32, s32);

s32 func_00191110(s32 a)
{
    D_010F4800[1] = a;
    D_010F4800[0] = 13;
    if (func_001B08B0(D_010F45C0, 1, 0, D_010F4800, 128, D_010F4800, 128, 0, 0) < 0) return 0;
    return D_010F4800[3];
}

s32 func_001910A8(void)
{
    D_010F4800[0] = 12;
    if (func_001B08B0(D_010F45C0, 1, 0, D_010F4800, 128, D_010F4800, 128, 0, 0) < 0) return 0;
    return D_010F4800[3];
}

typedef struct { s32 a, b, c, d; s32 state; s32 f, g; } Ent;
typedef struct { Ent e[4]; } Row;
extern Row D_010F4610[];
s32 func_00190E18(s32, s32, s32);

s32 func_00190F80(s32 a, s32 b)
{
    if (D_010F4610[a].e[b].state == 0) {
        return 0;
    }
    return func_00190E18(a, b, 0);
}
