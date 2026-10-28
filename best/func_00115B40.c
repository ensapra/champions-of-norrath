extern "C" {
void *func_001441B8(s32);
void *func_00194498(void *, void *);
void *func_00163010(void *, void *);
}
extern u8 D_0044C9E8[];
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
    s32 *l;
    f32 m;
    void *n;
    u16 o;
    f32 p, q;
    s32 r;
    void *vt;
    s32 s;
    s32 t;
    u8 sub[0x108];
    s32 u;
    s64 v;
    s32 w;
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
        vt = D_0044C9E8;
        m = src.m;
        u16 oo = src.o;
        p = src.p;
        s32 *ll = src.l;
        void *nn = src.n;
        s32 rr = src.r;
        q = src.q;
        o = oo;
        t = src.t;
        l = ll;
        n = nn;
        r = rr;
        s = src.s;
        func_00163010(sub, src.sub);
        u = src.u;
        v = src.v;
        w = src.w;
    }
};

Obj *func_00115B40(Obj *src) {
    return new (func_001441B8(0x170)) Obj(*src);
}
