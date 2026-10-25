typedef struct __attribute__((packed, aligned(4))) { u32 w[3]; } Copy12;
class Owner {
public:
    char pad[0x60];
    virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual void v9(); virtual void v10();
    virtual s32 v11(s32 a, s32 b);
};
struct Sub {
    u8 p0[8];
    s8 b8;
    s8 b9;
    s16 sA;
    s16 sC;
    s16 sE;
    s16 s10;
    s16 s12;
    s16 s14;
    s16 s16_;
    s16 s18;
    s16 s1A;
    f32 f1C;
    f32 f20;
    f32 f24;
    f32 f28;
    s32 i2C;
};
struct Src { u8 p[0x10]; Copy12 pos; };
struct Obj2 {
    s8 id;
    s32 i4;
    Owner *owner;
    Src *src;
    s32 rnd;
    void *tbl;
    f32 f18;
    Sub sub;
    Copy12 pos;
    s32 i58;
};
extern char D_0044E670[];
extern char D_00452240[];
extern f32 D_00482C20;
extern u32 D_00483E5C;
extern "C" {
void ovl_ntgui2_func_0013D230(void *);
s32 func_00180260(...);

void func_002AD3F8(Obj2 *o, s8 id, Src *src, Owner *own) {
    Copy12 t;
    u32 r;
    Sub *s = &o->sub;
    o->id = id;
    o->tbl = D_0044E670;
    o->owner = own;
    o->src = src;
    o->i4 = 0;
    r = D_00483E5C * 0x19660D + 0x3C6EF35F;
    D_00483E5C = r;
    o->tbl = D_00452240;
    o->rnd = r >> 16;
    t = src->pos;
    s->b9 = 0;
    o->pos = t;
    s->f1C = 120.0f;
    s->f24 = 120.0f;
    s->f20 = D_00482C20;
    s->f28 = D_00482C20;
    s->sA = 0xFF;
    s->s12 = 0xFF;
    s->i2C = 0;
    s->sC = 0;
    s->sE = 0;
    s->s10 = 0;
    s->s14 = 0;
    s->s16_ = 0;
    s->s18 = 0;
    s->b8 = 0;
    ovl_ntgui2_func_0013D230(s);
    o->f18 = (f32)o->owner->v11(2, o->id);
    o->i58 = func_00180260();
}
}
