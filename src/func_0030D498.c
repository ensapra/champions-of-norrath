s32 func_002FBA48(f64, f64);
f64 func_002FB618(f64, f64);
s64 func_002F9BD8(f64);
s64 func_0030D498(f64 a) {
    f64 z = 0;
    if (func_002FBA48(a, z) < 0)
        return -func_002F9BD8(func_002FB618(z, a));
    return func_002F9BD8(a);
}
