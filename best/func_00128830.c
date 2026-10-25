extern "C" {
void *func_001441B8(s32);
void *func_00194498(void *, void *);
}
extern u8 D_004493A0[];
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
    Tri t;
    u8 b58, b59;
    u16 h5A, h5C;
    f32 f60;
    s64 d68;
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
        vt = D_004493A0;
        m = src.m;
        p = src.p;
        l = src.l;
        q = src.q;
        n = src.n;
        o = src.o;
        r = src.r;
        t = src.t;
        b58 = src.b58;
        b59 = src.b59;
        h5A = src.h5A;
        f60 = src.f60;
        h5C = src.h5C;
        d68 = src.d68;
    }
};

extern "C" Obj *func_00128830(Obj *src) {
    return new (func_001441B8(0x70)) Obj(*src);
}
