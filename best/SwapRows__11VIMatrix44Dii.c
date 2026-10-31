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

void SwapRows__11VIMatrix44Dii(s32 arg0, s32 arg1, s32 arg2) {
    s64 temp_5;
    s64 temp_7;
    s64 temp_8;
    s64 temp_9;
    void *temp_4;
    void *temp_6;

    temp_6 = arg0 + (arg2 << 5);
    temp_4 = arg0 + (arg1 << 5);
    temp_9 = M2C_FIELD(temp_4, s64 *, 0);
    M2C_FIELD(temp_4, s64 *, 0) = (s64) M2C_FIELD(temp_6, s64 *, 0);
    temp_8 = M2C_FIELD(temp_4, s64 *, 8);
    temp_7 = M2C_FIELD(temp_4, s64 *, 0x10);
    M2C_FIELD(temp_4, s64 *, 8) = (s64) M2C_FIELD(temp_6, s64 *, 8);
    temp_5 = M2C_FIELD(temp_4, s64 *, 0x18);
    M2C_FIELD(temp_4, s64 *, 0x10) = (s64) M2C_FIELD(temp_6, s64 *, 0x10);
    M2C_FIELD(temp_4, s64 *, 0x18) = (s64) M2C_FIELD(temp_6, s64 *, 0x18);
    M2C_FIELD(temp_6, s64 *, 0x18) = temp_5;
    M2C_FIELD(temp_6, s64 *, 0) = temp_9;
    M2C_FIELD(temp_6, s64 *, 8) = temp_8;
    M2C_FIELD(temp_6, s64 *, 0x10) = temp_7;
}
