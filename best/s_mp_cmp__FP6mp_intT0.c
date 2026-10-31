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

s32 s_mp_cmp__FP6mp_intT0(void *arg0, void *arg1) {
    s32 temp_3;
    s32 var_2;
    s32 var_7;
    u16 *var_5;
    u16 *var_8;
    u16 temp_3_2;
    u16 var_4;
    u32 temp_6;
    u32 temp_7;

    temp_6 = M2C_FIELD(arg0, u32 *, 8);
    temp_7 = M2C_FIELD(arg1, u32 *, 8);
    var_2 = 1;
    if (temp_7 >= temp_6) {
        if (temp_6 >= temp_7) {
            var_7 = temp_6 - 1;
            temp_3 = var_7 * 2;
            var_8 = M2C_FIELD(arg0, s32 *, 0xC) + temp_3;
            var_5 = M2C_FIELD(arg1, s32 *, 0xC) + temp_3;
            if (var_7 >= 0) {
                var_4 = *var_8;
loop_7:
                var_8 -= 2;
                temp_3_2 = *var_5;
                var_5 -= 2;
                var_2 = 1;
                if (temp_3_2 >= var_4) {
                    var_7 -= 1;
                    if (var_4 >= temp_3_2) {
                        if (var_7 >= 0) {
                            var_4 = *var_8;
                            goto loop_7;
                        }
                        goto block_12;
                    }
                    /* Duplicate return node #4. Try simplifying control flow for better match */
                    return -1;
                }
                /* Duplicate return node #13. Try simplifying control flow for better match */
                return var_2;
            }
block_12:
            var_2 = 0;
            /* Duplicate return node #13. Try simplifying control flow for better match */
            return var_2;
        }
        return -1;
    }
    return var_2;
}
