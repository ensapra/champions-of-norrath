typedef struct __attribute__((packed, aligned(4))) { f32 x, y, z; } V3;
s16 func_0015A198(f32, f32);
V3 *mat3x3_transposed_mul_vec3(void *, void *, void *);
void func_00277A28(u8 *p, s32 a1, V3 *out, s16 *ret) {
    V3 v;
    V3 *q;
    mat3x3_transposed_mul_vec3(&v, p + 0x45C, (void *)a1);
    q = (V3 *)(p + 0x10);
    v.x += q->x;
    v.y += q->y;
    v.z += q->z;
    *out = v;
    *ret = func_0015A198(-*(f32 *)(p + 0x46C), -*(f32 *)(p + 0x468));
}
