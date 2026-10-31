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

s32 xmlEncodeEntitiesReentrant(s32, s32);           /* extern */
M2C_UNK xmlFreeNode(void *);                        /* extern */
void *xmlNewNsProp(void *, void *, s32, s32);       /* extern */
void *xmlNewProp(void *, s32, s32);                 /* extern */
s32 xmlStrEqual(s32, s32);                          /* extern */
void *xmlStringGetNodeList(s32, s32);               /* extern */
extern M2C_UNK (*D_011B1E18)(s32);

void *xmlSetNsProp(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 temp_18;
    s32 var_16;
    s32 var_4_2;
    void *temp_16;
    void *temp_16_2;
    void *temp_2;
    void *temp_2_2;
    void *temp_3;
    void *var_17;
    void *var_2;
    void *var_2_2;
    void *var_3;
    void *var_3_2;
    void *var_4;
    void *var_4_3;

    if ((arg0 == NULL) || (arg2 == 0)) {
        return NULL;
    }
    if (arg1 != NULL) {
        if (M2C_FIELD(arg1, s32 *, 8) != 0) {
            var_17 = M2C_FIELD(arg0, void **, 0x2C);
            if (var_17 != NULL) {
loop_31:
                if (xmlStrEqual(M2C_FIELD(var_17, s32 *, 8), arg2) == 0) {
                    var_17 = M2C_FIELD(var_17, void **, 0x18);
                    goto block_56;
                }
                if (M2C_FIELD(var_17, void **, 0x24) == NULL) {
                    temp_3 = M2C_FIELD(arg0, void **, 0x24);
                    if (temp_3 != NULL) {
                        if (xmlStrEqual(M2C_FIELD(temp_3, s32 *, 8), M2C_FIELD(arg1, s32 *, 8)) == 0) {
                            goto block_38;
                        }
                        goto block_44;
                    }
block_38:
                    if (M2C_FIELD(var_17, void **, 0x24) == NULL) {
                        var_17 = M2C_FIELD(var_17, void **, 0x18);
                        goto block_56;
                    }
                    goto block_41;
                }
block_41:
                if (xmlStrEqual(M2C_FIELD(M2C_FIELD(var_17, void **, 0x24), s32 *, 8), M2C_FIELD(arg1, s32 *, 8)) == 0) {
                    var_17 = M2C_FIELD(var_17, void **, 0x18);
block_56:
                    if (var_17 == NULL) {
                        /* Duplicate return node #57. Try simplifying control flow for better match */
                        return xmlNewNsProp(arg0, arg1, arg2, arg3);
                    }
                    goto loop_31;
                }
block_44:
                var_4 = M2C_FIELD(var_17, void **, 0xC);
                if (var_4 != NULL) {
                    do {
                        temp_16 = M2C_FIELD(var_4, void **, 0x18);
                        xmlFreeNode(var_4);
                        var_4 = temp_16;
                    } while (var_4 != NULL);
                }
                M2C_FIELD(var_17, void **, 0x24) = arg1;
                M2C_FIELD(var_17, void **, 0xC) = NULL;
                M2C_FIELD(var_17, void **, 0x10) = NULL;
                if (arg3 != 0) {
                    var_16 = xmlEncodeEntitiesReentrant(M2C_FIELD(arg0, s32 *, 0x20), arg3);
                    temp_2 = xmlStringGetNodeList(M2C_FIELD(arg0, s32 *, 0x20), var_16);
                    M2C_FIELD(var_17, void **, 0x10) = NULL;
                    var_3 = temp_2;
                    M2C_FIELD(var_17, void **, 0xC) = temp_2;
                    if (var_3 != NULL) {
                        var_2 = M2C_FIELD(var_3, void **, 0x18);
loop_49:
                        M2C_FIELD(var_3, void **, 0x14) = var_17;
                        if (var_2 == NULL) {
                            M2C_FIELD(var_17, void **, 0x10) = var_3;
                            var_2 = M2C_FIELD(var_3, void **, 0x18);
                        }
                        var_3 = var_2;
                        if (var_3 != NULL) {
                            var_2 = M2C_FIELD(var_3, void **, 0x18);
                            goto loop_49;
                        }
                    }
                    goto block_54;
                }
                goto block_55;
            }
            return xmlNewNsProp(arg0, arg1, arg2, arg3);
        }
        return NULL;
    }
    var_17 = M2C_FIELD(arg0, void **, 0x2C);
    temp_18 = M2C_FIELD(arg0, s32 *, 0x20);
    if (var_17 != NULL) {
        var_4_2 = M2C_FIELD(var_17, s32 *, 8);
loop_9:
        if (xmlStrEqual(var_4_2, arg2) == 0) {
            var_17 = M2C_FIELD(var_17, void **, 0x18);
            if (var_17 != NULL) {
                var_4_2 = M2C_FIELD(var_17, s32 *, 8);
                goto loop_9;
            }
            goto block_28;
        }
        var_4_3 = M2C_FIELD(var_17, void **, 0xC);
        if (var_4_3 != NULL) {
            do {
                temp_16_2 = M2C_FIELD(var_4_3, void **, 0x18);
                xmlFreeNode(var_4_3);
                var_4_3 = temp_16_2;
            } while (var_4_3 != NULL);
        }
        M2C_FIELD(var_17, void **, 0xC) = NULL;
        M2C_FIELD(var_17, void **, 0x10) = NULL;
        if (arg3 != 0) {
            var_16 = xmlEncodeEntitiesReentrant(M2C_FIELD(arg0, s32 *, 0x20), arg3);
            temp_2_2 = xmlStringGetNodeList(M2C_FIELD(arg0, s32 *, 0x20), var_16);
            M2C_FIELD(var_17, void **, 0x10) = NULL;
            var_3_2 = temp_2_2;
            M2C_FIELD(var_17, void **, 0xC) = temp_2_2;
            M2C_FIELD(var_17, s32 *, 0x20) = temp_18;
            if (var_3_2 != NULL) {
                var_2_2 = M2C_FIELD(var_3_2, void **, 0x18);
loop_18:
                M2C_FIELD(var_3_2, void **, 0x14) = var_17;
                M2C_FIELD(var_3_2, s32 *, 0x20) = temp_18;
                if (var_2_2 == NULL) {
                    M2C_FIELD(var_17, void **, 0x10) = var_3_2;
                    var_2_2 = M2C_FIELD(var_3_2, void **, 0x18);
                }
                var_3_2 = var_2_2;
                if (var_3_2 != NULL) {
                    var_2_2 = M2C_FIELD(var_3_2, void **, 0x18);
                    goto loop_18;
                }
            }
block_54:
            D_011B1E18(var_16);
        }
block_55:
        return var_17;
    }
block_28:
    return xmlNewProp(arg0, arg2, arg3);
}
