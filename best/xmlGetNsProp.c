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

void *xmlGetDocEntity(void *, s32);                 /* extern */
void *xmlGetDtdAttrDesc(s32, s32, s32);             /* extern */
s32 xmlGetProp();                                   /* extern */
void *xmlSearchNs(void *, void *, s32);             /* extern */
s32 xmlStrEqual(s32, s32);                          /* extern */
s32 xmlStrcat(s32, s32);                            /* extern */
s32 xmlStrdup(M2C_UNK *);                           /* extern */
extern s32 D_0118E5B0;
extern M2C_UNK D_011C2C18;

s32 xmlGetNsProp(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_3_2;
    s32 temp_4;
    s32 temp_4_2;
    s32 temp_6;
    s32 var_17;
    s32 var_2;
    s32 var_2_2;
    s32 var_4;
    s32 var_5;
    void *temp_17;
    void *temp_18;
    void *temp_2;
    void *temp_2_2;
    void *temp_3;
    void *var_16;
    void *var_16_2;
    void *var_16_3;

    var_2 = 0;
    if (arg0 != NULL) {
        var_16 = M2C_FIELD(arg0, void **, 0x2C);
        if (arg2 == 0) {
            var_2 = xmlGetProp();
            goto block_51;
        }
        if (var_16 != NULL) {
            var_4 = M2C_FIELD(var_16, s32 *, 8);
loop_5:
            if (xmlStrEqual(var_4, arg1) == 0) {
                var_16 = M2C_FIELD(var_16, void **, 0x18);
                goto block_32;
            }
            if (M2C_FIELD(var_16, void **, 0x24) == NULL) {
                temp_3 = M2C_FIELD(arg0, void **, 0x24);
                if (temp_3 != NULL) {
                    if (xmlStrEqual(M2C_FIELD(temp_3, s32 *, 8), arg2) == 0) {
                        goto block_12;
                    }
                    goto block_18;
                }
block_12:
                if (M2C_FIELD(var_16, void **, 0x24) == NULL) {
                    var_16 = M2C_FIELD(var_16, void **, 0x18);
                    goto block_32;
                }
                goto block_15;
            }
block_15:
            if (xmlStrEqual(M2C_FIELD(M2C_FIELD(var_16, void **, 0x24), s32 *, 8), arg2) == 0) {
                var_16 = M2C_FIELD(var_16, void **, 0x18);
block_32:
                if (var_16 != NULL) {
                    var_4 = M2C_FIELD(var_16, s32 *, 8);
                    goto loop_5;
                }
                goto block_36;
            }
block_18:
            var_16_2 = M2C_FIELD(var_16, void **, 0xC);
            var_17 = 0;
            temp_18 = M2C_FIELD(arg0, void **, 0x20);
            var_2_2 = 0;
            if (var_16_2 != NULL) {
                do {
                    temp_3_2 = M2C_FIELD(var_16_2, s32 *, 4);
                    if ((u32) (temp_3_2 - 3) < 2U) {
                        goto block_26;
                    }
                    if (temp_3_2 == 5) {
                        temp_2 = xmlGetDocEntity(temp_18, M2C_FIELD(var_16_2, s32 *, 8));
                        if (temp_2 != NULL) {
                            var_5 = M2C_FIELD(temp_2, s32 *, 0x28);
                        } else {
block_26:
                            var_5 = M2C_FIELD(var_16_2, s32 *, 0x28);
                        }
                        var_17 = xmlStrcat(var_17, var_5);
                    }
                    var_16_2 = M2C_FIELD(var_16_2, void **, 0x18);
                } while (var_16_2 != NULL);
                var_2_2 = var_17;
            }
            if (var_2_2 != 0) {
                return var_2_2;
            }
            var_2 = xmlStrdup(&D_011C2C18);
            goto block_51;
        }
block_36:
        var_2 = 0;
        if (D_0118E5B0 != 0) {
            temp_17 = M2C_FIELD(arg0, void **, 0x20);
            if (temp_17 != NULL) {
                temp_4 = M2C_FIELD(temp_17, s32 *, 0x2C);
                if (temp_4 != 0) {
                    var_16_3 = xmlGetDtdAttrDesc(temp_4, M2C_FIELD(arg0, s32 *, 8), arg1);
                    if (var_16_3 == NULL) {
                        temp_4_2 = M2C_FIELD(temp_17, s32 *, 0x30);
                        if (temp_4_2 != 0) {
                            var_16_3 = xmlGetDtdAttrDesc(temp_4_2, M2C_FIELD(arg0, s32 *, 8), arg1);
                        }
                        var_2 = 0;
                        if (var_16_3 != NULL) {
                            goto block_43;
                        }
                    } else {
block_43:
                        temp_6 = M2C_FIELD(var_16_3, s32 *, 0x38);
                        if ((temp_6 != 0) && (temp_2_2 = xmlSearchNs(temp_17, arg0, temp_6), (temp_2_2 != NULL)) && (xmlStrEqual(M2C_FIELD(temp_2_2, s32 *, 8), arg2) != 0)) {
                            var_2 = xmlStrdup(M2C_FIELD(var_16_3, M2C_UNK **, 0x30));
                        } else {
                            var_2 = 0;
                        }
                    }
                }
            }
        }
        goto block_51;
    }
block_51:
    return var_2;
}
