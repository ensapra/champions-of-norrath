typedef struct {
    s32 r, g, b, a, x, y;
} Unp;

s32 func_00178BD8(u64 *in, Unp *out) {
    u64 v = *in;
    s32 r, g, b, a, x, y;
    r = (s32)(v & 0xFF);
    g = (s32)((v & 0xFF00) >> 8);
    b = (s32)((v & 0xFF0000) >> 16);
    x = (s32)((v & 0x00FFFFFF00000000ULL) >> 32);
    a = (s32)((v & 0xFF000000) >> 24);
    y = (s32)(v >> 56);
    out->r = r;
    out->a = a;
    out->g = g;
    out->b = b;
    out->x = x;
    out->y = y;
    return 0;
}
