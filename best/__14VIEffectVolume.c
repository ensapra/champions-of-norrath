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

void __14VIEffectVolume(void *arg0) {
    void *temp_2;
    void *temp_3;

    temp_2 = arg0 + 8;
    temp_3 = arg0 + 0x14;
    M2C_FIELD(arg0, f32 *, 8) = 0.0f;
    M2C_FIELD(temp_2, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_2, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, s32 *, 0x50) = -1;
    M2C_FIELD(arg0, f32 *, 0x14) = 0.0f;
    M2C_FIELD(temp_3, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_3, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, s32 *, 0x48) = 1;
    M2C_FIELD(temp_2, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 8) = 0.0f;
    M2C_FIELD(temp_2, f32 *, 4) = 0.0f;
    M2C_FIELD(arg0, s64 *, 0) = 0;
    M2C_FIELD(temp_3, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x14) = 0.0f;
    M2C_FIELD(temp_3, f32 *, 4) = 0.0f;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, f32 *, 0x2C) = 1.0f;
    M2C_FIELD(arg0, f32 *, 0x30) = 20.0f;
    M2C_FIELD(arg0, f32 *, 0x38) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x28) = 1.0f;
    M2C_FIELD(arg0, f32 *, 0x34) = 0.0f;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = -1;
    M2C_FIELD(arg0, s32 *, 0x44) = -1;
    M2C_FIELD(arg0, s32 *, 0x4C) = -1;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 1;
}
