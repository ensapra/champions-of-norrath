typedef struct {
    u8 pad[0x0E];
    s16 f0E, f10, f12, f14, f16, f18, f1A, f1C, f1E, f20;
    u8 pad2[2];
    f32 f24, f28, f2C, f30, f34;
} ObjParam;

f32 D_00482EC0;
f32 D_00482EC4;

void func_002B9398(ObjParam *o) {
    o->f30 = D_00482EC4;
    o->f18 = 0x26;
    o->f24 = 2.0f;
    o->f1A = 6;
    o->f1C = 1;
    o->f2C = D_00482EC0;
    o->f14 = 5;
    o->f1E = 4;
    o->f0E = 1;
    o->f10 = 1;
    o->f28 = D_00482EC0;
    o->f12 = 5;
}

typedef struct {
    s16 delta;
    s16 index;
    s32 (*fn)(void *, s32, s32);
} VEnt;

typedef struct {
    u8 pad[0x60];
    VEnt *vt;
} VObj;

void func_002B6C68(VObj *arg0, s32 arg1) {
    VEnt *e = &arg0->vt[11];
    e->fn((char *)arg0 + e->delta, 0, arg1);
}
