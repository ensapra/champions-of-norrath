/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G8, tried by autopilot */
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

s32 func_002E4E48(s32, M2C_UNK, void *, s32, s32);  /* extern */
s32 func_002E4F00(M2C_UNK, s32, s32);               /* extern */
s32 func_002E4F58(s32, s32, void *, M2C_UNK, s32);  /* extern */

s32 func_002E5800(s32 arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_7;
    s32 var_2;

    M2C_FIELD(arg1, s32 *, 0) = arg2;
    M2C_FIELD(arg1, s32 *, 4) = arg3;
    M2C_FIELD(arg1, s32 *, 8) = arg5;
    var_2 = func_002E4F00(3, arg4, arg5);
    if (var_2 >= 0) {
        temp_7 = arg5 + 0xC;
        if (func_002E4E48(arg0, 0x13, arg1, temp_7, temp_7) < 0) {
            return -0x21E;
        }
        var_2 = func_002E4F58(arg0, arg4, arg1, 3, arg5);
        if (var_2 >= 0) {
            var_2 = M2C_FIELD(arg1, s32 *, 0);
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return var_2;
    }
    return var_2;
}
