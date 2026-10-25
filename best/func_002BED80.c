struct V3 { f32 x, y, z; };
struct Obj2 {
    char pad[0x60];
    virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12();
    virtual s32 Get(s32 a, s32 b, s32 c);
};
extern "C" {
f32 func_0015A070(s16);
f32 func_0015A100(s16);
f32 func_00176378(s32, f32 *, f32);
void *func_001441B8(s32);
void func_002BE410(void *, s32, s32, f32 *, void *, s32);
}
extern s32 D_004844A0;
extern "C" s32 func_002BED80(Obj2 *arg0, s32 arg1, s32 arg2, V3 *arg3, s16 arg4) {
    V3 sp0 = *arg3;
    V3 v;
    s32 a = arg1;
    s32 b = arg2;
    f32 r = (f32)arg0->Get(1, a, b);
    v.x = func_0015A070(arg4) * r * 12.0f;
    v.y = func_0015A100(arg4) * r * 12.0f;
    f32 *p = &v.x;
    p[0] += sp0.x;
    v.z = 0.0f;
    v.y += sp0.y;
    v.z = v.z + func_00176378(D_004844A0, p, r) + 12.0f;
    void *q = func_001441B8(0x6C);
    if (q) func_002BE410(q, b, a, p, arg0, 0);
    return 0;
}
