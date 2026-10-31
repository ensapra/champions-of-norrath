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

M2C_UNK _uassert(M2C_UNK *, M2C_UNK *, M2C_UNK);    /* extern */
extern M2C_UNK D_011DB040;
extern M2C_UNK D_011DB050;

s32 vtree_get_next__FP7vtree_tPv(void *arg0, s32 arg1) {
    void **var_3;
    void *temp_2;
    void *temp_3;
    void *var_16;
    void *var_17;

    if (arg1 == 0) {
        var_16 = arg0 + 0x14;
        var_17 = var_16;
    } else {
        var_17 = arg0 + 0x14;
        var_16 = arg1 + M2C_FIELD(arg0, s32 *, 8);
    }
    if (arg1 == 0) {
        _uassert(&D_011DB040, &D_011DB050, 0x14B);
    }
    temp_2 = M2C_FIELD(var_16, void **, 0xC);
    if (temp_2 != var_17) {
        var_16 = temp_2;
        var_3 = var_16 + 8;
        if (M2C_FIELD(var_16, s32 *, 8) != var_17) {
            do {
                var_16 = *var_3;
                var_3 = var_16 + 8;
            } while (M2C_FIELD(var_16, s32 *, 8) != var_17);
        }
    } else {
loop_9:
        temp_3 = M2C_FIELD(var_16, void **, 4);
        if (temp_3 == var_17) {
            var_16 = temp_3;
        } else {
            var_16 = temp_3;
            if (M2C_FIELD(temp_3, s32 *, 0xC) != var_16) {

            } else {
                goto loop_9;
            }
        }
    }
    if (var_16 == var_17) {
        return 0;
    }
    return var_16 - M2C_FIELD(arg0, s32 *, 8);
}
