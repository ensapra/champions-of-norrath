typedef struct E { u8 *p; u8 pad[0x24]; } E;
extern s32 D_010E4920[];
extern u8 D_010EA1F8[];
extern E D_010EA1E0[];

s16 func_001753F8(s32 i) {
    s16 r = 0;
    if (D_010E4920[i] != 0)
        r = *(s16 *)(D_010EA1F8 + i * 0x28);
    return r;
}

void func_00175430(s32 i, s64 *src) {
    E *e = &D_010EA1E0[i];
    u8 *p;
    s64 x;
    *(s32 *)(e->p + 0xC) += 1;
    *(s32 *)(e->p) += 1;
    p = e->p;
    x = *(s64 *)(p + 0x10);
    *(s64 *)(p + 0xA8) = 0x44;
    *(s64 *)(p + 0x10) = (x & ~0x7FFFLL) | ((((s64)((x & 0x7FFF) << 32) >> 32) + 1) & 0x7FFF);
    *(s64 *)(e->p + 0xA0) = *src;
    *(s64 *)(e->p + 0x80) |= 1;
}
