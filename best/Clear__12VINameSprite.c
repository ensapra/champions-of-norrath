/* machine draft (m2c) for ee-gcc-2.96 -Os -G8 -mno-check-zero-division, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

s32 Clear__12VINameSprite(void *arg0) {
    void *temp_3;

    temp_3 = arg0 + 0x64;
    M2C_FIELD(arg0, s8 *, 0x44) = 0;
    M2C_FIELD(arg0, f32 *, 0x30) = 22.0f;
    M2C_FIELD(arg0, s32 *, 0x34) = 6;
    M2C_FIELD(arg0, s32 *, 0x40) = -1;
    M2C_FIELD(temp_3, f32 *, 0xC) = 1.0f;
    M2C_FIELD(arg0, f32 *, 0x64) = 1.0f;
    M2C_FIELD(temp_3, f32 *, 4) = 1.0f;
    M2C_FIELD(temp_3, f32 *, 8) = 1.0f;
    return 0;
}
