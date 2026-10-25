typedef struct {
    s32 cell[32][32];
    u8 pad[0x800];
    s32 x0, x1, y0, y1;
    s32 dummy;
} Grid;
s32 func_00266788(Grid *, s32, s32);
s32 *func_00266490(Grid *g, s32 x, s32 y) {
retry:
    if (x >= g->x0 && x < g->x1 && y >= g->y0 && y < g->y1)
        return &g->cell[(x + 64) % 32][(y + 64) % 32];
    if (func_00266788(g, x, y))
        return &g->dummy;
    goto retry;
}
