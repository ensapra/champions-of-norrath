u32 func_0024F978(u32 a) {
    u32 lo = (a & 0xFF00) << 8;
    u32 mid = (a >> 8) & 0xFF00;
    u32 top = a >> 24;
    u32 r = a << 24;
    r |= lo;
    r |= mid;
    r |= top;
    return r;
}
