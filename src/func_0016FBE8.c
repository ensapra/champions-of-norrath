typedef struct { u8 pad[0x18]; s64 t; } LerpObj;
s64 func_001708F0(s32, s64);
void func_0016FBE8(LerpObj *o, u8 *out, u8 *a, u8 *b)
{
    s32 c0, c1, c2, c3, r;
    c0 = a[0]; r = c0 + (u8)(func_001708F0(b[0] - c0, o->t) >> 16); out[0] = r;
    c1 = a[1]; r = c1 + (u8)(func_001708F0(b[1] - c1, o->t) >> 16); out[1] = r;
    c2 = a[2]; r = c2 + (u8)(func_001708F0(b[2] - c2, o->t) >> 16); out[2] = r;
    c3 = a[3]; r = c3 + (u8)(func_001708F0(b[3] - c3, o->t) >> 16); out[3] = r;
}
