u64 func_002F8F60(u64 n, u64 d) {
    u32 q = (u32)(n / d);
    u32 r = (u32)(n - (u64)q * d);
    return ((u64)r << 32) | q;
}
