extern "C" {
struct Obj {
    char pad[0x60];
    virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10();
    virtual s32 Get(s32 i, ...);
};
s32 func_001671F8(char *);
void func_00190E20(s32, s32, f32, f32, f32, f32, f32, f32, f32, f32);
extern char D_00478EF8[];
extern char D_00478F10[];
void func_002AE850(Obj *o, s32 a, s32 n) {
    if (n < 5) {
        f32 x = (f32)o->Get(0);
        func_00190E20(a, func_001671F8(D_00478EF8), x, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
        return;
    }
    f32 z = (f32)o->Get(2, n);
    f32 y = (f32)o->Get(1, n);
    f32 x = (f32)o->Get(0, n);
    func_00190E20(a, func_001671F8(D_00478F10), x, y, z, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
}
}
