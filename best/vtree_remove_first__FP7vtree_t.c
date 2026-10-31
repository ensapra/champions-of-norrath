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

M2C_UNK vtree_remove__FP7vtree_tPv(s32, void *, void *); /* extern */

s32 vtree_remove_first__FP7vtree_t(void *arg0, void *arg3) {
    s32 var_16;
    void *temp_2;
    void *temp_6;
    void *var_3;
    void *var_5;
    void *var_7;

    var_7 = arg3;
    var_5 = M2C_FIELD(arg0, void **, 0);
    temp_6 = arg0 + 0x14;
    if (var_5 != temp_6) {
        var_3 = M2C_FIELD(var_5, void **, 8);
        if (var_3 != temp_6) {
            var_7 = temp_6;
            do {
                var_5 = var_3;
                temp_2 = M2C_FIELD(var_5, void **, 8);
                var_3 = temp_2;
            } while (temp_2 != var_7);
        }
        if (var_5 != temp_6) {
            var_16 = var_5 - M2C_FIELD(arg0, s32 *, 8);
        } else {
            goto block_6;
        }
    } else {
block_6:
        var_16 = 0;
    }
    if (var_16 != 0) {
        vtree_remove__FP7vtree_tPv(var_16, temp_6, var_7);
    }
    return var_16;
}
