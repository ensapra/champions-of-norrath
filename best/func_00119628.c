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

void func_00119628(s32 arg0, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg_sp0, void *arg_sp8, s32 arg_sp10) {
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
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 var_15;
    s32 var_16;
    s32 var_17;
    s32 var_18;
    s32 var_19;
    s32 var_20;
    s32 var_21;
    s32 var_23;
    s32 var_24;
    s32 var_30;
    s32 var_4;
    s32 var_5;
    s32 var_5_2;
    void *temp_14;
    void *temp_14_2;
    void *temp_2_4;
    void *temp_2_5;
    void *var_22;
    void *var_25;

    sp8 = arg3;
    sp0 = arg0;
    sp4 = arg2;
    spC = arg4;
    sp14 = ((arg5 - sp8) - 1) << 0xA;
    sp18 = ((arg6 - arg4) - 1) << 0xA;
    sp24 = arg6 - 2;
    sp20 = arg5 - 2;
    sp10 = (arg0 * 2) + sp0;
    switch (arg_sp10) {                             /* irregular */
    case 0x0:
        var_23 = arg7;
        var_22 = arg_sp8;
        var_4 = arg_sp0;
        var_19 = arg7 - 1;
        var_20 = arg_sp0 - 1;
        sp2C = var_23 * 4;
        sp30 = 4;
        break;
    case 0x5A:
        var_4 = arg7;
        var_19 = arg_sp0 - 1;
        var_23 = arg_sp0;
        sp30 = var_4 * -4;
        var_20 = arg7 - 1;
        sp2C = 4;
        var_22 = arg_sp8 + (var_4 * var_19 * 4);
        break;
    default:
        var_20 = arg7 - 1;
        var_4 = arg7;
        var_23 = arg_sp0;
        var_22 = arg_sp8 + (var_20 * 4);
        sp2C = -4;
        sp30 = var_4 * 4;
        var_19 = arg_sp0 - 1;
        break;
    case 0xB4:
        var_23 = arg7;
        var_4 = arg_sp0;
        var_20 = arg_sp0 - 1;
        sp2C = var_23 * -4;
        var_19 = arg7 - 1;
        sp30 = -4;
        var_22 = (arg_sp8 + (var_23 * var_4 * 4)) - 4;
        break;
    }
    sp1C = 0;
    if (var_4 > 0) {
        var_30 = var_4;
        do {
            temp_lo = sp1C / var_20;
            temp_2 = temp_lo >> 0xA;
            var_5 = spC + temp_2;
            var_16 = temp_lo - (temp_2 << 0xA);
            var_17 = 0x400 - var_16;
            if (sp24 < var_5) {
                var_5 = sp24;
                var_16 = 0x400;
                var_17 = 0;
            }
            var_21 = 0;
            var_25 = var_22;
            sp28 = sp0 * var_5;
            if (var_23 > 0) {
                var_18 = var_23;
                do {
                    temp_lo_2 = var_21 / var_19;
                    var_21 += sp14;
                    temp_2_2 = temp_lo_2 >> 0xA;
                    var_5_2 = sp8 + temp_2_2;
                    var_24 = temp_lo_2 - (temp_2_2 << 0xA);
                    var_15 = 0x400 - var_24;
                    if (sp20 < var_5_2) {
                        var_24 = 0x400;
                        var_15 = 0;
                        var_5_2 = sp20;
                    }
                    var_18 -= 1;
                    temp_2_3 = sp28 + var_5_2;
                    temp_2_4 = sp4 + temp_2_3 + (temp_2_3 * 2);
                    temp_14 = temp_2_4 + 3;
                    temp_2_5 = temp_2_4 + sp10;
                    temp_14_2 = temp_2_5 + 3;
                    M2C_FIELD(var_25, s8 *, 3) = -1;
                    M2C_FIELD(var_25, s8 *, 0) = (s8) ((s32) ((((M2C_FIELD(temp_2_4, u8 *, 0) * var_15) + (M2C_FIELD(temp_2_4, u8 *, 3) * var_24)) * var_17) + (((M2C_FIELD(temp_2_5, u8 *, 0) * var_15) + (M2C_FIELD(temp_2_5, u8 *, 3) * var_24)) * var_16)) >> 0x14);
                    M2C_FIELD(var_25, s8 *, 2) = (s8) ((s32) ((((M2C_FIELD(temp_2_4, u8 *, 2) * var_15) + (M2C_FIELD(temp_14, u8 *, 2) * var_24)) * var_17) + (((M2C_FIELD(temp_2_5, u8 *, 2) * var_15) + (M2C_FIELD(temp_14_2, u8 *, 2) * var_24)) * var_16)) >> 0x14);
                    M2C_FIELD(var_25, s8 *, 1) = (s8) ((s32) ((((M2C_FIELD(temp_2_4, u8 *, 1) * var_15) + (M2C_FIELD(temp_14, u8 *, 1) * var_24)) * var_17) + (((M2C_FIELD(temp_2_5, u8 *, 1) * var_15) + (M2C_FIELD(temp_14_2, u8 *, 1) * var_24)) * var_16)) >> 0x14);
                    var_25 += sp30;
                } while (var_18 != 0);
            }
            var_30 -= 1;
            var_22 += sp2C;
            sp1C += sp18;
        } while (var_30 != 0);
    }
}
