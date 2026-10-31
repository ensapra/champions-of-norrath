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
s32 xmlSearchNs(s32, void *, s32);                  /* extern */
void *xmlStaticCopyNodeList(void *, s32, void *);   /* extern */
s32 xmlStrdup(s32);                                 /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, M2C_UNK);
extern s32 D_0118EDD4;
extern void *(*D_011B1E1C)(M2C_UNK);
extern M2C_UNK D_011C2888;

void *xmlCopyProp(void *arg0, void *arg1) {
    s32 temp_18;
    s32 temp_18_2;
    s32 temp_18_3;
    s32 temp_18_4;
    s32 temp_19;
    s32 temp_19_2;
    s32 temp_19_3;
    s32 var_2_2;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_4;
    void *var_16;
    void *var_2;
    void *var_3;

    var_2 = NULL;
    if (arg1 != NULL) {
        var_16 = NULL;
        if (arg0 != NULL) {
            temp_18 = M2C_FIELD(arg1, s32 *, 8);
            temp_19 = M2C_FIELD(arg0, s32 *, 0x20);
            if (temp_18 != 0) {
                var_16 = D_011B1E1C(0x2C);
                if (var_16 != NULL) {
                    memset(var_16, 0, 0x2C);
                    M2C_FIELD(var_16, s32 *, 4) = 2;
                    var_2_2 = xmlStrdup(temp_18);
                    M2C_FIELD(var_16, s32 *, 0x20) = temp_19;
                    goto block_21;
                }
                goto block_18;
                goto block_22;
            }
        } else {
            temp_2 = M2C_FIELD(arg1, void **, 0x14);
            if (temp_2 == NULL) {
                temp_2_2 = M2C_FIELD(arg1, void **, 0xC);
                var_16 = NULL;
                if (temp_2_2 != NULL) {
                    temp_18_2 = M2C_FIELD(arg1, s32 *, 8);
                    temp_19_2 = M2C_FIELD(temp_2_2, s32 *, 0x20);
                    if (temp_18_2 != 0) {
                        var_16 = D_011B1E1C(0x2C);
                        if (var_16 != NULL) {
                            memset(var_16, 0, 0x2C);
                            M2C_FIELD(var_16, s32 *, 4) = 2;
                            var_2_2 = xmlStrdup(temp_18_2);
                            M2C_FIELD(var_16, s32 *, 0x20) = temp_19_2;
                            goto block_21;
                        }
                        goto block_18;
                    }
                } else {
                    temp_18_3 = M2C_FIELD(arg1, s32 *, 8);
                    if (temp_18_3 != 0) {
                        var_16 = D_011B1E1C(0x2C);
                        if (var_16 == NULL) {
                            goto block_18;
                        }
                        memset(var_16, 0, 0x2C);
                        M2C_FIELD(var_16, s32 *, 4) = 2;
                        var_2_2 = xmlStrdup(temp_18_3);
                        M2C_FIELD(var_16, s32 *, 0x20) = 0;
                        goto block_21;
                    }
                }
            } else {
                temp_18_4 = M2C_FIELD(arg1, s32 *, 8);
                temp_19_3 = M2C_FIELD(temp_2, s32 *, 0x20);
                if (temp_18_4 != 0) {
                    var_16 = D_011B1E1C(0x2C);
                    if (var_16 != NULL) {
                        memset(var_16, 0, 0x2C);
                        M2C_FIELD(var_16, s32 *, 4) = 2;
                        var_2_2 = xmlStrdup(temp_18_4);
                        M2C_FIELD(var_16, s32 *, 0x20) = temp_19_3;
block_21:
                        M2C_FIELD(var_16, s32 *, 8) = var_2_2;
                    } else {
block_18:
                        var_16 = NULL;
                        D_0118EDD0(D_0118EDD4, &D_011C2888, D_0118EDD0);
                    }
                }
            }
block_22:
            var_2 = NULL;
        }
        if (var_16 != NULL) {
            temp_2_3 = M2C_FIELD(arg1, void **, 0x24);
            M2C_FIELD(var_16, void **, 0x14) = arg0;
            if ((temp_2_3 != NULL) && (arg0 != NULL)) {
                M2C_FIELD(var_16, s32 *, 0x24) = xmlSearchNs(M2C_FIELD(arg0, s32 *, 0x20), arg0, M2C_FIELD(temp_2_3, s32 *, 0xC));
            } else {
                M2C_FIELD(var_16, s32 *, 0x24) = 0;
            }
            temp_4 = M2C_FIELD(arg1, void **, 0xC);
            var_2 = var_16;
            if (temp_4 != NULL) {
                temp_2_4 = xmlStaticCopyNodeList(temp_4, M2C_FIELD(var_16, s32 *, 0x20), var_16);
                M2C_FIELD(var_16, void **, 0x10) = NULL;
                var_3 = temp_2_4;
                M2C_FIELD(var_16, void **, 0xC) = temp_2_4;
                if (var_3 != NULL) {
                    do {
                        if (M2C_FIELD(var_3, void **, 0x18) == NULL) {
                            M2C_FIELD(var_16, void **, 0x10) = var_3;
                        }
                        var_3 = M2C_FIELD(var_3, void **, 0x18);
                    } while (var_3 != NULL);
                }
                var_2 = var_16;
            }
        }
    }
    return var_2;
}
