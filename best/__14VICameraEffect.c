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

M2C_UNK Reset__14VICameraEffect();                  /* extern */

void __14VICameraEffect(void *arg0) {
    void *temp_2;
    void *temp_3;

    temp_2 = arg0 + 0x14;
    temp_3 = arg0 + 0x20;
    M2C_FIELD(temp_2, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x14) = 0.0f;
    M2C_FIELD(temp_2, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_3, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x20) = 0.0f;
    M2C_FIELD(temp_3, f32 *, 4) = 0.0f;
    Reset__14VICameraEffect();
    M2C_FIELD(arg0, f32 *, 0x2C) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x30) = 0.0f;
}
