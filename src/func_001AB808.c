extern double D_005071B0[];
double func_00171040(double, double) __attribute__((const));
double func_001AB808(s32 n) {
    double r = 1.0;
    if (n < 24)
        return D_005071B0[n];
    while (n > 0) {
        n--;
        r = func_00171040(r, 10.0);
    }
    return r;
}
