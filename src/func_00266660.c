typedef struct { u8 pad[0x1000]; u8 map[2][32][32]; s32 x0, x1, y0, y1; } S266660;
u8 func_00266660(S266660 *p, s32 a, s32 x, s32 y) {
    if (x >= p->x0 && x < p->x1 && y >= p->y0 && y < p->y1) {
        s32 xx = x + 0x40;
        s32 yy = y + 0x40;
        return p->map[a][xx % 32][yy % 32];
    }
    return 0;
}
