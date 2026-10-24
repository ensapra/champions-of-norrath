/* identical to func_0018F678 (matched), with its names changed by decompdecomp */
u32 func_002D2C48(u32 a)
{
    if ((a >> 28) == 7) {
        a &= 0x0FFFFFFF;
        a |= 0x80000000;
    }
    return a;
}

typedef struct {
    u64 pad0 : 16;
    u64 w : 11;
    u64 pad1 : 21;
    u64 h : 11;
    u64 pad2 : 5;
} Reg30;

typedef struct {
    u8 pad[0x20];
    s64 xyoffset;
    u8 pad28[8];
    Reg30 r;
} GsCtx;

void func_0018F4F8(GsCtx *c, s16 x, s16 y, s16 half)
{
    s64 oy, ox;
    s64 sx, sy;

    oy = y;
    oy -= (u64)((s32)c->r.h + 1) >> 1;
    ox = x;
    ox -= (u64)((s32)c->r.w + 1) >> 1;
    sy = oy << 4;
    sx = ox << 4;
    if (half) {
        c->xyoffset = sx | ((sy + 8) << 32);
    } else {
        c->xyoffset = sx | (sy << 32);
    }
}
