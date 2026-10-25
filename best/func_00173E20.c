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

M2C_UNK func_00174230(void *, s16, s16, s16);       /* extern */
extern M2C_UNK func_001CE218;
extern M2C_UNK func_01000000;

void func_00173E20(s32 arg0, s16 arg2, s16 arg3, s16 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg_sp0) {
    s32 temp_11;
    s32 temp_11_2;
    s32 temp_6;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_lo_3;
    s32 temp_lo_4;
    s32 var_12;
    s32 var_12_2;
    s32 var_2_2;
    s32 var_2_3;
    s32 var_3_2;
    s32 var_4;
    s32 var_4_3;
    s32 var_4_4;
    s32 var_5_2;
    s32 var_5_3;
    s32 var_6;
    s32 var_6_2;
    s32 var_6_3;
    s32 var_6_5;
    s32 var_7;
    s64 temp_13;
    s64 var_2;
    s64 var_3;
    s64 var_3_3;
    s64 var_4_2;
    s64 var_5;
    s64 var_6_4;
    s64 var_7_2;
    void **temp_22;
    void *temp_3;

    temp_22 = (arg0 * 0x28) + (&func_01000000 + 0xEA1E0 + 0xC);
    func_00174230(*temp_22, arg2, arg3, arg4);
    temp_3 = &func_001CE218 + 0x2010;
    temp_6 = M2C_FIELD(temp_3, s32 *, 8);
    var_5 = (arg7 <= 0) ? 0 : (arg7 - 1);
    temp_13 = (arg_sp0 > 0) ? (arg_sp0 - 1) : 0;
    switch (temp_6) {                               /* irregular */
    case 0x2:
        var_6 = var_5 + 1;
        var_4 = temp_13 * arg4;
        if ((var_6 * arg3) >= 0xA01) {
            temp_lo = (s32) (arg3 + 0x9FF) / arg3;
            var_6 = temp_lo;
            var_5 = temp_lo - 1;
            var_4 = temp_13 * arg4;
        }
        temp_11 = arg3 * var_6;
        var_12 = var_4 + arg4;
        if (M2C_FIELD(temp_3, s32 *, 4) == 1) {
            var_7 = (var_5 << 0x17) | (temp_13 << 0x1B);
            var_5_2 = ((arg5 * var_6) + 0x27C) & 0xFFF;
            var_4_2 = ((arg6 + 0x32) & 0xFFF) << 0xC;
            var_3 = (temp_11 - 1) << 0x20;
            if (M2C_FIELD(&func_001CE218, s32 *, 0x2010) != 0) {
                var_3_2 = var_7 | var_3;
                var_2 = (var_12 * 2) - 1;
            } else {
block_15:
                var_2 = var_12 - 1;
                var_3_2 = var_7 | var_3;
            }
block_16:
            M2C_FIELD(*temp_22, s64 *, 0x18) = (s64) (var_3_2 | (var_5_2 | (var_2 << 0x2C)) | var_4_2);
        } else {
            M2C_FIELD(*temp_22, s64 *, 0x18) = (s64) ((var_5 << 0x17) | ((temp_11 - 1) << 0x20) | ((((arg5 * var_6) + 0x27C) & 0xFFF) | ((var_12 - 1) << 0x2C)) | ((temp_13 << 0x1B) | (((arg6 + 0x19) & 0xFFF) << 0xC)));
        }
        break;
    case 0x3:
        var_6_2 = var_5 + 1;
        var_4_3 = temp_13 * arg4;
        if ((var_6_2 * arg3) >= 0xA01) {
            temp_lo_2 = (s32) (arg3 + 0x9FF) / arg3;
            var_6_2 = temp_lo_2;
            var_5 = temp_lo_2 - 1;
            var_4_3 = temp_13 * arg4;
        }
        temp_11_2 = arg3 * var_6_2;
        var_12 = var_4_3 + arg4;
        if (M2C_FIELD(temp_3, s32 *, 4) == 1) {
            var_7 = (var_5 << 0x17) | (temp_13 << 0x1B);
            var_5_2 = ((arg5 * var_6_2) + 0x290) & 0xFFF;
            var_4_2 = ((arg6 + 0x48) & 0xFFF) << 0xC;
            var_3 = (temp_11_2 - 1) << 0x20;
            if (M2C_FIELD(&func_001CE218, s32 *, 0x2010) != 0) {
                var_3_2 = var_7 | var_3;
                var_2 = (var_12 * 2) - 1;
            } else {
                goto block_15;
            }
            goto block_16;
        }
        M2C_FIELD(*temp_22, s64 *, 0x18) = (s64) ((var_5 << 0x17) | ((temp_11_2 - 1) << 0x20) | ((((arg5 * ((s32) (temp_11_2 + 0x9FF) / temp_11_2)) + 0x290) & 0xFFF) | ((var_12 - 1) << 0x2C)) | ((temp_13 << 0x1B) | (((arg6 + 0x24) & 0xFFF) << 0xC)));
        break;
    case 0x3B:
        var_6_3 = var_5 + 1;
        var_2_2 = temp_13 + 1;
        if ((var_6_3 * arg3) >= 0x801) {
            temp_lo_3 = (s32) (arg3 + 0x7FF) / arg3;
            var_6_3 = temp_lo_3;
            var_5 = temp_lo_3 - 1;
            var_2_2 = temp_13 + 1;
        }
        var_12_2 = arg4 * var_2_2;
        var_3_3 = var_5 << 0x17;
        var_5_3 = (arg5 * var_6_3) + 0x244;
        var_7_2 = temp_13 << 0x1B;
        var_6_4 = (arg3 * var_6_3) - 1;
        var_4_4 = (arg6 * var_2_2) + 0x22;
block_28:
        M2C_FIELD(*temp_22, s64 *, 0x18) = (s64) (var_3_3 | (var_6_4 << 0x20) | ((var_5_3 & 0xFFF) | ((var_12_2 - 1) << 0x2C)) | (var_7_2 | ((var_4_4 & 0xFFF) << 0xC)));
        break;
    case 0x52:
        var_6_5 = var_5 + 1;
        var_2_3 = temp_13 + 1;
        if ((var_6_5 * arg3) >= 0x501) {
            temp_lo_4 = (s32) (arg3 + 0x4FF) / arg3;
            var_6_5 = temp_lo_4;
            var_5 = temp_lo_4 - 1;
            var_2_3 = temp_13 + 1;
        }
        var_12_2 = arg4 * var_2_3;
        var_3_3 = var_5 << 0x17;
        var_5_3 = (arg5 * var_6_5) + 0x12E;
        var_7_2 = temp_13 << 0x1B;
        var_6_4 = (arg3 * var_6_5) - 1;
        var_4_4 = (arg6 * var_2_3) + 0x18;
        goto block_28;
    }
}
