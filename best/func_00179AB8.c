extern s64 func_001799B0(s64, s64);
extern s64 func_00171040(s64, s64);
extern s64 func_00179CF0(s64);
extern s64 func_00179D90(s64);
extern s64 func_001798F0(s64, s64);
extern s64 func_00179948(s64, s64);

s64 func_00179AB8(s64 a) {
    s64 r;
    s64 t;
    if (func_001799B0(a, 0) < 0) return 0;
    t = func_00171040(a, 0xF7C0LL << 46);
    r = (s64)(s32)func_00179CF0(t) << 32;
    return func_00179D90(r);
}
