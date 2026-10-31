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

u8 GetWidth__7VIRFontc(void *arg0, s8 arg1, s32 arg2, s32 arg4) {
    s32 temp_10;
    s32 temp_10_2;
    s32 temp_13;
    s32 var_11;
    s32 var_2_2;
    s32 var_2_3;
    s32 var_3;
    s32 var_5;
    s32 var_6;
    s32 var_6_2;
    s32 var_7;
    s32 var_7_2;
    s32 var_8;
    s32 var_9;
    s32 var_9_2;
    u32 temp_5;
    u8 var_2;

    var_6 = arg2;
    var_8 = arg4;
    temp_13 = M2C_FIELD(arg0, s32 *, 0x24);
    temp_5 = arg1 & 0xFFFF;
    var_7 = temp_13 - 1;
    var_11 = 0;
    if (var_7 >= 0) {
        var_6 = var_7 >> 1;
        temp_10 = M2C_FIELD(arg0, s32 *, 0x40);
        var_9 = var_7 < 0;
        if (M2C_FIELD(((var_6 * 0xC) + temp_10), u16 *, 6) != temp_5) {
            var_2_2 = var_6 * 3;
loop_3:
            if (temp_5 >= (u16) M2C_FIELD(((var_2_2 * 4) + temp_10), u16 *, 6)) {
                var_11 = var_6 + 1;
            } else {
                var_7 = var_6 - 1;
            }
            var_9 = var_7 < var_11;
            if (var_9 == 0) {
                var_6 = (s32) (var_11 + var_7) >> 1;
                var_2_2 = var_6 * 3;
                if (M2C_FIELD(((var_6 * 0xC) + temp_10), u16 *, 6) == temp_5) {

                } else {
                    goto loop_3;
                }
            }
        }
    } else {
        var_9 = var_7 < 0;
    }
    var_5 = (var_9 == 0) ? var_6 : -1;
    var_3 = var_5 * 2;
    if (var_5 < 0) {
        var_6_2 = temp_13 - 1;
        var_9_2 = 0;
        var_7_2 = var_6_2 < 0;
        if (var_7_2 == 0) {
            var_8 = var_6_2 >> 1;
            temp_10_2 = M2C_FIELD(arg0, s32 *, 0x40);
            if (M2C_FIELD(((var_8 * 0xC) + temp_10_2), u16 *, 6) != 0x3F) {
                var_2_3 = var_8 * 3;
loop_15:
                if ((u16) M2C_FIELD(((var_2_3 * 4) + temp_10_2), u16 *, 6) < 0x40U) {
                    var_9_2 = var_8 + 1;
                } else {
                    var_6_2 = var_8 - 1;
                }
                var_7_2 = var_6_2 < var_9_2;
                if (var_7_2 == 0) {
                    var_8 = (s32) (var_9_2 + var_6_2) >> 1;
                    var_2_3 = var_8 * 3;
                    if (M2C_FIELD(((var_8 * 0xC) + temp_10_2), u16 *, 6) == 0x3F) {

                    } else {
                        goto loop_15;
                    }
                }
            }
        }
        var_5 = (var_7_2 == 0) ? var_8 : -1;
        var_2 = -1U;
        if (var_5 >= 0) {
            var_3 = var_5 * 2;
            goto block_24;
        }
    } else {
block_24:
        var_2 = M2C_FIELD((((var_3 + var_5) * 4) + M2C_FIELD(arg0, s32 *, 0x40)), u8 *, 0xA);
    }
    return var_2;
}
