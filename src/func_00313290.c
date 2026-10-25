extern u32 D_00483E5C;
#define RND() (D_00483E5C = D_00483E5C * 0x19660D + 0x3C6EF35F, (f32)(s32)(D_00483E5C >> 16) * 0.0000152587890625f)
#define ROUND(x) ((x) >= 0.0f ? (x) + 0.5f : (x) - 0.5f)

class Obj {
public:
    char pad[0x60];
    virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10();
    virtual s32 Get(s32 a, s32 b);
};

extern "C" void func_00313290(Obj *o, s32 a1, s32 a2, s32 rnd, s32 *lo, s32 *hi, f32 f) {
    s32 n = o->Get(a1, a2);
    if (rnd) {
        *lo = (s32)ROUND((f32)n - (f32)n * RND() * f);
    } else {
        f32 x = (f32)n - (f32)n * f;
        *lo = (s32)ROUND(x);
    }
    if (*lo <= 0) *lo = 1;
    if (rnd) {
        *hi = (s32)ROUND((f32)n + (f32)n * RND() * f);
    } else {
        f32 x = (f32)n + (f32)n * f;
        *hi = (s32)ROUND(x);
    }
    if (*hi <= 0) *hi = 1;
}
