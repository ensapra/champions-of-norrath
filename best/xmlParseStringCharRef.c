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

extern M2C_UNK D_011D6D08;
extern M2C_UNK D_011D6D28;
extern M2C_UNK D_011D6D50;
extern M2C_UNK D_011D6D88;

s32 xmlParseStringCharRef(void *arg0, u8 **arg1) {
    M2C_UNK (*temp_2_2)(s32, M2C_UNK *, s32);
    M2C_UNK (*temp_2_5)(s32, M2C_UNK *, s32);
    M2C_UNK (*var_2_3)(s32, M2C_UNK *, s32);
    M2C_UNK *var_5;
    s32 var_2;
    s32 var_2_2;
    s32 var_2_4;
    s32 var_6;
    u32 var_3;
    u8 *temp_4;
    u8 *var_17;
    u8 temp_16;
    u8 temp_5;
    u8 var_16;
    void *temp_2;
    void *temp_2_3;
    void *temp_2_4;

    var_6 = 0;
    if (arg1 != NULL) {
        temp_4 = *arg1;
        if (temp_4 != NULL) {
            temp_16 = M2C_FIELD(temp_4, u8 *, 0);
            if (temp_16 != 0x26) {
                goto block_46;
            }
            temp_5 = M2C_FIELD(temp_4, u8 *, 1);
            if ((temp_5 == 0x23) && (M2C_FIELD(temp_4, u8 *, 2) == 0x78)) {
                var_17 = temp_4 + 3;
                var_16 = M2C_FIELD(temp_4, u8 *, 3);
                if (var_16 != 0x3B) {
                    var_2_2 = var_16 + 0xD0;
loop_9:
                    if ((u32) (var_2_2 & 0xFF) < 0xAU) {
                        var_6 = ((var_6 * 0x10) + var_16) - 0x30;
                        goto block_20;
                    }
                    if ((u32) ((var_16 + 0x9F) & 0xFF) < 6U) {
                        var_6 = ((var_6 * 0x10) + var_16) - 0x57;
                        goto block_20;
                    }
                    if ((u32) ((var_16 + 0xBF) & 0xFF) >= 6U) {
                        temp_2 = M2C_FIELD(arg0, void **, 0);
                        M2C_FIELD(arg0, s32 *, 0x60) = 6;
                        if (temp_2 != NULL) {
                            var_2_3 = M2C_FIELD(temp_2, M2C_UNK (**)(s32, M2C_UNK *, s32), 0x58);
                            if (var_2_3 != NULL) {
                                var_5 = &D_011D6D50;
                                goto block_39;
                            }
                        }
                        goto block_40;
                    }
                    var_6 = ((var_6 * 0x10) + var_16) - 0x37;
block_20:
                    var_17 += 1;
                    var_16 = *var_17;
                    if (var_16 != 0x3B) {
                        var_2_2 = var_16 + 0xD0;
                        goto loop_9;
                    }
                    goto block_43;
                }
                goto block_44;
                goto block_50;
            }
            if (temp_16 != 0x26) {
                goto block_46;
            }
            if ((temp_5 & 0xFF) != 0x23) {
block_46:
                M2C_FIELD(arg0, s32 *, 0x60) = 8;
                if (M2C_FIELD(arg0, void **, 0) != NULL) {
                    temp_2_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(s32, M2C_UNK *, s32), 0x58);
                    if (temp_2_2 != NULL) {
                        temp_2_2(M2C_FIELD(arg0, s32 *, 4), &D_011D6D08, 0);
                    }
                }
                goto block_63;
            }
            var_17 = temp_4 + 2;
            var_16 = M2C_FIELD(temp_4, u8 *, 2);
            if (var_16 != 0x3B) {
                var_2_4 = var_16 + 0xD0;
loop_32:
                if ((u32) (var_2_4 & 0xFF) >= 0xAU) {
                    temp_2_3 = M2C_FIELD(arg0, void **, 0);
                    M2C_FIELD(arg0, s32 *, 0x60) = 7;
                    if (temp_2_3 != NULL) {
                        var_2_3 = M2C_FIELD(temp_2_3, M2C_UNK (**)(s32, M2C_UNK *, s32), 0x58);
                        if (var_2_3 != NULL) {
                            var_5 = &D_011D6D88;
block_39:
                            var_2_3(M2C_FIELD(arg0, s32 *, 4), var_5, var_6);
                        }
                    }
block_40:
                    M2C_FIELD(arg0, s32 *, 0xD4) = 1;
                    var_6 = 0;
                    M2C_FIELD(arg0, s32 *, 0xC) = 0;
                } else {
                    var_6 = ((var_6 * 0xA) + var_16) - 0x30;
                    var_17 += 1;
                    var_16 = *var_17;
                    var_2_4 = var_16 + 0xD0;
                    if (var_16 != 0x3B) {
                        goto loop_32;
                    }
                }
block_43:
                var_3 = var_6 - 0x20;
                if (var_16 == 0x3B) {
                    goto block_44;
                }
            } else {
block_44:
                var_17 += 1;
                var_3 = var_6 - 0x20;
            }
block_50:
            *arg1 = var_17;
            if (var_3 > 0xD7DFU) {
                var_2 = var_6;
                if (var_6 != 9) {
                    var_2 = var_6;
                    if (var_6 != 0xA) {
                        var_2 = var_6;
                        if (var_6 != 0xD) {
                            var_2 = var_6;
                            if ((u32) (var_6 + 0xFFFF2000) >= 0x1FFEU) {
                                if ((u32) (var_6 + 0xFFFF0000) > 0xFFFFFU) {
                                    temp_2_4 = M2C_FIELD(arg0, void **, 0);
                                    M2C_FIELD(arg0, s32 *, 0x60) = 9;
                                    if (temp_2_4 != NULL) {
                                        temp_2_5 = M2C_FIELD(temp_2_4, M2C_UNK (**)(s32, M2C_UNK *, s32), 0x58);
                                        if (temp_2_5 != NULL) {
                                            temp_2_5(M2C_FIELD(arg0, s32 *, 4), &D_011D6D28, var_6);
                                        }
                                    }
block_63:
                                    M2C_FIELD(arg0, s32 *, 0xC) = 0;
                                    M2C_FIELD(arg0, s32 *, 0xD4) = 1;
                                    goto block_64;
                                }
                                goto block_58;
                            }
                        }
                    }
                }
                /* Duplicate return node #65. Try simplifying control flow for better match */
                return var_2;
            }
block_58:
            return var_6;
        }
    }
block_64:
    var_2 = 0;
    return var_2;
}
