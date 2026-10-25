struct Vec3 { f32 x, y, z; Vec3() {} };
extern "C" {
extern char D_0044AB70[];
extern const f32 D_00481970;
}
struct Light22F;
extern "C" void ovl_ntgui2_func_0013D230(Light22F *, Vec3, s32, s32, s32);
struct Light22F {
    char pad0[8];
    s8 f8;
    s8 f9;
    s16 fA, fC, fE;
    s16 f10;
    s16 f12, f14, f16;
    s16 f18;
    char pad1A[2];
    f32 f1C, f20;
    f32 f24, f28, f2C;
    Vec3 pos;
    void Init(Vec3 p, s32 r, s32 g, s32 bl) {
        f9 = 0;
        pos = p;
        f1C = 240.0f;
        f20 = D_00481970;
        fA = r;
        fC = g;
        fE = bl;
        f10 = 0;
        f24 = 240.0f;
        f28 = D_00481970;
        f2C = 1.0f;
        f12 = r;
        f14 = g;
        f16 = bl;
        f18 = 0;
        f8 = 0;
        ovl_ntgui2_func_0013D230(this, p, r, g, bl);
    }
};
struct Obj22F590 {
    char pad0[0xC];
    s32 flags;
    char pad10[0x18];
    s8 f28;
    char pad29[0x1F];
    void *vtbl;
    Light22F light;
};
struct Obj22F590b {
    char pad0[0x55];
    s8 f55;
    char pad56[8];
    s16 f5E, f60, f62, f64;
    char pad66[0x22];
    s8 f88, f89, f8A;
};
extern "C" {
void func_001411F0(void *, Vec3, s32, s32);

void func_0022F590(Obj22F590 *o, Vec3 pos, s32 arg2, s32 arg3) {
    Obj22F590b *b = (Obj22F590b *)o;
    func_001411F0(o, pos, 0, arg2);
    o->vtbl = D_0044AB70;
    o->light.Init(pos, 200, 150, 50);
    b->f8A = arg3;
    b->f55 = 1;
    if (b->f8A) {
        o->flags |= 0x200;
    } else {
        o->flags |= 1;
    }
    o->f28 = -0x10;
    b->f5E = 0x33;
    b->f60 = 0x27;
    b->f62 = 0x12;
    b->f64 = 0;
    b->f88 = 0;
    b->f89 = 0;
    o->flags |= 0x10008;
}
}
