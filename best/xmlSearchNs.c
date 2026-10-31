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

M2C_UNK memset(void *, M2C_UNK, M2C_UNK);           /* extern */
s32 xmlStrEqual(M2C_UNK *, M2C_UNK *);              /* extern */
s32 xmlStrdup(M2C_UNK *);                           /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, M2C_UNK);
extern s32 D_0118EDD4;
extern void *(*D_011B1E1C)(M2C_UNK);
extern M2C_UNK D_011C2B90;
extern M2C_UNK D_011C2B98;
extern M2C_UNK D_011C2BC0;

void *xmlSearchNs(void *arg0, void *arg1, M2C_UNK *arg2) {
    M2C_UNK *temp_4;
    s32 temp_3_3;
    void *temp_2;
    void *temp_3;
    void *temp_3_2;
    void *var_16;
    void *var_17;
    void *var_2;

    var_2 = NULL;
    var_17 = arg1;
    if (var_17 != NULL) {
        if ((arg2 != NULL) && (xmlStrEqual(arg2, &D_011C2B90) != 0)) {
            temp_3_2 = M2C_FIELD(arg0, void **, 0x34);
            var_2 = temp_3_2;
            if (temp_3_2 == NULL) {
                temp_2 = D_011B1E1C(0x10);
                M2C_FIELD(arg0, void **, 0x34) = temp_2;
                if (temp_2 == NULL) {
                    D_0118EDD0(D_0118EDD4, &D_011C2B98, D_0118EDD0);
                    goto block_23;
                }
                memset(temp_2, 0, 0x10);
                M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), s32 *, 4) = 0x12;
                M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), s32 *, 8) = xmlStrdup(&D_011C2BC0);
                temp_3 = M2C_FIELD(arg0, void **, 0x34);
                M2C_FIELD(temp_3, s32 *, 0xC) = xmlStrdup(&D_011C2B90);
                return temp_3;
            }
            /* Duplicate return node #24. Try simplifying control flow for better match */
            return var_2;
        }
        if (var_17 != NULL) {
loop_9:
            temp_3_3 = M2C_FIELD(var_17, s32 *, 4);
            if (((u32) (temp_3_3 - 5) >= 2U) && (temp_3_3 != 0x11)) {
                if ((temp_3_3 == 1) && (var_16 = M2C_FIELD(var_17, void **, 0x30), (var_16 != NULL))) {
loop_13:
                    temp_4 = M2C_FIELD(var_16, M2C_UNK **, 0xC);
                    if (temp_4 == NULL) {
                        if (arg2 == NULL) {
                            var_2 = var_16;
                            if (M2C_FIELD(var_16, s32 *, 8) == 0) {
                                goto block_21;
                            }
                        } else {
                            goto block_21;
                        }
                    } else if ((arg2 == NULL) || (M2C_FIELD(var_16, s32 *, 8) == 0) || (var_2 = var_16, (xmlStrEqual(temp_4, arg2) == 0))) {
block_21:
                        var_16 = M2C_FIELD(var_16, void **, 0);
                        if (var_16 == NULL) {
                            goto block_22;
                        }
                        goto loop_13;
                    }
                } else {
block_22:
                    var_17 = M2C_FIELD(var_17, void **, 0x14);
                    if (var_17 == NULL) {
                        goto block_23;
                    }
                    goto loop_9;
                }
            } else {
                goto block_23;
            }
        } else {
block_23:
            var_2 = NULL;
        }
        /* Duplicate return node #24. Try simplifying control flow for better match */
        return var_2;
    }
    return var_2;
}
