extern "C" {
s32 func_001671F8(char *);
void func_00190E20(s32, s32, f32, f32, f32, f32, f32, f32, f32, f32);
extern char D_004793E8[];
extern f32 D_00482E08;
}
class Obj_2B5350 {
public:
    char pad[0x60];
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual s32 Get(s32 i, ...);
    void func_002B5350(s32 arg1, s32 arg2);
};

static inline s32 Round(f32 x) {
    s32 n;
    if (0.0f <= x) {
        n = (s32)(x + 0.5f);
    } else {
        n = (s32)(x - 0.5f);
    }
    return n;
}

void Obj_2B5350::func_002B5350(s32 arg1, s32 arg2) {
    s32 r0 = Get(0);
    s32 r1 = Get(1, arg2);
    s32 r2 = Get(2, arg2);
    s32 id = func_001671F8(D_004793E8);
    f32 b0 = (f32)r0;
    f32 b1 = (f32)r1;
    f32 s0 = b0 + b0 * D_00482E08;
    f32 s1 = b1 + b1 * D_00482E08;
    func_00190E20(arg1, id, b0, (f32)Round(s0), b1, (f32)Round(s1), (f32)r2, 0.0f, 0.0f, 0.0f);
}
