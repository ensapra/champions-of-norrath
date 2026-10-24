typedef struct { s32 p[25]; s32 f64; } G;
extern G D_008EBDD8;
s32 func_002E73C8(s32 *out) {
    s32 *p = out;
    if (p) {
        *p = D_008EBDD8.f64;
        D_008EBDD8.f64 = 0;
        return 0;
    }
    return 0x80000004;
}
s32 func_002E75C8(u8 *a, s32 b) {
    s32 i = b / 8;
    s32 m = 1 << (b - i * 8);
    return (a[i] & m) != 0;
}
