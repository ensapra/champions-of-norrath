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

s32 xmlListSearch(void *arg0, s32 arg1) {
    s32 var_2;
    void *var_16;
    void *var_3;

    var_16 = *M2C_FIELD(arg0, void ***, 0);
loop_2:
    var_3 = NULL;
    if (var_16 != M2C_FIELD(arg0, void ***, 0)) {
        if (M2C_FIELD(arg0, s32 (**)(s32, s32), 8)(M2C_FIELD(var_16, s32 *, 8), arg1) < 0) {
            var_16 = M2C_FIELD(var_16, void **, 0);
            goto loop_2;
        }
        var_3 = NULL;
        if (var_16 != M2C_FIELD(arg0, void ***, 0)) {
            var_3 = (M2C_FIELD(arg0, s32 (**)(s32, s32), 8)(M2C_FIELD(var_16, s32 *, 8), arg1) == 0) ? var_16 : NULL;
        }
    }
    var_2 = 0;
    if (var_3 != NULL) {
        var_2 = M2C_FIELD(var_3, s32 *, 8);
    }
    return var_2;
}
