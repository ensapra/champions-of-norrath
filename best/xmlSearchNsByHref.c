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

M2C_UNK memset(M2C_UNK *, M2C_UNK, M2C_UNK);        /* extern */
s32 xmlStrEqual(M2C_UNK *, M2C_UNK *);              /* extern */
s32 xmlStrdup(M2C_UNK *);                           /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, M2C_UNK);
extern s32 D_0118EDD4;
extern M2C_UNK *(*D_011B1E1C)(M2C_UNK);
extern M2C_UNK D_011C2B90;
extern M2C_UNK D_011C2B98;
extern M2C_UNK D_011C2BC0;

M2C_UNK *xmlSearchNsByHref(void *arg0, void *arg1, M2C_UNK *arg2) {
    M2C_UNK *temp_2;
    M2C_UNK *temp_2_2;
    M2C_UNK *temp_3;
    M2C_UNK *temp_3_2;
    M2C_UNK *var_16;
    M2C_UNK *var_18;
    M2C_UNK *var_2;
    M2C_UNK *var_4;
    M2C_UNK *var_4_2;
    void *temp_21;
    void *var_17;
    void *var_19;

    var_19 = arg1;
    temp_21 = var_19;
    if ((var_19 != NULL) && (arg2 != NULL)) {
        if (xmlStrEqual(arg2, &D_011C2BC0) == 0) {
            var_18 = M2C_FIELD(var_19, M2C_UNK **, 0x30);
loop_10:
            if (var_18 != NULL) {
                var_4 = M2C_FIELD(var_18, M2C_UNK **, 8);
loop_12:
                if ((var_4 != NULL) && (arg2 != NULL)) {
                    var_17 = temp_21;
                    if (xmlStrEqual(var_4, arg2) != 0) {
                        var_2 = var_18;
                        if (var_17 != var_19) {
                            var_16 = M2C_FIELD(var_17, M2C_UNK **, 0x30);
loop_17:
                            if (var_16 != NULL) {
                                var_4_2 = M2C_FIELD(var_16, M2C_UNK **, 0xC);
loop_19:
                                temp_2 = M2C_FIELD(var_18, M2C_UNK **, 0xC);
                                if (var_4_2 == NULL) {
                                    if (temp_2 != NULL) {
                                        goto block_24;
                                    }
                                    goto block_31;
                                }
                                if ((temp_2 == NULL) || (xmlStrEqual(var_4_2, temp_2) == 0)) {
block_24:
                                    var_16 = *var_16;
                                    if (var_16 != NULL) {
                                        var_4_2 = M2C_FIELD(var_16, M2C_UNK **, 0xC);
                                        goto loop_19;
                                    }
                                    goto block_27;
                                }
                                goto block_31;
                            }
block_27:
                            var_17 = M2C_FIELD(var_17, void **, 0x14);
                            if (var_17 != var_19) {
                                var_16 = M2C_FIELD(var_17, M2C_UNK **, 0x30);
                                goto loop_17;
                            }
                            return var_18;
                        }
                        /* Duplicate return node #38. Try simplifying control flow for better match */
                        return var_2;
                    }
                }
block_31:
                var_18 = M2C_FIELD(var_18, M2C_UNK **, 0);
                if (var_18 != NULL) {
                    var_4 = M2C_FIELD(var_18, M2C_UNK **, 8);
                    goto loop_12;
                }
                goto block_34;
            }
block_34:
            var_19 = M2C_FIELD(var_19, void **, 0x14);
            if (var_19 != NULL) {
                var_18 = M2C_FIELD(var_19, M2C_UNK **, 0x30);
                goto loop_10;
            }
            goto block_37;
        }
        temp_3_2 = M2C_FIELD(arg0, M2C_UNK **, 0x34);
        var_2 = temp_3_2;
        if (temp_3_2 == NULL) {
            temp_2_2 = D_011B1E1C(0x10);
            M2C_FIELD(arg0, M2C_UNK **, 0x34) = temp_2_2;
            if (temp_2_2 == NULL) {
                D_0118EDD0(D_0118EDD4, &D_011C2B98, D_0118EDD0);
                goto block_37;
            }
            memset(temp_2_2, 0, 0x10);
            M2C_FIELD(M2C_FIELD(arg0, M2C_UNK **, 0x34), s32 *, 4) = 0x12;
            M2C_FIELD(M2C_FIELD(arg0, M2C_UNK **, 0x34), s32 *, 8) = xmlStrdup(&D_011C2BC0);
            temp_3 = M2C_FIELD(arg0, M2C_UNK **, 0x34);
            M2C_FIELD(temp_3, s32 *, 0xC) = xmlStrdup(&D_011C2B90);
            return temp_3;
        }
        /* Duplicate return node #38. Try simplifying control flow for better match */
        return var_2;
    }
block_37:
    var_2 = NULL;
    return var_2;
}
