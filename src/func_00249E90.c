#ifdef __cplusplus
extern "C" {
#endif
void func_00157668(void *, void *, s16);
void func_00156CB0(void *, s32, s32);
void func_0016AE78(s32, s32, s32, void *, void *, s32, s32, s32, s32);
#ifdef __cplusplus
}
#endif
extern s32 D_0031F540[];

void func_0026FB08(u8 *arg0, f32 x) {
    f32 lo = *(f32 *)(arg0 + 0xB0);
    f32 *tab = (f32 *)(arg0 + 0xC);
    f32 one = 1.0f;
    f32 t;
    f32 a;
    *(f32 *)(arg0 + 0x8C) = x;
    *(f32 *)(arg0 + 0xD8) = one - (x - lo) / (*(f32 *)(arg0 + 0xB8) - lo);
    t = one <? *(f32 *)(arg0 + 0x90);
    a = tab[*(s32 *)(arg0 + 0x58) + 0x2C];
    *(f32 *)(arg0 + 0xFC) = a + (tab[*(s32 *)(arg0 + 0x54) + 0x2C] - a) * t;
}

typedef struct __attribute__((packed, aligned(4))) { u64 a; s32 b; } P12;

void func_00249EB0(u8 *o) {
    u8 buf[0x40];
    P12 a;
    P12 b;
    P12 *p = (P12 *)(o + 0x3CC);
    if (*(s32 *)(o + 0x3DC) != 0) {
        a = *p;
        func_00157668(buf, &a, (s16)(*(u16 *)(o + 0x3D8) - 0x4000));
        func_00156CB0(buf, 0, -0x1C18);
        b = *p;
        func_0016AE78(D_0031F540[2], D_0031F540[3], 3, &b, buf, 0, -1, 0, 0);
    }
}

P12 *func_00249E90(P12 *d, u8 *s) {
    *d = *(P12 *)(s + 0x10);
    return d;
}

s32 func_00249E60(u8 *o) {
    u8 *p = *(u8 **)(o + 0x3C0);
    if (p == NULL) return 0;
    if (*(s32 *)(*(u8 **)(p + 0xC) + 0xC) & 8) return 0;
    return 1;
}
