typedef struct { f32 x, y, z; } V230890;
typedef struct {
    u8 pad0[8]; u8 b8; u8 b9; s16 sA; s16 sC; s16 sE; s16 s10; s16 s12; s16 s14; s16 s16; s16 s18; u8 pad1A[2];
    f32 f1C; f32 f20; f32 f24; f32 f28; f32 f2C;
} Sub230890;
extern u8 D_0044A8A0[];
extern f32 D_0048198C;
void func_001411F0(void *, void *, s32, s32);
void ovl_ntgui2_func_0013D230(void *, void *, s32, s32, s32);
void func_00143830(void *);

void func_00230890(u8 *arg0, V230890 *arg1) {
    V230890 a = *arg1;
    V230890 b;
    Sub230890 *s;
    func_001411F0(arg0, &a, 0, 0);
    b = a;
    s = (Sub230890 *)(arg0 + 0x4C);
    *(void **)(arg0 + 0x48) = D_0044A8A0;
    s->b9 = 0;
    *(V230890 *)(arg0 + 0x7C) = b;
    s->s14 = 0x96;
    s->s16 = 0x32;
    s->sC = 0x96;
    s->sE = 0x32;
    s->f24 = 240.0f;
    s->f28 = D_0048198C;
    s->f2C = 1.0f;
    s->f1C = 240.0f;
    s->f20 = D_0048198C;
    s->s12 = 200;
    s->sA = 200;
    s->s10 = 0;
    s->s18 = 0;
    s->b8 = 0;
    ovl_ntgui2_func_0013D230(s, &b, 200, 0x96, 0x32);
    arg0[0x55] = 1;
    *(s32 *)(arg0 + 0xC) |= 0x10001;
    *(V230890 *)(arg0 + 0x88) = *(V230890 *)(arg0 + 0x10);
    *(s16 *)(arg0 + 0x5E) = 0x33;
    *(s8 *)(arg0 + 0x28) = -0x10;
    *(s16 *)(arg0 + 0x60) = 0x27;
    *(s16 *)(arg0 + 0x62) = 0x12;
    arg0[0x94] = 0;
    arg0[0x95] = 0;
    *(s16 *)(arg0 + 0x64) = 0;
    func_00143830(arg0);
}
