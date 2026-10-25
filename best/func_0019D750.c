extern s64 func_00171040(s64, s64);
extern s64 func_001712C8(s64, s64);
extern s64 func_001798F0(s64, s64);
extern s64 func_00179948(s64, s64);
extern s32 func_001799B0(s64, s64);

s64 func_0019D750(s64 x) {
    s32 ix0 = (s32)(x >> 32);
    u32 ix1 = (u32)x;
    u32 sign = 0x80000000;
    u32 r, t1, s1, q1;
    s32 s0, q, m, t, i;
    s64 z, ret;

    if ((ix0 & 0x7ff00000) == 0x7ff00000) {
        ret = func_001798F0(func_00171040(x, x), x);
    } else if (ix0 <= 0 && (((ix0 & 0x7fffffff) | ix1) == 0)) {
        ret = x;
    } else if (ix0 < 0) {
        z = func_00179948(x, x);
        ret = func_001712C8(z, z);
    } else {
        m = ix0 >> 20;
        if (m == 0) {
            while (ix0 == 0) {
                m -= 21;
                ix0 |= (ix1 >> 11);
                ix1 <<= 21;
            }
            for (i = 0; (ix0 & 0x100000) == 0; i++) ix0 <<= 1;
            m -= i - 1;
            ix0 |= (ix1 >> (32 - i));
            ix1 <<= i;
        }
        m -= 1023;
        ix0 = (ix0 & 0x000fffff) | 0x00100000;
        if (m & 1) {
            ix0 += ix0 + ((ix1 & sign) >> 31);
            ix1 += ix1;
        }
        m >>= 1;
        ix0 += ix0 + ((ix1 & sign) >> 31);
        ix1 += ix1;
        q = 0; q1 = 0; s0 = 0; s1 = 0;
        r = 0x200000;
        while (r != 0) {
            t = s0 + r;
            if (t <= ix0) {
                s0 = t + r;
                ix0 -= t;
                q += r;
            }
            ix0 += ix0 + ((ix1 & sign) >> 31);
            ix1 += ix1;
            r >>= 1;
        }
        r = sign;
        while (r != 0) {
            t1 = s1 + r;
            t = s0;
            if (t < ix0 || (t == ix0 && t1 <= ix1)) {
                s1 = t1 + r;
                if ((t1 & sign) == sign && (s1 & sign) == 0) s0 += 1;
                ix0 -= t;
                if (ix1 < t1) ix0 -= 1;
                ix1 -= t1;
                q1 += r;
            }
            ix0 += ix0 + ((ix1 & sign) >> 31);
            ix1 += ix1;
            r >>= 1;
        }
        if ((ix0 | ix1) != 0) {
            z = 0x3FF0000000000000LL;
            if (func_001799B0(z, z) >= 0) {
                if (q1 == 0xffffffff) {
                    q1 = 0;
                    q += 1;
                } else if (func_001799B0(z, z) > 0) {
                    if (q1 == 0xfffffffe) q += 1;
                    q1 += 2;
                } else {
                    q1 += (q1 & 1);
                }
            }
        }
        ix0 = (q >> 1) + 0x3fe00000;
        ix1 = q1 >> 1;
        if (q & 1) ix1 |= sign;
        ix0 += (m << 20);
        ret = ((s64)ix0 << 32) | (u64)ix1;
    }
    return ret;
}
