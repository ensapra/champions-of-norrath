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

s32 xmlStrEqual(s32, M2C_UNK *);                    /* extern */
s32 xmlStrcasecmp(s32, M2C_UNK *);                  /* extern */
u8 *xmlStrstr(s32, M2C_UNK *);                      /* extern */
extern M2C_UNK D_011D2730;
extern M2C_UNK D_011D2738;
extern M2C_UNK D_011D2740;
extern M2C_UNK D_011D2748;
extern M2C_UNK D_011D2758;
extern M2C_UNK D_011D2768;
extern M2C_UNK D_011D2770;
extern M2C_UNK D_011D2780;
extern M2C_UNK D_011D2790;
extern M2C_UNK D_011D27A0;
extern M2C_UNK D_011D27B0;
extern M2C_UNK D_011D27C0;

u8 *htmlGetMetaEncoding(void *arg0) {
    s32 temp_16;
    s32 temp_2;
    s32 temp_2_2;
    s32 var_19;
    s32 var_20;
    s32 var_4;
    u8 *temp_2_3;
    u8 *temp_2_4;
    u8 *temp_2_5;
    u8 *var_2;
    u8 *var_4_2;
    u8 *var_4_3;
    u8 temp_3;
    void *var_17;
    void *var_18;
    void *var_3;

    var_2 = NULL;
    if (arg0 != NULL) {
        var_18 = M2C_FIELD(arg0, void **, 0xC);
loop_5:
        var_2 = NULL;
        if (var_18 != NULL) {
            temp_2 = M2C_FIELD(var_18, s32 *, 8);
            if (temp_2 != 0) {
                if (xmlStrEqual(temp_2, &D_011D2730) != 0) {
                    var_18 = M2C_FIELD(var_18, void **, 0xC);
loop_12:
                    var_2 = NULL;
                    if (var_18 != NULL) {
                        temp_2_2 = M2C_FIELD(var_18, s32 *, 8);
                        if (temp_2_2 != 0) {
                            if (xmlStrEqual(temp_2_2, &D_011D2738) != 0) {
                                goto block_15;
                            }
                            if (xmlStrEqual(M2C_FIELD(var_18, s32 *, 8), &D_011D2740) == 0) {
                                goto block_11;
                            }
                            goto block_16;
                        }
block_11:
                        var_18 = M2C_FIELD(var_18, void **, 0x18);
                        goto loop_12;
                    }
                    /* Duplicate return node #55. Try simplifying control flow for better match */
                    return var_2;
                }
                if (xmlStrEqual(M2C_FIELD(var_18, s32 *, 8), &D_011D2738) == 0) {
                    if (xmlStrEqual(M2C_FIELD(var_18, s32 *, 8), &D_011D2740) == 0) {
                        goto block_4;
                    }
                    goto block_16;
                }
block_15:
                var_18 = M2C_FIELD(var_18, void **, 0xC);
block_16:
                var_2 = NULL;
                if (var_18 != NULL) {
                    var_4 = M2C_FIELD(var_18, s32 *, 8);
loop_18:
                    if ((var_4 != 0) && (xmlStrEqual(var_4, &D_011D2740) != 0)) {
                        var_17 = M2C_FIELD(var_18, void **, 0x2C);
                        var_19 = 0;
                        var_20 = 0;
                        if (var_17 != NULL) {
                            var_3 = M2C_FIELD(var_17, void **, 0xC);
loop_22:
                            if ((var_3 != NULL) && (M2C_FIELD(var_3, s32 *, 4) == 3) && (M2C_FIELD(var_3, s32 *, 0x18) == 0)) {
                                temp_16 = M2C_FIELD(var_3, s32 *, 0x28);
                                if ((xmlStrcasecmp(M2C_FIELD(var_17, s32 *, 8), &D_011D2748) == 0) && (xmlStrcasecmp(temp_16, &D_011D2758) == 0)) {
                                    var_20 = 1;
                                } else if (temp_16 != 0) {
                                    var_19 = (xmlStrcasecmp(M2C_FIELD(var_17, s32 *, 8), &D_011D2768) == 0) ? temp_16 : var_19;
                                }
                                if (var_20 != 0) {
                                    if (var_19 != 0) {
                                        temp_2_3 = xmlStrstr(var_19, &D_011D2770);
                                        var_4_2 = temp_2_3 + 8;
                                        if (temp_2_3 == NULL) {
                                            temp_2_4 = xmlStrstr(var_19, &D_011D2780);
                                            var_4_2 = temp_2_4 + 8;
                                            if (temp_2_4 == NULL) {
                                                temp_2_5 = xmlStrstr(var_19, &D_011D2790);
                                                var_4_2 = temp_2_5 + 8;
                                                if (temp_2_5 == NULL) {
                                                    var_4_3 = xmlStrstr(var_19, &D_011D27A0);
                                                    if (var_4_3 == NULL) {
                                                        var_4_3 = xmlStrstr(var_19, &D_011D27B0);
                                                        if (var_4_3 == NULL) {
                                                            var_4_3 = xmlStrstr(var_19, &D_011D27C0);
                                                        }
                                                    }
                                                    var_4_2 = (var_4_3 != NULL) ? (var_4_3 + 9) : var_4_3;
                                                }
                                            }
                                        }
                                        if (var_4_2 != NULL) {
loop_52:
                                            temp_3 = *var_4_2;
                                            if (temp_3 == 0x20) {
block_51:
                                                var_4_2 += 1;
                                                goto loop_52;
                                            }
                                            if (temp_3 == 9) {
                                                goto block_51;
                                            }
                                        }
                                        var_2 = var_4_2;
                                        /* Duplicate return node #55. Try simplifying control flow for better match */
                                        return var_2;
                                    }
                                    goto block_34;
                                }
                                goto block_34;
                            }
block_34:
                            var_17 = M2C_FIELD(var_17, void **, 0x18);
                            if (var_17 != NULL) {
                                var_3 = M2C_FIELD(var_17, void **, 0xC);
                                goto loop_22;
                            }
                            goto block_37;
                        }
                    }
block_37:
                    var_18 = M2C_FIELD(var_18, void **, 0x18);
                    if (var_18 != NULL) {
                        var_4 = M2C_FIELD(var_18, s32 *, 8);
                        goto loop_18;
                    }
                    return NULL;
                }
                /* Duplicate return node #55. Try simplifying control flow for better match */
                return var_2;
            }
block_4:
            var_18 = M2C_FIELD(var_18, void **, 0x18);
            goto loop_5;
        }
        /* Duplicate return node #55. Try simplifying control flow for better match */
        return var_2;
    }
    return var_2;
}
