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

s32 func_002D80A0(M2C_UNK *, M2C_UNK, M2C_UNK);     /* extern */
extern s32 D_00444A0C;
extern M2C_UNK D_008E1CC0;
extern M2C_UNK D_FFFFF;

s32 func_002DC0B0(void) {
    M2C_UNK *var_2;

loop_3:
    if (func_002D80A0(&D_008E1CC0, 0x80000003, 0) >= 0) {
        if (M2C_FIELD(&D_008E1CC0, s32 *, 0x24) != 0) {
            D_00444A0C = 0;
            return 0;
        }
        var_2 = &D_FFFFF;
        do {

        } while (var_2 != (M2C_UNK *)-1);
        goto loop_3;
    }
    return -1;
}
