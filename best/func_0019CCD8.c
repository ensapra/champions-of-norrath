double func_0019F148(double, double, int);
double func_0019E320(double, double);
int func_0019D198(double, double *);
double func_00179948(double, double);

typedef union { double value; struct { s32 lsw; s32 msw; } parts; } ieee_double_shape_type;

double func_0019CCD8(double x)
{
    double y[2], z = 0.0;
    s32 n, ix;

    do { ieee_double_shape_type gh_u; gh_u.value = (x); (ix) = gh_u.parts.msw; } while (0);

    ix &= 0x7fffffff;
    if (ix <= 0x3fe921fb) return func_0019F148(x, z, 0);
    else if (ix >= 0x7ff00000) return func_00179948(x, x);
    else {
        n = func_0019D198(x, y);
        switch (n & 3) {
        case 0: return func_0019F148(y[0], y[1], 1);
        case 1: return func_0019E320(y[0], y[1]);
        case 2: return func_00179948(0.0, func_0019F148(y[0], y[1], 1));
        default:
            return func_00179948(0.0, func_0019E320(y[0], y[1]));
        }
    }
}
