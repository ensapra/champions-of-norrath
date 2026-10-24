s32 func_001B5C80();
s32 func_001B5CD8();
s64 func_001B7528(s64, s64, s64, s64);
s64 func_001B7620(s64 a, s64 b, s64 c, s64 d) {
    s32 t = func_001B5C80();
    s64 r = func_001B7528(a, b, c, d);
    if (t != 0) func_001B5CD8();
    return r;
}
s64 func_001B8FF0(u64, u32);
void func_001B76A0(u64 t, s32 *sec, s32 *usec) {
    s32 s = func_001B8FF0(t, 0x8CA0000);
    u64 rem;
    if (sec) *sec = s;
    if (usec) {
        rem = t - (u64)(u32)s * 0x8CA0000;
        *usec = func_001B8FF0(rem * 1000000, 0x8CA0000);
    }
}
s64 func_001B7748(u32 a, u32 b) {
    u64 x = (u64)a * 0x8CA0000;
    u64 y = (u64)b * 0x8CA0000;
    return x + func_001B8FF0(y, 1000000);
}
