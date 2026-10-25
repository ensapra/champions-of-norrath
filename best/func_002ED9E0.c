extern u8 D_0047C9D0[];

s32 func_002ED9E0(s64 x) {
    s32 i;
    if (x < 0) {
        if (x <= -0x40000000L) return 0;
        x = ~x;
    }
    if (x & 0xFFFF0000L) {
        if (x & 0xFF000000L) {
            i = (x >> 24) & 0xFF;
            return D_0047C9D0[i] - 1;
        }
        i = (x >> 16) & 0xFF;
        return D_0047C9D0[i] + 7;
    }
    if (x & 0xFF00) {
        i = (x >> 8) & 0xFF;
        return D_0047C9D0[i] + 0xF;
    }
    i = x & 0xFF;
    return D_0047C9D0[i] + 0x17;
}
