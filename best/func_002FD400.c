struct Out { s32 a, b, c, d; };
struct Y;
struct X {
    s32 pad;
    virtual void v0(); virtual void v1();
    virtual void Query(s32, s32, Y *, s32, s32, s32, Out *);
};
struct Y {
    s32 pad;
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual s32 Get(s32, s32, s32, s32);
};
static inline bool Fail(s32 v) { return v >= 6; }
extern "C" s32 func_002FD400(X *o, s32 arg1, Y *arg2, s32 arg3, s32 arg4, s32 arg5) {
    Out out;
    out.a = 0; out.b = 0; out.c = 0; out.d = 0;
    o->Query(arg1, 6, arg2, arg3, arg4, arg5, &out);
    if (out.a == 0) return 0;
    if (Fail(out.d)) return out.a;
    if (Fail(out.c & out.b)) return out.a;
    if (((out.c & 5) ^ 4) == 0) return 0;
    if (out.d == 0) {
        s32 r;
        if (arg1 >= 0) {
            r = ((arg5 - out.a) ^ arg1) == 0 ? 6 : 1;
        } else if (arg1 == -2) {
            r = 1;
        } else {
            r = arg2->Get(arg1, arg4, out.a, arg5);
        }
        out.d = r;
    }
    bool f = Fail(out.d);
    return f ? out.a : 0;
}
