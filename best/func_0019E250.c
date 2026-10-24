float func_0019E250(float x) {
    int hx, ix, m, q, s, t;
    unsigned int r;
    hx = *(int *)&x;
    if ((unsigned)(hx & 0x7FFFFFFF) > 0x7FFFFF) {
        if (hx < 0) return (x - x) / (x - x);
        m = (hx >> 23) - 127;
        ix = (hx & 0x7FFFFF) | 0x800000;
        ix <<= (m & 1);
        m >>= 1;
        ix += ix;
        q = s = 0;
        r = 0x1000000;
        do {
            t = s + r;
            if (t <= ix) {
                s = t + r;
                ix -= t;
                q += r;
            }
            ix += ix;
            r >>= 1;
        } while (r != 0);
        if (ix != 0) q += q & 1;
        ix = 0x3F000000 + (q >> 1);
        ix += m << 23;
        return *(float *)&ix;
    }
    return x;
}
