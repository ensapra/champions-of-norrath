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

M2C_UNK func_002D7558(M2C_UNK, s32, s32, s32, s32, s32, s32); /* extern */

void func_002D7690(s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    func_002D7558(0, arg1, arg2, arg3, arg4, arg5, arg4);
}
