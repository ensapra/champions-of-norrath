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

s32 vtree_peek_last__FP7vtree_t(void *arg0) {
    void *temp_2;
    void *temp_6;
    void *var_3;
    void *var_5;

    var_3 = M2C_FIELD(arg0, void **, 0);
    temp_6 = arg0 + 0x14;
    if (var_3 != temp_6) {
        var_5 = M2C_FIELD(var_3, void **, 0xC);
        if (var_5 != temp_6) {
            do {
                var_3 = var_5;
                temp_2 = M2C_FIELD(var_3, void **, 0xC);
                var_5 = temp_2;
            } while (temp_2 != temp_6);
        }
        if (var_3 != temp_6) {
            return var_3 - M2C_FIELD(arg0, s32 *, 8);
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}
