extern f32 D_00482880, D_00482884, D_00482888, D_0048288C;
extern f32 D_0048281C, D_00482820, D_00482824;
extern s8 D_0040E21E[];
extern u8 D_00477F28[];
s32 func_001671F8(void *);
void func_001C7600(s32, s32, s32, s32);

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    u16 unkC;
    volatile s16 f0E, f10, f12, f14, f16, f18, f1A, f1C, f1E, f20, f22;
    volatile f32 f24, f28, f2C, f30, f34;
} WepObj4;

void func_0029A7C8(WepObj4 *a) {
    f32 g1 = D_00482880, g2 = D_00482884, g3 = D_00482888, g4 = D_0048288C;
    a->f18 = 0x1E;
    a->f34 = g4;
    a->f24 = g1;
    a->f28 = g2;
    a->f1C = 0x28;
    a->f2C = g3;
    a->f16 = 1;
    a->f20 = 0x18;
    a->f0E = 1;
    a->f10 = 1;
    a->f1A = 1;
    a->f12 = 1;
}

void func_00299500(WepObj4 *a) {
    f32 g1 = D_0048281C, g2 = D_00482820;
    f32 two = 2.0f;
    f32 g3 = D_00482824;
    a->f24 = g1;
    a->f34 = g3;
    a->f1A = 0xF;
    a->f28 = g2;
    a->f1C = 0x28;
    a->f2C = two;
    a->f16 = 1;
    a->f20 = 0x68;
    a->f0E = 1;
    a->f18 = 1;
    a->f10 = 1;
    a->f12 = 1;
}

s32 func_0029A740(s32 arg0, void *arg1) {
    s32 r = 1;
    if ((*(s32 *)((char *)arg1 + 0xC) & 0x40) &&
        D_0040E21E[*(s32 *)((char *)arg1 + 0x3C0) * 0x5DB0] == 4) {
        r = 0;
        func_001C7600(func_001671F8(D_00477F28), 0xB4, *(s32 *)((char *)arg1 + 0x3C0), 0);
    }
    return r;
}
