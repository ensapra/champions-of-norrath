typedef struct { f32 x, y, z; } V3;
f32 D_00481D14, D_00481D18, D_00481D1C;
u32 D_00483E60;
s32 D_00484F74;
extern void func_001815C8(V3*, s32, s32, s32, s32, s32, s32, s32, f32, f32);
extern void *func_00168A38();
extern void func_001688C8();
extern void func_0016AE78();

static f32 rnd(void) {
    D_00483E60 = D_00483E60 * 0x19660D + 0x3C6EF35F;
    return (f32)(D_00483E60 >> 16) * 0.0000152587890625f;
}

void func_0023DB88(char *self) {
    V3 a, b, c, d;
    s32 i;
    for (i = 0x3F; i >= 0; i--) {
        do {
            a.x = 2.0f * rnd() - 1.0f;
            a.y = 2.0f * rnd() - 1.0f;
            a.z = 2.0f * rnd() - 1.0f;
        } while (a.x * a.x + a.y * a.y + a.z * a.z > 1.0f);
        a.x *= 1.5f; a.y *= 1.5f; a.z *= 1.5f;
        func_001815C8(&b, 0, 0, 0, 0xC8, D_00484F74, 0, 0, 30.0f, 500.0f);
    }
}
