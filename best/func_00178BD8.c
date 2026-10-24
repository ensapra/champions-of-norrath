typedef struct {
    s32 r, g, b, a, x, y;
} Unp;

s32 func_00178BD8(u64 *in, Unp *out) {
    u64 v = *in;
    out->r = (s32)(v & 0xFF);
    out->g = (s32)((v & 0xFF00) >> 8);
    out->b = (s32)((v & 0xFF0000) >> 16);
    out->a = (s32)((v & 0xFF000000) >> 24);
    out->x = (s32)((v & 0x00FFFFFF00000000ULL) >> 32);
    out->y = (s32)(v >> 56);
    return 0;
}

s32 func_00178B60(Unp *in, u64 *out) {
    *out = ((u64)in->r & 0xFF) | (((u64)in->a << 24) & 0xFF000000)
         | (((u64)in->x << 32) & 0x00FFFFFF00000000ULL) | (((u64)in->b << 16) & 0xFF0000)
         | (((u64)in->g << 8) & 0xFF00) | ((u64)in->y << 56);
    return 0;
}
