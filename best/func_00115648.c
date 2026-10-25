extern "C" {
void *func_001441B8(s32);
void *func_00194498(void *, void *);
}
extern u8 D_0044CC28[];
extern u8 D_0044D498[];

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Tri { s32 x, y, z; };

struct Obj {
    s32 a, b, c;
    s32 d;
    Tri e;
    f32 g, h;
    s32 i;
    u8 j, k;
    s32 l;
    f32 m;
    s32 n;
    u16 o;
    f32 p, q;
    s32 r;
    void *vt;
    s32 s;
    s32 t;
    s32 f54, f58, f5c, f60, f64;
    Obj(Obj &src) {
        vt = D_0044D498;
        func_00194498(&a, &src.a);
        func_00194498(&b, &src.b);
        func_00194498(&c, &src.c);
        d = src.d;
        e = src.e;
        g = src.g;
        h = src.h;
        i = src.i;
        j = src.j;
        k = src.k;
        vt = D_0044CC28;
        n = src.n;
        m = src.m;
        s = src.s;
        p = src.p;
        t = src.t;
        o = src.o;
        l = src.l;
        q = src.q;
        r = src.r;
        f54 = src.f54;
        f58 = src.f58;
        f60 = src.f60;
        f64 = src.f64;
        f5c = src.f5c;
    }
};

Obj *func_00115648(Obj *src) {
    return new (func_001441B8(0x68)) Obj(*src);
}
