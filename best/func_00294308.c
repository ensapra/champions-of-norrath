typedef struct { f32 x, y, z; } V3;
class Obj {
public:
    char pad[0x60];
    virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10();
    virtual s32 Get(s32 a, s32 b);
};
struct N { char p0[0xC]; u32 flags; V3 v10; f32 f1c, f20; char p1[0x24]; void *vt48; V3 v4c; s32 f58; s32 f5c; s32 f60; Obj *f64; };
struct O { s8 type; char p0[3]; s32 f4; s32 f8; void *fc; s32 f10; void *vt; N *child; V3 v1c; s32 f28; f32 f2c; };
extern "C" {
void func_001411F0(void *, V3 *, s32, s32);
void func_00143630(void *);
void func_00143830(void *);
void *func_001441B8(s32);
void *func_00165DC0(char *, char *);
void func_00194390(void *, void *, void *);
void func_0024D4F8(void *, V3 *, void *, f32);
extern char D_0044E670[], D_00450A40[], D_00450B60[], D_00477BA0[], D_00486180[];
extern u32 D_00483E5C;
extern s32 D_004844A4;
void func_00294308(O *o, V3 *pos, s32 type, void *a3, void *a4) {
    V3 sp0 = *pos;
    V3 sp10, sp20, sp30, sp40;
    N *e;
    N *p;
    N **cp = &o->child;
    V3 *vp = &o->v1c;
    o->type = type;
    o->fc = a3;
    o->vt = D_0044E670;
    o->f4 = 0;
    o->f8 = (s32)a4;
    D_00483E5C = D_00483E5C * 0x19660D + 0x3C6EF35F;
    o->f10 = D_00483E5C >> 16;
    o->fc = a3;
    o->child = 0;
    o->vt = D_00450B60;
    o->type = type;
    o->f8 = (s32)a4;
    *vp = sp0;
    o->f2c = (f32)(s32)((f32)D_004844A4 + 180.0f);
    e = (N *)func_001441B8(0x68);
    if (e) {
        s8 t;
        void *c;
        Obj *ob;
        s32 *q;
        sp10 = *vp;
        sp20 = *vp;
        t = o->type;
        c = o->fc;
        ob = (Obj *)o->f8;
        func_001411F0(e, &sp10, 0, 0);
        e->flags = 0x4421F | e->flags;
        q = &e->f5c;
        e->vt48 = D_00450A40;
        *q = 0;
        if (c) func_00194390(q, c, c);
        e->f64 = ob;
        e->f60 = t;
        e->v10 = sp10;
        e->f1c = 33.0f;
        e->f20 = 36.0f;
        func_00143630(e);
        e->v4c = sp20;
        e->f58 = D_004844A4 + e->f64->Get(1, e->f60) * 60;
        func_00143830(e);
        p = e;
    } else {
        p = 0;
    }
    if (p) {
        void *an;
        func_00194390(cp, p, p);
        an = func_00165DC0(D_00486180, D_00477BA0);
        sp40 = *(V3 *)((char *)o->fc + 0x10);
        func_0024D4F8(an, &sp40, o->fc, 1.0f);
    }
}
}
