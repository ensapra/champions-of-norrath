typedef union { u64 q[2]; u8 c[16]; } C16;
#define L(i) d->c[i] = (b.c[i] * t + a.c[i] * u) / n
void ovl_ntgui2_func_00108E58(C16 *d, C16 *p, C16 *q, s32 t, s32 n) {
    C16 a = *p;
    C16 b = *q;
    s32 u = n - t;
    L(0); L(1); L(2); L(3); L(4); L(5); L(6); L(7);
    L(8); L(9); L(10); L(11); L(12); L(13); L(14); L(15);
}
