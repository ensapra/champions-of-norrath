void func_0018F6A0(s8 *p, s32 n)
{
    s32 i = n - 1;
    if (n != 0) {
        do {
            *p++ = 0;
        } while (--i != -1);
    }
}

void func_0018F580(void *);
void func_0018FB60(void *p) {
    func_0018F580(p);
    *(s32 *)((char *)p + 0x20) = 0;
    *(s32 *)p = (((*(s32 *)p & ~0xC) | 4) & ~1) | 0x100;
}

typedef struct { s32 a, b, c, d; s32 state; s32 f, g; } Ent;
typedef struct { Ent e[4]; } Row;
extern Row D_010F4610[];
extern u8 D_010F45C0[];
extern s32 D_010F4800[];
extern s32 D_00362DB8;
s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, s32, s32);

s32 func_00190020(void)
{
    s32 i;
    for (i = 0; i < 4; i++) {
        D_010F4610[0].e[i].state = 0;
        D_010F4610[0].e[i].g = 0;
        D_010F4610[0].e[i].f = 0;
        D_010F4610[1].e[i].state = 0;
        D_010F4610[1].e[i].g = 0;
        D_010F4610[1].e[i].f = 0;
    }
    D_010F4800[0] = 16;
    D_010F4800[4] = 0;
    if (func_001B08B0(D_010F45C0, 1, 0, D_010F4800, 128, D_010F4800, 128, 0, 0) < 0) return 0;
    return D_010F4800[3];
}

s32 func_001900C0(void)
{
    s32 r;
    D_010F4800[0] = 15;
    if (func_001B08B0(D_010F45C0, 1, 0, D_010F4800, 128, D_010F4800, 128, 0, 0) < 0) return 0;
    r = D_010F4800[3];
    if (r == 1) D_00362DB8 = 0;
    return r;
}
