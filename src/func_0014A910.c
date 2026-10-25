typedef struct { s32 x, y, z; } V3;
typedef struct {
    char p0[0x10];
    V3 pos;
    char p1[0x38 - 0x1C];
    u16 ang;
    char p2[0x4C - 0x3A];
    s32 h4C, h50;
    char f54[4];
    char p3[0x160 - 0x58];
    s64 f160;
    s32 f168;
} Obj;
extern s32 D_004844A4;
extern u8 D_00483C03;
void func_00157668(void *, V3 *, s16);
f32 func_0015A100(s32);
s32 func_00169848(s32, s32, void *, void *, s32);
void func_0016AE78(s32, s32, s32, V3 *, void *, void *, s64, s32, s32);
void func_0016CBE8(u8 *, s32);
void func_0016CD20(void);

void func_0014A910(Obj *g) {
    char buf[0x40];
    V3 a, b;
    s32 r;
    a = g->pos;
    func_00157668(buf, &a, (s16)(g->ang + 0x4000));
    if (D_004844A4 - 3 < g->f168) {
        u8 *c = &D_00483C03;
        f32 f = func_0015A100(D_004844A4 << 9);
        *c = (s32)(__builtin_fabsf(f) * 12.0f + 12.0f);
        func_0016CBE8(c - 3, 1);
    }
    r = func_00169848(g->h4C, 1, buf, g->f54, 0);
    b = g->pos;
    func_0016AE78(g->h4C, g->h50, 1, &b, buf, g->f54, g->f160, r, 0);
    func_0016CD20();
}
