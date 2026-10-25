s64 func_001708F0(s32, s64);
typedef struct { s64 a, b, c, frac; } Ctr;
s32 func_0016FBAC(Ctr *c, s32 a, s32 b) {
    return a + (s32)(func_001708F0(b - a, c->frac) >> 16);
}
