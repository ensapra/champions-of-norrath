#define F(p,o) (*(s32*)((char*)(p)+(o)))
void func_0014B870(u8 *arg0, s32 arg1, s32 arg2, s32 *arg3, s32 *arg4) {
    u8 *p = *(u8 **)(arg0 + 0x4C);
    p = *(u8 **)(p + 0x9C);
    ((void (*)(u8 *, s32 *, s32 *))p)(arg0, arg3, arg4);
    *arg3 = arg1 - *arg3;
    *arg4 = arg2 - *arg4;
}

extern f32 D_010D4550[];
f32 func_0014C97C(s32 a) {
    s32 neg = (u32)a >> 31;
    s32 v;
    f32 f;

    if (a < 0) {
        v = (-a) % 0x10000;
    } else {
        v = a % 0x10000;
    }
    if (v > 0x7FFF) {
        v -= 0x8000;
        neg = !neg;
    }
    if (v >= 0x4000) {
        v = 0x8000 - v;
    }
    f = D_010D4550[v];
    if (neg) f = -f;
    return f;
}

typedef struct Obj4C {
    void (*fn74)(void *);
    char pad000[0x74];
    char pad078[0x94];
    void (*fn10C)(void *);
    char pad110[8];
    void (*fn118)(void *);
} Obj4C;

typedef struct ObjCA30 {
    char pad000[0x4C];
    Obj4C *q4C;
    char pad050[0x5C];
    s32 fAC;
    s32 fB0;
    s32 fB4;
    char pad0B8[0x480];
    s32 f538;
} ObjCA30;

void func_0014B8E0(ObjCA30 *, s32);
void func_0014CBB8(ObjCA30 *);

void func_0014CA30(ObjCA30 *p) {
    if (p->fAC != 0) {
        if (p->fB4 == 1) {
            if (p->fB0 == 0) {
                p->fB0 = p->fB4;
            } else {
                func_0014B8E0(p, 0);
            }
        }
        return;
    }
    if (p->q4C->fn118 != NULL && p->f538 != 0) {
        p->q4C->fn118(p);
    }
    if (p->q4C->fn10C != NULL) {
        p->q4C->fn10C(p);
    }
    func_0014CBB8(p);
    if (p->q4C->fn74 != NULL) {
        p->q4C->fn74(p);
    }
}

void func_0014CF0C(s32, s32, s32);
void func_0014A644(void *a) {
    u32 i;
    for (i = 0; i < F(a, 0x898) + 1; i++) {
        func_0014CF0C((*(s32 **)((char *)a + 0x87C))[i], F(a, 0x5AC) - F(a, 0x8A4) * 2, F(a, 0x8A0));
    }
}
