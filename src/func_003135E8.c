typedef struct {
    u8 pad0[0x38];
    s16 a[5];
    s16 b[5];
    f32 c[5];
} S3135E8;

s32 func_003135E8(S3135E8 *p, s32 i, s32 v)
{
    f32 f;
    s32 ret;
    if (v == 0) return 0;
    if (v < p->a[i]) return 0;
    f = (f32)p->b[i] + p->c[i] * (f32)(v - p->a[i]);
    if (f >= 0.0f) {
        ret = f + 0.5f;
    } else {
        ret = f - 0.5f;
    }
    return ret;
}
