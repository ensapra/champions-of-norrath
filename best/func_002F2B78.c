typedef union {
    double value;
    struct { u32 lsw; s32 msw; } parts;
} ieee_double_shape_type;

double func_002F2570(double);

static const double two54 = 1.80143985094819840000e+16;
static const double ivln10 = 4.34294481903251816668e-01;
static const double log10_2hi = 3.01029995663611771306e-01;
static const double log10_2lo = 3.69423907715893078616e-13;

double func_002F2B78(double x) {
    double y, z;
    s32 i, k, hx;
    u32 lx, t;
    ieee_double_shape_type u;

    u.value = x;
    lx = u.parts.lsw;
    hx = u.parts.msw;
    k = 0;
    t = (hx & 0x7fffffff) | lx;
    if (hx < 0x00100000) {
        if (t == 0)
            return -1.7976931348623157e308;
        if (hx < 0)
            return (x - x) / 0.0;
        k -= 54;
        x *= two54;
        u.value = x;
        hx = u.parts.msw;
    }
    if (hx >= 0x7ff00000)
        return x + x;
    k += (hx >> 20) - 1023;
    i = ((u32)k & 0x80000000) >> 31;
    hx = (hx & 0x000fffff) | ((0x3ff - i) << 20);
    y = (double)(k + i);
    u.value = x;
    u.parts.msw = hx;
    x = u.value;
    z = y * log10_2lo + ivln10 * func_002F2570(x);
    return z + y * log10_2hi;
}
