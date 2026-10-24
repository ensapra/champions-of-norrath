typedef struct __attribute__((packed, aligned(4))) { u64 a; s32 b; } P12;
typedef struct __attribute__((packed, aligned(4))) { u64 a; u64 b; } P16;
void func_00277E30(u8 *b) {
    f32 z = 0.0f;
    f32 *f, *g;
    *(P12 *)(b + 0x260) = *(P12 *)(b + 0x4A4);
    f = (f32 *)(b + 0x7E0);
    g = (f32 *)(b + 0x7EC);
    *(P12 *)(b + 0x278) = *(P12 *)(b + 0x4B0);
    *(P12 *)(b + 0x26C) = *(P12 *)(b + 0x10);
    *(P16 *)(b + 0x44C) = *(P16 *)(b + 0x43C);
    f[2] = z; f[0] = z; f[1] = z;
    g[2] = z; g[0] = z; g[1] = z;
}
