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

s32 vtree_iterate_in_range__FP7vtree_tPvN21i(void *, s32, s32, s32, s32); /* extern */

s32 vtree_peek_end_in_range__FP7vtree_tPvT1i(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_18;
    s32 var_3;
    s32 var_7;
    void *var_16;

    temp_18 = arg0 + 0x14;
    var_16 = M2C_FIELD(arg0, void **, 0);
    if (var_16 != temp_18) {
loop_2:
        var_3 = M2C_FIELD(arg0, s32 (**)(s32, s32), 0xC)(arg1, var_16 + M2C_FIELD(arg0, s32 *, 0x10));
        if (var_3 <= 0) {
            var_3 = (M2C_FIELD(arg0, s32 (**)(s32, s32), 0xC)(arg2, var_16 + M2C_FIELD(arg0, s32 *, 0x10)) >= 0) ? 0 : -1;
        }
        if (var_3 < 0) {
            var_16 = M2C_FIELD(var_16, void **, 8);
            goto block_19;
        }
        if (var_3 > 0) {
            var_16 = M2C_FIELD(var_16, void **, 0xC);
block_19:
            if (var_16 != temp_18) {
                goto loop_2;
            }
        } else {
            if (var_16 == temp_18) {
                var_7 = 0;
            } else {
                var_7 = var_16 - M2C_FIELD(arg0, s32 *, 8);
            }
loop_14:
            var_7 = vtree_iterate_in_range__FP7vtree_tPvN21i(arg0, arg1, arg2, var_7, arg3);
            if (var_7 != 0) {
                var_16 = var_7 + M2C_FIELD(arg0, s32 *, 8);
                goto loop_14;
            }
        }
        if (var_16 != temp_18) {
            return var_16 - M2C_FIELD(arg0, s32 *, 8);
        }
        goto block_23;
    }
block_23:
    return 0;
}
