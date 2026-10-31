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

void VIBufferSwap__FiPUc(s32 arg0, s32 arg1) {
    s32 temp_8;
    s32 var_7;
    u8 *temp_4;
    u8 *var_6;
    u8 temp_2;

    temp_8 = arg0 >> 1;
    var_7 = 0;
    if (temp_8 > 0) {
        var_6 = (arg0 + arg1) - 1;
        do {
            temp_4 = arg1 + var_7;
            var_7 += 1;
            temp_2 = *temp_4;
            *temp_4 = *var_6;
            *var_6 = temp_2;
            var_6 -= 1;
        } while (var_7 < temp_8);
    }
}
