extern "C" {
struct V3 { s32 a, b, c; };
struct Obj {
    char pad[0x60];
    virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8();
    virtual void F9(s32, s32, s32, s32 *, s32 *, f32);
    virtual void v10();
    virtual s32 Get(s32 i, s32 n);
    virtual void v12(); virtual void v13(); virtual void v14();
    virtual s32 F15(s32, s32);
};
extern f32 D_00482D4C;
f32 func_0015A070(s16);
f32 func_0015A100(s16);
void *func_001441B8(s32);
void func_0021D2A0(void *, V3 *, f32 *, s32, s32, s32, s32, s32, s32, s32);
s32 func_002B2E70(Obj *o, s32 a1, s32 a2, V3 pos, s16 ang) {
    s32 sp20, sp24;
    f32 v[3];
    s32 r = o->F15(a1, 0x14);
    o->F9(0, r, 0, &sp20, &sp24, D_00482D4C);
    s32 r1 = o->Get(1, r);
    s32 r2 = o->Get(2, r);
    s32 z = r2 * 12;
    f32 s = (f32)o->Get(3, r);
    v[0] = func_0015A070(ang) * s;
    v[1] = func_0015A100(ang) * s;
    v[2] = 0;
    void *p = func_001441B8(0xB8);
    if (p) {
        func_0021D2A0(p, &pos, v, a2, 0, 0, sp20, sp24, r1, z);
    }
    return 0;
}
}
