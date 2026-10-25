typedef struct G G;
struct G {
    char p0[0x5AC];
    s32 x, y;
    char p1[0x888 - 0x5B4];
    s32 f888;
    char p2[4];
    s32 f890, f894, f898, f89C, f8A0, f8A4, f8A8;
    char p3[0x914 - 0x8AC];
    s32 f914;
    char p4[0x92C - 0x918];
    s32 f92C;
};
void func_0014CF0C(s32, s32, s32);
void func_0016E70C(s32, s32);

void func_0015F8D4(G *g) {
    s32 d;
    func_0014CF0C(g->f894, g->x + g->f914 * 2, g->y + g->f914 * 2);
    func_0014CF0C(g->f898, (-(g->f92C * 3) / 4) + g->x + g->f914 * 2, (-(g->f92C * 3) / 4) + g->y + g->f914 * 2);
    func_0014CF0C(g->f89C, (-(g->f92C * 3) / 4) + g->x + g->f914 * 2, (-(g->f92C * 3) / 4) + g->y + g->f914 * 2);
    func_0016E70C(g->f890, g->x);
    func_0014CF0C(g->f8A0, g->x - g->f888 * 2 - 0x20, g->f914);
    func_0014CF0C(g->f8A4, g->f888 - 0x40, g->f888 - 0x40);
    func_0014CF0C(g->f8A8, g->f888 - 0x40, g->f888 - 0x40);
}
