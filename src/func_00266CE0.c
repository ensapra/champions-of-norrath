typedef struct { u8 pad[0xC]; u8 d[4][4]; u8 pad1C[0x3A]; u8 w, h, n; } Grid;
typedef struct { s32 pad0; Grid *p; u8 rot; } GridRef;
u8 func_00266CE0(GridRef *a, s32 x, s32 y) {
    switch (a->rot) {
    case 0:
        return a->p->d[x][y];
    case 3:
        return a->p->d[a->p->w - y - 1][x];
    case 2:
        return a->p->d[a->p->w - x - 1][a->p->h - y - 1];
    case 1:
        return a->p->d[y][a->p->h - x - 1];
    }
    return 0;
}
