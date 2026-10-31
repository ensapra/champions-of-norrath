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

extern s32 D_011EDB00;

s32 *FindIopFunction__FUi(s32 arg0) {
    s32 *temp_5;
    s32 *var_2;
    s32 *var_5;
    s32 var_8;

    var_8 = 0;
    var_5 = &D_011EDB00 + 4;
    if (D_011EDB00 > 0) {
loop_1:
        temp_5 = var_5 + 4 + 4;
        var_2 = temp_5;
        if (arg0 != M2C_FIELD(var_5, s32 *, 0)) {
            var_8 += 1;
            var_5 = &temp_5[M2C_FIELD(var_5, s32 *, 4)];
            if (var_8 >= D_011EDB00) {
                goto block_3;
            }
            goto loop_1;
        }
    } else {
block_3:
        var_2 = NULL;
    }
    return var_2;
}
