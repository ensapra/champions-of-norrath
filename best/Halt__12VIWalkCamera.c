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

s32 Halt__12VIWalkCamera(void *arg0) {
    void *temp_10;
    void *temp_11;
    void *temp_12;
    void *temp_13;
    void *temp_14;
    void *temp_15;
    void *temp_3;
    void *temp_5;
    void *temp_6;
    void *temp_7;
    void *temp_8;
    void *temp_9;

    temp_3 = arg0 + 0x168;
    temp_5 = arg0 + 0x150;
    temp_6 = arg0 + 0x174;
    temp_7 = arg0 + 0x15C;
    temp_8 = arg0 + 0x21C;
    temp_9 = arg0 + 0x210;
    temp_10 = arg0 + 0xE0;
    temp_11 = arg0 + 0xC8;
    temp_12 = arg0 + 0xEC;
    temp_13 = arg0 + 0xD4;
    temp_14 = arg0 + 0x1C4;
    temp_15 = arg0 + 0x1B8;
    M2C_FIELD(temp_3, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x168) = 0.0f;
    M2C_FIELD(temp_3, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_5, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x150) = 0.0f;
    M2C_FIELD(temp_5, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_6, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x174) = 0.0f;
    M2C_FIELD(temp_6, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_7, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x15C) = 0.0f;
    M2C_FIELD(temp_7, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_8, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x21C) = 0.0f;
    M2C_FIELD(temp_8, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_9, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x210) = 0.0f;
    M2C_FIELD(temp_9, f32 *, 4) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x230) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x22C) = 0.0f;
    M2C_FIELD(temp_10, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0xE0) = 0.0f;
    M2C_FIELD(temp_10, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_11, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0xC8) = 0.0f;
    M2C_FIELD(temp_11, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_12, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0xEC) = 0.0f;
    M2C_FIELD(temp_12, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_13, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0xD4) = 0.0f;
    M2C_FIELD(temp_13, f32 *, 4) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x1C4) = 0.0f;
    M2C_FIELD(temp_14, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_14, f32 *, 8) = 0.0f;
    M2C_FIELD(temp_15, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x1B8) = 0.0f;
    M2C_FIELD(temp_15, f32 *, 4) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x1D4) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x1D8) = 0.0f;
    return 0;
}
