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
M2C_UNK xmlAddChild(void *, void *);                /* extern */
void *xmlCopyProp(void *, void *);                  /* extern */
M2C_UNK *xmlNewNs(void *, s32, s32);                /* extern */
void *xmlSearchNs(s32, void *, s32);                /* extern */
void *xmlStaticCopyNodeList(s32, s32, void *);      /* extern */
s32 xmlStrdup(s32);                                 /* extern */
extern M2C_UNK D_0118E580;
extern M2C_UNK D_0118E588;
extern M2C_UNK D_0118E598;
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, M2C_UNK);
extern s32 D_0118EDD4;
extern void *(*D_011B1E1C)(M2C_UNK);
extern M2C_UNK D_011C2978;

void *xmlStaticCopyNode(void *arg0, s32 arg1, void *arg2, s32 arg3) {
    M2C_UNK *var_17;
    M2C_UNK *var_20;
    M2C_UNK *var_3;
    s32 temp_4;
    s32 temp_4_2;
    s32 temp_4_3;
    s32 var_2_2;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_2_5;
    void *temp_2_6;
    void *temp_2_7;
    void *temp_2_8;
    void *temp_2_9;
    void *temp_5;
    void *var_16;
    void *var_16_2;
    void *var_17_2;
    void *var_20_2;
    void *var_2;
    void *var_3_2;
    void *var_3_3;
    void *var_4;
    void *var_4_2;
    void *var_5;

    var_2 = NULL;
    if (arg0 != NULL) {
        temp_2 = D_011B1E1C(0x34);
        if (temp_2 == NULL) {
            D_0118EDD0(D_0118EDD4, &D_011C2978, D_0118EDD0);
            return NULL;
        }
        memset(temp_2, 0, 0x34);
        temp_4 = M2C_FIELD(arg0, s32 *, 8);
        M2C_FIELD(temp_2, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 4);
        M2C_FIELD(temp_2, s32 *, 0x20) = arg1;
        M2C_FIELD(temp_2, void **, 0x14) = arg2;
        if ((temp_4 == &D_0118E580) || (temp_4 == &D_0118E588) || (temp_4 == &D_0118E598)) {
            M2C_FIELD(temp_2, s32 *, 8) = temp_4;
        } else if (temp_4 != 0) {
            M2C_FIELD(temp_2, s32 *, 8) = xmlStrdup(temp_4);
        }
        temp_4_2 = M2C_FIELD(arg0, s32 *, 0x28);
        if ((temp_4_2 != 0) && (M2C_FIELD(arg0, s32 *, 4) != 5)) {
            M2C_FIELD(temp_2, s32 *, 0x28) = xmlStrdup(temp_4_2);
        }
        if (arg2 != NULL) {
            xmlAddChild(arg2, temp_2);
        }
        var_2 = temp_2;
        if (arg3 != 0) {
            temp_2_2 = M2C_FIELD(arg0, void **, 0x30);
            var_20 = NULL;
            if (temp_2_2 != NULL) {
                var_16 = temp_2_2;
                var_17 = NULL;
                var_2_2 = M2C_FIELD(var_16, s32 *, 4);
loop_18:
                var_3 = NULL;
                if (var_2_2 == 0x12) {
                    var_3 = xmlNewNs(NULL, M2C_FIELD(var_16, s32 *, 8), M2C_FIELD(var_16, s32 *, 0xC));
                }
                if (var_17 != NULL) {
                    *var_17 = var_3;
                    var_17 = var_3;
                } else {
                    var_17 = var_3;
                    var_20 = var_17;
                }
                var_16 = M2C_FIELD(var_16, void **, 0);
                if (var_16 != NULL) {
                    var_2_2 = M2C_FIELD(var_16, s32 *, 4);
                    goto loop_18;
                }
                M2C_FIELD(temp_2, M2C_UNK **, 0x30) = var_20;
            }
            temp_2_3 = M2C_FIELD(arg0, void **, 0x24);
            if (temp_2_3 != NULL) {
                temp_2_4 = xmlSearchNs(arg1, temp_2, M2C_FIELD(temp_2_3, s32 *, 0xC));
                if (temp_2_4 != NULL) {
                    M2C_FIELD(temp_2, void **, 0x24) = temp_2_4;
                } else {
                    temp_2_5 = xmlSearchNs(M2C_FIELD(arg0, s32 *, 0x20), arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0xC));
                    if (temp_2_5 != NULL) {
                        temp_2_6 = M2C_FIELD(temp_2, void **, 0x14);
                        var_4 = temp_2;
                        if (temp_2_6 != NULL) {
                            var_3_2 = temp_2_6;
                            do {
                                var_4 = var_3_2;
                                temp_2_7 = M2C_FIELD(var_4, void **, 0x14);
                                var_3_2 = temp_2_7;
                            } while (temp_2_7 != NULL);
                        }
                        xmlNewNs(var_4, M2C_FIELD(temp_2_5, s32 *, 8), M2C_FIELD(temp_2_5, s32 *, 0xC));
                    }
                }
            }
            temp_5 = M2C_FIELD(arg0, void **, 0x2C);
            var_20_2 = NULL;
            if (temp_5 != NULL) {
                var_16_2 = temp_5;
                var_17_2 = NULL;
                var_5 = var_16_2;
                do {
                    temp_2_8 = xmlCopyProp(temp_2, var_5);
                    if (var_17_2 != NULL) {
                        M2C_FIELD(var_17_2, void **, 0x18) = temp_2_8;
                        M2C_FIELD(temp_2_8, void **, 0x1C) = var_17_2;
                        var_17_2 = temp_2_8;
                    } else {
                        var_17_2 = temp_2_8;
                        var_20_2 = var_17_2;
                    }
                    var_16_2 = M2C_FIELD(var_16_2, void **, 0x18);
                    var_5 = var_16_2;
                } while (var_16_2 != NULL);
                M2C_FIELD(temp_2, void **, 0x2C) = var_20_2;
            }
            temp_4_3 = M2C_FIELD(arg0, s32 *, 0xC);
            if (temp_4_3 != 0) {
                M2C_FIELD(temp_2, void **, 0xC) = xmlStaticCopyNodeList(temp_4_3, arg1, temp_2);
            }
            var_2 = temp_2;
            if (temp_2 != NULL) {
                var_3_3 = M2C_FIELD(temp_2, void **, 0xC);
                if (var_3_3 != NULL) {
                    var_4_2 = M2C_FIELD(var_3_3, void **, 0x18);
                    if (var_4_2 != NULL) {
                        do {
                            M2C_FIELD(var_3_3, void **, 0x14) = temp_2;
                            var_3_3 = var_4_2;
                            temp_2_9 = M2C_FIELD(var_3_3, void **, 0x18);
                            var_4_2 = temp_2_9;
                        } while (temp_2_9 != NULL);
                    }
                    M2C_FIELD(var_3_3, void **, 0x14) = temp_2;
                    M2C_FIELD(temp_2, void **, 0x10) = var_3_3;
                    var_2 = temp_2;
                    /* Duplicate return node #59. Try simplifying control flow for better match */
                    return var_2;
                }
                M2C_FIELD(temp_2, void **, 0x10) = NULL;
                return var_2;
            }
            /* Duplicate return node #59. Try simplifying control flow for better match */
            return var_2;
        }
        /* Duplicate return node #59. Try simplifying control flow for better match */
        return var_2;
    }
    return var_2;
}
