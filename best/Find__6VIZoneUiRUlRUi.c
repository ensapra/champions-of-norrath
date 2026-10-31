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

s32 Find__6VIZoneUiRUlRUi(void *arg0, u32 arg1, s64 *arg2, s32 *arg3) {
    s32 temp_11;
    s32 var_10;
    s32 var_12;
    s32 var_4;
    s32 var_8;
    s32 var_9;
    void *temp_13;
    void *temp_3;
    void *var_3;

    temp_13 = arg0 + 0x64;
    var_12 = 0;
    var_9 = M2C_FIELD(arg0, s32 *, 0x64) - 1;
    var_10 = var_9 < 0;
    var_8 = var_9 >> 1;
    if (var_10 == 0) {
        temp_11 = M2C_FIELD(temp_13, s32 *, 4);
        var_4 = var_8 * 0x10;
        if (M2C_FIELD((temp_11 + var_4), s32 *, 0xC) != arg1) {
            var_3 = temp_11 + var_4;
loop_3:
            if (arg1 >= (u32) M2C_FIELD(var_3, u32 *, 0xC)) {
                var_12 = var_8 + 1;
            } else {
                var_9 = var_8 - 1;
            }
            var_10 = var_9 < var_12;
            if (var_10 == 0) {
                var_8 = (s32) (var_12 + var_9) >> 1;
                var_4 = var_8 * 0x10;
                var_3 = temp_11 + var_4;
                if (M2C_FIELD((M2C_FIELD(temp_13, s32 *, 4) + var_4), s32 *, 0xC) == arg1) {
                    goto block_9;
                }
                goto loop_3;
            }
            /* Duplicate return node #11. Try simplifying control flow for better match */
            return 0;
        }
block_9:
        if (var_10 == 0) {
            temp_3 = M2C_FIELD(temp_13, s32 *, 4) + var_4;
            *arg3 = M2C_FIELD(temp_3, s32 *, 8);
            *arg2 = M2C_FIELD(temp_3, s64 *, 0);
            return 1;
        }
        /* Duplicate return node #11. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}
