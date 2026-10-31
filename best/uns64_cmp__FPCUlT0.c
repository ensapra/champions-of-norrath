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

s64 uns64_cmp__FPCUlT0(s64 *arg0, s64 *arg1) {
    s64 temp_3;
    s64 var_3;

    temp_3 = *arg0 - *arg1;
    if (temp_3 > 0) {
        var_3 = 1;
    } else {
        var_3 = (temp_3 < 0) ? -1 : temp_3;
    }
    return (s64) (var_3 << 0x20) >> 0x20;
}
