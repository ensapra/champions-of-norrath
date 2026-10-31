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

extern M2C_UNK D_011C3C98;
extern M2C_UNK D_011C3E68;

M2C_UNK *get_errno_constant__Fi(s32 arg0) {
    M2C_UNK *var_8;
    s32 temp_5;
    s32 var_6;

    var_8 = &D_011C3C98;
    var_6 = 0;
    if (arg0 == M2C_FIELD(&D_011C3E68, s32 *, 0)) {
        var_8 = M2C_FIELD(&D_011C3E68, M2C_UNK **, 4);
    } else {
loop_3:
        var_6 += 1;
        temp_5 = var_6 * 8;
        if (var_6 < 0xF) {
            if (arg0 == *(temp_5 + &D_011C3E68)) {
                var_8 = M2C_FIELD((&D_011C3E68 + temp_5), M2C_UNK **, 4);
            } else {
                goto loop_3;
            }
        }
    }
    return var_8;
}
