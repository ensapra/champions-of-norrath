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

void *xmlXPathNextPreceding(void *arg0, void *arg1) {
    s32 temp_4;
    s32 var_6;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_3;
    void *temp_6;
    void *var_2;
    void *var_3;
    void *var_3_2;
    void *var_5;
    void *var_5_2;

    var_5_2 = arg1;
    if (var_5_2 == NULL) {
        var_5_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 4);
    }
loop_2:
    temp_2 = M2C_FIELD(var_5_2, void **, 0x1C);
    if (temp_2 == NULL) {
        var_5_2 = M2C_FIELD(var_5_2, void **, 0x14);
        var_2 = NULL;
        if (var_5_2 != NULL) {
            temp_6 = M2C_FIELD(arg0, void **, 0xC);
            if (var_5_2 != M2C_FIELD(M2C_FIELD(temp_6, void **, 0), s32 *, 0xC)) {
                temp_3 = M2C_FIELD(temp_6, void **, 4);
                if (var_5_2 != NULL) {
                    var_6 = 0;
                    if (temp_3 != NULL) {
                        temp_4 = M2C_FIELD(var_5_2, s32 *, 0x20);
                        if (temp_4 == M2C_FIELD(temp_3, s32 *, 0x20)) {
                            var_6 = 1;
                            if (var_5_2 != temp_4) {
                                if (temp_3 != temp_4) {
                                    var_3 = M2C_FIELD(temp_3, void **, 0x14);
                                    var_6 = 0;
                                    if (var_3 != NULL) {
loop_22:
                                        var_6 = 1;
                                        if (var_3 != var_5_2) {
                                            temp_2_2 = M2C_FIELD(var_3, void **, 0x14);
                                            var_3 = temp_2_2;
                                            if (temp_2_2 == NULL) {
                                                goto block_24;
                                            }
                                            goto loop_22;
                                        }
                                    }
                                } else {
                                    goto block_24;
                                }
                            }
                        }
                    }
                } else {
block_24:
                    var_6 = 0;
                }
                if (var_6 == 0) {
                    var_2 = var_5_2;
                    /* Duplicate return node #27. Try simplifying control flow for better match */
                    return var_2;
                }
                goto loop_2;
            }
        }
        return var_2;
    }
    var_5 = temp_2;
    var_3_2 = M2C_FIELD(var_5, void **, 0x10);
    if (var_3_2 != NULL) {
        do {
            var_5 = var_3_2;
            temp_2_3 = M2C_FIELD(var_5, void **, 0x10);
            var_3_2 = temp_2_3;
        } while (temp_2_3 != NULL);
    }
    return var_5;
}
