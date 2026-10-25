unsigned long long func_002F9BD8(double x) {
    long long r;
    double rem;
    if (x < 0.0) return 0;
    r = (long long)(x * 2.3283064365386963e-10) << 32;
    rem = x - (double)r;
    if (rem < 0.0)
        r -= (unsigned)(-rem);
    else
        r += (unsigned)rem;
    return r;
}
