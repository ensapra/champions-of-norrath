class Obj {
public:
    char pad[0x60];
    virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual void v9(s32 a, s32 b, s32 c, s32 *x, s32 *y, f32 f);
    virtual void v10();
    virtual s32 v11(s32 a);
};
extern "C" {
extern char D_00477848[];
extern char D_00477858[];
extern f32 D_004825D0;
s32 func_001671F8(char *);
void func_00190E20(s32, s32, f32, f32, f32, f32, f32, f32, f32, f32);

void func_0028C548(Obj *o, s32 a, s32 b) {
    s32 sp[2];
    s32 n = o->v11(1) + 1;
    o->v9(0, b, 0, &sp[0], &sp[1], D_004825D0);
    if (n >= 2)
        func_00190E20(a, func_001671F8(D_00477848), (f32)sp[0], (f32)sp[1], (f32)n, 0, 0, 0, 0, 0);
    else
        func_00190E20(a, func_001671F8(D_00477858), (f32)sp[0], (f32)sp[1], 0, 0, 0, 0, 0, 0);
}
}
