float func_002F11B8(float x) {
    int i0, j0;
    unsigned i, ix;
    union { float f; int i; } u, c;
    i0 = *(int *)&x;
    ix = i0 & 0x7fffffff;
    j0 = (ix >> 23) - 0x7f;
    if (j0 < 23) {
        if (j0 < 0) {
            c.i = 0x7149f2c9;
            if (c.f + x > 0.0f) {
                if (i0 < 0) i0 = 0x80000000;
                else if (ix > 0x7fffff) i0 = 0x3f800000;
            }
        } else {
            i = 0x007fffff >> j0;
            if ((i0 & i) == 0) return x;
            c.i = 0x7149f2c9;
            if (c.f + x > 0.0f) {
                if (i0 > 0) i0 += 0x00800000 >> j0;
                i0 &= ~i;
            }
        }
        *(int *)&x = i0;
    }
    return x;
}
