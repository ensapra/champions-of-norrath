/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

s64 func_002D68A0(s64 arg0) {
    s64 temp_6;
    u64 temp_5;
    u64 temp_5_2;
    u64 var_5;

    temp_6 = ((u64) (arg0 * 2) >> 0x35) - 0x433;
    if (temp_6 < -0x35) {
        return 0;
    }
    if (temp_6 >= 0xD) {
        return 0x270F;
    }
    temp_5 = ((u64) (arg0 << 0xC) >> 0xC) | (0x8000 << 0x25);
    if (temp_6 < 0) {
        temp_5_2 = temp_5 >> ((s64) (((0 - temp_6) - 2) << 0x20) >> 0x20);
        if ((temp_5_2 & 3) != 3) {
            var_5 = temp_5_2 >> 2;
        } else {
            var_5 = (temp_5_2 >> 2) + 1;
        }
    } else {
        var_5 = temp_5 << ((s64) (temp_6 << 0x20) >> 0x20);
    }
    return (s64) (var_5 << 0x20) >> 0x20;
}
