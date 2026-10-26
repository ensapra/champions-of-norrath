extern s64 D_00447FB8[];
extern s64 func_002F81C0(s64, s64);

#define SAT(x) ((x) >= 0x7FFF ? 0x7FFF : ((x) < -0x8000 ? -0x8000 : (x)))

void func_002EE3F0(s64 n, s32 pos, s64 *in, s64 *out) {
    s64 buf[16];
    s64 e, m, t, sh, rnd, k;
    s64 *p;
    s32 i, j;
    s64 *q;
    s64 *src;
    s64 tbl;

    e = 0;
    if (n >= 0x10) e = (n >> 3) - 1;
    m = n - e * 8;
    if (m == 0) {
        e = -4;
        m = 7;
    } else {
        if (m < 8) {
            do {
                m = (m << 1) | 1;
                e--;
            } while (m < 8);
        }
        m -= 8;
    }
    buf[15] = m;
    buf[14] = e;
    k = 6 - e;
    src = in;
    tbl = D_00447FB8[(s32)m];
    p = buf;
    t = SAT(k);
    sh = t - 1;
    if (sh < 0x7FFF) {
        s64 c = sh < -0x8000 ? -0x8000 : sh;
        rnd = 1 << (s32)c;
    } else {
        rnd = 0x80000000;
    }
    for (i = 12; i != -1; i--) {
        s64 v = (func_002F81C0(tbl, (*src++ << 13) - 0x7000) >> 15) + rnd;
        v = SAT(v);
        *p++ = v >> (s32)t;
    }
    q = out;
    p = buf;
    j = 13;
    switch (pos) {
    case 3: *q++ = 0;
    case 2: *q++ = 0;
    case 1: *q++ = 0;
    case 0:
        do {
            *q++ = *p++;
        } while (--j);
    }
    for (i = pos + 1; i < 4; i++) *q++ = 0;
}
