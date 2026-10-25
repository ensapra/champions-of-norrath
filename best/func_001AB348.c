typedef union { f64 d; struct { u32 lo; s32 hi; } w; } DU;
f64 func_001AB348(f64 _x) {
    DU x, a;
    s32 L;
    x.d = _x;
    L = (x.w.hi & 0x7FF00000) - (53 - 1) * 0x100000;
    if (L > 0) {
        a.w.hi = L;
        a.w.lo = 0;
    } else {
        L = -L >> 20;
        if (L < 20) {
            a.w.hi = 0x80000 >> L;
            a.w.lo = 0;
        } else {
            a.w.hi = 0;
            L -= 20;
            a.w.lo = L >= 31 ? 1 : 1 << (31 - L);
        }
    }
    return a.d;
}
