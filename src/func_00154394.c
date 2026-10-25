extern u16 D_0047FC38;
extern u16 D_0047FC3C;

typedef struct {
    char pad0[0x20];
    s32 x : 16;
    s32 pad22 : 16;
    s32 y : 16;
    s32 pad26 : 16;
    char pad28[0x18];
} Entry;

typedef struct {
    Entry e[0x801];
} Page;

typedef struct {
    char pad0[0x4EC];
    s32 idx;
    char pad4F0[0xBC];
    s32 w;
    s32 h;
    char pad5B4[0x35C];
    Page pages[2];
    char pad40990[0x284];
    s32 sx;
    s32 sy;
    u16 base;
} Grid;

void func_00154394(Grid *g) {
    s32 count = 0;
    s32 done = 0;
    s32 x, y;
    s32 h;
    Entry *e;

    h = g->h;
    if (h <= 0 || g->w <= 0) return;
    e = &g->pages[g->idx].e[1];
    for (y = 0; !done && y < h; y += g->sy) {
        for (x = 0; !done && x < g->w; x += g->sx) {
            u16 b = g->base;
            e->x = D_0047FC38 - x - b;
            e->y = D_0047FC3C - (b + y);
            e++;
            if (++count >= 0x800) {
                done = 1;
                break;
            }
        }
    }
    e = &g->pages[g->idx].e[0];
    e->x = D_0047FC38;
    e->y = D_0047FC3C;
}
