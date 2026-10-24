typedef struct {
    u8 pad0[0xB8];
    s32 l, t, r, b;
    u8 padC8[0x5A0 - 0xC8];
    s32 x, y, z, w, h;
    u8 pad5B4[0x5D4 - 0x5B4];
    s32 off;
    u8 pad5D8[0x1260 - 0x5D8];
    s32 m;
} W00164F28;

void func_00164F28(W00164F28 *p)
{
    s32 w = p->w;
    s32 h = p->h;
    s32 x = p->x + p->off;
    s32 y = p->y + p->off;
    s32 a = p->m * 3 / 4;
    s32 b = p->m * 6 / 4;
    p->l = x - a;
    p->t = y - a;
    p->r = x + w + b;
    p->b = y + h + b;
}
