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

s32 Clear__17VISceneSoundTrack(void *arg0) {
    void *temp_3;
    void *temp_6;

    temp_6 = arg0 + 0x60;
    temp_3 = arg0 + 0x38;
    M2C_FIELD(arg0, s32 *, 0) = 1;
    M2C_FIELD(arg0, s32 *, 8) = -1;
    M2C_FIELD(arg0, s32 *, 0x20) = -1;
    M2C_FIELD(arg0, s32 *, 0x24) = -1;
    M2C_FIELD(arg0, f32 *, 0x30) = 1.0f;
    M2C_FIELD(temp_3, s32 *, 0x24) = -1;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(temp_3, s32 *, 0x18) = -1;
    M2C_FIELD(temp_3, s32 *, 0x1C) = -1;
    M2C_FIELD(temp_3, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, f32 *, 4) = 1.0f;
    M2C_FIELD(arg0, s64 *, 0x10) = 0x3A98;
    M2C_FIELD(arg0, s64 *, 0x18) = 0;
    M2C_FIELD(arg0, s64 *, 0x28) = 0;
    M2C_FIELD(temp_3, f32 *, 0x10) = 0.0f;
    M2C_FIELD(temp_3, f32 *, 0x14) = 0.0f;
    M2C_FIELD(temp_3, s64 *, 8) = 0;
    M2C_FIELD(temp_6, s32 *, 0x24) = -1;
    M2C_FIELD(temp_6, f32 *, 0x14) = 0.0f;
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    M2C_FIELD(temp_6, s64 *, 8) = 0;
    M2C_FIELD(temp_6, f32 *, 0x10) = 0.0f;
    M2C_FIELD(temp_6, s32 *, 0x18) = -1;
    M2C_FIELD(temp_6, s32 *, 0x1C) = -1;
    M2C_FIELD(temp_6, s32 *, 0x20) = 0;
    return 0;
}
