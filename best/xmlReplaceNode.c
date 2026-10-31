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

void *xmlReplaceNode(void *arg0, void *arg1) {
    void *temp_2;
    void *temp_2_2;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_3_4;
    void *temp_3_5;
    void *temp_3_6;
    void *temp_3_7;
    void *var_2;

    var_2 = NULL;
    if (arg0 != NULL) {
        if (arg1 == NULL) {
            temp_3 = M2C_FIELD(arg0, void **, 0x14);
            if (temp_3 != NULL) {
                if (M2C_FIELD(temp_3, void **, 0xC) == arg0) {
                    M2C_FIELD(temp_3, void **, 0xC) = (void *) M2C_FIELD(arg0, void **, 0x18);
                }
                if ((M2C_FIELD(arg0, void **, 0x14) != NULL) && (M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), void **, 0x10) == arg0)) {
                    M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), void **, 0x10) = (void *) M2C_FIELD(arg0, void **, 0x1C);
                }
            }
            temp_3_2 = M2C_FIELD(arg0, void **, 0x18);
            if (temp_3_2 != NULL) {
                M2C_FIELD(temp_3_2, void **, 0x1C) = (void *) M2C_FIELD(arg0, void **, 0x1C);
            }
            temp_3_3 = M2C_FIELD(arg0, void **, 0x1C);
            if (temp_3_3 != NULL) {
                M2C_FIELD(temp_3_3, void **, 0x18) = (void *) M2C_FIELD(arg0, void **, 0x18);
            }
            M2C_FIELD(arg0, void **, 0x1C) = NULL;
            M2C_FIELD(arg0, void **, 0x18) = NULL;
            M2C_FIELD(arg0, void **, 0x14) = NULL;
            return arg0;
        }
        var_2 = arg0;
        if (arg1 != arg0) {
            if (arg1 != NULL) {
                temp_3_4 = M2C_FIELD(arg1, void **, 0x14);
                if (temp_3_4 != NULL) {
                    if (M2C_FIELD(temp_3_4, void **, 0xC) == arg1) {
                        M2C_FIELD(temp_3_4, void **, 0xC) = (void *) M2C_FIELD(arg1, void **, 0x18);
                    }
                    if ((M2C_FIELD(arg1, void **, 0x14) != NULL) && (M2C_FIELD(M2C_FIELD(arg1, void **, 0x14), void **, 0x10) == arg1)) {
                        M2C_FIELD(M2C_FIELD(arg1, void **, 0x14), void **, 0x10) = (void *) M2C_FIELD(arg1, void **, 0x1C);
                    }
                }
                temp_3_5 = M2C_FIELD(arg1, void **, 0x18);
                if (temp_3_5 != NULL) {
                    M2C_FIELD(temp_3_5, void **, 0x1C) = (void *) M2C_FIELD(arg1, void **, 0x1C);
                }
                temp_3_6 = M2C_FIELD(arg1, void **, 0x1C);
                if (temp_3_6 != NULL) {
                    M2C_FIELD(temp_3_6, void **, 0x18) = (void *) M2C_FIELD(arg1, void **, 0x18);
                }
                M2C_FIELD(arg1, void **, 0x1C) = NULL;
                M2C_FIELD(arg1, void **, 0x18) = NULL;
                M2C_FIELD(arg1, void **, 0x14) = NULL;
            }
            M2C_FIELD(arg1, void **, 0x14) = (void *) M2C_FIELD(arg0, void **, 0x14);
            M2C_FIELD(arg1, s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 0x20);
            temp_2 = M2C_FIELD(arg0, void **, 0x18);
            M2C_FIELD(arg1, void **, 0x18) = temp_2;
            if (temp_2 != NULL) {
                M2C_FIELD(temp_2, void **, 0x1C) = arg1;
            }
            temp_2_2 = M2C_FIELD(arg0, void **, 0x1C);
            M2C_FIELD(arg1, void **, 0x1C) = temp_2_2;
            if (temp_2_2 != NULL) {
                M2C_FIELD(temp_2_2, void **, 0x18) = arg1;
            }
            temp_3_7 = M2C_FIELD(arg1, void **, 0x14);
            if (temp_3_7 != NULL) {
                if (M2C_FIELD(temp_3_7, void **, 0xC) == arg0) {
                    M2C_FIELD(temp_3_7, void **, 0xC) = arg1;
                }
                if (M2C_FIELD(M2C_FIELD(arg1, void **, 0x14), void **, 0x10) == arg0) {
                    M2C_FIELD(M2C_FIELD(arg1, void **, 0x14), void **, 0x10) = arg1;
                }
            }
            M2C_FIELD(arg0, void **, 0x1C) = NULL;
            var_2 = arg0;
            M2C_FIELD(arg0, void **, 0x18) = NULL;
            M2C_FIELD(arg0, void **, 0x14) = NULL;
        }
        /* Duplicate return node #37. Try simplifying control flow for better match */
        return var_2;
    }
    return var_2;
}
