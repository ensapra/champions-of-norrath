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

s32 func_002D4330(s32, s32);                        /* extern */
extern M2C_UNK D_008DD8D0;

s32 func_002D4498(s32 arg0, s32 arg1) {
    s32 var_2;

    var_2 = 0;
    if (M2C_FIELD((&D_008DD8D0 + ((arg1 * 0x1C) + (arg0 * 0x70))), s32 *, 0x10) != 0) {
        var_2 = func_002D4330(arg0, arg0) == 0x3FFFF;
    }
    return var_2;
}
