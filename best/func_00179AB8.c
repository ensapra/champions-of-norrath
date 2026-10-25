unsigned long func_00179AB8(double a) {
    double b;
    unsigned long v;
    if (a < 0) return 0;
    b = a * 2.3283064365386963e-10;
    v = (unsigned int) b;
    v <<= 32;
    a -= (double) v;
    if (a < 0) v -= (unsigned int) (-a);
    else v += (unsigned int) a;
    return v;
}
