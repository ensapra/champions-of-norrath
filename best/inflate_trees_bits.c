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

s32 huft_build(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32 *, s32, s32 *, s32); /* extern */
extern M2C_UNK D_011D3C08;
extern M2C_UNK D_011D3C30;

s32 inflate_trees_bits(s32 arg0, s32 *arg1, s32 arg2, s32 arg3, void *arg4) {
    s32 sp10;
    M2C_UNK *var_2_2;
    s32 temp_2;
    s32 var_16;
    s32 var_2;

    sp10 = 0;
    temp_2 = M2C_FIELD(arg4, s32 (**)(s32, M2C_UNK, M2C_UNK), 0x20)(M2C_FIELD(arg4, s32 *, 0x28), 0x13, 4);
    var_2 = -4;
    if (temp_2 != 0) {
        var_16 = huft_build(arg0, 0x13, 0x13, 0, 0, arg2, arg1, arg3, &sp10, temp_2);
        var_2_2 = &D_011D3C08;
        if (var_16 != -3) {
            if (var_16 != -5) {
                if (*arg1 == 0) {
                    goto block_5;
                }
            } else {
block_5:
                var_16 = -3;
                var_2_2 = &D_011D3C30;
                goto block_6;
            }
        } else {
block_6:
            M2C_FIELD(arg4, M2C_UNK **, 0x18) = var_2_2;
        }
        M2C_FIELD(arg4, M2C_UNK (**)(s32, s32), 0x24)(M2C_FIELD(arg4, s32 *, 0x28), temp_2);
        var_2 = var_16;
    }
    return var_2;
}
