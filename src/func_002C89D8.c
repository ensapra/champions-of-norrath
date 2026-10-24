s32 D_00483F30;
extern s8 D_008D88B8[12];
extern u8 D_008D8938[1008];
void func_003021B0(void *, s32, s32);
void func_002CB388(void) {
    s8 *base;
    s8 *p;
    s32 i;
    if (D_00483F30 == 0) {
        base = (s8 *)D_008D8938;
        func_003021B0(base, 0, 0x3F0);
        p = base + 0x374;
        D_008D88B8[0] = 1;
        D_008D88B8[3] = 0x20;
        D_008D88B8[1] = 0;
        D_008D88B8[4] = 0;
        for (i = 7; i >= 0; i--) {
            *p = -2;
            p -= 0x7E;
        }
    }
}

typedef struct {
    u8 pad[0x0E];
    volatile s16 f0E, f10, f12, f14, f16, f18, f1A, f1C, f1E, f20;
    u8 pad2[2];
    volatile f32 f24, f28, f2C, f30, f34;
} ObjParam;

f32 D_00483130;
f32 D_00483134;
f32 D_00483138;
f32 D_0048313C;
f32 D_00483140;

void func_002C89D8(ObjParam *o) {
    f32 a = D_00483130;
    f32 b = D_00483134;
    f32 c = D_00483138;
    f32 d = D_0048313C;
    f32 e = D_00483140;
    o->f18 = 0x1E;
    o->f34 = e;
    o->f24 = a;
    o->f1A = 0x14;
    o->f28 = b;
    o->f1C = 4;
    o->f2C = c;
    o->f30 = d;
    o->f16 = 1;
    o->f20 = 0x1B;
    o->f0E = 1;
    o->f10 = 1;
    o->f12 = 1;
    o->f14 = 1;
    o->f1E = 1;
}

f32 D_00483114;

void func_002C7C00(ObjParam *o) {
    f32 a = D_00483114;
    o->f18 = 10;
    o->f24 = a;
    o->f10 = 5;
    o->f1A = 2;
    o->f28 = 0.5f;
    o->f1C = 15;
    o->f2C = 1.0f;
    o->f16 = 1;
    o->f20 = 0x24;
    o->f34 = 0.0f;
    o->f0E = 1;
    o->f12 = 1;
}

f32 D_004830F8;
f32 D_004830FC;
f32 D_00483100;

void func_002C6E00(ObjParam *o) {
    f32 a = D_004830F8;
    f32 b = D_004830FC;
    f32 c = D_00483100;
    o->f1A = 5;
    o->f34 = c;
    o->f28 = a;
    o->f1C = 0x32;
    o->f2C = b;
    o->f16 = 1;
    o->f20 = 0x1E;
    o->f0E = 1;
    o->f18 = 1;
    o->f24 = a;
    o->f10 = 1;
    o->f12 = 1;
}
