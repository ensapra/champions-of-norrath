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

s32 func_002E4E48(M2C_UNK, void *, M2C_UNK, s32);   /* extern */
s32 func_002E4F58(s32, s32, void *, M2C_UNK, s32);  /* extern */

s32 func_002E5B40(s32 arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 var_2;

    M2C_FIELD(arg1, s32 *, 4) = arg4;
    M2C_FIELD(arg1, s32 *, 0) = arg3;
    if (func_002E4E48(0x11, arg1, 8, arg3 + 4) < 0) {
        return -0x21E;
    }
    var_2 = func_002E4F58(arg0, arg2, arg1, 1, arg3);
    if (var_2 >= 0) {
        var_2 = M2C_FIELD(arg1, s32 *, 0);
    }
    return var_2;
}
