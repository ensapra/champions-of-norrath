typedef struct {
    char pad0[0x18];
    s64 t;
} Lerp16FCC4;

s64 func_001708F0(s32, s64);

void func_0016FCC4(Lerp16FCC4 *l, u8 *dst, u8 *a, u8 *b) {
    u32 i;
    s32 j;
    u8 v;

    i = 0;
loop:
    j = i * 4;
    i++;
    v = a[j + 0];
    dst[j + 0] = v + (u8)(func_001708F0(b[j + 0] - v, l->t) >> 16);
    v = a[j + 1];
    dst[j + 1] = v + (u8)(func_001708F0(b[j + 1] - v, l->t) >> 16);
    v = a[j + 2];
    dst[j + 2] = v + (u8)(func_001708F0(b[j + 2] - v, l->t) >> 16);
    v = a[j + 3];
    dst[j + 3] = v + (u8)(func_001708F0(b[j + 3] - v, l->t) >> 16);
    if (i < 4) goto loop;
}
