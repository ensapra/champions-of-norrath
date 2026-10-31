/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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
s32 func_002DC600();                                /* extern */
s32 func_002DC700();                                /* extern */
extern s32 D_008E1E80;
extern M2C_UNK D_008E2080;

s32 func_002DCD08(s32 arg0) {
    s32 var_2;

    var_2 = 0xFFFF0000;
    if (func_002DC600() >= 0) {
        if (func_002DC700() != 0) {
            return 0xFFFEFFFC;
        }
        D_008E1E80 = arg0;
        if (func_002D8270(&D_008E2080, 0xA, 0, &D_008E1E80, 4, &D_008E1E80, 4, 0, 0) >= 0) {
            return D_008E1E80;
        }
        var_2 = 0xFFFEFFFF;
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return var_2;
    }
    return var_2;
}
