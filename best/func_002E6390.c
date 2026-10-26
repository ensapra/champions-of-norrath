u32 func_002E6390(u32 a) {
    u32 lo, hi;
    hi = a >> 8;
    lo = a << 8;
    return ((lo & 0xFF00) | (hi & 0xFF)) + (a & 0);
}
