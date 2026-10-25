float func_0019E250(float x) {
    int m, q, s, t, ix;
    unsigned int r;
    unsigned int mk = 0x7FFFFF;
    ix = *(int *)&x;
    if ((unsigned)(ix & 0x7FFFFFFF) > mk) {
        m = ix >> 23;
        if (ix < 0) return (x - x) / (x - x);
        m -= 127;
        ix &= mk;
        ix |= 0x800000;
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
