typedef struct { s64 a __attribute__((packed)); s32 b; } L12;
extern s32 func_00223BD8(void *, s32, void *, s16);
extern u8 D_0044F2A0[];
typedef struct { u8 p0[0x48]; void *vt; u8 p4c[0xF0]; u32 f13c; u8 p140[0x78]; s32 arr[4]; } X;
void func_002260B8(X *o, s32 a1, void *src, s16 a3) {
    L12 loc;
    s32 i;
    s32 two = 2;
    loc = *(L12 *)src;
    func_00223BD8(o, a1, &loc, a3);
    o->vt = D_0044F2A0;
    for (i = 3; i >= 0; i--) o->arr[i] = two;
    o->f13c |= 2;
}
