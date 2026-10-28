typedef union { u64 q; struct { u32 lo; s32 hi; } p; } U64x;

u64 func_0030BEE0(U64x a, U64x b) {
    s32 t;
    t = (a.p.hi & 0x7FF00000) - 0x3400000;
    if (t > 0) {
        b.p.hi = t;
        b.p.lo = 0;
    } else {
        t = (-t) >> 20;
        if (t < 20) {
            b.p.hi = 0x80000 >> t;
            b.p.lo = 0;
        } else {
            t -= 20;
            b.p.hi = 0;
            b.p.lo = (t < 31) ? (1 << ~t) : 1;
        }
    }
    return b.q;
}
