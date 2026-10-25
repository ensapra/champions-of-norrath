/* machine draft (m2c) for ee-gcc-2.96 -O2 -G8, tried by autopilot */
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

void func_0011A0B8(s32 arg0, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg_sp0, void *arg_sp8, s32 arg_sp10, s32 arg_sp18, s32 arg_sp20) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 temp_15;
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_2_4;
    s32 temp_2_5;
    s32 temp_2_6;
    s32 temp_2_7;
    s32 temp_2_8;
    s32 var_10;
    s32 var_18;
    s32 var_19;
    s32 var_20;
    s32 var_22;
    s32 var_23;
    s32 var_24;
    s32 var_25;
    s32 var_2;
    s32 var_30;
    u8 var_13;
    u8 var_8;
    u8 var_9;
    void *temp_11;
    void *temp_11_2;
    void *temp_11_3;
    void *temp_12;
    void *temp_12_2;
    void *var_11;
    void *var_12;
    void *var_14;
    void *var_16;

    sp0 = arg0;
    spC = ((arg5 - arg3) - 1) << 0xA;
    sp8 = (arg0 * 2) + sp0;
    sp4 = arg4;
    sp10 = ((arg6 - arg4) - 1) << 0xA;
    sp18 = arg6 - 2;
    sp14 = arg5 - 2;
    switch (arg_sp10) {                             /* irregular */
    case 0x0:
        var_25 = arg7;
        var_18 = arg_sp0;
        var_16 = arg_sp8;
        var_24 = arg7 - 1;
        var_10 = arg_sp0 - 1;
        var_30 = var_25 * 4;
        sp1C = 4;
        break;
    case 0x5A:
        var_18 = arg7;
        var_24 = arg_sp0 - 1;
        var_25 = arg_sp0;
        sp1C = var_18 * -4;
        var_10 = arg7 - 1;
        var_30 = 4;
        var_16 = arg_sp8 + (var_18 * var_24 * 4);
        break;
    default:
        var_10 = arg7 - 1;
        var_18 = arg7;
        var_25 = arg_sp0;
        var_16 = arg_sp8 + (var_10 * 4);
        sp1C = var_18 * 4;
        var_24 = arg_sp0 - 1;
        var_30 = -4;
        break;
    case 0xB4:
        var_25 = arg7;
        var_18 = arg_sp0;
        var_10 = arg_sp0 - 1;
        var_30 = var_25 * -4;
        var_24 = arg7 - 1;
        sp1C = -4;
        var_16 = (arg_sp8 + (var_25 * var_18 * 4)) - 4;
        break;
    }
    var_23 = 0;
    var_22 = 0;
    if (var_18 > 0) {
        do {
            var_2 = sp4 + var_22;
            if (arg_sp20 == 0) {
                temp_2 = sp4 + ((s32) (var_23 / var_10) >> 0xA);
                var_2 = (sp18 < temp_2) ? sp18 : temp_2;
            }
            var_20 = 0;
            var_14 = var_16;
            var_19 = 0;
            temp_15 = sp0 * var_2;
            if (var_25 > 0) {
                do {
                    if (arg_sp18 != 0) {
                        temp_2_2 = arg3 + var_19;
                        if (arg_sp20 != 0) {
                            temp_2_3 = temp_15 + temp_2_2;
                            temp_11 = arg2 + temp_2_3 + (temp_2_3 * 2);
                            var_9 = M2C_FIELD(temp_11, u8 *, 2);
                            var_13 = M2C_FIELD(temp_11, u8 *, 0);
                            var_8 = M2C_FIELD(temp_11, u8 *, 1);
                        } else {
                            temp_2_4 = temp_15 + temp_2_2;
                            var_11 = arg2 + temp_2_4 + (temp_2_4 * 2);
                            var_12 = var_11 + sp8;
                            goto block_25;
                        }
                    } else {
                        temp_2_5 = arg3 + ((s32) (var_20 / var_24) >> 0xA);
                        temp_2_6 = (sp14 < temp_2_5) ? sp14 : temp_2_5;
                        if (arg_sp20 != 0) {
                            temp_2_7 = temp_15 + temp_2_6;
                            var_11 = arg2 + temp_2_7 + (temp_2_7 * 2);
                            var_12 = var_11 + 3;
block_25:
                            var_9 = (u8) ((s32) (M2C_FIELD(var_11, u8 *, 2) + M2C_FIELD(var_12, u8 *, 2)) >> 1);
                            var_13 = (u8) ((s32) (M2C_FIELD(var_11, u8 *, 0) + M2C_FIELD(var_12, u8 *, 0)) >> 1);
                            var_8 = (u8) ((s32) (M2C_FIELD(var_11, u8 *, 1) + M2C_FIELD(var_12, u8 *, 1)) >> 1);
                        } else {
                            temp_2_8 = temp_15 + temp_2_6;
                            temp_11_2 = arg2 + temp_2_8 + (temp_2_8 * 2);
                            temp_12 = temp_11_2 + 3;
                            temp_11_3 = temp_11_2 + sp8;
                            temp_12_2 = temp_11_3 + 3;
                            var_9 = (u8) ((s32) (M2C_FIELD(temp_11_2, u8 *, 2) + M2C_FIELD(temp_12, u8 *, 2) + (M2C_FIELD(temp_11_3, u8 *, 2) + M2C_FIELD(temp_12_2, u8 *, 2))) >> 2);
                            var_13 = (u8) ((s32) (M2C_FIELD(temp_11_2, u8 *, 0) + M2C_FIELD(temp_11_2, u8 *, 3) + (M2C_FIELD(temp_11_3, u8 *, 0) + M2C_FIELD(temp_11_3, u8 *, 3))) >> 2);
                            var_8 = (u8) ((s32) (M2C_FIELD(temp_11_2, u8 *, 1) + M2C_FIELD(temp_12, u8 *, 1) + (M2C_FIELD(temp_11_3, u8 *, 1) + M2C_FIELD(temp_12_2, u8 *, 1))) >> 2);
                        }
                    }
                    M2C_FIELD(var_14, u8 *, 0) = var_13;
                    M2C_FIELD(var_14, u8 *, 1) = var_8;
                    var_19 += 1;
                    M2C_FIELD(var_14, u8 *, 2) = var_9;
                    M2C_FIELD(var_14, s8 *, 3) = -1;
                    var_20 += spC;
                    var_14 += sp1C;
                } while (var_19 < var_25);
            }
            var_22 += 1;
            var_16 += var_30;
            var_23 += sp10;
        } while (var_22 < var_18);
    }
}
