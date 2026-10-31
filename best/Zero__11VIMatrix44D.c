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

void Zero__11VIMatrix44D(void *arg0) {
    void *temp_3;
    void *temp_5;
    void *temp_6;

    temp_6 = arg0 + 0x60;
    temp_3 = arg0 + 0x20;
    temp_5 = arg0 + 0x40;
    M2C_FIELD(arg0, s64 *, 0) = 0;
    M2C_FIELD(arg0, s64 *, 8) = 0;
    M2C_FIELD(arg0, s64 *, 0x10) = 0;
    M2C_FIELD(arg0, s64 *, 0x18) = 0;
    M2C_FIELD(temp_3, s64 *, 0x18) = 0;
    M2C_FIELD(arg0, s64 *, 0x20) = 0;
    M2C_FIELD(temp_3, s64 *, 8) = 0;
    M2C_FIELD(temp_3, s64 *, 0x10) = 0;
    M2C_FIELD(temp_5, s64 *, 0x18) = 0;
    M2C_FIELD(arg0, s64 *, 0x40) = 0;
    M2C_FIELD(temp_5, s64 *, 8) = 0;
    M2C_FIELD(temp_5, s64 *, 0x10) = 0;
    M2C_FIELD(temp_6, s64 *, 0x18) = 0;
    M2C_FIELD(arg0, s64 *, 0x60) = 0;
    M2C_FIELD(temp_6, s64 *, 8) = 0;
    M2C_FIELD(temp_6, s64 *, 0x10) = 0;
}
