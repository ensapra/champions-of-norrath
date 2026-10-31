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

s64 uadd__Q24Base3MD5ii(s32 arg1, s32 arg2) {
    u64 temp_3;

    temp_3 = 0xFFFF0000U >> 0x20;
    return (s64) ((((arg1 & temp_3) + (arg2 & temp_3)) & temp_3) << 0x20) >> 0x20;
}
