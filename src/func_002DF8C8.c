/* identical to func_001B7F08 (matched), with its names changed by decompdecomp */
s32 Deci2Call_2(s32, u32 *);

s32 func_002DF8C8(s32 s, s8 dest) {
    u32 args[2];
    args[0] = s;
    args[1] = dest;
    return Deci2Call_2(3, args);
}

typedef struct { s32 w[4]; } Qw;
typedef struct {
    u32 *cur;
    s32 pad;
    Qw *tag;
} PktBuf;

u32 *func_00191268(PktBuf *b)
{
    u32 *p = b->cur;
    Qw *t = b->tag;

    while ((u32)p & 0xC) {
        *p++ = 0;
    }
    if (t) {
        t->w[0] += ((Qw *)p - t) - 1;
    }
    b->tag = 0;
    b->cur = p;
    return p;
}

extern u8 D_010F45C0[];
extern s32 D_010F4800[];
s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, s32, s32);

s32 func_001911E0(s32 a)
{
    D_010F4800[1] = a;
    D_010F4800[0] = 20;
    if (func_001B08B0(D_010F45C0, 1, 0, D_010F4800, 128, D_010F4800, 128, 0, 0) < 0) return 0;
    return D_010F4800[2];
}

s32 func_00191178(void)
{
    D_010F4800[0] = 18;
    if (func_001B08B0(D_010F45C0, 1, 0, D_010F4800, 128, D_010F4800, 128, 0, 0) < 0) return 0;
    return D_010F4800[3];
}
