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

extern M2C_UNK D_0118ED60;

s32 UTF8_strlen__FPCci(s8 *arg0, s32 arg1) {
    s32 var_7;
    s32 var_9;
    s8 *var_2;
    s8 temp_3;
    s8 var_6;
    u8 temp_3_2;

    var_7 = 0;
    temp_3 = *arg0;
    var_9 = 0;
    if ((temp_3 != 0) && (arg1 > 0)) {
        var_2 = arg0;
loop_3:
        var_6 = 1;
        temp_3_2 = *var_2;
        if (temp_3_2 & 0x80) {
            var_6 = *(((u32) (temp_3_2 & 0x3C) >> 2) + &D_0118ED60);
        }
        var_7 += var_6;
        var_9 += 1;
        if (temp_3 != 0) {
            if (var_7 < arg1) {
                var_2 = arg0 + var_7;
                goto loop_3;
            }
        }
    }
    return var_9;
}
