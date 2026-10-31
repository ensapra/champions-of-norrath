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

s32 strcmp(s32, M2C_UNK *);                         /* extern */
s32 xmlBufferCreate(void *);                        /* extern */
M2C_UNK xmlBufferShrink(s32, s32);                  /* extern */
M2C_UNK xmlCharEncCloseFunc(s32 *, void *);         /* extern */
s32 xmlCharEncFirstLine(s32, s32, s32);             /* extern */
s32 xmlCharEncInFunc(s32, s32, s32);                /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, M2C_UNK);
extern s32 D_0118EDD4;
extern M2C_UNK D_011D6700;
extern M2C_UNK D_011D6710;
extern M2C_UNK D_011D6720;
extern M2C_UNK D_011D6748;

s32 xmlSwitchToEncoding(void *arg0, s32 *arg1) {
    M2C_UNK (*temp_2_2)(s32, M2C_UNK *);
    s32 *temp_4;
    s32 temp_2_3;
    s32 temp_4_2;
    s32 temp_4_4;
    s32 var_2;
    s32 var_2_2;
    void *temp_2;
    void *temp_2_4;
    void *temp_2_5;
    void *temp_3;
    void *temp_4_3;
    void *temp_4_5;
    void *temp_4_6;
    void *temp_4_7;
    void *temp_5;
    void *temp_5_2;
    void *temp_5_3;
    void *temp_5_4;

    var_2 = -1;
    if (arg1 != NULL) {
        temp_5 = M2C_FIELD(arg0, void **, 0x24);
        if (temp_5 == NULL) {
            goto block_37;
        }
        temp_2 = M2C_FIELD(temp_5, void **, 0);
        if (temp_2 == NULL) {
block_37:
            if (M2C_FIELD(arg0, void **, 0) != NULL) {
                temp_2_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(s32, M2C_UNK *), 0x58);
                if (temp_2_2 != NULL) {
                    temp_2_2(M2C_FIELD(arg0, s32 *, 4), &D_011D6748);
                }
            }
            goto block_40;
        }
        temp_4 = M2C_FIELD(temp_2, s32 **, 0xC);
        if (temp_4 == NULL) {
            temp_3 = M2C_FIELD(temp_2, void **, 0x10);
            M2C_FIELD(temp_2, s32 **, 0xC) = arg1;
            if (temp_3 != NULL) {
                if (M2C_FIELD(temp_3, s32 *, 4) == 0) {
                    return 0;
                }
                temp_4_2 = *arg1;
                if (temp_4_2 != 0) {
                    if (strcmp(temp_4_2, &D_011D6700) == 0) {
                        temp_5_2 = M2C_FIELD(arg0, void **, 0x24);
                        temp_4_3 = M2C_FIELD(temp_5_2, void **, 0x10);
                        if ((M2C_FIELD(temp_4_3, u8 *, 0) == 0xFF) && (M2C_FIELD(temp_4_3, u8 *, 1) == 0xFE)) {
                            M2C_FIELD(temp_5_2, void **, 0x10) = (void *) (temp_4_3 + 2);
                        }
                    }
                    temp_4_4 = *arg1;
                    if (temp_4_4 == 0) {

                    } else {
                        temp_5_3 = M2C_FIELD(arg0, void **, 0x24);
                        if (strcmp(temp_4_4, &D_011D6710) == 0) {
                            temp_4_5 = M2C_FIELD(temp_5_3, void **, 0x10);
                            if ((M2C_FIELD(temp_4_5, u8 *, 0) == 0xFE) && (M2C_FIELD(temp_4_5, u8 *, 1) == 0xFF)) {
                                M2C_FIELD(temp_5_3, void **, 0x10) = (void *) (temp_4_5 + 2);
                            }
                        }
                    }
                }
                xmlBufferShrink(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), void **, 0), s32 *, 0x10), M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0x10) - M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0xC));
                temp_4_6 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), void **, 0);
                M2C_FIELD(temp_4_6, s32 *, 0x14) = (s32) M2C_FIELD(temp_4_6, s32 *, 0x10);
                temp_2_3 = xmlBufferCreate(temp_4_6);
                temp_2_4 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), void **, 0);
                M2C_FIELD(temp_2_4, s32 *, 0x10) = temp_2_3;
                if (M2C_FIELD(arg0, s32 *, 0x20) != 0) {
                    var_2_2 = xmlCharEncInFunc(M2C_FIELD(temp_2_4, s32 *, 0xC), temp_2_3, M2C_FIELD(temp_2_4, s32 *, 0x14));
                } else {
                    var_2_2 = xmlCharEncFirstLine(M2C_FIELD(temp_2_4, s32 *, 0xC), temp_2_3, M2C_FIELD(temp_2_4, s32 *, 0x14));
                }
                if (var_2_2 >= 0) {
                    temp_5_4 = M2C_FIELD(arg0, void **, 0x24);
                    temp_4_7 = M2C_FIELD(M2C_FIELD(temp_5_4, void **, 0), void **, 0x10);
                    temp_2_5 = M2C_FIELD(temp_4_7, void **, 0);
                    M2C_FIELD(temp_5_4, void **, 0x10) = temp_2_5;
                    M2C_FIELD(temp_5_4, void **, 0xC) = temp_2_5;
                    M2C_FIELD(temp_5_4, void **, 0x14) = (void *) (temp_2_5 + M2C_FIELD(temp_4_7, s32 *, 4));
                    goto block_36;
                }
                D_0118EDD0(D_0118EDD4, &D_011D6720, D_0118EDD0);
block_40:
                var_2 = -1;
                /* Duplicate return node #41. Try simplifying control flow for better match */
                return var_2;
            }
block_36:
            return 0;
        }
        var_2 = 0;
        if (temp_4 != arg1) {
            xmlCharEncCloseFunc(temp_4, temp_5);
            M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), void **, 0), s32 **, 0xC) = arg1;
            return 0;
        }
        /* Duplicate return node #41. Try simplifying control flow for better match */
        return var_2;
    }
    return var_2;
}
