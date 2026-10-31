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

s32 xmlXPathNextFollowing(void *arg0, void *arg1) {
    s32 temp_2;
    s32 temp_3;
    s32 var_2;
    void *var_5;
    void *var_5_2;

    var_5 = arg1;
    if (var_5 != NULL) {
        var_2 = M2C_FIELD(var_5, s32 *, 0xC);
        if (var_2 != 0) {
            /* Duplicate return node #2. Try simplifying control flow for better match */
            return var_2;
        }
        goto block_5;
    }
    var_5 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 4);
    var_2 = 0;
    if (var_5 != NULL) {
block_5:
        temp_2 = M2C_FIELD(var_5, s32 *, 0x18);
        if (temp_2 == 0) {
            var_5_2 = M2C_FIELD(var_5, void **, 0x14);
loop_11:
            if (var_5_2 != NULL) {
                var_2 = 0;
                if (var_5_2 != M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0)) {
                    temp_3 = M2C_FIELD(var_5_2, s32 *, 0x18);
                    var_2 = temp_3;
                    if (temp_3 == 0) {
                        if (var_5_2 != NULL) {
                            var_5_2 = M2C_FIELD(var_5_2, void **, 0x14);
                            goto loop_11;
                        }
                        return 0;
                    }
                }
                /* Duplicate return node #2. Try simplifying control flow for better match */
                return var_2;
            }
            return 0;
        }
        return temp_2;
    }
    return var_2;
}
