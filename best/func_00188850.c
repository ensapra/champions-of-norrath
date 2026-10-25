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

s32 func_00188628();                                /* extern */

s32 func_00188850(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_3;
    s32 temp_4_2;
    s32 temp_4_3;
    s32 temp_5;
    s32 temp_6;
    s32 temp_7;
    s32 temp_7_2;
    s32 temp_8;
    s32 var_2;
    s32 var_2_2;
    s32 var_3;
    s32 var_5;
    u8 temp_4;
    u8 var_10;
    u8 var_11;
    u8 var_12;
    u8 var_9;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_9;

    var_2 = func_00188628();
    temp_7 = var_2;
    if (temp_7 != 0) {
        temp_4 = M2C_FIELD(arg0, u8 *, 0x13);
        var_2_2 = arg1 * 0x10;
        switch (temp_4) {                           /* irregular */
        case 5:
            var_2_2 = arg1 << 8;
            /* fallthrough */
        case 4:
            var_5 = var_2_2 + arg2;
            var_2 = 0;
            if ((s32) M2C_FIELD(arg0, u16 *, 0xE) >= var_5) {
                temp_4_2 = (M2C_FIELD(arg0, u8 *, 0x12) << 8) | temp_4;
                if (temp_4_2 != 0x305) {
                    if (temp_4_2 < 0x306) {
                        if (temp_4_2 != 0x105) {
                            var_3 = var_5 & 0x1F;
                            if (temp_4_2 != 0x205) {

                            } else {
                                goto block_20;
                            }
                        } else {
                            goto block_19;
                        }
                    } else if (temp_4_2 != 0x4204) {
                        if (temp_4_2 < 0x4205) {
                            var_3 = var_5 & 0x1F;
                            if (temp_4_2 != 0x4104) {

                            } else {
                                goto block_20;
                            }
                        } else if (temp_4_2 == 0x4304) {
                            goto block_19;
                        }
                    } else {
                        goto block_19;
                    }
                } else {
block_19:
                    var_3 = var_5 & 0x1F;
block_20:
                    if (var_3 >= 8) {
                        if (var_3 < 0x10) {
                            var_5 += 8;
                        } else {
                            var_5 = (var_3 < 0x18) ? (var_5 - 8) : var_5;
                        }
                    }
                }
                temp_4_3 = M2C_FIELD(arg0, u8 *, 0x12) & 0x3F;
                if (temp_4_3 != 2) {
                    if (temp_4_3 < 3) {
                        if (temp_4_3 != 1) {
                            var_12 = 0;
                            goto block_35;
                        }
                        temp_9 = (var_5 * 2) + temp_7;
                        temp_7_2 = ((u32) arg3 >> 3) & 0x1F;
                        temp_8 = ((u32) arg3 >> 6) & 0x3E0;
                        temp_2 = (M2C_FIELD(temp_9, u8 *, 1) << 8) | M2C_FIELD(temp_9, u8 *, 0);
                        temp_3 = temp_2 >> 2;
                        temp_5 = M2C_FIELD(temp_9, u8 *, 0) * 8;
                        temp_6 = (temp_2 >> 8) & 0x80;
                        temp_2_2 = temp_2 >> 7;
                        M2C_FIELD(temp_9, u8 *, 0) = (u8) (temp_7_2 | temp_8);
                        var_9 = temp_2_2 & 0xF8;
                        M2C_FIELD(temp_9, u8 *, 1) = (u8) ((s32) (((arg3 < 0) << 0xF) | temp_7_2 | (temp_8 | (((u32) arg3 >> 9) & 0x7C00))) >> 8);
                        var_10 = temp_6 & 0xFF;
                        var_12 = temp_5 & 0xFF;
                        var_11 = temp_3 & 0xF8;
                    } else if (temp_4_3 != 3) {
                        var_12 = 0;
block_35:
                        var_11 = 0;
                        var_9 = 0;
                        var_10 = 0;
                    } else {
                        temp_2_3 = (var_5 * 4) + temp_7;
                        var_12 = M2C_FIELD(temp_2_3, u8 *, 0);
                        var_11 = M2C_FIELD(temp_2_3, u8 *, 1);
                        var_9 = M2C_FIELD(temp_2_3, u8 *, 2);
                        var_10 = M2C_FIELD(temp_2_3, u8 *, 3);
                        M2C_FIELD(temp_2_3, u8 *, 0) = (u8) arg3;
                        M2C_FIELD(temp_2_3, u8 *, 1) = (u8) ((u32) arg3 >> 8);
                        M2C_FIELD(temp_2_3, u8 *, 2) = (u8) ((u32) arg3 >> 0x10);
                        M2C_FIELD(temp_2_3, u8 *, 3) = (u8) ((u32) arg3 >> 0x18);
                    }
                } else {
                    temp_2_4 = (var_5 * 3) + temp_7;
                    var_10 = 0x80;
                    var_12 = M2C_FIELD(temp_2_4, u8 *, 0);
                    var_11 = M2C_FIELD(temp_2_4, u8 *, 1);
                    var_9 = M2C_FIELD(temp_2_4, u8 *, 2);
                    M2C_FIELD(temp_2_4, u8 *, 0) = (u8) arg3;
                    M2C_FIELD(temp_2_4, u8 *, 1) = (u8) ((u32) arg3 >> 8);
                    M2C_FIELD(temp_2_4, u8 *, 2) = (u8) ((u32) arg3 >> 0x10);
                }
                var_2 = (var_10 << 0x18) | var_12 | ((var_9 << 8) | (var_11 << 0x10));
            }
            /* Duplicate return node #37. Try simplifying control flow for better match */
            return var_2;
        default:
            return 0;
        }
    } else {
        return var_2;
    }
}
