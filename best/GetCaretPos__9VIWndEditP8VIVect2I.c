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

s32 GetCaretPos__9VIWndEditP8VIVect2I(void *arg0, void *arg1) {
    s16 temp_6;
    s32 temp_11;
    s32 temp_2;
    s32 temp_3;
    s32 var_2;
    s32 var_7;
    s32 var_9;
    void *var_4;

    temp_2 = M2C_FIELD(arg0, s32 *, 0x1B4);
    var_9 = 0;
    var_7 = 0;
    if (temp_2 > 0) {
        temp_11 = M2C_FIELD(arg0, s32 *, 0x194);
        var_4 = M2C_FIELD(arg0, void **, 0x1B0);
loop_2:
        temp_6 = M2C_FIELD(var_4, s16 *, 4);
        temp_3 = var_9 + temp_6;
        if (temp_3 < temp_11) {
            var_7 += 1;
            var_9 = temp_3;
            var_4 += 8;
            if (var_7 >= temp_2) {
                /* Duplicate return node #14. Try simplifying control flow for better match */
                return -1;
            }
            goto loop_2;
        }
        var_2 = temp_11 - var_9;
        if (M2C_FIELD(var_4, s16 *, 6) != 0) {
            if ((temp_11 - var_9) != temp_6) {
                var_2 = temp_11 - var_9;
                goto block_11;
            }
            M2C_FIELD(arg1, s32 *, 0) = 0;
            M2C_FIELD(arg1, s32 *, 4) = (s32) (var_7 + 1);
        } else {
block_11:
            M2C_FIELD(arg1, s32 *, 4) = var_7;
            M2C_FIELD(arg1, s32 *, 0) = var_2;
        }
        return 0;
    }
    return -1;
}
