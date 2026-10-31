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
s32 xmlStrndup(u8 *, s32, u8);                      /* extern */
extern M2C_UNK (*D_011B1E18)(s32);

void *xmlStringLenGetNodeList(s32 arg0, u8 *arg1, s32 arg2) {
    s32 temp_2_3;
    s32 temp_5;
    s32 temp_5_2;
    s32 var_2_2;
    s32 var_3;
    u8 *temp_4;
    u8 *var_16;
    u8 *var_16_2;
    u8 *var_4;
    u8 temp_2;
    u8 temp_2_6;
    u8 temp_3;
    u8 var_6;
    void *temp_2_2;
    void *temp_2_4;
    void *temp_2_5;
    void *temp_2_7;
    void *var_18;
    void *var_20;
    void *var_2;

    var_2 = NULL;
    var_16 = arg1;
    var_18 = NULL;
    var_20 = NULL;
    if (var_16 != NULL) {
        var_4 = var_16;
        temp_2 = *var_4;
        if ((temp_2 != 0) && (arg2 > 0)) {
            var_3 = temp_2 & 0xFF;
loop_4:
            if (var_3 != 0x26) {
                var_16 += 1;
                goto block_50;
            }
            if (var_16 != var_4) {
                if (var_18 != NULL) {
                    if (M2C_FIELD(var_18, s32 *, 4) == 3) {
                        xmlNodeAddContentLen(var_18, var_4, var_16 - var_4);
                        goto block_19;
                    }
                    goto block_13;
                }
block_13:
                temp_2_2 = xmlNewDocTextLen(arg0, var_4, var_16 - var_4);
                var_2 = var_20;
                if (temp_2_2 != NULL) {
                    if (var_18 != NULL) {
                        M2C_FIELD(var_18, void **, 0x18) = temp_2_2;
                        M2C_FIELD(temp_2_2, void **, 0x1C) = var_18;
                        var_18 = temp_2_2;
                    } else {
                        var_20 = temp_2_2;
                        var_18 = var_20;
                    }
                    goto block_19;
                }
            } else {
block_19:
                temp_4 = var_16 + 1;
                var_6 = M2C_FIELD(var_16, u8 *, 1);
                temp_5 = var_6 & 0xFF;
                var_16_2 = temp_4;
                if (temp_5 != 0) {
                    if (((temp_4 - arg1) < arg2) && (temp_5 != 0x3B)) {
                        var_16_2 += 1;
loop_23:
                        temp_3 = *var_16_2;
                        var_6 = temp_3 & 0xFF;
                        if (var_6 != 0) {
                            var_2_2 = temp_3 & 0xFF;
                            if ((var_16_2 - arg1) < arg2) {
                                if (var_6 != 0x3B) {
                                    var_16_2 += 1;
                                    goto loop_23;
                                }
                                goto block_31;
                            }
                            goto block_31;
                        }
                        goto block_66;
                    }
                    var_2_2 = var_6 & 0xFF;
block_31:
                    var_2 = var_20;
                    if (var_2_2 != 0) {
                        if ((var_16_2 - arg1) < arg2) {
                            if (var_16_2 != temp_4) {
                                temp_2_3 = xmlStrndup(temp_4, var_16_2 - temp_4, var_6);
                                temp_2_4 = xmlGetDocEntity(arg0, temp_2_3);
                                if ((temp_2_4 != NULL) && (M2C_FIELD(temp_2_4, s32 *, 0x30) == 6)) {
                                    temp_5_2 = M2C_FIELD(temp_2_4, s32 *, 0x28);
                                    if (var_18 == NULL) {
                                        var_20 = xmlNewDocText(arg0, temp_5_2);
                                        var_18 = var_20;
                                    } else {
                                        xmlNodeAddContent(var_18, temp_5_2);
                                    }
                                    goto block_48;
                                }
                                temp_2_5 = xmlNewReference(arg0, temp_2_3);
                                if (temp_2_5 == NULL) {
                                    if (temp_2_3 != 0) {
                                        D_011B1E18(temp_2_3);
                                    }
                                    goto block_66;
                                }
                                if (var_18 != NULL) {
                                    M2C_FIELD(var_18, void **, 0x18) = temp_2_5;
                                    M2C_FIELD(temp_2_5, void **, 0x1C) = var_18;
                                    var_18 = temp_2_5;
                                } else {
                                    var_20 = temp_2_5;
                                    var_18 = var_20;
                                }
block_48:
                                D_011B1E18(temp_2_3);
                                goto block_49;
                            }
block_49:
                            var_4 = var_16_2 + 1;
                            var_16 = var_4;
block_50:
                            temp_2_6 = *var_16;
                            if (temp_2_6 != 0) {
                                if ((var_16 - arg1) < arg2) {
                                    var_3 = temp_2_6 & 0xFF;
                                    goto loop_4;
                                }
                                goto block_54;
                            }
                            goto block_54;
                        }
                        goto block_66;
                    }
                } else {
                    goto block_66;
                }
            }
        } else {
block_54:
            var_2 = var_20;
            if (var_16 != var_4) {
                if (var_18 != NULL) {
                    if (M2C_FIELD(var_18, s32 *, 4) == 3) {
                        xmlNodeAddContentLen(var_18, var_4, var_16 - var_4);
                        goto block_66;
                    }
                    goto block_59;
                }
block_59:
                temp_2_7 = xmlNewDocTextLen(arg0, var_4, var_16 - var_4);
                var_2 = var_20;
                if (temp_2_7 != NULL) {
                    if (var_18 != NULL) {
                        M2C_FIELD(var_18, void **, 0x18) = temp_2_7;
                        M2C_FIELD(temp_2_7, void **, 0x1C) = var_18;
                    } else {
                        var_20 = temp_2_7;
                    }
block_66:
                    var_2 = var_20;
                }
            }
        }
    }
    return var_2;
}
