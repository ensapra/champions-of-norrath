typedef struct {
    u8 pad[0x1000];
    u8 tile[2][32][32];
    u8 pad3[0x800 - 0x800];
    s32 x0, x1, y0, y1;
    s32 unk;
    u8 dummy;
} Grid;
s32 func_00266788(Grid *, s32, s32);
u8 *func_00266570(Grid *g, s32 l, s32 x, s32 y) {
retry:
    if (x >= g->x0 && x < g->x1 && y >= g->y0 && y < g->y1)
        return &g->tile[l][(x + 64) % 32][(y + 64) % 32];
    if (func_00266788(g, x, y))
        return &g->dummy;
    goto retry;
}
