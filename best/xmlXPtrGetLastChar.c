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

s32 xmlStrlen(s32, s32, s32, s32);                  /* extern */

s32 xmlXPtrGetLastChar(void **arg0, s32 *arg1, s32 arg3) {
    s32 *temp_18;
    s32 *var_5;
    s32 temp_3;
    s32 temp_3_2;
    s32 temp_3_3;
    s32 temp_4;
    s32 temp_6;
    s32 var_2;
    s32 var_7;
    void *temp_2;
    void *var_16;
    void *var_4;

    var_5 = arg1;
    var_7 = arg3;
    temp_18 = var_5;
    if (arg0 != NULL) {
        var_2 = -1;
        if (temp_18 != NULL) {
            var_16 = *arg0;
            temp_6 = *temp_18;
            if (var_16 == NULL) {
                goto block_3;
            }
            temp_3 = M2C_FIELD(var_16, s32 *, 4);
            if (((temp_3 == 1) || (temp_3 == 9) || (temp_3 == 0xD)) && (temp_6 > 0)) {
                var_2 = -1;
                if (var_16 != NULL) {
                    var_4 = M2C_FIELD(var_16, void **, 0xC);
                    var_5 = NULL;
                    var_7 = 0;
loop_13:
                    var_16 = var_4;
                    if (var_7 == 0) {
                        if (var_4 != NULL) {
                            temp_3_2 = M2C_FIELD(var_4, s32 *, 4);
                            if (((temp_3_2 == 1) || (temp_3_2 == 9) || (temp_3_2 == 0xD)) && (var_5 += 1, var_7 = temp_6 < (s32) var_5, (var_5 == temp_6))) {
                                var_16 = var_4;
                            } else {
                                var_4 = M2C_FIELD(var_4, void **, 0x18);
                                goto loop_13;
                            }
                        } else {
                            var_16 = NULL;
                        }
                    }
                    goto loop_20;
                }
            } else {
loop_20:
                var_2 = -1;
                if (var_16 != NULL) {
                    temp_2 = M2C_FIELD(var_16, void **, 0x10);
                    if (temp_2 == NULL) {
                        temp_4 = M2C_FIELD(var_16, s32 *, 0x28);
                        var_2 = -1;
                        if (temp_4 != 0) {
                            temp_3_3 = xmlStrlen(temp_4, (s32) var_5, temp_6, var_7);
                            *arg0 = var_16;
                            var_2 = 0;
                            *temp_18 = temp_3_3;
                        }
                    } else {
                        var_16 = temp_2;
                        goto loop_20;
                    }
                }
            }
            /* Duplicate return node #28. Try simplifying control flow for better match */
            return var_2;
        }
        return var_2;
    }
block_3:
    return -1;
}
