typedef struct V3 { f32 x, y, z; } V3;
s32 func_001411F0(void *, void *, s32, s32);
void func_00180D08(void *);
void func_00222D20(void *, s32);
void func_002233C0(void *, s32);
void ovl_ntgui2_func_0013D230(void *);
extern char D_0044EB08[];
typedef struct Sub { u8 pad[8]; volatile u8 b8; u8 b9; volatile s16 s0a, s0c, s0e, s10, s12, s14, s16, s18; volatile f32 f1c, f20, f24, f28; volatile s32 i2c; } Sub;
void func_00222A40(u8 *o, V3 *in, s32 a2) {
    V3 tmp, tmp2;
    Sub *p = (Sub *)(o + 0x100);
    tmp = *in;
    func_001411F0(o, &tmp, 0, a2);
    *(void **)(o + 0x48) = D_0044EB08;
    *(s32 *)(o + 0x4c) = -1;
    *(s32 *)(o + 0x50) = 0;
    *(s32 *)(o + 0x54) = 0;
    *(s32 *)(o + 0x58) = 0;
    *(s32 *)(o + 0x60) = 0;
    func_00180D08(o + 0xac);
    *(s32 *)(o + 0xfc) = 0;
    p->b8 = 0;
    p->b9 = 0;
    *(s32 *)(o + 0x140) = 1;
    *(s32 *)(o + 0xc) |= 0x400f;
    func_00222D20(o, a2);
    func_002233C0(o, a2);
    if (*(s32 *)(o + 0x54)) {
        f32 f = *(s32 *)(o + 0x144);
        f32 one;
        s16 a, b, c, d;
        tmp2 = tmp;
        one = 1.0f / (f * f);
        a = *(s16 *)(o + 0x154); b = *(s16 *)(o + 0x158); c = *(s16 *)(o + 0x15c); d = *(s16 *)(o + 0x160);
        *(V3 *)(o + 0x130) = tmp2;
        p->s12 = a; p->s14 = b; p->s16 = c; p->s18 = d;
        p->f1c = f; p->f24 = f; p->i2c = 0; p->f28 = one; p->f20 = one;
        p->s0a = a; p->s0c = b; p->s0e = c; p->s10 = d;
        p->b8 = 0;
        ovl_ntgui2_func_0013D230(p);
    }
}
