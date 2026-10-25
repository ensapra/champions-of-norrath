struct Vec3 { f32 x, y, z; };
struct Tmp { Vec3 v; s32 pad[5]; };
struct Ent { char pad[0xC]; u32 flags; };
struct HRef { s32 p; HRef() { p = 0; } };
struct Obj {
    char pad0[0x10]; Vec3 pos; char pad1[0x38 - 0x1C]; s16 ang; char pad2[0x48 - 0x3A];
    void *vt; char pad3[8]; HRef h54; HRef h58; s16 f5C; s32 f60; s32 f64; s32 f68; f32 f6C; f32 f70; s32 f74; s32 f78; s32 f7C;
};
extern "C" {
extern char D_004526C0[], D_004790D0[], D_00486460[];
f32 D_00482CF8;
s32 D_004844A4;
void func_00143830(void *);
void func_001535D0(Vec3 *, s16, HRef *, Ent *, f32, f32);
void func_00153FD0(Obj *, Vec3 *, Ent *, s32);
f32 func_0015A070(s16);
f32 func_0015A100(s16);
s32 func_00165DC0(char *, char *);
s32 func_001828D8(s32, s32, s32, s32, s32, s32, s32, f32);
void func_00183DD0(s32, Vec3 *);
void func_00194390(void *, void *, void *);
void func_0024D308(s32, void *, f32);
void func_002B1460(Obj *o, s16 a, s32 b, Vec3 *p, Ent *e, s32 z) {
    Tmp t1, t2;
    Vec3 t3;
    register HRef *r = &o->h58;
    HRef *q = &o->h54;
    t1.v = *p;
    func_00153FD0(o, &t1.v, e, 0);
    q->p = 0;
    o->ang = a;
    o->vt = D_004526C0;
    r->p = 0;
    if (e) func_00194390(q, e, e);
    o->f5C = b;
    o->f60 = D_004844A4 + 0xB4;
    o->f64 = D_004844A4 + 0xF;
    o->f68 = z;
    o->f6C = func_0015A070(o->ang) * 450.0f;
    register f32 t = func_0015A100(o->ang);
    o->f74 = 0;
    o->f78 = 0;
    o->f70 = t * 450.0f;
    o->f7C = func_001828D8(1, 0xFA, 0, 0xFA, 0xC8, 0x64, 0x80, D_00482CF8);
    t2.v = o->pos;
    func_00183DD0(o->f7C, &t2.v);
    t3 = o->pos;
    func_001535D0(&t3, o->ang, r, (e && (e->flags & 0x20)) ? e : 0, 360.0f, 75.0f);
    func_00143830(o);
    func_0024D308(func_00165DC0(D_00486460, D_004790D0), o, 1.0f);
}
}
