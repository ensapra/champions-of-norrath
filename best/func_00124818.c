extern "C" {
void *func_001441B8(s32);
void *func_00194498(void *, void *);
}
extern u8 D_0044A5D0[];
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
    u16 t;
    u16 u;
    u16 v;
    s32 w, x;
    Obj(Obj &src) {
        vt = D_0044D498;
        func_00194498(this, &src);
        func_00194498(&b, &src.b);
        func_00194498(&c, &src.c);
        d = src.d;
        e = src.e;
        g = src.g;
        h = src.h;
        i = src.i;
        j = src.j;
        k = src.k;
        vt = D_0044A5D0;
        m = src.m;
        o = src.o;
        p = src.p;
        r = src.r;
        t = src.t;
        l = src.l;
        n = src.n;
        q = src.q;
        s = src.s;
        u = src.u;
        w = src.w;
        v = src.v;
        x = src.x;
    }
};

Obj *func_00124818(Obj *src) {
    return new (func_001441B8(0x60)) Obj(*src);
}
