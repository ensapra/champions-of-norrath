typedef struct { u8 pad[0xC]; u8 d[0x4A]; u8 w, h, n; } Grid;
typedef struct { s32 pad0; Grid *p; u8 rot; } GridRef;
void func_00266E10(GridRef *a) {
    volatile Grid *p = a->p;
    s32 i;
    for (i = 0; i < p->n; i++)
        ;
}

u8 func_00266CE0(GridRef *a, s32 x, s32 y) {
    s32 idx;
    switch (a->rot) {
    case 0:
        idx = x * 4 + y;
        break;
    case 1:
        idx = (a->p->h - x - 1) + y * 4;
        break;
    case 2:
        return a->p->d[(a->p->w - x - 1) * 4 + (a->p->h - y - 1)];
    case 3:
        idx = x + (a->p->w - y - 1) * 4;
        break;
    default:
        return 0;
    }
    return a->p->d[idx];
}

typedef struct { s32 a, b, c; u8 pad[0x70E4 - 12]; } Elem;
typedef struct {
    u8 pad[0x181C];
    Elem elems[32];
    s8 act[32];
    s8 vis[32];
    s32 count;
} Big;
extern void func_002640A0(Big *, s32, s32, s32);
void func_00266BE8(Big *g, Elem *e) {
    s32 i = e - g->elems;
    if (g->act[i] != 0) {
        g->act[i] = 0;
        if (g->vis[i] != 0) {
            s32 *c = &g->count;
            g->vis[i] = 0;
            (*c)--;
        }
        func_002640A0(g, e->a, e->b, e->c);
    }
}
