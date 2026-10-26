extern s64 func_002F81C0(s64, s64);
#define CL(v) ((v) >= 0x7FFF ? 0x7FFF : (v) < -0x8000 ? -0x8000 : (v))
#define ST(d, k) { s64 nd = p + (func_002F81C0(k, cur) >> 15); cur = cur + (func_002F81C0(k, p) >> 15); p = d; d = nd; }

void func_002EF8E0(u8 *a0, s64 *a1, s32 n, s64 *io) {
    s64 *st = (s64 *)(a0 + 0x8D8);
    s64 p, cur, *o;
    s64 x = st[0];
    s64 d1, d2, d3, d4, d5, d6, d7;
    s64 k0, k1, k2, k3, k4, k5, k6, k7;
    s32 c = n - 1;
    k7 = a1[7];
    d1 = st[1]; d2 = st[2]; d3 = st[3]; d4 = st[4]; d5 = st[5]; d6 = st[6]; d7 = st[7];
    k0 = a1[0]; k1 = a1[1]; k2 = a1[2]; k3 = a1[3]; k4 = a1[4]; k5 = a1[5];
    k6 = a1[6];
    if (n != 0) {
        do {
            p = x;
            x = *io;
            o = io;
            io = o + 1;
            cur = x;
            ST(d1, k0) ST(d2, k1) ST(d3, k2) ST(d4, k3) ST(d5, k4) ST(d6, k5) ST(d7, k6)
            cur = cur + (func_002F81C0(k7, p) >> 15);
            c--;
            *o = CL(cur);
        } while (c != -1);
    }
    st[0] = CL(x);
    st[1] = CL(d1); st[2] = CL(d2); st[3] = CL(d3); st[4] = CL(d4);
    st[5] = CL(d5); st[6] = CL(d6); st[7] = CL(d7);
}
