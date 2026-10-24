typedef struct { s32 size; s32 count; u8 *rd; u8 *wr; u8 data[1]; } Ring;
void func_001AE898(Ring *r) {
    r->count++;
    r->wr++;
    if (r->wr == r->data + r->size)
        r->wr = r->data;
}

s32 func_001ABA30(s64 x) {
    s32 hx, lx;
    lx = (s32)x;
    hx = (s32)(x >> 32);
    hx &= 0x7FFFFFFF;
    hx |= (u32)(lx | -lx) >> 31;
    hx = 0x7FF00000 - hx;
    return 1 - (s32)((u32)(hx | -hx) >> 31);
}

extern s32 D_004C3F9C[];
extern u8 D_0110AF28[];
void func_001A2660(void *, s32, s32);
s32 ovl_ntgui2_func_001B1900(void) {
    D_004C3F9C[0] = 0;
    func_001A2660(D_0110AF28, 0, 4);
    return 0;
}

extern s64 D_005071B0[];
s64 func_00171040(s64, s64);
s64 func_001AB808(s32 n) {
    s64 r = 0x3FF0000000000000LL;
    if (n < 24)
        return D_005071B0[n];
    while (n > 0) {
        n--;
        r = func_00171040(r, 0x4024000000000000LL);
    }
    return r;
}
