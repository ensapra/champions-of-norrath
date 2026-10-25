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

s32 func_002E4E48(s32, M2C_UNK, void *, M2C_UNK, s32); /* extern */
s32 func_002E4F58(s32, s32, void *, M2C_UNK, s32);  /* extern */

s32 func_002E5448(s32 arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, s32 *arg5, s32 arg6) {
    s32 var_2;

    M2C_FIELD(arg1, s32 *, 0) = arg2;
    if (arg5 != NULL) {
        M2C_FIELD(arg1, s32 *, 4) = (s32) *arg5;
    } else {
        M2C_FIELD(arg1, s32 *, 4) = 0;
    }
    M2C_FIELD(arg1, s32 *, 0xC) = arg6;
    M2C_FIELD(arg1, s32 *, 8) = arg4;
    if (func_002E4E48(arg0, 4, arg1, 0x10, arg4 + 8) >= 0) {
        var_2 = M2C_FIELD(arg1, s32 *, 0);
        if (var_2 >= 0) {
            if (arg5 != NULL) {
                *arg5 = M2C_FIELD(arg1, s32 *, 4);
            }
            var_2 = func_002E4F58(arg0, arg3, arg1, 2, M2C_FIELD(arg1, s32 *, 0));
            if (var_2 >= 0) {
                var_2 = M2C_FIELD(arg1, s32 *, 0);
            }
        }
    } else {
        var_2 = -0x21E;
    }
    return var_2;
}
