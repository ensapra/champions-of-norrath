typedef struct __attribute__((packed, aligned(4))) { u64 a; s32 b; } P12;
typedef struct __attribute__((packed, aligned(4))) { u64 a; u64 b; } P16;
void mat3x3_transposed_mul_vec3(void *, void *);
void func_002780B0(u8 *o, f32 *v) {
    f32 *w = (f32 *)(o + 0x284);
    f32 a, b, c;
    mat3x3_transposed_mul_vec3(v, o + 0x480);
    a = w[0];
    v[0] = v[0] + a;
    b = w[1];
    v[1] = v[1] + b;
    c = w[2];
    v[2] = v[2] + c;
}
void func_00277E30(u8 *b) {
    f32 *f, *g;
    *(P12 *)(b + 0x260) = *(P12 *)(b + 0x4A4);
    *(P12 *)(b + 0x278) = *(P12 *)(b + 0x4B0);
    *(P12 *)(b + 0x26C) = *(P12 *)(b + 0x10);
    *(P16 *)(b + 0x44C) = *(P16 *)(b + 0x43C);
    f = (f32 *)(b + 0x7E0);
    g = (f32 *)(b + 0x7EC);
    f[2] = 0.0f; f[0] = 0.0f; f[1] = 0.0f;
    g[2] = 0.0f; g[0] = 0.0f; g[1] = 0.0f;
}
