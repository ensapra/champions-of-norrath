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
    f32 f1c, f20;
    s32 i24;
    u8 j28, j29;
    s32 i2c;
    f32 f30;
    s32 i34;
    u16 s38;
    f32 f3c, f40;
    s32 i44;
    void *vt;
    s32 i4c, i50, i54;
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
        f1c = src.f1c;
        i24 = src.i24;
        f20 = src.f20;
        j28 = src.j28;
        j29 = src.j29;
        vt = D_004495E0;
        i44 = src.i44;
        f30 = src.f30;
        i4c = src.i4c;
        f3c = src.f3c;
        i50 = src.i50;
        i2c = src.i2c;
        i34 = src.i34;
        i54 = src.i54;
        f40 = src.f40;
        s38 = src.s38;
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
