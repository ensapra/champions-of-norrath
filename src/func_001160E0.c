extern "C" {
void *func_001441B8(s32);
void *func_00194498(void *, void *);
}
extern u8 D_0044C7A0[];
extern u8 D_0044D498[];

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Tri { s32 x, y, z; };
struct Elem { s32 v[9]; };

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
    Elem arr[50];
    u16 x754, x756;
    s32 x758;
    s32 x75C;
    f32 x760;
    void *x764;
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
        vt = D_0044C7A0;
        m = src.m;
        l = src.l;
        n = src.n;
        p = src.p;
        o = src.o;
        q = src.q;
        r = src.r;
        {
            Elem *dp = arr;
            int t = 0x31;
            Elem *sp = src.arr;
            do { *dp = *sp; dp++; sp++; } while (--t != -1);
        }
        x754 = src.x754;
        x758 = src.x758;
        x756 = src.x756;
        x75C = src.x75C;
        x760 = src.x760;
        x764 = src.x764;
    }
};

Obj *func_001160E0(Obj *src) {
    return new (func_001441B8(0x768)) Obj(*src);
}
