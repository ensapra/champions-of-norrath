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
    u8 pad23e[0x3C0 - 0x23E];
    s32 n;
    u8 b3c4[0x408 - 0x3C4];
    u8 b408[4];
} Obj;
extern void func_001DC2C0(void *, s32, void *, Copy12 *, s32, s32, void *, s32, f32, f32, s32, s32);
extern s32 func_00109808(Obj *, s32, s32, s32);
extern void func_0016C060(s32, s32, s32, s32, s32, s32, s32, s32);

void func_001FFE10(Obj *o) {
    Copy12 v;
    s32 r;
    if (o->n != 0) {
        Model *m = o->model;
        func_001DC2C0(o->b408, ((Pair *)m)[o->n].b, o->b3c4, (v = o->pos, &v), o->s38, m->c,
                      o->b120, o->s23C == 6, 0.5f, 1.0f, 0, 0);
    }
    r = func_00109808(o, o->model->c, o->model->e, 0);
    if (o->n != 0) {
        func_0016C060(((Pair *)o->model)[o->n].b, ((Pair *)o->model)[o->n + 2].b, 0, o->model->c, r, -1, -1, 0);
    }
}
