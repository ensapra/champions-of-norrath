extern u8 D_004CECB8[];
extern u8 D_004CED20[];
extern u8 D_004CED30[];
void *D_00480488;
void func_001A1568(void *, s32, void *);
typedef struct { s32 *data; s32 count; s32 cap; s32 pad; s32 grow; } Vec;

s32 func_001936A8(s32 a, s32 n) {
    void *p = D_00480488;
    p = *(void **)((u8 *)p + 0x108);
    ((s32 (*)(s32, s32))p)(a, n);
    p = D_00480488;
    p = *(void **)((u8 *)p + 0x104);
    return ((s32 (*)(s32, s32))p)(0x10, n);
}

void func_001936E8(Vec *v, s32 n, s32 g) {
    v->grow = g;
    v->count = n;
    v->cap = n;
    v->pad = 0;
    v->data = 0;
    if (n > 0) {
        void *p = D_00480488;
        s32 r;
        p = *(void **)((u8 *)p + 0x104);
        r = ((s32 (*)(s32, s32))p)(0x10, n * 8);
        v->data = (s32 *)r;
        if (r == 0) func_001A1568(D_004CECB8, 0x56, D_004CED20);
    }
}

void func_00193768(Vec *v) {
    s32 n;
    s32 r;
    if (v->grow <= 0) func_001A1568(D_004CECB8, 0x56, D_004CED30);
    n = v->count + v->grow;
    v->count = n;
    if (v->data != 0) r = func_001936A8((s32)v->data, n * 8);
    else {
        void *p = D_00480488;
        p = *(void **)((u8 *)p + 0x104);
        r = ((s32 (*)(s32, s32))p)(0x10, n * 8);
    }
    v->data = (s32 *)r;
    if (v->data == 0) func_001A1568(D_004CECB8, 0x56, D_004CED20);
}
