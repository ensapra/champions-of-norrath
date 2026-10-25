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

s32 func_001B5C80();                                /* extern */
M2C_UNK func_001B5CD8();                            /* extern */
s32 func_001B71E8(s32);                             /* extern */

s32 func_001B72B0(s32 arg0) {
    s32 temp_16;
    s32 temp_17;

    temp_17 = func_001B5C80();
    temp_16 = func_001B71E8(arg0);
    if (temp_17 != 0) {
        func_001B5CD8();
    }
    return temp_16;
}
