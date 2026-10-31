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

s32 xmlCheckLanguageID(void *arg0) {
    s32 var_2;
    s32 var_2_3;
    s32 var_3;
    u8 *var_4;
    u8 temp_3;
    u8 temp_3_2;
    u8 temp_5;
    u8 temp_5_2;
    u8 temp_5_3;
    u8 temp_5_4;
    u8 temp_5_5;
    u8 var_2_2;
    u8 var_5;
    void *temp_4;

    var_2 = 0;
    if (arg0 != NULL) {
        temp_5 = M2C_FIELD(arg0, u8 *, 0);
        var_3 = temp_5 & 0xFF;
        if ((var_3 == 0x69) || (var_3 == 0x49)) {
            if (M2C_FIELD(arg0, u8 *, 1) != 0x2D) {
                var_3 = temp_5 & 0xFF;
                goto block_14;
            }
            var_4 = arg0 + 2;
            temp_5_2 = M2C_FIELD(arg0, u8 *, 2);
            if ((u32) ((temp_5_2 + 0xBF) & 0xFF) >= 0x1AU) {
                var_2_2 = temp_5_2;
                if ((u32) ((temp_5_2 + 0x9F) & 0xFF) < 0x1AU) {
                    goto loop_9;
                }
            } else {
                do {
loop_9:
                    var_4 += 1;
                    var_5 = *var_4;
                    if ((u32) ((var_5 + 0xBF) & 0xFF) < 0x1AU) {
                        goto loop_9;
                    }
                } while ((u32) ((var_5 + 0x9F) & 0xFF) < 0x1AU);
                goto block_35;
            }
            goto block_36;
        }
block_14:
        if ((var_3 == 0x78) || (var_2_3 = temp_5 + 0xBF, (var_3 == 0x58))) {
            var_2_3 = temp_5 + 0xBF;
            if (M2C_FIELD(arg0, u8 *, 1) == 0x2D) {
                var_4 = arg0 + 2;
                temp_5_3 = M2C_FIELD(arg0, u8 *, 2);
                if ((u32) ((temp_5_3 + 0xBF) & 0xFF) >= 0x1AU) {
                    var_2_2 = temp_5_3;
                    if ((u32) ((temp_5_3 + 0x9F) & 0xFF) < 0x1AU) {
                        goto loop_20;
                    }
                } else {
                    do {
loop_20:
                        var_4 += 1;
                        var_5 = *var_4;
                        if ((u32) ((var_5 + 0xBF) & 0xFF) < 0x1AU) {
                            goto loop_20;
                        }
                    } while ((u32) ((var_5 + 0x9F) & 0xFF) < 0x1AU);
                    goto block_35;
                }
                goto block_36;
            }
        }
        if (((u32) (var_2_3 & 0xFF) < 0x1AU) || (var_2 = 0, (((u32) ((temp_5 + 0x9F) & 0xFF) < 0x1AU) != 0))) {
            temp_4 = arg0 + 1;
            temp_3 = M2C_FIELD(arg0, u8 *, 1);
            if ((u32) ((temp_3 + 0xBF) & 0xFF) < 0x1AU) {
                var_4 = temp_4 + 1;
                goto block_34;
            }
            if ((u32) ((temp_3 + 0x9F) & 0xFF) < 0x1AU) {
                var_4 = temp_4 + 1;
block_34:
                var_5 = *var_4;
block_35:
                var_2_2 = var_5;
block_36:
                if (var_2_2 != 0) {
loop_38:
                    if (((var_2_2 & 0xFF) == 0x2D) && ((temp_3_2 = M2C_FIELD(var_4, u8 *, 1), (((u32) ((temp_3_2 + 0xBF) & 0xFF) < 0x1AU) != 0)) || ((u32) ((temp_3_2 + 0x9F) & 0xFF) < 0x1AU))) {
                        var_4 = var_4 + 1 + 1;
                        temp_5_4 = *var_4;
                        if (((u32) ((temp_5_4 + 0xBF) & 0xFF) < 0x1AU) || (var_2_2 = temp_5_4, (((u32) ((temp_5_4 + 0x9F) & 0xFF) < 0x1AU) != 0))) {
                            do {
loop_43:
                                var_4 += 1;
                                temp_5_5 = *var_4;
                                if ((u32) ((temp_5_5 + 0xBF) & 0xFF) < 0x1AU) {
                                    goto loop_43;
                                }
                            } while ((u32) ((temp_5_5 + 0x9F) & 0xFF) < 0x1AU);
                            var_2_2 = temp_5_5;
                        }
                        if (var_2_2 == 0) {
                            goto block_47;
                        }
                        goto loop_38;
                    }
                    /* Duplicate return node #32. Try simplifying control flow for better match */
                    return 0;
                }
block_47:
                var_2 = 1;
                /* Duplicate return node #48. Try simplifying control flow for better match */
                return var_2;
            }
            return 0;
        }
        /* Duplicate return node #48. Try simplifying control flow for better match */
        return var_2;
    }
    return var_2;
}
