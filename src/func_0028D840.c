f32 D_00482600;
f32 D_00482604;
f32 D_00482608;
f32 D_0048260C;
f32 D_00482610;
typedef struct {
    u8 pad[0x0E];
    volatile s16 f0E, f10, f12, f14, f16, f18, f1A, f1C, f1E, f20;
    u8 pad2[2];
    volatile f32 f24, f28, f2C, f30, f34;
    volatile s16 f38, f3A, f3C, f3E, f40, f42, f44, f46;
    volatile f32 f48, f4C, f50;
} Obj;

void func_0028D840(Obj *o) {
    f32 a = D_00482600;
    f32 b = D_00482604;
    f32 c = D_00482608;
    f32 d = D_0048260C;
    f32 e = D_00482610;
    o->f18 = 0x39;
    o->f50 = e;
    o->f24 = a;
    o->f10 = 5;
    o->f28 = b;
    o->f20 = 0x20;
    o->f34 = c;
    o->f42 = 2;
    o->f4C = d;
    o->f3A = 10;
    o->f44 = 1;
    o->f0E = 1;
    o->f1A = 1;
    o->f16 = 1;
    o->f38 = 1;
}
