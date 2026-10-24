extern "C" {
extern s32 func_0015E908(s32);
extern s32 func_001671F8(char *);
extern void func_00190E20(s32, s32, f32, f32, f32, f32, f32, f32, f32, f32);
extern char D_00477DF0[];
}

class C298BA0 {
public:
    u8 pad[0x60];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual s32 get(s32, s32);
    void func_00298BA0(s32 arg1, s32 arg2);
};

void C298BA0::func_00298BA0(s32 arg1, s32 arg2) {
    s32 r0 = get(0, arg2);
    s32 r1 = get(1, arg2);
    s32 r2 = get(2, arg2);
    s32 h = func_001671F8(D_00477DF0);
    func_00190E20(arg1, h, (f32)r0, (f32)func_0015E908(r0), (f32)r1, (f32)r2, 0.0f, 0.0f, 0.0f, 0.0f);
}
