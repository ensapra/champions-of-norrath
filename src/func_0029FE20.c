extern "C" {
s32 func_001671F8(char *);
void func_00190E20(s32, s32, f32, f32, f32, f32, f32, f32, f32, f32);
extern char D_004782F8[];
extern char D_00478310[];
}
class Obj_29FE20 {
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
    void func_0029FE20(s32 arg1, s32 arg2);
};

void Obj_29FE20::func_0029FE20(s32 arg1, s32 arg2) {
    s32 r0 = Get(0);
    s32 r1 = Get(2, arg2);
    s32 r2 = Get(3, arg2);
    if (r1 == 1) {
        func_00190E20(arg1, func_001671F8(D_004782F8), (f32)r0, (f32)r1, (f32)r2, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
        return;
    }
    func_00190E20(arg1, func_001671F8(D_00478310), (f32)r0, (f32)r1, (f32)r2, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
}
