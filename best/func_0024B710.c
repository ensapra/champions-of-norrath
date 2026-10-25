s32 func_0024ADB8(s32);
void func_0024F5B8(s32, f32);
extern f32 D_00482010;
extern f32 D_00482014;
extern f32 D_00482018;
extern f32 D_0048201C;
extern f32 D_00485934;
extern volatile f32 D_0048593C;
extern volatile f32 D_00485968;

void func_0024B710(void) {
    f32 old = *(f32 *)&D_0048593C;
    f32 t;
    f32 v;
    f32 one;
    void (*fp)(s32, f32);
    if (func_0024ADB8(2) & 0x20) {
        t = D_00482010;
        D_00485968 = t;
    }
    t = *(f32 *)&D_00485968;
    one = 1.0f;
    t += D_00482014;
    if (one < t) t = one;
    D_00485968 = t;
    v = D_0048593C;
    if (t < v) {
        v -= D_00482018;
        if (v < t) v = t;
        D_0048593C = v;
    }
    if (v < t) {
        v += D_0048201C;
        if (t < v) v = t;
        D_0048593C = v;
    }
    if (v != old) {
        if (func_0024ADB8(0) & 0x20) {
            fp = func_0024F5B8;
            fp(0, D_0048593C * D_00485934 * 0.46875f);
        }
    }
}
