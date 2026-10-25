typedef struct { s32 w, a, b, c; s64 pad[26]; s32 t, u, v, x; } A;
typedef struct { s32 w, a, b, c; s64 pad[4]; s32 t, u, v, x; } B;
typedef struct { char p0[0x920]; A a[2]; B b[2]; } G;
extern void func_00159A48();
extern void func_00159BF8(G *);
extern s32 func_00170894(s32, s32, s32, s32);
void func_0015990C(G *g) {
    func_00159A48();
    g->a[0].a = 0;
    g->a[0].b = 0;
    g->a[0].w = 0x1000000D;
    g->a[0].c = func_00170894(0x50, 0, 0xD, 0);
    g->a[0].u = 0;
    g->a[0].v = 0;
    g->a[0].x = 0;
    g->a[0].t = 0x60000000;
    g->a[1] = g->a[0];
    func_00159BF8(g);
    g->b[0].a = 0;
    g->b[0].w = 0x10000002;
    g->b[0].b = 0;
    g->b[0].c = func_00170894(0x50, 0, 2, 0);
    g->b[0].t = 0x60000000;
    g->b[0].u = 0;
    g->b[0].v = 0;
    g->b[0].x = 0;
    g->b[1] = g->b[0];
}
