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

u8 *xmlParseName();                                 /* extern */
extern u8 *D_011AFFE0;
extern M2C_UNK D_011D7448;
extern M2C_UNK D_011D7488;
extern M2C_UNK D_011D74A0;

u8 *xmlParsePITarget(void *arg0) {
    M2C_UNK (*temp_3_5)(s32, M2C_UNK *, s32, u8 **, M2C_UNK);
    M2C_UNK (*var_2)(s32, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK *var_5;
    s32 var_6;
    u8 **var_7;
    u8 *temp_2;
    u8 *var_4;
    u8 *var_5_2;
    u8 temp_2_2;
    u8 temp_3;
    u8 temp_3_4;
    u8 temp_4;
    u8 temp_5;
    void *temp_2_3;
    void *temp_3_2;
    void *temp_3_3;

    temp_2 = xmlParseName();
    if (temp_2 != NULL) {
        temp_5 = M2C_FIELD(temp_2, u8 *, 0);
        if (((temp_5 == 0x78) || (temp_5 == 0x58)) && ((temp_4 = M2C_FIELD(temp_2, u8 *, 1), var_7 = (u8 **)0x6D, (temp_4 == 0x6D)) || (temp_4 == 0x4D)) && ((temp_3 = M2C_FIELD(temp_2, u8 *, 2), var_6 = 0x6C, (temp_3 == 0x6C)) || (temp_3 == 0x4C))) {
            if (temp_5 != 0x78) {
                goto block_19;
            }
            if ((temp_4 == 0x6D) && (temp_3 == 0x6C)) {
                if (M2C_FIELD(temp_2, u8 *, 3) == 0) {
                    temp_3_2 = M2C_FIELD(arg0, void **, 0);
                    M2C_FIELD(arg0, s32 *, 0x60) = 0x40;
                    if (temp_3_2 != NULL) {
                        var_2 = M2C_FIELD(temp_3_2, M2C_UNK (**)(s32, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK), 0x58);
                        if (var_2 != NULL) {
                            var_5 = &D_011D7448;
                            goto block_16;
                        }
                    }
                    goto block_17;
                }
                goto block_24;
            }
block_19:
            if (M2C_FIELD(temp_2, u8 *, 3) == 0) {
                temp_3_3 = M2C_FIELD(arg0, void **, 0);
                M2C_FIELD(arg0, s32 *, 0x60) = 0x40;
                if (temp_3_3 != NULL) {
                    var_2 = M2C_FIELD(temp_3_3, M2C_UNK (**)(s32, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK), 0x58);
                    if (var_2 != NULL) {
                        var_5 = &D_011D7488;
block_16:
                        var_2(M2C_FIELD(arg0, s32 *, 4), var_5, 0x6C, 0x6D, 0x78);
                    }
                }
block_17:
                M2C_FIELD(arg0, s32 *, 0xC) = 0;
                M2C_FIELD(arg0, s32 *, 0xD4) = 1;
            } else {
block_24:
                if (D_011AFFE0 != NULL) {
                    var_7 = &D_011AFFE0;
loop_26:
                    var_4 = *var_7;
                    var_5_2 = temp_2;
                    var_6 = 1;
                    if (temp_2 != var_4) {
                        var_6 = 0;
                        if (var_4 != NULL) {
loop_28:
                            temp_2_2 = *var_5_2;
                            var_5_2 += 1;
                            temp_3_4 = *var_4;
                            var_4 += 1;
                            var_6 = 0;
                            if (temp_2_2 == temp_3_4) {
                                if (temp_2_2 == 0) {
                                    var_6 = 1;
                                } else {
                                    goto loop_28;
                                }
                            }
                        }
                    }
                    if (var_6 == 0) {
                        var_7 += 4;
                        if (*var_7 == NULL) {
                            goto block_33;
                        }
                        goto loop_26;
                    }
                } else {
block_33:
                    temp_2_3 = M2C_FIELD(arg0, void **, 0);
                    if (temp_2_3 != NULL) {
                        temp_3_5 = M2C_FIELD(temp_2_3, M2C_UNK (**)(s32, M2C_UNK *, s32, u8 **, M2C_UNK), 0x54);
                        if (temp_3_5 != NULL) {
                            M2C_FIELD(arg0, s32 *, 0x60) = 0x40;
                            temp_3_5(M2C_FIELD(arg0, s32 *, 4), &D_011D74A0, var_6, var_7, 0x78);
                        }
                    }
                }
            }
        }
    }
    return temp_2;
}
