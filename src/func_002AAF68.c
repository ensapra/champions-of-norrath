/* identical to func_002A9AD0 (matched), with its names changed by decompdecomp */
extern "C" {
extern char D_00478BE8[], D_00478C00[];
s32 func_001671F8(char *);
void func_00190E20(s32, s32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_00482BA4, D_00482BA8, D_00482BAC;
}
class CRank {
public:
    char pad[0x60];
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
    virtual void v10();
    virtual s32 GetValue(s32 i, ...);
};
extern "C" void func_002AAF68(CRank *o, s32 arg1, s32 arg2) {
    void (*fn2)(s32, s32, f32, f32, f32, f32, f32, f32, f32, f32);
    s32 r0, r1, r2, r3, ret;
    f32 x, y, w, h, t;
    r0 = o->GetValue(0);
    r1 = o->GetValue(1, arg2);
    r2 = o->GetValue(2, arg2);
    r3 = o->GetValue(3, arg2);
    if (!r2) {
        ret = func_001671F8(D_00478BE8); x = (f32)r0;
        t = x + x * D_00482BA4; if (t >= 0.0f) y = (f32)(s32)(t + 0.5f); else y = (f32)(s32)(t - 0.5f);
        func_00190E20(arg1, ret, x, y, (f32)r1, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); return;
    }
    ret = func_001671F8(D_00478C00); x = (f32)r0;
    t = x + x * D_00482BA8; if (t >= 0.0f) y = (f32)(s32)(t + 0.5f); else y = (f32)(s32)(t - 0.5f);
    w = (f32)r3;
    t = w + w * D_00482BAC; if (t >= 0.0f) h = (f32)(s32)(t + 0.5f); else h = (f32)(s32)(t - 0.5f);
    fn2 = func_00190E20; fn2(arg1, ret, x, y, (f32)r1, (f32)r2, w, h, 0.0f, 0.0f);
}
