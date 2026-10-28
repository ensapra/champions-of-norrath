void func_002EF250(s32 mode, s64 offset, s64 *base, s64 *in, s64 *out, s64 *res) {
    s64 *src = base - (s32)offset;
    s32 i;
    switch (mode) {
    case 0:
        for (i = 39; i != -1; i--) { s64 y = (*src++ * 0xCCD) >> 15; *out++ = y; *res++ = *in++ - y; }
        break;
    case 1:
        for (i = 39; i != -1; i--) { s64 y = (*src++ * 0x2CCD) >> 15; *out++ = y; *res++ = *in++ - y; }
        break;
    case 2:
        for (i = 39; i != -1; i--) { s64 y = (*src++ * 0x5333) >> 15; *out++ = y; *res++ = *in++ - y; }
        break;
    case 3:
        for (i = 39; i != -1; i--) { s64 y = (*src++ * 0x7FFF) >> 15; *out++ = y; *res++ = *in++ - y; }
        break;
    }
}
