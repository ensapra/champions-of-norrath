/* identical to func_00191998 (matched), with its names changed by decompdecomp */
s32 strlenWide__FPCUs(u16 *p) {
    s32 n = 0;
    while (*p != 0) { p++; n++; }
    return n;
}
void func_001919D0(s8 *src) {
    s16 buf[256];
    s16 *dst = buf;
    while (*src != 0) { *dst++ = (u8)*src++; }
    *dst = 0;
    func_00190E20(buf);
}
void func_00191938(u16 *dst, s8 *src) {
    while (*dst != 0) dst++;
    while (*src != 0) *dst++ = (u8)*src++;
    *dst = 0;
}
s32 func_00191A20(u32 c, f32 scale) {
    s32 r = (s32)((c >> 8) & 255) * scale;
    s32 g = (s32)((c >> 16) & 255) * scale;
    s32 b = (s32)(c & 255) * scale;
    if (r < 0) r = 0; else if (r >= 256) r = 255;
    if (g < 0) g = 0; else if (g >= 256) g = 255;
    if (b < 0) b = 0; else if (b >= 256) b = 255;
    return (c & 0xFF000000) | (r << 8) | (g << 16) | b;
}
