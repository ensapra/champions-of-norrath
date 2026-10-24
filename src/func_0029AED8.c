extern f32 D_004828A8, D_004828AC, D_004828B0, D_004828B4;
typedef struct __attribute__((packed, aligned(4))) {u64 a; s32 b;} P;
extern s32 func_001441B8(s32);
extern void func_0029B0D0(s32,s32,s32,s32);
extern void func_00299758(s32,s32,s32,s32);

s32 func_0029AF78(s32 a, s32 b, s32 c, P *d) {
    volatile P copy = *d;
    s32 r = func_001441B8(0x1C);
    if (r) func_0029B0D0(r, b, c, a);
    return r;
}

s32 func_0029A820(s32 a, s32 b, s32 c, P *d) {
    volatile P copy = *d;
    s32 r = func_001441B8(0x7C);
    if (r) func_00299758(r, b, c, a);
    return r;
}

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    u16 unkC;
    volatile s16 f0E, f10, f12, f14, f16, f18, f1A, f1C, f1E, f20, f22;
    volatile f32 f24, f28, f2C, f30, f34;
    volatile s16 f38, f3A, f3C, f3E, f40, f42, f44, f46;
    u8 pad0[0x4C - 0x48];
    volatile f32 f4C;
    volatile s32 f50;
} WepObj3;

void func_0029AED8(WepObj3 *a) {
    f32 g1 = D_004828A8, g2 = D_004828AC, g3 = D_004828B0, g4 = D_004828B4;
    a->f18 = 0x1A4;
    a->f24 = g1;
    a->f28 = g2;
    a->f20 = 0xD2;
    a->f34 = g3;
    a->f42 = 5;
    a->f4C = g4;
    a->f3A = 1;
    a->f44 = 4;
    a->f50 = 0;
    a->f0E = 1;
    a->f10 = 1;
    a->f1A = 5;
    a->f16 = 1;
    a->f38 = 1;
}
