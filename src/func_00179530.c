extern double func_00171040(double, double);
extern int func_001714D8(double);
extern double func_001798F0(double, double);
extern double func_00179A00(int);

long func_00179530(long x) {
    double c, r;
    int b;
    if (((unsigned long)(-1L << 11) >> 10) < (unsigned long)(x + (-1UL >> 11)) && (x & 0x7FF)) {
        x |= 0x800;
    }
    c = func_00171040(func_00171040(func_00179A00(x >> 32), 65536.0), 65536.0);
    b = (int)(x & 0xFFFFFFFFUL);
    r = func_00179A00(b);
    r = b < 0 ? func_001798F0(r, 4294967296.0) : r;
    return func_001714D8(func_001798F0(c, r));
}
