typedef union {
    double value;
    struct { u32 lsw; u32 msw; } parts;
} ieee_double_shape_type;

double func_0019E320(double x, double y)
{
    double a, hz, z, r, qx;
    s32 ix;
    {
        ieee_double_shape_type gh_u;
        gh_u.value = x;
        ix = gh_u.parts.msw;
    }
    ix &= 0x7fffffff;
    if (ix < 0x3e400000) {
        if (((int)x) == 0) return 1.0;
    }
    z = x * x;
    r = z * (4.16666666666666019037e-02 + z * (-1.38888888888741095749e-03 + z * (2.48015872894767294178e-05 + z * (-2.75573143513906633035e-07 + z * (2.08757232129817482790e-09 + z * -1.13596475577881948265e-11)))));
    if (ix < 0x3FD33333)
        return 1.0 - (0.5 * z - (z * r - x * y));
    else {
        if (ix > 0x3fe90000) {
            qx = 0.28125;
        } else {
            ieee_double_shape_type iw_u;
            iw_u.parts.msw = ix - 0x00200000;
            iw_u.parts.lsw = 0;
            qx = iw_u.value;
        }
        hz = 0.5 * z - qx;
        a = 1.0 - qx;
        return a - (hz - (z * r - x * y));
    }
}
