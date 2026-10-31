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

M2C_UNK sprintf(M2C_UNK *, M2C_UNK *, s8);          /* extern */
extern M2C_UNK D_011D46F8;
extern M2C_UNK D_011E8350;

M2C_UNK *MakeDay__FPCc(M2C_UNK *arg0) {
    M2C_UNK *var_2;

    var_2 = arg0;
    if (M2C_FIELD(arg0, s8 *, 1) == 0) {
        sprintf(&D_011E8350, &D_011D46F8, M2C_FIELD(arg0, s8 *, 0));
        var_2 = &D_011E8350;
    }
    return var_2;
}
