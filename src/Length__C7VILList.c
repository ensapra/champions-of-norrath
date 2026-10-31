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

s32 Length__C7VILList(M2C_UNK ***arg0) {
    M2C_UNK *temp_2;
    M2C_UNK *var_3;
    s32 var_4;

    var_3 = **arg0;
    var_4 = 0;
    if (var_3 != NULL) {
        do {
            temp_2 = *var_3;
            var_4 += 1;
            var_3 = temp_2;
        } while (temp_2 != NULL);
    }
    return var_4;
}
