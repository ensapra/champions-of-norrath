extern "C" {
struct Obj {
    char pad[0x60];
    virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10();
    virtual s32 Get(s32 i, ...);
};
s32 func_001671F8(char *);
void func_00190E20(s32, s32, f32, f32, f32, f32, f32, f32, f32, f32);
extern char D_00477B00[];
extern char D_00477B18[];
f32 D_0048272C = 0.2f;
f32 D_00482730 = 0.2f;
static inline f32 rnd(f32 x, f32 k) {
    f32 y = x + x * k;
    return (f32)(s32)(y >= 0.0f ? y + 0.5f : y - 0.5f);
}
void func_00293318(Obj *o, s32 a, s32 n) {
    s32 r0 = o->Get(0);
    s32 r1 = o->Get(1, n);
    if (r0 != 0 && r1 != 0) {
        func_00190E20(a, func_001671F8(D_00477B00), (f32)r0, rnd((f32)r0, D_0048272C), (f32)r1, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
        return;
    }
    func_00190E20(a, func_001671F8(D_00477B18), (f32)r0, rnd((f32)r0, D_00482730), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
}
}
