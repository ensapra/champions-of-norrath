typedef struct __attribute__((packed, aligned(4))) { u64 a; s32 b; } P12;
typedef struct { s16 delta; s16 index; void (*fn)(void *, ...); } VEnt;
extern char D_00475FA0[];
s32 func_00143A80(void *, void *, s32);
s16 func_0015A198(f32, f32);
void mat3x3_transposed_mul_vec3(void *, void *, void *);
void func_00277B00(u8 *a, u8 *p) {
    VEnt *e;
    *(s32 *)(a + 0x864) = 0;
    *(s32 *)(p + 0xC) &= ~1;
    if (func_00143A80(p, D_00475FA0, 0)) *(s32 *)(p + 0xC) |= 0x100000;
    e = (VEnt *)(*(u8 **)(p + 0x48) + 0xB8);
    e->fn(p + e->delta, 0);
    *(s32 *)(p + 0x46C) = 0;
}
void func_00277A28(u8 *p, s32 a1, P12 *out, s16 *ret) {
    f32 v[3];
    f32 *q = (f32 *)(p + 0x10);
    mat3x3_transposed_mul_vec3(v, p + 0x45C, (void *)a1);
    v[0] += q[0];
    v[1] += q[1];
    v[2] += q[2];
    *out = *(P12 *)v;
    *ret = func_0015A198(-*(f32 *)(p + 0x46C), -*(f32 *)(p + 0x468));
}
