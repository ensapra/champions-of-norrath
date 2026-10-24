f32 D_00482B1C;
f32 D_00482B20;
f32 D_00482B24;
f32 D_00482B28;
f32 D_00482B2C;
typedef struct {
    u8 pad[0x0E];
    volatile s16 f0E, f10, f12, f14, f16, f18, f1A, f1C, f1E, f20;
    u8 pad2[2];
    volatile f32 f24, f28, f2C, f30, f34;
} Obj8420;

void func_002A8420(Obj8420 *o) {
    f32 a = D_00482B1C;
    f32 b = D_00482B20;
    f32 c = D_00482B24;
    f32 d = D_00482B28;
    f32 e = D_00482B2C;
    o->f18 = 0x7D;
    o->f34 = e;
    o->f24 = a;
    o->f1A = 0x6E;
    o->f28 = b;
    o->f1C = 0x14;
    o->f2C = c;
    o->f1E = 4;
    o->f30 = d;
    o->f16 = 1;
    o->f20 = 0x55;
    o->f0E = 1;
    o->f10 = 1;
    o->f12 = 1;
    o->f14 = 1;
}
