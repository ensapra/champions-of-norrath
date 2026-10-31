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

s32 LinkFreeChain__t6VIPool1ZP13VISpellEffecti(void *arg0, s32 arg1) {
    s32 temp_3;
    s32 temp_4;
    s32 var_2;
    s32 var_5;
    s32 var_6;
    void *temp_2;
    void *temp_2_2;

    temp_3 = M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    if (arg1 >= temp_3) {
        M2C_FIELD(arg0, s32 *, 0xC) = -1;
    } else {
        var_5 = arg1;
        var_2 = var_5 * 2;
        if (var_5 < (temp_3 - 1)) {
            var_6 = var_5 * 0xC;
            do {
                temp_4 = var_5 + 1;
                var_5 = temp_4;
                temp_2 = var_6 + M2C_FIELD(arg0, s32 *, 8);
                M2C_FIELD(temp_2, s32 *, 8) = -2;
                M2C_FIELD(temp_2, s32 *, 4) = temp_4;
                var_6 += 0xC;
            } while (var_5 < (M2C_FIELD(arg0, s32 *, 4) - 1));
            var_2 = var_5 * 2;
        }
        temp_2_2 = ((var_2 + var_5) * 4) + M2C_FIELD(arg0, s32 *, 8);
        M2C_FIELD(temp_2_2, s32 *, 8) = -2;
        M2C_FIELD(temp_2_2, s32 *, 4) = -1;
    }
    return 0;
}
