s64 func_002FB5C0(s64, s64);
s64 func_002FB680(s64, s64);
s64 func_002FBA98(s64);
void func_002F9A48(s64 arg0) {
    s64 c = (s64)0x81E0 << 47;
    s64 a = func_002FB680(func_002FB680(func_002FBA98(arg0 >> 32), c), c);
    s32 lo = (s32)arg0;
    s64 b = func_002FBA98(lo);
    if (lo < 0) {
        b = func_002FB5C0(b, (s64)0x83E0 << 47);
    }
    func_002FB5C0(a, b);
}
