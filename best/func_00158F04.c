typedef struct { char p0[0x98]; s32 state; char p1[0xB80-0x9C]; char *buf; char p2[0xB8C-0xB84]; s32 n; char p3[0xB94-0xB90]; s32 f94; char p4[0xBF0-0xB98]; s32 m; char p5[0xD0C-0xBF4]; s32 c; } G;
extern void func_0015ACB0(char *, char *, s32, s32);
extern s32 func_0015AD38(s32);
extern void func_0015AFAC(G *);
extern void func_0015B210(G *);
extern void ovl_ntgui2_func_0015A7B8(G *);
s32 func_00158F04(G *g) {
    if (g == 0) return 0;
    if (g->n <= 0) return 0;
    if (g->m <= 0) {
        g->f94 = 0;
        g->m = 0;
        g->n = 0;
        return 0;
    }
    if (g->m < g->n) g->n = g->m;
    if (func_0015AD38(g->n - 1) != 0) {
        func_0015ACB0(g->buf + g->n * 0x24 - 0x24, g->buf + g->n * 0x24, 0x24, g->m - g->n);
        g->m--;
        g->n--;
        if (g->c > 0) {
            g->c = g->c - 1;
            if (g->c <= 0) func_0015AFAC(g);
        } else func_0015AFAC(g);
    } else {
        func_0015ACB0(g->buf + g->n * 0x24 - 0x48, g->buf + g->n * 0x24, 0x24, g->m - g->n);
        g->m -= 2;
        g->n -= 2;
        if (g->c > 0) {
            g->c = g->c - 2;
            if (g->c <= 0) func_0015AFAC(g);
        } else func_0015AFAC(g);
    }
    ovl_ntgui2_func_0015A7B8(g);
    func_0015B210(g);
    g->state = 2;
    return 1;
}
