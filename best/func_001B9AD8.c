double func_00171000(void);
double func_00171040(void);
u64 func_001B9AD8(void)
{
    double a = func_00171000();
    u64 r;
    double m;
    if (a < 0.0) return 0;
    m = func_00171040();
    r = (u64)(u32)(s32)m << 32;
    a = a - (double)r;
    if (a < 0.0)
        r -= (u32)(s32)(-a);
    else
        r += (u32)(s32)a;
    return r;
}
