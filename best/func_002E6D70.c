typedef struct { u8 p0[0x14]; s32 h; s32 pad; s32 state; u8 p1[0x110 - 0x20]; } A;
typedef struct { u8 p0[0x14]; s32 h; s32 pad; s32 state; u8 p1[0x68 - 0x20]; } B;
typedef struct {
    u8 pad0[0x28];
    s32 sema1, sema2, thread, f34, f38, f3c, na, nb;
    u8 pad1[0x88 - 0x48];
    A a[4];
    B b[4];
} G;
extern G D_008EBDD8[];
s32 SuspendThread_2(s32); s32 SignalSema_2(s32); s32 TerminateThread_2(s32); s32 DeleteThread_2(s32); s32 DeleteSema_2(s32);
void func_002E73F8(s32); void func_002E7770(s32); void func_003021B0(void *, s32, s32);

s32 func_002E6D70(void) {
    s32 i;
    A *a;
    B *b;
    G *g = D_008EBDD8;
    for (i = 0, a = g->a; i < g->na; i++, a++) {
        if (a->state == 4) func_002E73F8(a->h);
    }
    for (i = 0, b = g->b; i < D_008EBDD8[0].nb; i++, b++) {
        if (b->state == 4) func_002E7770(b->h);
    }
    g = D_008EBDD8;
    g->f38 = 1;
    if (g->thread) {
        SuspendThread_2(g->thread);
        SignalSema_2(g->sema1);
        TerminateThread_2(g->thread);
        DeleteThread_2(g->thread);
        g->thread = 0;
    }
    if (g->sema2) {
        DeleteSema_2(g->sema2);
        g->sema2 = 0;
    }
    if (g->sema1) {
        DeleteSema_2(g->sema1);
        g->sema1 = 0;
    }
    func_003021B0(g->a, 0, 0x440);
    func_003021B0(g->b, 0, 0x1A0);
    g->f34 = 0;
    return 0;
}
