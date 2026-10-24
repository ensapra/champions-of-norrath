s32 func_0014C400(s32 arg0) {
    u32 hi = arg0 >> 8;
    u32 lo = arg0 & 0xFF;
    if (hi >= 0x81 && hi <= 0x9F) {
        hi -= 0x81;
    } else if (hi >= 0xE0 && hi <= 0xEF) {
        hi -= 0xC1;
    } else {
        return -1;
    }
    hi *= 2;
    if (lo >= 0x40 && lo <= 0x7E) {
        lo -= 0x40;
    } else if (lo >= 0x80 && lo <= 0x9E) {
        lo -= 0x41;
    } else if (lo >= 0x9F && lo <= 0xFC) {
        lo -= 0x9F;
        hi += 1;
    } else {
        return -1;
    }
    return (s32)(((u64)hi << 8) + lo + 0x2121);
}
