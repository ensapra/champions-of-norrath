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

s32 strlen(s32);                                    /* extern */
s32 strncmp(s8 *, s32, s32);                        /* extern */

s8 *UTF8_strrchr__FPcT0(s8 *arg0, s32 arg1) {
    s32 temp_19;
    s8 *var_16;
    s8 *var_16_2;
    s8 *var_2;
    s8 *var_4;

    var_16 = arg0;
    temp_19 = strlen(arg1);
    if (*arg0 != 0) {
        var_16 += 1;
loop_2:
        if (*var_16 != 0) {
            var_16 += 1;
            goto loop_2;
        }
    }
    if (var_16 != arg0) {
        var_16_2 = var_16 - 1;
loop_7:
        var_4 = var_16_2;
        if ((*var_16_2 * 0xC0) == 0x80) {
            do {
                var_16_2 -= 1;
            } while ((*var_16_2 * 0xC0) == 0x80);
            var_4 = var_16_2;
        }
        var_2 = var_16_2;
        if (strncmp(var_4, arg1, temp_19) != 0) {
            var_16_2 -= 1;
            if (var_16_2 == arg0) {
                goto block_13;
            }
            goto loop_7;
        }
    } else {
block_13:
        var_2 = NULL;
    }
    return var_2;
}
