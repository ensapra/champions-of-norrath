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

void func_00119E20(s32 arg0, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg_sp0, void *arg_sp8, s32 arg_sp10) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 temp_22;
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_lo;
    s32 var_14;
    s32 var_15;
    s32 var_16;
    s32 var_17;
    s32 var_18;
    s32 var_19;
    s32 var_21;
    s32 var_25;
    s32 var_30;
    s32 var_4;
    void *temp_12;
    void *temp_12_2;
    void *temp_2_4;
    void *temp_2_5;
    void *var_13;
    void *var_24;

    sp8 = arg3;
    sp0 = arg0;
    sp4 = arg2;
    temp_22 = arg5 - 2;
    spC = arg4;
    sp14 = ((arg5 - sp8) - 1) << 0xA;
    sp18 = ((arg6 - arg4) - 1) << 0xA;
    sp1C = arg6 - 2;
    sp10 = (arg0 * 2) + sp0;
    switch (arg_sp10) {                             /* irregular */
    case 0x0:
        var_17 = arg7;
        var_4 = arg_sp0;
        var_24 = arg_sp8;
        var_15 = arg7 - 1;
        var_25 = arg_sp0 - 1;
        var_21 = var_17 * 4;
        var_30 = 4;
        break;
    case 0x5A:
        var_4 = arg7;
        var_15 = arg_sp0 - 1;
        var_17 = arg_sp0;
        var_30 = var_4 * -4;
        var_25 = arg7 - 1;
        var_21 = 4;
        var_24 = arg_sp8 + (var_4 * var_15 * 4);
        break;
    default:
        var_25 = arg7 - 1;
        var_4 = arg7;
        var_17 = arg_sp0;
        var_24 = arg_sp8 + (var_25 * 4);
        var_15 = arg_sp0 - 1;
        var_21 = -4;
        var_30 = var_4 * 4;
        break;
    case 0xB4:
        var_17 = arg7;
        var_4 = arg_sp0;
        var_21 = var_17 * -4;
        var_15 = arg7 - 1;
        var_25 = arg_sp0 - 1;
        var_30 = -4;
        var_24 = (arg_sp8 + (var_17 * var_4 * 4)) - 4;
        break;
    }
    var_19 = 0;
    if (var_4 > 0) {
        var_18 = var_4;
        do {
            var_16 = 0;
            var_13 = var_24;
            temp_2 = spC + ((s32) (var_19 / var_25) >> 0xA);
            if (var_17 > 0) {
                var_14 = var_17;
                do {
                    temp_lo = var_16 / var_15;
                    var_14 -= 1;
                    var_16 += sp14;
                    temp_2_2 = sp8 + (temp_lo >> 0xA);
                    temp_2_3 = (sp0 * ((sp1C < temp_2) ? sp1C : temp_2)) + ((temp_22 < temp_2_2) ? temp_22 : temp_2_2);
                    temp_2_4 = sp4 + temp_2_3 + (temp_2_3 * 2);
                    temp_12 = temp_2_4 + 3;
                    temp_2_5 = temp_2_4 + sp10;
                    temp_12_2 = temp_2_5 + 3;
                    M2C_FIELD(var_13, s8 *, 0) = (s8) ((s32) (M2C_FIELD(temp_2_4, u8 *, 0) + M2C_FIELD(temp_2_4, u8 *, 3) + (M2C_FIELD(temp_2_5, u8 *, 0) + M2C_FIELD(temp_2_5, u8 *, 3))) >> 2);
                    M2C_FIELD(var_13, s8 *, 2) = (s8) ((s32) (M2C_FIELD(temp_2_4, u8 *, 2) + M2C_FIELD(temp_12, u8 *, 2) + (M2C_FIELD(temp_2_5, u8 *, 2) + M2C_FIELD(temp_12_2, u8 *, 2))) >> 2);
                    M2C_FIELD(var_13, s8 *, 1) = (s8) ((s32) (M2C_FIELD(temp_2_4, u8 *, 1) + M2C_FIELD(temp_12, u8 *, 1) + (M2C_FIELD(temp_2_5, u8 *, 1) + M2C_FIELD(temp_12_2, u8 *, 1))) >> 2);
                    M2C_FIELD(var_13, s8 *, 3) = -1;
                    var_13 += var_30;
                } while (var_14 != 0);
            }
            var_18 -= 1;
            var_24 += var_21;
            var_19 += sp18;
        } while (var_18 != 0);
    }
}
