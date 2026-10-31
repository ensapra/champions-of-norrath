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

s32 func_002FB680(s64, s64, s64, s64, s64, s32);    /* extern */
s64 func_002FB908(s32, s32);                        /* extern */
extern M2C_UNK D_0047CDA0;

s64 func_002F2150(s64 arg0, s64 arg1) {
    s32 temp_11;
    s32 temp_2;
    s32 temp_3;
    s32 temp_3_2;
    s32 temp_4_2;
    s32 temp_5;
    s32 temp_5_2;
    s32 temp_5_3;
    s32 var_10;
    s32 var_11;
    s32 var_14;
    s32 var_2;
    s32 var_2_3;
    s32 var_2_5;
    s32 var_4;
    s32 var_4_2;
    s32 var_5;
    s32 var_6_2;
    s32 var_9_2;
    s64 temp_4;
    s64 var_12;
    s64 var_2_2;
    s64 var_2_4;
    s64 var_6;
    s64 var_9;
    u32 temp_13;
    u32 temp_2_2;
    u32 temp_2_3;
    u32 temp_2_4;
    u32 temp_2_5;
    u32 var_3;

    var_6 = arg0;
    var_9 = (s64) (var_6 << 0x20) >> 0x20;
    temp_4 = var_6 >> 0x20;
    var_12 = (s64) (arg1 << 0x20) >> 0x20;
    temp_13 = temp_4 & 0x80000000;
    temp_11 = (arg1 >> 0x20) & 0x7FFFFFFF;
    temp_4_2 = temp_4 ^ temp_13;
    if (((temp_11 | var_12) != 0) && (temp_4_2 <= 0x7FEFFFFF)) {
        if ((u32) (temp_11 | ((u32) (var_12 | -var_12) >> 0x1F)) <= 0x7FF00000U) {
            if (temp_11 >= temp_4_2) {
                if ((temp_4_2 >= temp_11) && ((u32) var_9 >= (u32) var_12)) {
                    var_3 = temp_13 >> 0x1F;
                    if (var_9 != var_12) {
                        goto block_11;
                    }
                    goto block_64;
                }
                goto block_68;
            }
block_11:
            var_6_2 = (temp_4_2 >> 0x14) - 0x3FF;
            if (temp_4_2 <= 0xFFFFF) {
                var_2 = temp_4_2 << 0xB;
                if (temp_4_2 == 0) {
                    var_6_2 = -0x413;
                    var_2_2 = var_9;
                    if (var_9 > 0) {
                        do {
                            var_2_2 *= 2;
                            var_6_2 -= 1;
                        } while (var_2_2 > 0);
                    }
                } else {
                    var_6_2 = -0x3FE;
                    if (var_2 > 0) {
                        do {
                            var_2 *= 2;
                            var_6_2 -= 1;
                        } while (var_2 > 0);
                    }
                }
            }
            var_10 = (temp_11 >> 0x14) - 0x3FF;
            if (temp_11 <= 0xFFFFF) {
                var_2_3 = temp_11 << 0xB;
                if (temp_11 == 0) {
                    var_10 = -0x413;
                    var_2_4 = var_12;
                    if (var_12 > 0) {
                        do {
                            var_2_4 *= 2;
                            var_10 -= 1;
                        } while (var_2_4 > 0);
                    }
                } else {
                    var_10 = -0x3FE;
                    if (var_2_3 > 0) {
                        do {
                            var_2_3 *= 2;
                            var_10 -= 1;
                        } while (var_2_3 > 0);
                    }
                }
            }
            if (var_6_2 >= -0x3FE) {
                var_4 = (temp_4_2 & 0xFFFFF) | 0x100000;
            } else {
                temp_5 = -0x3FE - var_6_2;
                if (temp_5 >= 0x20) {
                    var_4 = var_9 << temp_5;
                    var_9 = 0;
                } else {
                    temp_2_2 = (u32) var_9 >> -temp_5;
                    var_9 <<= temp_5;
                    var_4 = (temp_4_2 << temp_5) | temp_2_2;
                }
            }
            var_14 = var_10 < -0x3FE;
            if (var_14 == 0) {
                var_11 = (temp_11 & 0xFFFFF) | 0x100000;
            } else {
                temp_5_2 = -0x3FE - var_10;
                if (temp_5_2 >= 0x20) {
                    var_11 = var_12 << temp_5_2;
                    var_12 = 0;
                } else {
                    temp_2_3 = (u32) var_12 >> -temp_5_2;
                    var_12 <<= temp_5_2;
                    var_11 = (temp_11 << temp_5_2) | temp_2_3;
                }
            }
            var_5 = (var_6_2 - var_10) - 1;
            var_2_5 = (u32) var_9 < (u32) var_12;
            if (var_5 != -1) {
loop_43:
                temp_3 = (var_4 - var_11) - var_2_5;
                temp_2_4 = var_9 - var_12;
                if (temp_3 < 0) {
                    temp_2_5 = (u32) var_9 >> 0x1F;
                    var_9 *= 2;
                    var_4 = (var_4 * 2) + temp_2_5;
                    goto block_47;
                }
                var_4 = (temp_3 * 2) + (temp_2_4 >> 0x1F);
                if ((temp_3 | temp_2_4) != 0) {
                    var_9 = temp_2_4 * 2;
block_47:
                    var_5 -= 1;
                    var_2_5 = (u32) var_9 < (u32) var_12;
                    if (var_5 == -1) {
                        goto block_48;
                    }
                    goto loop_43;
                }
                var_3 = temp_13 >> 0x1F;
                goto block_64;
            }
block_48:
            temp_3_2 = (var_4 - var_11) - var_2_5;
            if (temp_3_2 >= 0) {
                var_4 = temp_3_2;
                var_9 -= var_12;
            }
            var_3 = temp_13 >> 0x1F;
            if ((var_4 | var_9) != 0) {
                if (var_4 <= 0xFFFFF) {
                    do {
                        var_4 = (var_4 * 2) + ((u32) var_9 >> 0x1F);
                        var_10 -= 1;
                        var_9 *= 2;
                    } while (var_4 <= 0xFFFFF);
                    var_14 = var_10 < -0x3FE;
                }
                if (var_14 == 0) {
                    var_6 = (((M2C_ERROR(/* Read from unset register $t8 */) & (0xFFFF0000U >> 0x20)) | (((var_4 + 0xFFF00000) | ((var_10 + 0x3FF) << 0x14) | temp_13) << 0x20)) & (-1 << 0x20)) | ((u64) (var_9 << 0x20) >> 0x20);
                } else {
                    temp_5_3 = -0x3FE - var_10;
                    if (temp_5_3 < 0x15) {
                        var_4_2 = var_4 >> temp_5_3;
                        var_9_2 = ((u32) var_9 >> temp_5_3) | (var_4 << -temp_5_3);
                    } else if (temp_5_3 >= 0x20) {
                        var_9_2 = var_4 >> temp_5_3;
                        var_4_2 = (s32) temp_13;
                    } else {
                        var_4_2 = (s32) temp_13;
                        var_9_2 = (var_4 << -temp_5_3) | ((u32) var_9 >> temp_5_3);
                    }
                    var_6 = (((M2C_ERROR(/* Read from unset register $t8 */) & (0xFFFF0000U >> 0x20)) | ((var_4_2 | temp_13) << 0x20)) & (-1 << 0x20)) | ((u64) ((s64) var_9_2 << 0x20) >> 0x20);
                }
block_68:
                return var_6;
            }
block_64:
            return *(&D_0047CDA0 + (var_3 * 8));
        }
        goto block_5;
    }
block_5:
    temp_2 = func_002FB680(var_6, var_6, var_9, var_12, var_9, temp_11);
    return func_002FB908(temp_2, temp_2);
}
