extern "C" {
void *func_001441B8(s32);
void *func_00194498(void *, void *);
}
extern u8 D_00449700[];
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
    s32 *n;
    u16 o;
    f32 p, q;
    s32 r;
    void *vt;
    u16 s, t;
    void *u;
    s32 v;
    f32 w, x;
    s32 y, z;
    u8 b68, b69;
    u16 h6A, h6C;
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
        vt = D_00449700;
        m = src.m;
        o = src.o;
        p = src.p;
        s = src.s;
        {
            s32 *L = src.l;
            s32 *N = src.n;
            f32 Q = src.q;
            s32 R = src.r;
            u16 T = src.t;
            void *U = src.u;
            l = L;
            n = N;
            q = Q;
            r = R;
            t = T;
            v = src.v;
            w = src.w;
            y = src.y;
            u = U;
        }
        x = src.x;
        z = src.z;
        b68 = src.b68;
        b69 = src.b69;
        h6A = src.h6A;
        h6C = src.h6C;
    }
};

Obj *func_00127C48(Obj *src) {
    return new (func_001441B8(0x70)) Obj(*src);
}
