extern "C" {
void *func_001441B8(s32);
void *func_00194498(void *, void *);
}
extern u8 D_0044D498[];
extern u8 D_004495E0[];

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
    s32 w, x, y;
    s32 o58, o5c;
    u16 s60, s62, s64, s66;
    f32 f68;
    s32 o6c;
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
        vt = D_004495E0;
        m = src.m;
        r = src.r;
        p = src.p;
        w = src.w;
        x = src.x;
        l = src.l;
        n = src.n;
        o = src.o;
        q = src.q;
        y = src.y;
        func_00194498(&o58, &src.o58);
        func_00194498(&o5c, &src.o5c);
        s60 = src.s60;
        f68 = src.f68;
        s62 = src.s62;
        s64 = src.s64;
        s66 = src.s66;
        func_00194498(&o6c, &src.o6c);
    }
};

Obj *func_00127EE0(Obj *src) {
    return new (func_001441B8(0x70)) Obj(*src);
}
