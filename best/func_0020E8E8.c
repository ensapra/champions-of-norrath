typedef struct { f32 x, y, z; } V3;
class P {
public:
    char pad0[0xC];
    u32 flags;
    char pad[0x48 - 0x10];
    virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12();
    virtual void v13(); virtual void v14(); virtual void v15();
    virtual s32 get();
};
typedef struct { char pad[0xC]; P *p; } T;
typedef struct Obj {
    char p0[0x10];
    V3 pos;
    char p1[0x54 - 0x1C];
    V3 v54;
    char p2[0x6C - 0x60];
    V3 v6C;
    V3 v78;
    s8 b84;
    char p3[3];
    T *t;
    s32 u8C;
    s32 u90;
    char p4[4];
    s32 u98;
    f32 f9C;
} Obj;
extern "C" {
f32 D_004814C8;
void func_001815C8(V3 *, s32, s32, s32, s32, s32, s16, s32, f32, f32);
void func_0020D520(V3 *, s8, V3 *, s32, s32, s32, P *, s32, f32, void *);

void func_0020E8E8(Obj *o) {
    P *p;
    s32 r;
    f32 zero = 0.0f;
    f32 d;
    V3 a1, c1, a2, c2, e1, e2, e3, e4, g1, f1, g2, f2;
    if (o->t && (o->t->p->flags & 0x20)) {
        r = o->t->p->get();
        a1 = o->pos;
        c1 = o->v6C;
        p = o->t->p;
        func_0020D520(&a1, o->b84, &c1, 0, o->u98, 10, p, r, o->f9C, (char *)p + 0x120);
        r = o->t->p->get();
        a2 = o->v54;
        c2 = o->v78;
        p = o->t->p;
        func_0020D520(&a2, o->b84, &c2, 0, o->u98, 10, p, r, o->f9C, (char *)p + 0x120);
    } else {
        e1 = o->pos;
        e2 = o->v6C;
        func_0020D520(&e1, o->b84, &e2, 0, o->u98, 10, 0, 0, o->f9C, 0);
        e3 = o->v54;
        e4 = o->v78;
        func_0020D520(&e3, o->b84, &e4, 0, o->u98, 10, 0, 0, o->f9C, 0);
    }
    g1 = o->pos;
    d = D_004814C8;
    func_001815C8(&g1, 255, 255, 255, o->u90, o->u8C, (s16)(s32)o, 1, zero, d);
    g2 = o->v54;
    func_001815C8(&g2, 255, 255, 255, o->u90, o->u8C, (s16)((s32)o + 0x4000), 1, zero, d);
}
}
