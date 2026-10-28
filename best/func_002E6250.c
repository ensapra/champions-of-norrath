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

s32 func_002E6000(s32, s32, s32, s32);              /* extern */
s32 func_002E6040(s32, s32, s32);                   /* extern */

s32 func_002E6250(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_2;

    if (arg2 == 0) {
        var_2 = -0x21C;
    } else {
        var_2 = 0;
        if (func_002E6040(arg0, arg1, arg2) < 0) {
            var_2 = func_002E6000(arg0, arg1, arg2, arg3);
            if (var_2 >= 0) {
                var_2 = 0;
            }
        }
    }
    return var_2;
}
