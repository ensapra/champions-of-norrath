struct A { u8 p0[0x344]; f32 r; f32 r348; u8 p1[0x110]; f32 t0, t1, t2; f32 n0, n1, n2; u8 p2[0x3F8]; s32 sel; };
struct O { u8 p0[0x10]; f32 pos[3]; u8 p1[0x328]; f32 r; u8 p2[0x15C]; f32 pl[3]; };
extern "C" {
extern f32 func_0015A1D0(void *, f32 *, void *);
extern O *D_00436FA8[];
extern s32 D_00485E40;
extern f32 D_004821E8, D_004821EC, D_004821F0;

O *func_00274C10(A *a, f32 *arg1) {
    f32 n[3];
    f32 t[3];
    f32 *tp = t;
    f32 one = 1.0f;
    s32 i;
    n[0] = -a->n0;
    n[1] = -a->n1;
    n[2] = -a->n2;
    tp[0] = a->t0;
    t[1] = a->t1;
    t[2] = a->t2;
    for (i = 0; i < D_00485E40; i++) {
        if (i != a->sel) {
            O *o = D_00436FA8[i];
            f32 *pl = o->pl;
            if (!(a->r348 < pl[0] * n[0] + pl[1] * n[1] + pl[2] * n[2])) {
                f32 d = func_0015A1D0((u8 *)a + 0x10, n, (u8 *)o + 0x10) - D_00436FA8[i]->r;
                f32 m = one <? (a->r348 * D_004821E8);
                f32 lim = a->r * (m * D_004821EC + D_004821F0);
                if (d > 0.0f && d < lim) {
                    f32 x = func_0015A1D0((u8 *)a + 0x10, tp, (u8 *)D_00436FA8[i] + 0x10);
                    if (__builtin_fabsf(x) < (a->r + D_00436FA8[i]->r) * 0.75f) {
                        if (arg1) *arg1 = x;
                        return D_00436FA8[i];
                    }
                }
            }
        }
    }
    return 0;
}
}
