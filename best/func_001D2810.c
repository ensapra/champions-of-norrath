s32 func_00164130(void *, s32);
s32 func_0024F3B0(s32);
extern f32 D_004806AC, D_004806B0, D_004806B4, D_004806B8, D_004806BC, D_004806C0;
extern char *D_00485008;
extern f32 D_00485058;
extern s32 D_0048505C;

void func_001D2810(void) {
    char *o = D_00485008;
    char *a;
    s32 i, k, j;
    if (o != 0 && (a = o + 0x120) != 0 && (i = func_00164130(a, 0x20)) >= 0) {
        k = func_0024F3B0(2);
        if (k != D_0048505C) {
            f32 f3 = (f32)(k - 0x400) * D_004806B0;
            f32 f5 = *(f32 *)(o + (i << 5) + 0x140) * D_004806AC - D_004806B8;
            D_0048505C = k;
            if (__builtin_fabsf(f3 - f5) < D_004806B4) {
                D_00485058 = 0.0f;
            } else if (f5 < f3) {
                D_00485058 = D_004806BC;
            } else {
                D_00485058 = D_004806C0;
            }
        }
        if (D_00485058 != 0.0f) {
            j = 0;
            if (a[4] > 0) {
                f32 *b = (f32 *)(a + 0x10);
                do {
                    f32 *p = (f32 *)((char *)b + ((j << 5) + 0x10));
                    j++;
                    *p += D_00485058;
                } while (j < a[4]);
            }
        }
    }
}
