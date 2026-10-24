typedef struct { char pad[0x1C]; s32 st; char pad2[0x68 - 0x20]; } E;
typedef struct {
    char p0[0x2C]; s32 f2C;
    char p1[0x44 - 0x30]; s32 f44;
    char p2[0x5C - 0x48]; s32 f5C;
    char p3[0x4C8 - 0x60]; E e[1];
} G;
extern G D_008EBDD8;
s32 WaitSema_2(s32, s32);
s32 SignalSema_2(s32);
s32 func_002E7770(s32 a) {
    G *g = &D_008EBDD8;
    s32 n = a - 1;
    s32 r;
    if (g->f44 < n || n < 0) {
        r = 0x80000004;
    } else {
        E *tab = (E *)((char *)g + 0x4C8);
        E *e = &tab[n];
        WaitSema_2(g->f2C, n);
        g->f5C -= 1;
        if (e->st == 4) e->st = 1;
        SignalSema_2(g->f2C);
        r = 0;
    }
    return r;
}
