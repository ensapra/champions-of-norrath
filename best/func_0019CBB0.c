double func_0019E320(double x, double y);
double func_0019F148(double x, double y, int iy);
int func_0019D198(double x, double *y);
double func_00179948(double a, double b);

typedef union { double value; struct { u32 lsw; u32 msw; } parts; s64 w; } ieee_double_shape_type;

double func_0019CBB0(double x)
{
    double y[2];
    s32 n, ix;
    ieee_double_shape_type u;
    u.value = x;
    ix = u.parts.msw;

    ix &= 0x7fffffff;
    if (ix <= 0x3fe921fb) return func_0019E320(x, 0.0);
    else if (ix >= 0x7ff00000) return func_00179948(x, x);
    else {
        n = func_0019D198(x, y);
        switch (n & 3) {
        case 0: return func_0019E320(y[0], y[1]);
        case 1: return func_00179948(0.0, func_0019F148(y[0], y[1], 1));
        case 2: return func_00179948(0.0, func_0019E320(y[0], y[1]));
        default:
            return func_0019F148(y[0], y[1], 1);
        }
    }
}
