typedef union { long l; struct { unsigned int lo : 32; unsigned int hi : 32; } s; } DU;
long func_001AB348(long a, long b) {
    DU r;
    int e, n;
    r.l = b;
    e = ((int)(a >> 32) & 0x7FF00000) + 0xFCC00000;
    if (e > 0) {
        r.s.hi = e;
        r.s.lo = 0;
    } else {
        n = (-e) >> 20;
        if (n < 20) {
            r.s.hi = 0x80000 >> n;
            r.s.lo = 0;
        } else {
            n -= 20;
            r.s.hi = 0;
            r.s.lo = (n < 31) ? (1 << ~n) : 1;
        }
    }
    return r.l;
}
