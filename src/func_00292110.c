extern f32 D_00482720;
typedef struct VT { s16 d; s16 i; s32 (*fn)(void *, s32, s32); } VT;
typedef struct O { s8 a; u8 pad[7]; struct P *t; } O;
typedef struct P { u8 pad[0x60]; VT *vt; } P;
f32 func_00292110(O *o) {
    P *t = o->t;
    VT *v = (VT *)((char *)t->vt + 0x58);
    return (f32)v->fn((char *)t + v->d, 3, o->a) * D_00482720;
}

extern f32 D_00482734;
extern f32 D_00482738;
extern f32 D_0048273C;
typedef struct {
    char pad0[0xE];
    volatile s16 f0E, f10, f12, f14, f16, f18, f1A, f1C, f1E, f20, f22;
    volatile f32 f24, f28, f2C, f30, f34;
    volatile s16 f38, f3A, f3C, f3E, f40, f42, f44, f46;
    volatile f32 f48, f4C, f50;
} Q;
void func_00293768(Q *p) {
    f32 x = 4.0f;
    f32 a = D_00482734;
    f32 b = D_00482738;
    f32 c = D_0048273C;
    p->f18 = 0x17;
    p->f50 = c;
    p->f24 = x;
    p->f10 = 5;
    p->f28 = a;
    p->f42 = 2;
    p->f4C = b;
    p->f44 = 1;
    p->f0E = 1;
    p->f1A = 1;
    p->f38 = 1;
    p->f3A = 1;
}

typedef struct __attribute__((packed, aligned(4))) { u64 a; s32 b; } P12;
s32 func_001441B8(s32);
void func_00292178(s32, s32, s32, void *, void *, s32);
s32 func_002937C0(s32 a, s32 b, void *c, volatile P12 *d, s16 e) {
    volatile P12 copy = *d;
    s32 r;
    *(volatile s16 *)((u8 *)c + 0x98) = -100;
    *(volatile s16 *)((u8 *)c + 0x94) = -100;
    *(volatile s16 *)((u8 *)c + 0x96) = -100;
    *(volatile s16 *)((u8 *)c + 0x9A) = 0;
    r = func_001441B8(0x7C);
    if (r) func_00292178(r, e, b, (void *)&copy, c, a);
    return 0;
}
