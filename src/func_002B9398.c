typedef struct {
    u8 pad[0x0E];
    volatile s16 f0E, f10, f12, f14, f16, f18, f1A, f1C, f1E, f20;
    u8 pad2[2];
    volatile f32 f24, f28, f2C, f30, f34;
} ObjParam;

extern const f32 D_00482EC0;
extern const f32 D_00482EC4;

void func_002B9398(ObjParam *o) {
    f32 a = D_00482EC0;
    f32 c = 2.0f;
    f32 b = D_00482EC4;
    s16 one = 1;
    s16 five = 5;
    o->f30 = b;
    o->f18 = 0x26;
    o->f24 = c;
    o->f1A = 6;
    o->f1C = one;
    o->f2C = a;
    o->f14 = five;
    o->f1E = 4;
    o->f0E = one;
    o->f10 = one;
    o->f28 = a;
    o->f12 = five;
}
