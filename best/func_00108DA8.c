typedef union { s32 i; f32 f; } FU;
extern f32 D_001BB8F0[];
extern double D_004C7128[];
extern f32 func_00152B70(void);
extern double func_00171000(f32);
extern double func_00171040(double, double);
extern f32 func_001714D8(double);

void func_00108DA8(s32 n) {
    f32 *g = D_001BB8F0;
    f32 r;
    FU u;
    switch (n) {
    case 1:
        u.i = 0x3F2E147A;
        g[0] = u.f;
        break;
    case 2:
        u.i = 0x3F1EB851;
        g[0] = u.f;
        break;
    case 0:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    default:
        break;
    }
    g[0] = g[0] * func_00152B70();
    r = func_001714D8(func_00171040(func_00171000(g[0]), D_004C7128[0]));
    g[1] = r;
    g[2] = r;
}
