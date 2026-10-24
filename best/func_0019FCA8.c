f32 func_0019FDB8(f32, f32);

f32 func_0019FCA8(s32 n, f32 x) {
    u32 bits = *(u32 *)&x;
    u32 ix = bits & 0x7FFFFFFF;
    s32 k = (ix >> 23) + n;
    f32 big;
    if (ix > 0x7FFFFF) {
        if (k >= 0x100) {
            big = 1.0e30f;
        } else if (k > 0) {
            u32 w = (bits & 0x807FFFFF) | (k << 23);
            x = *(f32 *)&w;
            return x;
        } else if (n > 50000) {
            big = 1.0e30f;
        } else {
            big = 1.0e-30f;
        }
        return func_0019FDB8(big, x) * big;
    }
    return x;
}
