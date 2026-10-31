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

void *xmlXPathNextDescendant(void *arg0, void *arg1) {
    s32 temp_3;
    void *temp_3_2;
    void *temp_4;
    void *var_2;
    void *var_2_2;
    void *var_5;

    if (arg1 == NULL) {
        temp_4 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 4);
        var_2_2 = NULL;
        if (temp_4 != NULL) {
            temp_3 = M2C_FIELD(temp_4, s32 *, 4);
            if ((temp_3 != 2) && (temp_3 != 0x12)) {
                return M2C_FIELD(temp_4, void **, 0xC);
            }
            /* Duplicate return node #13. Try simplifying control flow for better match */
            return NULL;
        }
        /* Duplicate return node #11. Try simplifying control flow for better match */
        return var_2_2;
    }
    var_2 = M2C_FIELD(arg1, void **, 0xC);
    if ((var_2 == NULL) || (M2C_FIELD(var_2, s32 *, 4) == 0x11)) {
        var_2_2 = M2C_FIELD(arg1, void **, 0x18);
        if (var_2_2 == NULL) {
            var_5 = M2C_FIELD(arg1, void **, 0x14);
loop_14:
            if (var_5 != NULL) {
                var_2_2 = NULL;
                if (var_5 != M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 4)) {
                    temp_3_2 = M2C_FIELD(var_5, void **, 0x18);
                    var_2_2 = temp_3_2;
                    if (temp_3_2 == NULL) {
                        if (var_5 != NULL) {
                            var_5 = M2C_FIELD(var_5, void **, 0x14);
                            goto loop_14;
                        }
                        var_2 = NULL;
                        /* Duplicate return node #21. Try simplifying control flow for better match */
                        return var_2;
                    }
                }
                /* Duplicate return node #11. Try simplifying control flow for better match */
                return var_2_2;
            }
            return NULL;
        }
        return var_2_2;
    }
    return var_2;
}
