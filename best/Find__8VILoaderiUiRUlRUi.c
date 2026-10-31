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

s32 Find__8VILoaderiUiRUlRUi(void *arg0, s32 arg1, u32 arg2, s64 *arg3, s32 *arg4) {
    s32 temp_13;
    s32 var_10;
    s32 var_12;
    s32 var_4;
    s32 var_5;
    s32 var_9;
    void *temp_3;
    void *temp_3_2;
    void *var_3;

    var_12 = 0;
    temp_3 = M2C_FIELD(arg0, s32 *, 4) + (arg1 * 0xC8);
    var_9 = M2C_FIELD(temp_3, s32 *, 0xC0) - 1;
    var_10 = var_9 < 0;
    var_5 = var_9 >> 1;
    if (var_10 == 0) {
        temp_13 = M2C_FIELD((temp_3 + 0xC0), s32 *, 4);
        var_4 = var_5 * 0x10;
        var_3 = temp_13 + var_4;
        if (M2C_FIELD((temp_13 + var_4), s32 *, 0xC) != arg2) {
loop_3:
            if (arg2 >= (u32) M2C_FIELD(var_3, u32 *, 0xC)) {
                var_12 = var_5 + 1;
            } else {
                var_9 = var_5 - 1;
            }
            var_10 = var_9 < var_12;
            if (var_10 == 0) {
                var_5 = (s32) (var_12 + var_9) >> 1;
                var_4 = var_5 * 0x10;
                var_3 = temp_13 + var_4;
                if (M2C_FIELD((temp_13 + var_4), s32 *, 0xC) == arg2) {
                    goto block_9;
                }
                goto loop_3;
            }
            /* Duplicate return node #12. Try simplifying control flow for better match */
            return 0;
        }
block_9:
        temp_3_2 = temp_13 + var_4;
        if (var_10 == 0) {
            *arg4 = M2C_FIELD(temp_3_2, s32 *, 8);
            *arg3 = M2C_FIELD(temp_3_2, s64 *, 0);
            return 1;
        }
        /* Duplicate return node #12. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}
