extern void *jtbl_004C006C[];
extern f32 D_001BB8F0[];
extern double D_004C7128[];
extern f32 func_00152B70(void);
extern double func_00171000(f32);
extern double func_00171040(double, double);
extern f32 func_001714D8(double);
typedef union { s32 i; f32 f; } FU;

void func_00108DA8(u32 n) {
    static void *l[] = {&&a, &&b};
    f32 *g;
    f32 r;
    FU u;
    if (n < 9) {
        goto *jtbl_004C006C[n + 0x7094 / 4];
        a:
        u.i = 0x3F2E147A;
        D_001BB8F0[0] = u.f;
        goto join;
        b:
        u.i = 0x3F1EB851;
        D_001BB8F0[0] = u.f;
    }
join:
    g = D_001BB8F0;
    g[0] = g[0] * func_00152B70();
    r = func_001714D8(func_00171040(func_00171000(g[0]), D_004C7128[0]));
    g[1] = r;
    g[2] = r;
}
