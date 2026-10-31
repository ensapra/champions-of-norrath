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

void *__as__11VIMatrix44DRC11VIMatrix44D(void *arg0, void *arg1) {
    void *temp_10;
    void *temp_11;
    void *temp_12;
    void *temp_7;
    void *temp_8;
    void *temp_9;

    temp_7 = arg1 + 0x20;
    temp_8 = arg0 + 0x20;
    temp_9 = arg0 + 0x40;
    M2C_FIELD(arg0, s64 *, 0) = (s64) M2C_FIELD(arg1, s64 *, 0);
    temp_12 = arg0 + 0x60;
    temp_10 = arg1 + 0x40;
    temp_11 = arg1 + 0x60;
    M2C_FIELD(arg0, s64 *, 8) = (s64) M2C_FIELD(arg1, s64 *, 8);
    M2C_FIELD(arg0, s64 *, 0x10) = (s64) M2C_FIELD(arg1, s64 *, 0x10);
    M2C_FIELD(arg0, s64 *, 0x18) = (s64) M2C_FIELD(arg1, s64 *, 0x18);
    M2C_FIELD(arg0, s64 *, 0x20) = (s64) M2C_FIELD(arg1, s64 *, 0x20);
    M2C_FIELD(temp_8, s64 *, 8) = (s64) M2C_FIELD(temp_7, s64 *, 8);
    M2C_FIELD(temp_8, s64 *, 0x10) = (s64) M2C_FIELD(temp_7, s64 *, 0x10);
    M2C_FIELD(temp_8, s64 *, 0x18) = (s64) M2C_FIELD(temp_7, s64 *, 0x18);
    M2C_FIELD(arg0, s64 *, 0x40) = (s64) M2C_FIELD(arg1, s64 *, 0x40);
    M2C_FIELD(temp_9, s64 *, 8) = (s64) M2C_FIELD(temp_10, s64 *, 8);
    M2C_FIELD(temp_9, s64 *, 0x10) = (s64) M2C_FIELD(temp_10, s64 *, 0x10);
    M2C_FIELD(temp_9, s64 *, 0x18) = (s64) M2C_FIELD(temp_10, s64 *, 0x18);
    M2C_FIELD(arg0, s64 *, 0x60) = (s64) M2C_FIELD(arg1, s64 *, 0x60);
    M2C_FIELD(temp_12, s64 *, 8) = (s64) M2C_FIELD(temp_11, s64 *, 8);
    M2C_FIELD(temp_12, s64 *, 0x10) = (s64) M2C_FIELD(temp_11, s64 *, 0x10);
    M2C_FIELD(temp_12, s64 *, 0x18) = (s64) M2C_FIELD(temp_11, s64 *, 0x18);
    return arg0;
}
