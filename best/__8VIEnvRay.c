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

extern M2C_UNK D_012267D8;

void __8VIEnvRay(void *arg0) {
    void *temp_5;
    void *temp_6;

    temp_5 = arg0 + 0xC;
    temp_6 = arg0 + 0x18;
    M2C_FIELD(arg0, f32 *, 0) = 0.0f;
    M2C_FIELD(arg0, f32 *, 4) = 0.0f;
    M2C_FIELD(arg0, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0xF;
    M2C_FIELD(temp_5, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0xC) = 0.0f;
    M2C_FIELD(temp_5, f32 *, 4) = 0.0f;
    M2C_FIELD(arg0, M2C_UNK **, 0x3C) = &D_012267D8;
    M2C_FIELD(arg0, s32 *, 0x34) = 1;
    M2C_FIELD(temp_6, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x18) = 0.0f;
    M2C_FIELD(temp_6, f32 *, 4) = 0.0f;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
}
