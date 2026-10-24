extern u8 D_004CECB8[];
extern u8 D_004CED20[];
extern u8 D_004CED30[];
void *D_00480488;
void func_001A1568(void *, s32, void *);
s32 func_001936A8(s32 a, s32 n);
typedef struct { s32 *data; s32 count; s32 cap; s32 pad; s32 grow; } Vec;

void func_00193768(Vec *v) {
    s32 n, sz;
    s32 d;
    if (*(volatile s32 *)&v->grow <= 0) func_001A1568(D_004CECB8, 0x56, D_004CED30);
    d = (s32)v->data;
    n = v->count + v->grow;
    v->count = n;
    sz = n * 8;
    if (d != 0) v->data = (s32 *)func_001936A8(d, sz);
    else {
        void *p = D_00480488;
        p = *(void **)((u8 *)p + 0x104);
        v->data = (s32 *)((s32 (*)(s32, s32))p)(0x10, sz);
    }
    if (v->data == 0) func_001A1568(D_004CECB8, 0x56, D_004CED20);
}
