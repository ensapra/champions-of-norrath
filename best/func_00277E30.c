typedef struct __attribute__((packed, aligned(4))) { f32 w[3]; } P12;
typedef struct __attribute__((packed, aligned(4))) { u64 a; s32 b; } Q12;
typedef struct __attribute__((packed, aligned(4))) { u64 a; u64 b; } P16;
static inline void vset(f32 *v, f32 x, f32 y, f32 z) { v[0] = x; v[1] = y; v[2] = z; }
void func_00277E30(u8 *b) {
    f32 z = 0.0f;
    *(P12 *)(b + 0x260) = *(P12 *)(b + 0x4A4);
    *(P12 *)(b + 0x278) = *(P12 *)(b + 0x4B0);
    *(Q12 *)(b + 0x26C) = *(Q12 *)(b + 0x10);
    *(P16 *)(b + 0x44C) = *(P16 *)(b + 0x43C);
    vset((f32 *)(b + 0x7E0), z, z, z);
    vset((f32 *)(b + 0x7EC), z, z, z);
}
