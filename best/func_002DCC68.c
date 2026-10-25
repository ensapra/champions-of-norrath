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

s32 func_002D8270(M2C_UNK *, M2C_UNK, M2C_UNK, void *, M2C_UNK, void *, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_002DC600();                                /* extern */
s32 func_002DC700();                                /* extern */
M2C_UNK func_00305118(M2C_UNK *, s32, M2C_UNK);     /* extern */
extern M2C_UNK D_008E1E88;
extern M2C_UNK D_008E2080;

s32 func_002DCC68(s32 arg0) {
    s32 var_2;
    void *temp_3;

    var_2 = 0xFFFF0000;
    if (func_002DC600() >= 0) {
        if (func_002DC700() == 0) {
            func_00305118(&D_008E1E88, arg0, 0xFC);
            temp_3 = &D_008E1E88 - 8;
            M2C_FIELD(temp_3, s8 *, 0x103) = 0;
            if (func_002D8270(&D_008E2080, 9, 0, temp_3, 0x200, temp_3, 4, 0, 0) >= 0) {
                return M2C_FIELD(&D_008E1E88, s32 *, -8);
            }
            var_2 = 0xFFFEFFFF;
            /* Duplicate return node #9. Try simplifying control flow for better match */
            return var_2;
        }
        return 0xFFFEFFFC;
    }
    return var_2;
}
