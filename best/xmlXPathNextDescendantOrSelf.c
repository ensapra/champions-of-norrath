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

void *xmlXPathNextDescendantOrSelf(void *arg0, void *arg1) {
    s32 temp_5;
    void *temp_2;
    void *temp_2_2;
    void *temp_4;
    void *temp_7;
    void *var_2;
    void *var_5;
    void *var_6;

    var_6 = arg1;
    if (arg1 == NULL) {
        temp_4 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 4);
        var_2 = NULL;
        if ((temp_4 != NULL) && ((temp_5 = M2C_FIELD(temp_4, s32 *, 4), (temp_5 == 2)) || (var_2 = temp_4, (temp_5 == 0x12)))) {
            return NULL;
        }
        /* Duplicate return node #15. Try simplifying control flow for better match */
        return var_2;
    }
    temp_7 = M2C_FIELD(var_6, void **, 0xC);
    if (((temp_7 == NULL) || (var_5 = temp_7, (M2C_FIELD(temp_7, s32 *, 4) == 0x11))) && (temp_2 = M2C_FIELD(arg1, void **, 0x18), var_5 = temp_2, (temp_2 == NULL))) {
loop_9:
        var_6 = M2C_FIELD(var_6, void **, 0x14);
        var_5 = NULL;
        if (var_6 != NULL) {
            var_2 = NULL;
            if (var_6 != M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 4)) {
                temp_2_2 = M2C_FIELD(var_6, void **, 0x18);
                var_5 = temp_2_2;
                if (temp_2_2 == NULL) {
                    if (var_6 == NULL) {
                        var_5 = NULL;
                        goto block_14;
                    }
                    goto loop_9;
                }
                goto block_14;
            }
        } else {
            goto block_14;
        }
    } else {
block_14:
        var_2 = var_5;
    }
    return var_2;
}
