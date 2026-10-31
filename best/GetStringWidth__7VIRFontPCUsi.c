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

s32 GetStringWidth__7VIRFontPCUsi(void *arg0, u16 *arg1, s32 arg2, s32 arg5, s32 arg6) {
    s32 temp_15;
    s32 temp_5;
    s32 temp_5_2;
    s32 var_10;
    s32 var_11;
    s32 var_12;
    s32 var_24;
    s32 var_2;
    s32 var_2_2;
    s32 var_3;
    s32 var_4;
    s32 var_5;
    s32 var_7;
    s32 var_7_2;
    s32 var_8;
    s32 var_8_2;
    s32 var_9;
    u16 *var_13;
    u16 temp_11;

    var_9 = arg5;
    var_10 = arg6;
    var_13 = arg1;
    var_24 = 0;
    if (*var_13 != 0) {
        temp_15 = M2C_FIELD(arg0, s32 *, 0x24);
loop_2:
        var_12 = 0;
        var_8 = temp_15 - 1;
        var_7 = var_8 < 0;
        temp_11 = *var_13;
        if (var_7 == 0) {
            var_9 = var_8 >> 1;
            temp_5 = M2C_FIELD(arg0, s32 *, 0x40);
            var_4 = var_9 * 2;
loop_11:
            if (M2C_FIELD((((var_4 + var_9) * 4) + temp_5), u16 *, 6) != temp_11) {
                if (temp_11 >= (u16) M2C_FIELD((((var_4 + var_9) * 4) + temp_5), u16 *, 6)) {
                    var_12 = var_9 + 1;
                } else {
                    var_8 = var_9 - 1;
                }
                var_7 = var_8 < var_12;
                if (var_7 == 0) {
                    var_9 = (s32) (var_12 + var_8) >> 1;
                    var_4 = var_9 * 2;
                    goto loop_11;
                }
            }
        }
        var_5 = (var_7 == 0) ? var_9 : -1;
        var_3 = var_5 * 2;
        if (var_5 < 0) {
            var_11 = 0;
            var_8_2 = temp_15 - 1;
            var_7_2 = var_8_2 < 0;
            if (var_7_2 == 0) {
                var_10 = var_8_2 >> 1;
                temp_5_2 = M2C_FIELD(arg0, s32 *, 0x40);
                if (M2C_FIELD(((var_10 * 0xC) + temp_5_2), u16 *, 6) != 0x3F) {
                    var_2_2 = var_10 * 3;
loop_16:
                    if ((u16) M2C_FIELD(((var_2_2 * 4) + temp_5_2), u16 *, 6) < 0x40U) {
                        var_11 = var_10 + 1;
                    } else {
                        var_8_2 = var_10 - 1;
                    }
                    var_7_2 = var_8_2 < var_11;
                    if (var_7_2 == 0) {
                        var_10 = (s32) (var_11 + var_8_2) >> 1;
                        var_2_2 = var_10 * 3;
                        if (M2C_FIELD(((var_10 * 0xC) + temp_5_2), u16 *, 6) != 0x3F) {
                            goto loop_16;
                        }
                    }
                }
            }
            var_5 = (var_7_2 == 0) ? var_10 : -1;
            var_2 = -1;
            if (var_5 >= 0) {
                var_3 = var_5 * 2;
                goto block_25;
            }
        } else {
block_25:
            var_13 += 2;
            var_24 += M2C_FIELD((((var_3 + var_5) * 4) + M2C_FIELD(arg0, s32 *, 0x40)), u8 *, 0xA) + arg2;
            if (*var_13 == 0) {
                goto block_26;
            }
            goto loop_2;
        }
    } else {
block_26:
        var_2 = var_24;
    }
    return var_2;
}
