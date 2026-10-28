typedef struct __attribute__((packed, aligned(4))) { u32 w[3]; } Copy12;
typedef struct { s32 a; s32 b; } Pair;
typedef struct { s32 pad0; s32 pad4; s32 pad8; s32 c; s32 pad10; s32 e; } Model;
typedef struct {
    u8 pad0[0x10];
    Copy12 pos;
    u8 pad1c[0x24 - 0x1C];
    Model *model;
    u8 pad28[0x38 - 0x28];
    s16 s38;
    u8 pad3a[0x120 - 0x3A];
    u8 b120[0x23C - 0x120];
    s16 s23C;
    u8 pad23e[0x3D0 - 0x23E];
    s32 n;
    u8 b3d4[0x418 - 0x3D4];
    u8 b418[0x460 - 0x418];
    s32 n2;
    s32 n3;
} Obj;
extern "C" {
extern void func_001DC2C0(void *, s32, void *, Copy12 *, s32, s32, void *, s32, f32, f32, s32, s32);
extern s32 func_00109808(Obj *, s32, s32, s32);
extern void func_0016C060(s32, s32, s32, s32, s32, s32, s32, s32);
extern Pair D_0042D8D0[];

void func_002446F8(Obj *o) {
    Copy12 v;
    s32 r;
    if (o->n != 0) {
        Model *m = o->model;
        func_001DC2C0(o->b418, D_0042D8D0[o->n].b, o->b3d4, (v = o->pos, &v), o->s38, m->c,
                      o->b120, o->s23C == 6, 0.5f, 1.0f, 0, 0);
    }
    r = func_00109808(o, o->model->c, o->model->e, 0);
    if (o->n != 0) {
        func_0016C060(D_0042D8D0[o->n].b, D_0042D8D0[o->n + 1].b, 0, o->model->c, r, -1, -1, 0);
    }
    if (o->n2 != 0) {
        func_0016C060(D_0042D8D0[o->n2].b, D_0042D8D0[o->n2 + 1].b, 0, o->model->c, r, -1, -1, 0);
    }
    if (o->n3 != 0) {
        func_0016C060(D_0042D8D0[81].b, D_0042D8D0[82].b, 0, o->model->c, r, -1, -1, 0);
    }
}
}
