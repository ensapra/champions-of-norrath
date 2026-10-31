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
void *xmlCopyDtd(void *);                           /* extern */
M2C_UNK *xmlNewNs(M2C_UNK, s32, s32);               /* extern */
void *xmlStaticCopyNode(void *, void *, void *, M2C_UNK); /* extern */
s32 xmlStrdup(M2C_UNK *);                           /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, M2C_UNK);
extern s32 D_0118EDD4;
extern void *(*D_011B1E1C)(M2C_UNK);
extern s32 (*D_011B1E24)(s32);
extern M2C_UNK D_011C2860;
extern M2C_UNK D_011C2868;

void *xmlCopyDoc(void *arg0, s32 arg1) {
    M2C_UNK *temp_4_2;
    M2C_UNK *var_17;
    M2C_UNK *var_17_2;
    M2C_UNK *var_20;
    M2C_UNK *var_3;
    s32 temp_4;
    void *temp_2;
    void *temp_2_2;
    void *temp_4_3;
    void *temp_4_4;
    void *var_16;
    void *var_16_2;
    void *var_17_3;
    void *var_18;
    void *var_19;
    void *var_2;
    void *var_2_2;
    void *var_3_2;

    var_2 = NULL;
    if (arg0 != NULL) {
        var_17 = M2C_FIELD(arg0, M2C_UNK **, 0x38);
        if (var_17 == NULL) {
            var_17 = &D_011C2860;
        }
        temp_2 = D_011B1E1C(0x50);
        if (temp_2 == NULL) {
            var_18 = NULL;
            D_0118EDD0(D_0118EDD4, &D_011C2868, D_0118EDD0);
        } else {
            var_18 = temp_2;
            memset(temp_2, 0, 0x50);
            M2C_FIELD(temp_2, s32 *, 4) = 9;
            M2C_FIELD(temp_2, s32 *, 0x38) = xmlStrdup(var_17);
            M2C_FIELD(temp_2, s32 *, 0x24) = -1;
            M2C_FIELD(temp_2, s32 *, 0x28) = -1;
            M2C_FIELD(temp_2, void **, 0x20) = temp_2;
        }
        var_2 = NULL;
        if (var_18 != NULL) {
            temp_4 = M2C_FIELD(arg0, s32 *, 8);
            if (temp_4 != 0) {
                M2C_FIELD(var_18, s32 *, 8) = D_011B1E24(temp_4);
            }
            temp_4_2 = M2C_FIELD(arg0, M2C_UNK **, 0x3C);
            if (temp_4_2 != NULL) {
                M2C_FIELD(var_18, s32 *, 0x3C) = xmlStrdup(temp_4_2);
            }
            var_2 = var_18;
            M2C_FIELD(var_18, s32 *, 0x4C) = (s32) M2C_FIELD(arg0, s32 *, 0x4C);
            M2C_FIELD(var_18, s32 *, 0x24) = (s32) M2C_FIELD(arg0, s32 *, 0x24);
            M2C_FIELD(var_18, s32 *, 0x28) = (s32) M2C_FIELD(arg0, s32 *, 0x28);
            if (arg1 != 0) {
                temp_4_3 = M2C_FIELD(arg0, void **, 0x2C);
                if (temp_4_3 != NULL) {
                    M2C_FIELD(var_18, void **, 0x2C) = xmlCopyDtd(temp_4_3);
                }
                temp_2_2 = M2C_FIELD(arg0, void **, 0x34);
                var_16 = temp_2_2;
                if (temp_2_2 != NULL) {
                    var_20 = NULL;
                    var_17_2 = NULL;
                    do {
                        var_3 = NULL;
                        if (M2C_FIELD(var_16, s32 *, 4) == 0x12) {
                            var_3 = xmlNewNs(0, M2C_FIELD(var_16, s32 *, 8), M2C_FIELD(var_16, s32 *, 0xC));
                        }
                        if (var_17_2 != NULL) {
                            *var_17_2 = var_3;
                            var_17_2 = var_3;
                        } else {
                            var_17_2 = var_3;
                            var_20 = var_17_2;
                        }
                        var_16 = M2C_FIELD(var_16, void **, 0);
                    } while (var_16 != NULL);
                    M2C_FIELD(var_18, M2C_UNK **, 0x34) = var_20;
                }
                temp_4_4 = M2C_FIELD(arg0, void **, 0xC);
                var_16_2 = temp_4_4;
                if (temp_4_4 != NULL) {
                    var_19 = NULL;
                    var_17_3 = NULL;
                    do {
                        if (M2C_FIELD(var_16_2, s32 *, 4) != 0xE) {
                            var_2_2 = xmlStaticCopyNode(var_16_2, var_18, var_18, 1);
                        } else {
                            var_2_2 = xmlCopyDtd(var_16_2);
                        }
                        if (var_19 != NULL) {
                            M2C_FIELD(var_17_3, void **, 0x18) = var_2_2;
                            M2C_FIELD(var_2_2, void **, 0x1C) = var_17_3;
                            var_17_3 = var_2_2;
                        } else {
                            var_17_3 = var_2_2;
                            M2C_FIELD(var_2_2, void **, 0x1C) = NULL;
                            var_19 = var_17_3;
                        }
                        var_16_2 = M2C_FIELD(var_16_2, void **, 0x18);
                    } while (var_16_2 != NULL);
                    var_3_2 = var_19;
                    M2C_FIELD(var_18, void **, 0xC) = var_19;
                    M2C_FIELD(var_18, void **, 0x10) = NULL;
                    if (var_3_2 != NULL) {
                        do {
                            if (M2C_FIELD(var_3_2, void **, 0x18) == NULL) {
                                M2C_FIELD(var_18, void **, 0x10) = var_3_2;
                            }
                            var_3_2 = M2C_FIELD(var_3_2, void **, 0x18);
                        } while (var_3_2 != NULL);
                    }
                }
                var_2 = var_18;
            }
        }
    }
    return var_2;
}
