extern "C" {
void *func_001441B8(s32);
void *func_00194498(void *, void *);
}
extern u8 D_0044D498[];
extern u8 D_0044CA78[];

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
    s32 s, t, u, v, w;
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
        vt = D_0044CA78;
        n = src.n;
        m = src.m;
        s = src.s;
        p = src.p;
        s32 t1 = src.t;
        u16 h1 = src.o;
        t = t1;
        s32 y = src.u;
        s32 rr = src.r;
        s32 x = src.l;
        f32 f = src.q;
        o = h1;
        l = x;
        q = f;
        r = rr;
        s32 zz = src.v;
        s32 z = src.w;
        u = y;
        w = z;
        v = zz;
    }
};

extern "C" Obj *func_00115A18(Obj *src) {
    return new (func_001441B8(0x60)) Obj(*src);
}
