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

s32 ReorderPalette__9VISurface(void *arg0) {
    s32 *var_5_2;
    s32 *var_6_2;
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_3_2;
    s32 temp_5;
    s32 var_2;
    s32 var_4;
    s32 var_7;
    s32 var_7_2;
    s32 var_8;
    s32 var_8_2;
    u16 *var_5;
    u16 *var_6;
    u16 temp_3;

    var_2 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x10) == 1) {
        temp_5 = M2C_FIELD(arg0, s32 *, 0x34);
        if (temp_5 != 2) {
            var_2 = -1;
            if (temp_5 == 5) {
                temp_2 = M2C_FIELD(arg0, s32 *, 0x28);
                var_8 = 0;
                if (temp_2 > 0) {
                    var_4 = M2C_FIELD(arg0, s32 *, 0x2C) + M2C_FIELD(arg0, s32 *, 0x138);
                    do {
                        var_6 = var_4 + 0x10;
                        var_5 = var_4 + 0x20;
                        var_7 = 7;
loop_6:
                        temp_3 = *var_6;
                        var_7 -= 1;
                        *var_6 = *var_5;
                        var_6 += 2;
                        *var_5 = temp_3;
                        var_5 += 2;
                        if (var_7 >= 0) {
                            goto loop_6;
                        }
                        var_8 += 0x20;
                        var_4 += 0x40;
                    } while (var_8 < temp_2);
                    return 0;
                }
                goto block_16;
            }
            /* Duplicate return node #17. Try simplifying control flow for better match */
            return var_2;
        }
        var_8_2 = 0;
        if (M2C_FIELD(arg0, s32 *, 0x28) > 0) {
loop_11:
            var_7_2 = 7;
            temp_2_2 = M2C_FIELD(arg0, s32 *, 0x138) + (M2C_FIELD(arg0, s32 *, 0x2C) + (var_8_2 * 4));
            var_6_2 = temp_2_2 + 0x40;
            var_5_2 = temp_2_2 + 0x20;
            do {
                temp_3_2 = *var_5_2;
                var_7_2 -= 1;
                *var_5_2 = *var_6_2;
                var_5_2 += 4;
                *var_6_2 = temp_3_2;
                var_6_2 += 4;
            } while (var_7_2 >= 0);
            var_8_2 += 0x20;
            if (var_8_2 < M2C_FIELD(arg0, s32 *, 0x28)) {
                goto loop_11;
            }
        }
block_16:
        var_2 = 0;
        /* Duplicate return node #17. Try simplifying control flow for better match */
        return var_2;
    }
    return var_2;
}
