struct Vec3 {
    f32 x, y, z;
    Vec3() {}
};

struct Owner {
    u8 pad0[0x10];
    Vec3 pos;
    f32 f1C;
    f32 f20;
};

struct Sub {
    u8 pad0[8];
    u8 b8;
    u8 b9;
    s16 cA, cC, cE, c10, c12, c14, c16, c18;
    u8 pad1A[2];
    f32 f1C, f20, f24, f28, f2C;
};

struct Obj {
    s8 type;
    s32 f4;
    s32 f8;
    Owner *owner;
    s32 f10;
    void *vt;
    s16 f18[2];
    s16 f1C;
    s32 f20;
    s32 f24;
    u8 pad28[8];
    Sub sub;
    Vec3 pos;
};

extern "C" {
extern u8 D_0044E670[];
extern u8 D_00453720[];
extern char D_00479CA0[];
extern char D_004865B0[];
extern f32 D_00483144;
extern u32 D_00483E5C;
extern s32 D_004844A4;
void ovl_ntgui2_func_0013D230(Sub *);
s32 func_00165DC0(char *, char *);
void func_0024D4F8(s32, Vec3, f32);

void func_002C8BC0(Obj *o, s32 type, Owner *owner, s32 arg3) {
    Sub *s;
    s32 i;
    s16 *p;
    s32 v;
    f32 zero;
    f32 inv;
    Vec3 tmp;

    zero = 0.0f;
    inv = 1.0f / zero;
    o->type = type;
    o->vt = D_0044E670;
    o->f4 = 0;
    o->owner = owner;
    o->f8 = arg3;
    D_00483E5C = D_00483E5C * 0x19660D + 0x3C6EF35F;
    o->f10 = D_00483E5C >> 16;
    o->vt = D_00453720;
    s = &o->sub;
    tmp = owner->pos;
    s->b9 = 0;
    o->pos = tmp;
    s->f28 = inv;
    s->f2C = D_00483144;
    s->c14 = 75;
    s->c16 = 200;
    s->c18 = 255;
    s->f20 = inv;
    s->cA = 75;
    s->cC = 75;
    s->cE = 200;
    s->f1C = zero;
    s->f24 = zero;
    s->c10 = 255;
    s->c12 = 75;
    s->b8 = 0;
    ovl_ntgui2_func_0013D230(s);
    o->type = type;
    o->f8 = arg3;
    o->owner = owner;
    o->f24 = D_004844A4 + 0xF0;
    o->f20 = 0;
    o->f1C = (s16)(owner->f20 * 3.0f);
    v = 0x7FFF;
    p = &o->f18[1];
    for (i = 1; i >= 0; i--) {
        *p-- = v;
        v -= 0x7FFF;
    }
    func_0024D4F8(func_00165DC0(D_004865B0, D_00479CA0), owner->pos, 1.0f);
}
}
