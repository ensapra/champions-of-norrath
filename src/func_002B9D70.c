extern "C" {
s32 func_001671F8(char *);
void func_00190E20(s32, s32, f32, f32, f32, f32, f32, f32, f32, f32);
extern char D_00479680[];
extern f32 D_00482EDC;
}
class Obj_2B9D70 {
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
    void func_002B9D70(s32 arg1, s32 arg2);
};

void Obj_2B9D70::func_002B9D70(s32 arg1, s32 arg2) {
    s32 r0 = Get(0);
    s32 r1 = Get(1, arg2);
    s32 r2 = Get(2, arg2);
    s32 r3 = Get(3, arg2);
    s32 id = func_001671F8(D_00479680);
    f32 base = (f32)r1;
    f32 scaled = base + base * D_00482EDC;
    s32 rnd;
    if (0.0f <= scaled) {
        rnd = scaled + 0.5f;
    } else {
        rnd = scaled - 0.5f;
    }
    func_00190E20(arg1, id, (f32)r0, base, (f32)rnd, (f32)r2, (f32)r3, 0.0f, 0.0f, 0.0f);
}
