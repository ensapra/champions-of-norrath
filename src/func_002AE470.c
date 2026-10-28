typedef struct {
    u8 pad[0x0E];
    volatile s16 f0E, f10, f12, f14, f16;
    s16 f18;
    volatile s16 f1A, f1C, f1E, f20;
    u8 pad2[2];
    volatile f32 f24, f28, f2C, f30, f34;
} ObjParam2;
extern f32 D_00482C48, D_00482C4C, D_00482C50;
void func_002AE470(ObjParam2 *o) {
    f32 a = D_00482C48;
    f32 b = D_00482C4C;
    f32 c = D_00482C50;
    o->f18 = 5;
    o->f34 = c;
    o->f24 = a;
    o->f1A = 10;
    o->f28 = b;
    o->f16 = 1;
    o->f20 = 0x18;
    o->f0E = 1;
    o->f10 = 1;
}
