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

M2C_UNK *FindCreateSprite__18VISpellEventDriveri(void *arg0, s32 arg1) {
    M2C_UNK *temp_2;
    M2C_UNK *var_2;
    M2C_UNK *var_4;
    M2C_UNK *var_6;
    void *temp_3;

    var_4 = M2C_FIELD(arg0, M2C_UNK **, 0x4C);
    var_6 = *var_4;
    var_2 = NULL;
    if (var_6 != NULL) {
loop_2:
        temp_3 = M2C_FIELD(var_4, void **, 0x74);
        if ((M2C_FIELD(temp_3, s32 *, 4) != arg1) || (var_2 = var_4, (M2C_FIELD(temp_3, s32 *, 0) != 9))) {
            var_4 = var_6;
            temp_2 = *var_4;
            var_6 = temp_2;
            if (temp_2 == NULL) {
                var_2 = NULL;
            } else {
                goto loop_2;
            }
        }
    }
    return var_2;
}
