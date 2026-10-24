void func_002D2B50(void *);
void func_002D3130(void *p) {
    func_002D2B50(p);
    *(s32 *)((char *)p + 0x20) = 0;
    *(s32 *)p = (((*(s32 *)p & ~0xC) | 4) & ~1) | 0x100;
}

typedef struct {
    char pad0[0xE];
    volatile s16 f0E, f10, f12, f14, f16, f18, f1A, f1C, f1E, f20;
    char pad1[2];
    volatile f32 f24, f28, f2C, f30, f34;
} ObjB;

extern f32 D_00482CF0;
void func_002B1200(ObjB *a) {
    f32 x = 5.0f;
    f32 d = D_00482CF0;
    f32 y = 3.0f;
    s16 one = 1;
    a->f18 = 5;
    a->f2C = y;
    a->f24 = x;
    a->f1A = 10;
    a->f28 = d;
    a->f12 = one;
    a->f1C = 3;
    a->f0E = one;
    a->f10 = one;
}

extern char D_0044E670[];
extern char D_00452660[];
extern u32 D_00483E5C;
extern s32 D_004844A4;
s32 func_00180260(void *, f32);

typedef struct {
    s8 f0;
    char pad[3];
    s32 f4, f8, fC;
    u32 f10;
    void *f14;
    s32 f18;
    s32 f1C;
    s32 f20;
} ObjC;

void func_002B10B8(ObjC *a, s32 arg1, s32 arg2, f32 t) {
    t = t * 60.0f;
    a->f0 = 0;
    a->fC = arg2;
    a->f14 = D_0044E670;
    a->f4 = 0;
    a->f8 = 0;
    D_00483E5C = D_00483E5C * 0x19660D + 0x3C6EF35F;
    a->f18 = (f32)D_004844A4 + t;
    a->f10 = D_00483E5C >> 16;
    a->f14 = D_00452660;
    a->f1C = arg1;
    a->f20 = func_00180260(D_00452660, t);
}

extern f32 D_00482CBC, D_00482CC0, D_00482CC4, D_00482CC8;
void func_002AFCD0(ObjB *p) {
    f32 a = D_00482CBC;
    f32 b = D_00482CC0;
    f32 c = D_00482CC4;
    f32 d = D_00482CC8;
    p->f18 = 0xE1;
    p->f34 = d;
    p->f24 = a;
    p->f28 = b;
    p->f1C = 0x14;
    p->f2C = c;
    p->f16 = 1;
    p->f20 = 0x24;
    p->f0E = 1;
    p->f10 = 1;
    p->f1A = 1;
    p->f12 = 1;
}
