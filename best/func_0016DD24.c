typedef struct {
    u8 p0[0x5AC]; s32 x5AC;
    u8 p1[0x948 - 0x5B0]; s32 x948; u8 p2[4]; s32 x950; s32 x954;
    u8 p3[0x980 - 0x958]; s32 *x980; s32 x984; s32 x988;
    u8 p4[0x9C4 - 0x98C]; s32 x9C4; s32 x9C8; s32 x9CC;
} Gui;

void func_0016DDAC(Gui *g) {
    s32 n = g->x9C4;
    s32 gap = g->x9CC;
    s32 a = g->x948;
    s32 r = (g->x5AC - a * 2 - g->x950 - g->x954 - (n - 1) * gap) / n;
    g->x984 = r;
    g->x988 = r;
}

void func_0014CF0C(s32, s32, s32);
void func_0016DD24(Gui *g) {
    s32 i = 0;
    s32 w = g->x9C8;
    s32 t = g->x984 * w;
    s32 v = t >> 12;
    if (g->x9C4 > 0) {
        do {
            s32 *p = g->x980 + i;
            i++;
            func_0014CF0C(*p, g->x984, v);
        } while (i < g->x9C4);
    }
}
