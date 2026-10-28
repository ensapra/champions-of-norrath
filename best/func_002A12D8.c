struct V { s32 a, b, c; };
struct Obj2 {
    char pad[0x60];
    virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12();
    virtual void v13();
    virtual s32 Get(s32 a, s32 b, void *c);
};
struct A {
    char p0[0x10]; V pos; f32 f1C; char p1[0x48-0x20]; s32 *vt; s32 pad4C[2];
    f32 f54, f58; s32 i5C, i60; s16 s64; s16 pad66; s32 i68, i6C; Obj2 *o70; s32 i74;
};
extern "C" {
void func_00153FD0(A *, V, s32, s32);
f32 func_0015A070(s16);
f32 func_0015A100(s16);
s32 func_001828D8(s32, s32, s32, s32, s32, s32, s32, f32);
void func_00183DD0(s32, V *);
void func_00143830(A *);
}
extern s32 D_004516D0[];
extern const f32 D_004829DC;
extern "C" void func_002A12D8(A *a, V b, s16 c, s32 d, s32 e, Obj2 *f) {
    V t0, t1;
    func_00153FD0(a, b, d, 0);
    a->s64 = c;
    a->vt = D_004516D0;
    a->f1C = 8.0f;
    a->o70 = f;
    a->i68 = e;
    f32 x = (f32)f->Get(1, e, (char *)a + 0x4C);
    a->f54 = func_0015A070(a->s64) * x;
    a->f58 = func_0015A100(a->s64) * x;
    a->i5C = 0;
    a->i6C = 0;
    a->i60 = 0;
    a->i74 = func_001828D8(1, 0x7A, 0, 0x80, 0x80, 0x80, 0x20, D_004829DC);
    t1 = a->pos;
    func_00183DD0(a->i74, &t1);
    func_00143830(a);
}
