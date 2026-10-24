f32 D_00482B00;
f32 D_00482B04;
extern f32 D_00482B30;
extern f32 D_00482B34;

typedef struct VT { s16 d; s16 i; s32 (*fn)(void *, s32, s32); } VT;
typedef struct O { s8 a; u8 pad[7]; struct P *t; } O;
typedef struct P { u8 pad[0x60]; VT *vt; } P;

void func_002A72F0(void *arg0) {
    f32 a = D_00482B00;
    f32 b = D_00482B04;
    *(s16 *)((char *)arg0 + 0xE) = 1;
    *(s16 *)((char *)arg0 + 0x18) = 0xF;
    *(f32 *)((char *)arg0 + 0x34) = b;
    *(f32 *)((char *)arg0 + 0x24) = a;
    *(s16 *)((char *)arg0 + 0x16) = 1;
    *(s16 *)((char *)arg0 + 0x20) = 0xAD;
}

f32 func_002A8568(O *o) {
    P *t = o->t;
    VT *v = (VT *)((char *)t->vt + 0x58);
    return (f32)v->fn((char *)t + v->d, 0, o->a) * D_00482B30;
}

f32 func_002A85B0(O *o) {
    P *t = o->t;
    VT *v = (VT *)((char *)t->vt + 0x58);
    return (f32)v->fn((char *)t + v->d, 1, o->a) * D_00482B34;
}
