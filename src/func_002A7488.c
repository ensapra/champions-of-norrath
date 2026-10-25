extern "C" {
struct Obj {
    char pad[0x60];
    virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10();
    virtual s32 Get(s32 i, ...);
};
s32 func_001671F8(char *);
void func_00190E20(s32, s32, f32, f32, f32, f32, f32, f32, f32, f32);
extern char D_004788A0[];
extern char D_004788B8[];
void func_002A7488(Obj *o, s32 a, s32 n) {
    s32 r0 = o->Get(0);
    s32 r1 = o->Get(1, n);
    s32 r2 = o->Get(2, n);
    s32 r3 = o->Get(3, n);
    if (r3 != 0) {
        func_00190E20(a, func_001671F8(D_004788A0), (f32)r0, (f32)r1, (f32)r2, (f32)r3, 0.0f, 0.0f, 0.0f, 0.0f);
        return;
    }
    func_00190E20(a, func_001671F8(D_004788B8), (f32)r0, (f32)r1, (f32)r2, (f32)r3, (f32)r3, (f32)r3, (f32)r3, (f32)r3);
}
}
