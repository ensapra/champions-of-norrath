/* machine draft (m2c) for ee-gcc-2.96 -O2 -G8, tried by autopilot */
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

s32 func_002D8270(M2C_UNK *, M2C_UNK, M2C_UNK, s32 *, M2C_UNK, s32 *, M2C_UNK, M2C_UNK, s32); /* extern */
extern s32 D_00444A0C;
extern M2C_UNK D_008E1CC0;
extern s32 D_008E1D00;
extern s32 D_008E1D40;

s32 func_002DC138(s32 arg0) {
    s32 var_2;

    if ((D_00444A0C < 0) || (D_008E1D40 = arg0, var_2 = D_008E1D00, (func_002D8270(&D_008E1CC0, 1, 0, &D_008E1D40, 4, &D_008E1D00, 4, 0, 0) < 0))) {
        var_2 = 0;
    }
    return var_2;
}
