typedef struct __attribute__((packed, aligned(4))) { u64 a; s32 b; } P12;
s32 func_001441B8(s32);
void func_002BA788(s32, void *, s32, s32, s32, s32);
s32 func_002BBC90(s32 a0, s32 a1, s32 a2, P12 *a3, s16 a4) {
    P12 copy = *a3;
    s32 x = func_001441B8(0xC0);
    if (x) func_002BA788(x, &copy, a4, a1, a2, a0);
    return 0;
}
typedef struct {
    char pad0[0xE];
    volatile s16 f0E, f10, f12, f14, f16, f18, f1A, f1C;
    char pad1[6];
    volatile f32 f24, f28, f2C;
} Obj3;
void func_002BBC48(Obj3 *a) {
    f32 x = 7.0f;
    f32 y = 0.25f;
    s16 one = 1;
    a->f2C = y;
    a->f18 = 0xFA;
    a->f1A = 0x32;
    a->f28 = x;
    a->f12 = one;
    a->f1C = 3;
    a->f0E = one;
    a->f24 = x;
    a->f10 = one;
}
void func_002BA630(Obj3 *a) {
    f32 x = 10.0f;
    f32 y = 0.5f;
    a->f18 = 200;
    a->f28 = y;
    a->f24 = x;
    a->f10 = 1;
    a->f1A = 6;
    a->f0E = 1;
}
