typedef struct { f32 x, y, z; } V3;
typedef struct { char pad[0x98]; } Ent;
typedef struct { char pad[0x38]; s32 f38; s8 f3C; } Sub;
typedef struct {
    Sub *sub; u32 f4; char p8[0x18]; s32 f20; char p24[4]; s32 f28; s32 f2C; s32 f30; s32 f34;
} Obj;
extern s32 D_004844A4;
extern Ent D_006E9428[];
void func_00186B58(V3 *, Ent *, Sub *, s32, s32, s32, s32, s32);

void func_0017C930(Obj *o) {
    V3 v;
    Sub *s;
    v.x = o->f28 * 0.25f;
    v.y = o->f2C * 0.25f;
    v.z = o->f30 * 0.25f;
    s = o->sub;
    s->f38 = o->f20;
    s->f3C = o->f4 >> 31;
    func_00186B58(&v, &D_006E9428[o->f4 & 0x7FFFFFFF], s, D_004844A4, 0,
                  (o->f34 >> 16) & 1, (o->f34 >> 17) & 1, (o->f34 >> 18) & 1);
    o->f20 = s->f38;
    if (s->f3C != 0) o->f4 |= 0x80000000;
    else o->f4 &= 0x7FFFFFFF;
}
