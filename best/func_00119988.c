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

void func_00119988(s32 arg0, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg_sp0, void *arg_sp8, s32 arg_sp10, s32 arg_sp18, s32 arg_sp20) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 temp_17;
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_2_4;
    s32 temp_2_5;
    s32 temp_5;
    s32 temp_7;
    s32 temp_7_2;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 var_15;
    s32 var_16;
    s32 var_18;
    s32 var_19;
    s32 var_20;
    s32 var_22;
    s32 var_24;
    s32 var_30;
    s32 var_5;
    s32 var_5_2;
    u8 var_13;
    u8 var_4;
    u8 var_6;
    void *temp_14;
    void *temp_14_2;
    void *temp_14_3;
    void *temp_8;
    void *temp_8_2;
    void *temp_8_3;
    void *temp_8_4;
    void *temp_8_5;
    void *temp_8_6;
    void *var_23;
    void *var_25;

    sp0 = arg0;
    sp18 = ((arg5 - arg3) - 1) << 0xA;
    sp14 = (arg0 * 2) + sp0;
    sp4 = arg3;
    sp8 = arg4;
    sp1C = ((arg6 - arg4) - 1) << 0xA;
    sp2C = arg6 - 2;
    sp28 = arg5 - 2;
    switch (arg_sp10) {                             /* irregular */
    case 0x0:
        var_20 = arg7;
        var_30 = arg_sp0;
        var_22 = arg_sp0 - 1;
        var_23 = arg_sp8;
        var_19 = arg7 - 1;
        sp30 = var_20 * 4;
        sp34 = 4;
        break;
    case 0x5A:
        var_30 = arg7;
        var_19 = arg_sp0 - 1;
        var_20 = arg_sp0;
        sp34 = var_30 * -4;
        var_22 = arg7 - 1;
        sp30 = 4;
        var_23 = arg_sp8 + (var_30 * var_19 * 4);
        break;
    default:
        var_22 = arg7 - 1;
        var_30 = arg7;
        var_23 = arg_sp8 + (var_22 * 4);
        sp30 = -4;
        var_20 = arg_sp0;
        sp34 = var_30 * 4;
        var_19 = arg_sp0 - 1;
        break;
    case 0xB4:
        var_20 = arg7;
        var_30 = arg_sp0;
        sp30 = var_20 * -4;
        var_19 = arg7 - 1;
        var_22 = arg_sp0 - 1;
        sp34 = -4;
        var_23 = (arg_sp8 + (var_20 * var_30 * 4)) - 4;
        break;
    }
    var_16 = 0;
    var_18 = 0x400;
    sp24 = 0;
    sp10 = 0;
    if (var_30 > 0) {
        do {
            var_5 = sp8 + sp10;
            if (arg_sp20 == 0) {
                temp_lo = sp24 / var_22;
                temp_2 = temp_lo >> 0xA;
                var_5 = sp8 + temp_2;
                var_16 = temp_lo - (temp_2 << 0xA);
                var_18 = 0x400 - var_16;
                if (sp2C < var_5) {
                    var_5 = sp2C;
                    var_16 = 0x400;
                    var_18 = 0;
                }
            }
            var_25 = var_23;
            sp20 = 0;
            temp_17 = sp0 * var_5;
            spC = 0;
            if (var_20 > 0) {
                do {
                    if (arg_sp18 != 0) {
                        temp_5 = sp4 + spC;
                        if (arg_sp20 != 0) {
                            temp_2_2 = temp_17 + temp_5;
                            temp_8 = arg2 + temp_2_2 + (temp_2_2 * 2);
                            var_13 = M2C_FIELD(temp_8, u8 *, 2);
                            var_6 = M2C_FIELD(temp_8, u8 *, 0);
                            var_4 = M2C_FIELD(temp_8, u8 *, 1);
                        } else {
                            temp_2_3 = temp_17 + temp_5;
                            temp_8_2 = arg2 + temp_2_3 + (temp_2_3 * 2);
                            temp_8_3 = temp_8_2 + sp14;
                            var_6 = (u8) ((s32) ((M2C_FIELD(temp_8_2, u8 *, 0) * var_18) + (M2C_FIELD(temp_8_3, u8 *, 0) * var_16)) >> 0xA);
                            var_13 = (u8) ((s32) ((M2C_FIELD(temp_8_2, u8 *, 2) * var_18) + (M2C_FIELD(temp_8_3, u8 *, 2) * var_16)) >> 0xA);
                            var_4 = (u8) ((s32) ((M2C_FIELD(temp_8_2, u8 *, 1) * var_18) + (M2C_FIELD(temp_8_3, u8 *, 1) * var_16)) >> 0xA);
                        }
                    } else {
                        temp_lo_2 = sp20 / var_19;
                        temp_2_4 = temp_lo_2 >> 0xA;
                        var_5_2 = sp4 + temp_2_4;
                        var_24 = temp_lo_2 - (temp_2_4 << 0xA);
                        var_15 = 0x400 - var_24;
                        if (sp28 < var_5_2) {
                            var_5_2 = sp28;
                            var_24 = 0x400;
                            var_15 = 0;
                        }
                        temp_2_5 = temp_17 + var_5_2;
                        if (arg_sp20 != 0) {
                            temp_8_4 = arg2 + temp_2_5 + (temp_2_5 * 2);
                            temp_14 = temp_8_4 + 3;
                            var_13 = (u8) ((s32) ((M2C_FIELD(temp_8_4, u8 *, 2) * var_15) + (M2C_FIELD(temp_14, u8 *, 2) * var_24)) >> 0xA);
                            var_6 = (u8) ((s32) ((M2C_FIELD(temp_8_4, u8 *, 0) * var_15) + (M2C_FIELD(temp_8_4, u8 *, 3) * var_24)) >> 0xA);
                            var_4 = (u8) ((s32) ((M2C_FIELD(temp_8_4, u8 *, 1) * var_15) + (M2C_FIELD(temp_14, u8 *, 1) * var_24)) >> 0xA);
                        } else {
                            temp_8_5 = arg2 + temp_2_5 + (temp_2_5 * 2);
                            temp_14_2 = temp_8_5 + 3;
                            temp_8_6 = temp_8_5 + sp14;
                            temp_14_3 = temp_8_6 + 3;
                            var_6 = (u8) ((s32) ((((M2C_FIELD(temp_8_5, u8 *, 0) * var_15) + (M2C_FIELD(temp_8_5, u8 *, 3) * var_24)) * var_18) + (((M2C_FIELD(temp_8_6, u8 *, 0) * var_15) + (M2C_FIELD(temp_8_6, u8 *, 3) * var_24)) * var_16)) >> 0x14);
                            var_13 = (u8) ((s32) ((((M2C_FIELD(temp_8_5, u8 *, 2) * var_15) + (M2C_FIELD(temp_14_2, u8 *, 2) * var_24)) * var_18) + (((M2C_FIELD(temp_8_6, u8 *, 2) * var_15) + (M2C_FIELD(temp_14_3, u8 *, 2) * var_24)) * var_16)) >> 0x14);
                            var_4 = (u8) ((s32) ((((M2C_FIELD(temp_8_5, u8 *, 1) * var_15) + (M2C_FIELD(temp_14_2, u8 *, 1) * var_24)) * var_18) + (((M2C_FIELD(temp_8_6, u8 *, 1) * var_15) + (M2C_FIELD(temp_14_3, u8 *, 1) * var_24)) * var_16)) >> 0x14);
                        }
                    }
                    temp_7_2 = spC + 1;
                    spC = temp_7_2;
                    M2C_FIELD(var_25, u8 *, 0) = var_6;
                    M2C_FIELD(var_25, u8 *, 1) = var_4;
                    sp20 += sp18;
                    M2C_FIELD(var_25, u8 *, 2) = var_13;
                    M2C_FIELD(var_25, s8 *, 3) = -1;
                    var_25 += sp34;
                } while (temp_7_2 < var_20);
            }
            temp_7 = sp10 + 1;
            var_23 += sp30;
            sp10 = temp_7;
            sp24 += sp1C;
        } while (temp_7 < var_30);
    }
}
