/* identical to func_00179530 (matched), with its names changed by decompdecomp */
extern double func_002FB680(double, double);
extern int func_002FBC20(double);
extern double dpadd(double, double);
extern double func_002FBA98(int);

long func_002F9AF0(long x) {
    double c, r;
    int b;
    if (((unsigned long)(-1L << 11) >> 10) < (unsigned long)(x + (-1UL >> 11)) && (x & 0x7FF)) {
        x |= 0x800;
    }
    c = func_002FB680(func_002FB680(func_002FBA98(x >> 32), 65536.0), 65536.0);
    b = (int)(x & 0xFFFFFFFFUL);
    r = func_002FBA98(b);
    r = b < 0 ? dpadd(r, 4294967296.0) : r;
    return func_002FBC20(dpadd(c, r));
}
