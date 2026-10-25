extern f32 D_00481710;
extern s8 D_00483829;
extern void func_00143830();
typedef struct { f32 x, y, z; } V3;
void func_00221940(u8 *a, u8 *b) {
    V3 d;
    f32 vx, vy, len;
    if (D_00483829 == 0 && b != 0 && (*(s32 *)(b + 0xC) & 0x40) && !(*(s32 *)(a + 0x124) & 8) && *(u8 *)(b + 0x471) == 0) {
        f32 bx = *(f32 *)(b + 0x4AC);
        f32 by = *(f32 *)(b + 0x4B0);
        f32 ax = *(f32 *)(a + 0x128);
        f32 ay = *(f32 *)(a + 0x12C);
        f32 inv = 1.0f / __builtin_sqrtf(bx * bx + by * by);
        d.x = bx * inv;
        d.y = by * inv;
        d.z = 0.0f;
        if (ax * d.x + ay * d.y < 52.0f) {
            *(f32 *)(a + 0x128) = ax + bx * D_00481710;
            *(f32 *)(a + 0x12C) = ay + *(f32 *)(b + 0x4B0) * D_00481710;
        }
        func_00143830();
    }
}
