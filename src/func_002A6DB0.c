extern f32 D_00482AE8;
extern f32 D_00482B70;
extern f32 D_00482B74;

typedef struct VT { s16 d; s16 i; s32 (*fn)(void *, s32, s32); } VT;
typedef struct O { s8 a; u8 pad[7]; struct P *t; } O;
typedef struct P { u8 pad[0x60]; VT *vt; } P;

void func_002A6DB0(O *o) {
    P *t = o->t;
    VT *v = (VT *)((char *)t->vt + 0x58);
    v->fn((char *)t + v->d, 0, o->a);
}

void func_002A6E18(void *arg0) {
    f32 c = D_00482AE8;
    char *a = (char *)arg0;
    *(s16 *)(a + 0x18) = 0x5A;
    *(f32 *)(a + 0x34) = 1.0f;
    *(f32 *)(a + 0x24) = 10.0f;
    *(s16 *)(a + 0x1A) = 0x1E;
    *(f32 *)(a + 0x2C) = c;
    *(s16 *)(a + 0x20) = 1;
    *(s16 *)(a + 0xE) = 1;
    *(s16 *)(a + 0x10) = 1;
    *(s32 *)(a + 0x28) = 0;
    *(s16 *)(a + 0x12) = 1;
    *(s16 *)(a + 0x1C) = 1;
    *(s16 *)(a + 0x16) = 1;
}

void func_002A9D50(void *arg0) {
    f32 c0 = D_00482B70;
    f32 c1 = D_00482B74;
    char *a = (char *)arg0;
    *(f32 *)(a + 0x4C) = c1;
    *(s16 *)(a + 0x1A) = 0xF;
    *(f32 *)(a + 0x28) = 2.0f;
    *(s16 *)(a + 0x1C) = 8;
    *(f32 *)(a + 0x2C) = 1.0f;
    *(s16 *)(a + 0x14) = 6;
    *(s16 *)(a + 0x1E) = 0x15;
    *(f32 *)(a + 0x30) = c0;
    *(s16 *)(a + 0x38) = 1;
    *(s16 *)(a + 0x42) = 2;
    *(s16 *)(a + 0xE) = 1;
    *(s16 *)(a + 0x18) = 6;
    *(f32 *)(a + 0x24) = 2.0f;
    *(s16 *)(a + 0x10) = 1;
    *(s16 *)(a + 0x12) = 6;
}
