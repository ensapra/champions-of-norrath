extern char D_004CEAA0[];
void func_001AF710(char *);
void func_0018FD18(volatile s32 *);

void func_0018F580(volatile s32 *p)
{
    s32 i = 0x1000000;

    while (*p & 0x100) {
        if (--i < 0) {
            func_001AF710(D_004CEAA0);
            func_0018FD18(p);
        }
    }
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
    s64 oy = y;
    s64 ox = x;
    s64 sx, sy;

    oy -= (u64)((s32)c->r.h + 1) >> 1;
    ox -= (u64)((s32)c->r.w + 1) >> 1;
    sy = oy << 4;
    sx = ox << 4;
    if (half) {
        c->xyoffset = sx | ((sy + 8) << 32);
    } else {
        c->xyoffset = sx | (sy << 32);
    }
}

typedef struct { s32 v[5]; } S20;
extern S20 D_010F4578[];
S20 *func_0018F9B8(S20 *p) {
    *p = D_010F4578[0];
    return p;
}
