typedef struct {
    u8 pad0[0xC];
    s32 c;
    u8 pad10[0x1C - 0x10];
    s32 d;
    u8 pad20[0x84 - 0x20];
    s32 w;
    s32 h;
} Src;

extern void func_0014CE44(s32, s32, s32);
extern void func_0014CE84(s32, s32 *, s32 *);
extern double func_00171000(f32);
extern double func_00171040(double, double);
extern s32 func_00171408(double);
extern f32 func_001714D8(double);
extern double func_001798F0(double, double);
extern double func_00179948(double, double);
extern double func_00179A00(s32);
extern double func_0019CBB0(double);
extern double func_0019CCD8(double);
extern void func_0019CE28(double);

void func_00130AE8(s32 a0, Src *p) {
    s32 sp[2];
    s32 w = p->w;
    s32 h;
    f32 v, f20;
    s32 dx, dy;
    double b, a, c, e, g, s, m, q0;
    s32 iy, ix, nx, ny;
    h = p->h;
    v = func_001714D8(func_001798F0(func_00171000((f32)p->d / (f32)p->c), 0.3));
    v = 1.0f < v ? 1.0f : v;
    func_0014CE84(a0, &sp[0], &sp[1]);
    f20 = 1.0f - v;
    dx = sp[0] - 0x10;
    dy = sp[1] - 6;
    func_0019CE28(func_00179A00(dx * dx + dy * dy));
    a = func_00171000((f32)w * f20);
    b = func_00171000(v);
    c = func_00171040(b, 0.7);
    e = func_00171040(c, 8.0);
    func_0019CCD8(e);
    g = func_00171000((f32)h * f20);
    s = func_00171040(c, 6.0);
    func_0019CBB0(s);
    ix = func_00171408(func_00171040(a, func_0019CCD8(e)));
    iy = func_00171408(func_00171040(g, func_0019CBB0(s)));
    q0 = func_00171000((f32)(sp[0] - 0x10));
    m = func_00179948(1.0, b);
    nx = func_00171408(func_001798F0(func_00171040(q0, m), func_00171000((f32)iy * v))) + 0x10;
    sp[0] = nx;
    ny = func_00171408(func_001798F0(func_00171040(func_00171000((f32)(sp[1] - 6)), m), func_00171000((f32)ix * v))) + 6;
    sp[1] = ny;
    func_0014CE44(a0, nx, ny);
}
