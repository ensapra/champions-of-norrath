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

s32 func_002D6470(s32, s32);                        /* extern */
s32 func_002D66B8(s32);                             /* extern */
extern s32 D_00444950;

s32 func_002D56A8(s32 arg0, s32 arg1, s32 arg2) {
    if ((u32) (arg0 - 1) < 2U) {
        if (D_00444950 == 0) {
            if (func_002D66B8(arg1) != 0) {
                D_00444950 = 1;
                goto block_4;
            }
            goto block_5;
        }
block_4:
        return func_002D6470(arg1, arg2);
    }
block_5:
    return -1;
}
