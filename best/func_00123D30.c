extern "C" {
void *func_001441B8(s32);
void *func_00194498(void *, void *);
void ovl_ntgui2_func_0013D230(void *);
}
extern u8 D_0044A810[];
extern u8 D_0044D498[];

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Tri { s32 x, y, z; };
struct Sub { s32 a, b; s32 pad[13]; };

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
    Sub sub;
    u8 u88, u89;
    Obj(Obj &src) {
        Sub *s;
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
        vt = D_0044A810;
        m = src.m;
        o = src.o;
        l = src.l;
        p = src.p;
        n = src.n;
        r = src.r;
        q = src.q;
        s = &sub;
        *s = src.sub;
        if (s->a != 0 || s->b != 0) {
            s->a = 0;
            s->b = 0;
            ovl_ntgui2_func_0013D230(s);
        }
        u88 = src.u88;
        u89 = src.u89;
    }
};

Obj *func_00123D30(Obj *src) {
    return new (func_001441B8(0x8C)) Obj(*src);
}
