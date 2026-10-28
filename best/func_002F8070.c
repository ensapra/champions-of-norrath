extern f32 func_002F8180(f32, f32);

f32 func_002F8070(s32 n, f32 x) {
    union { f32 f; s32 i; } u;
    s32 hx, ix, k;
    u.f = x;
    hx = u.i;
    ix = hx & 0x7fffffff;
    k = (ix >> 23) + n;
    if (ix > 0x7fffff) {
        if (k > 0xff) return 1.0e30f * func_002F8180(1.0e30f, x);
        if (k > 0) {
            u.i = (hx & 0x807fffff) | (k << 23);
            return u.f;
        }
        if (n > 50000) return 1.0e30f * func_002F8180(1.0e30f, x);
        return 1.0e-30f * func_002F8180(1.0e-30f, x);
    }
    return x;
}
