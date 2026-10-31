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

s32 mp_count_bits(void *arg0) {
    s32 temp_2;
    s32 var_2;
    u16 var_4;

    var_2 = -4;
    if (arg0 != NULL) {
        temp_2 = M2C_FIELD(arg0, s32 *, 8);
        var_4 = M2C_FIELD((M2C_FIELD(arg0, s32 *, 0xC) + (temp_2 * 2)), u16 *, -2);
        var_2 = (temp_2 - 1) * 0x10;
        if (var_4 != 0) {
            do {
                var_4 = (u16) (var_4 >> 1);
                var_2 += 1;
            } while (var_4 != 0);
        }
    }
    return var_2;
}
