typedef struct {
    u8 *x0;
    u8 pad4[0x10];
    s32 x14;
    s32 x18;
    s32 x1C;
} S_138758;

s32 func_00138758(S_138758 *o, s32 n, void **out) {
    u8 *base = o->x0;
    if ((n >= o->x14 && n < o->x18) || n >= o->x1C) {
        return 5;
    }
    *out = base + (*(s32 *)(base + 0x10) + n);
    return 0;
}
