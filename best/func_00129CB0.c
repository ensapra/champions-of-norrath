extern "C" {
void *func_001441B8(s32);
void *func_00194498(void *, void *);
}
extern u8 D_00448A70[];
extern u8 D_0044D498[];

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Tri { s32 x, y, z; };
struct Blk { s32 v[38]; };

struct Obj {
    s32 a, b, c;
    s32 d;
    Tri e;
    f32 g, h;
    s32 i;
    u8 j, k;
    void *m2c;
    f32 m30;
    void *m34;
    u16 m38;
    f32 m3c, m40;
    s32 m44;
    void *vt;
    f32 m4c;
    Blk blk;
    Tri t;
    s32 f4, f8, fc;
    f32 f100;
    s32 f104, f108, f10c, f110, f114;
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
        vt = D_00448A70;
        k = src.k;
        m2c = src.m2c;
        m30 = src.m30;
        m34 = src.m34;
        m38 = src.m38;
        m3c = src.m3c;
        m40 = src.m40;
        m44 = src.m44;
        m4c = src.m4c;
        blk = src.blk;
        t = src.t;
        f4 = src.f4;
        f10c = src.f10c;
        f8 = src.f8;
        f110 = src.f110;
        fc = src.fc;
        f100 = src.f100;
        f104 = src.f104;
        f108 = src.f108;
        f114 = src.f114;
    }
};

extern "C" Obj *func_00129CB0(Obj *src) {
    return new (func_001441B8(0x118)) Obj(*src);
}
