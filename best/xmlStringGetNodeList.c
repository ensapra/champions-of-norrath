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

void *xmlGetDocEntity(s32, s32);                    /* extern */
void *xmlNewDocText(s32, s32);                      /* extern */
void *xmlNewDocTextLen(s32, u8 *, s32);             /* extern */
void *xmlNewReference(s32, s32);                    /* extern */
M2C_UNK xmlNodeAddContent(void *, s32);             /* extern */
M2C_UNK xmlNodeAddContentLen(void *, u8 *, s32);    /* extern */
s32 xmlStrndup(u8 *, s32, s32);                     /* extern */
extern M2C_UNK (*D_011B1E18)(s32);

void *xmlStringGetNodeList(s32 arg0, u8 *arg1) {
    s32 temp_2_3;
    s32 temp_2_4;
    s32 temp_5;
    s32 temp_6;
    s32 var_2_2;
    u8 *temp_4;
    u8 *var_16;
    u8 *var_16_2;
    u8 *var_4;
    u8 temp_2;
    u8 temp_2_7;
    u8 temp_3;
    u8 temp_3_2;
    u8 var_3;
    void *temp_2_2;
    void *temp_2_5;
    void *temp_2_6;
    void *temp_2_8;
    void *var_17;
    void *var_19;
    void *var_2;

    var_2 = NULL;
    var_16 = arg1;
    var_17 = NULL;
    var_19 = NULL;
    if (var_16 != NULL) {
        var_4 = var_16;
        temp_2 = *var_4;
        if (temp_2 != 0) {
            var_3 = temp_2;
loop_3:
            if ((var_3 & 0xFF) != 0x26) {
                var_16 += 1;
                goto block_42;
            }
            if (var_16 != var_4) {
                if (var_17 != NULL) {
                    if (M2C_FIELD(var_17, s32 *, 4) == 3) {
                        xmlNodeAddContentLen(var_17, var_4, var_16 - var_4);
                        goto block_17;
                    }
                    goto block_11;
                }
block_11:
                temp_2_2 = xmlNewDocTextLen(arg0, var_4, var_16 - var_4);
                var_2 = var_19;
                if (temp_2_2 != NULL) {
                    if (var_17 != NULL) {
                        M2C_FIELD(var_17, void **, 0x18) = temp_2_2;
                        M2C_FIELD(temp_2_2, void **, 0x1C) = var_17;
                        var_17 = temp_2_2;
                    } else {
                        var_19 = temp_2_2;
                        var_17 = var_19;
                    }
                    goto block_17;
                }
            } else {
block_17:
                temp_4 = var_16 + 1;
                temp_3 = M2C_FIELD(var_16, u8 *, 1);
                temp_6 = temp_3 & 0xFF;
                var_16_2 = temp_4;
                if (temp_6 != 0) {
                    var_2_2 = temp_3 & 0xFF;
                    if (temp_6 != 0x3B) {
loop_20:
                        var_16_2 += 1;
                        temp_3_2 = *var_16_2;
                        temp_2_3 = temp_3_2 & 0xFF;
                        if (temp_2_3 != 0) {
                            if (temp_2_3 == 0x3B) {
                                var_2_2 = temp_3_2 & 0xFF;
                                goto block_23;
                            }
                            goto loop_20;
                        }
                        goto block_55;
                    }
block_23:
                    if (var_2_2 != 0) {
                        if (var_16_2 != temp_4) {
                            temp_2_4 = xmlStrndup(temp_4, var_16_2 - temp_4, temp_6);
                            temp_2_5 = xmlGetDocEntity(arg0, temp_2_4);
                            if ((temp_2_5 != NULL) && (M2C_FIELD(temp_2_5, s32 *, 0x30) == 6)) {
                                temp_5 = M2C_FIELD(temp_2_5, s32 *, 0x28);
                                if (var_17 == NULL) {
                                    var_19 = xmlNewDocText(arg0, temp_5);
                                    var_17 = var_19;
                                } else {
                                    xmlNodeAddContent(var_17, temp_5);
                                }
                                goto block_40;
                            }
                            temp_2_6 = xmlNewReference(arg0, temp_2_4);
                            if (temp_2_6 == NULL) {
                                if (temp_2_4 != 0) {
                                    D_011B1E18(temp_2_4);
                                }
                                goto block_55;
                            }
                            if (var_17 != NULL) {
                                M2C_FIELD(var_17, void **, 0x18) = temp_2_6;
                                M2C_FIELD(temp_2_6, void **, 0x1C) = var_17;
                                var_17 = temp_2_6;
                            } else {
                                var_19 = temp_2_6;
                                var_17 = var_19;
                            }
block_40:
                            D_011B1E18(temp_2_4);
                            goto block_41;
                        }
block_41:
                        var_4 = var_16_2 + 1;
                        var_16 = var_4;
block_42:
                        temp_2_7 = *var_16;
                        var_3 = temp_2_7;
                        if (temp_2_7 == 0) {
                            goto block_43;
                        }
                        goto loop_3;
                    }
                    goto block_55;
                }
                goto block_55;
            }
        } else {
block_43:
            var_2 = var_19;
            if (var_16 != var_4) {
                if (var_17 != NULL) {
                    if (M2C_FIELD(var_17, s32 *, 4) == 3) {
                        xmlNodeAddContentLen(var_17, var_4, var_16 - var_4);
                        goto block_55;
                    }
                    goto block_48;
                }
block_48:
                temp_2_8 = xmlNewDocTextLen(arg0, var_4, var_16 - var_4);
                var_2 = var_19;
                if (temp_2_8 != NULL) {
                    if (var_17 != NULL) {
                        M2C_FIELD(var_17, void **, 0x18) = temp_2_8;
                        M2C_FIELD(temp_2_8, void **, 0x1C) = var_17;
                    } else {
                        var_19 = temp_2_8;
                    }
block_55:
                    var_2 = var_19;
                }
            }
        }
    }
    return var_2;
}
