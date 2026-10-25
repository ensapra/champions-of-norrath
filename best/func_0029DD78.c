typedef struct __attribute__((packed, aligned(4))) { u32 w[3]; } Copy12;
typedef struct {
    u8 p0[0x10];
    Copy12 pos;
    f32 f1C;
    u8 p20[0x54 - 0x20];
    f32 vel[3];
    s32 s60;
    u8 p64[4];
    s32 s68;
    u8 p6c[4];
    u8 b70[0xA0 - 0x70];
    Copy12 pos2;
} Obj;
f32 D_00482940;
f32 D_00482944;
f32 D_00482948;
extern s32 func_00144CB8(Obj *, Copy12 *);
extern void func_0029E5E0(Obj *, s32);
extern void func_001DFE98(void *, f32 *, s32, f32, f32);
extern void func_0013EB60(void *);

void func_0029DD78(Obj *o) {
    struct { s32 pad[4]; Copy12 v; f32 x; f32 w[3]; } L;
    f32 *q = o->vel;
    s32 r;
    if (o->s60 == 0) {
        o->s68 = o->s68 + 1;
        L.v = *(Copy12 *)q;
        r = func_00144CB8(o, &L.v) & 1;
        if (r) {
            func_0029E5E0(o, r);
            return;
        }
        if (o->s68 >= 0x259) {
            func_0029E5E0(o, 0);
            return;
        }
        {
            f32 f = o->f1C;
            f32 *w = L.w;
            w[0] = q[0] * D_00482944;
            w[1] = q[1] * D_00482944;
            w[2] = q[2] * D_00482944;
            func_001DFE98(&o->pos, w, 1, f, f * f * D_00482940 + D_00482948);
            o->pos2 = o->pos;
            func_0013EB60(o->b70);
        }
    }
}
