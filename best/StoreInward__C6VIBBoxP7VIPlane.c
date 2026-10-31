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

s32 StoreInward__C6VIBBoxP7VIPlane(void *arg0, void *arg1) {
    void *temp_3;
    void *temp_6;
    void *temp_7;
    void *temp_8;
    void *temp_9;

    temp_3 = arg1 + 0x10;
    temp_6 = arg1 + 0x20;
    M2C_FIELD(arg1, f32 *, 4) = 0.0f;
    temp_7 = arg1 + 0x30;
    M2C_FIELD(arg1, f32 *, 0) = 1.0f;
    temp_8 = arg1 + 0x40;
    M2C_FIELD(arg1, f32 *, 8) = 0.0f;
    temp_9 = arg1 + 0x50;
    M2C_FIELD(arg1, f32 *, 0xC) = (f32) -M2C_FIELD(arg0, f32 *, 0);
    M2C_FIELD(temp_3, f32 *, 8) = 0.0f;
    M2C_FIELD(arg1, f32 *, 0x10) = -1.0f;
    M2C_FIELD(temp_3, f32 *, 4) = 0.0f;
    M2C_FIELD(arg1, f32 *, 0x1C) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
    M2C_FIELD(temp_6, f32 *, 8) = 0.0f;
    M2C_FIELD(arg1, f32 *, 0x20) = 0.0f;
    M2C_FIELD(temp_6, f32 *, 4) = 1.0f;
    M2C_FIELD(arg1, f32 *, 0x2C) = (f32) -M2C_FIELD(arg0, f32 *, 4);
    M2C_FIELD(temp_7, f32 *, 8) = 0.0f;
    M2C_FIELD(arg1, f32 *, 0x30) = 0.0f;
    M2C_FIELD(temp_7, f32 *, 4) = -1.0f;
    M2C_FIELD(arg1, f32 *, 0x3C) = (f32) M2C_FIELD(arg0, f32 *, 0x10);
    M2C_FIELD(temp_8, f32 *, 8) = 1.0f;
    M2C_FIELD(arg1, f32 *, 0x40) = 0.0f;
    M2C_FIELD(temp_8, f32 *, 4) = 0.0f;
    M2C_FIELD(arg1, f32 *, 0x4C) = (f32) -M2C_FIELD(arg0, f32 *, 8);
    M2C_FIELD(temp_9, f32 *, 8) = -1.0f;
    M2C_FIELD(temp_9, f32 *, 4) = 0.0f;
    M2C_FIELD(arg1, f32 *, 0x50) = 0.0f;
    M2C_FIELD(arg1, f32 *, 0x5C) = (f32) M2C_FIELD(arg0, f32 *, 0x14);
    return 0;
}
