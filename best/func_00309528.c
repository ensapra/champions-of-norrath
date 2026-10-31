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

s32 func_0030BCE8(void *, void *, s32, s32, u32, u32, void *, u32 *); /* extern */

u32 func_00309528(void *arg0, void *arg1, s32 arg2, s32 arg3, u32 arg4) {
    s16 temp_3;
    s16 temp_3_2;
    s16 temp_5;
    s16 temp_5_3;
    s32 *temp_19;
    s32 *temp_9;
    s32 *var_9_2;
    s32 temp_16;
    s32 temp_2;
    s32 var_12;
    s32 var_12_2;
    s32 var_16;
    s32 var_6;
    s32 var_7;
    u32 *temp_22;
    u32 *var_11;
    u32 *var_11_2;
    u32 *var_9;
    u32 temp_13;
    u32 temp_2_2;
    u32 temp_2_3;
    u32 temp_4;
    u32 temp_4_2;
    u32 temp_5_2;
    u32 temp_6;
    u32 temp_8;
    u32 temp_lo;
    u32 var_18;
    u32 var_2;
    u32 var_3;
    u32 var_3_2;
    u32 var_8;
    void *temp_17;
    void *var_10;
    void *var_10_2;

    var_6 = arg2;
    var_7 = arg3;
    var_8 = arg4;
    temp_16 = M2C_FIELD(arg1, s32 *, 0x10);
    var_2 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x10) >= temp_16) {
        var_16 = temp_16 - 1;
        var_11 = arg1 + 0x14;
        temp_2 = var_16 * 4;
        temp_17 = arg0 + 0x14;
        temp_19 = var_11 + temp_2;
        var_9 = temp_17 + temp_2;
        temp_22 = var_11;
        temp_13 = *var_9;
        var_10 = temp_17;
        temp_lo = temp_13 / (u32) (*temp_19 + 1);
        var_18 = temp_lo;
        var_12 = 0;
        if (var_18 != 0) {
            var_3 = 0;
            do {
                temp_4 = *var_11;
                var_11 += 4;
                temp_6 = M2C_FIELD(var_10, u32 *, 0);
                var_7 = (u32) temp_19 < (u32) var_11;
                temp_2_2 = ((temp_4 & 0xFFFF) * var_18) + var_3;
                var_8 = ((temp_4 >> 0x10) * var_18) + (temp_2_2 >> 0x10);
                temp_3 = ((temp_6 & 0xFFFF) - (temp_2_2 & 0xFFFF)) + var_12;
                var_6 = (temp_6 >> 0x10) - (var_8 & 0xFFFF);
                M2C_FIELD(var_10, u32 *, 0) = temp_3;
                temp_5 = var_6 + (temp_3 >> 0x10);
                var_3 = var_8 >> 0x10;
                M2C_FIELD(var_10, s16 *, 2) = temp_5;
                var_10 += 4;
                var_12 = temp_5 >> 0x10;
            } while (var_7 == 0);
            if (temp_13 == 0) {
                var_9 -= 4;
loop_9:
                if (((u32) temp_17 < (u32) var_9) && (*var_9 == 0)) {
                    var_9 -= 4;
                    var_16 -= 1;
                    goto loop_9;
                }
                M2C_FIELD(arg0, s32 *, 0x10) = var_16;
            }
        }
        var_11_2 = temp_22;
        if (func_0030BCE8(arg0, arg1, var_6, var_7, var_8, (u32) var_9, var_10, var_11) >= 0) {
            var_18 = temp_lo + 1;
            var_12_2 = 0;
            var_3_2 = 0;
            var_10_2 = temp_17;
            do {
                temp_4_2 = *var_11_2;
                var_11_2 += 4;
                temp_5_2 = M2C_FIELD(var_10_2, u32 *, 0);
                temp_2_3 = (temp_4_2 & 0xFFFF) + var_3_2;
                temp_8 = (temp_4_2 >> 0x10) + (temp_2_3 >> 0x10);
                temp_3_2 = ((temp_5_2 & 0xFFFF) - (temp_2_3 & 0xFFFF)) + var_12_2;
                M2C_FIELD(var_10_2, u32 *, 0) = temp_3_2;
                temp_5_3 = ((temp_5_2 >> 0x10) - (temp_8 & 0xFFFF)) + (temp_3_2 >> 0x10);
                var_3_2 = temp_8 >> 0x10;
                M2C_FIELD(var_10_2, s16 *, 2) = temp_5_3;
                var_10_2 += 4;
                var_12_2 = temp_5_3 >> 0x10;
            } while ((u32) temp_19 >= (u32) var_11_2);
            temp_9 = temp_17 + (var_16 * 4);
            var_2 = var_18;
            if (*temp_9 == 0) {
                var_9_2 = temp_9 - 4;
loop_19:
                if ((u32) temp_17 < (u32) var_9_2) {
                    if (*var_9_2 == 0) {
                        var_9_2 -= 4;
                        var_16 -= 1;
                        goto loop_19;
                    }
                }
                M2C_FIELD(arg0, s32 *, 0x10) = var_16;
                goto block_24;
            }
        } else {
block_24:
            var_2 = var_18;
        }
    }
    return var_2;
}
