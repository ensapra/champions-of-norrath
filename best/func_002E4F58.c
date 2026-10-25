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

M2C_UNK func_00301FFC(s32, s32, s32, s32);          /* extern */

s32 func_002E4F58(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_7;

    temp_7 = arg3 * 4;
    if (arg1 != 0) {
        if ((arg4 < 0) || ((M2C_FIELD(arg0, s32 *, 0x30) - temp_7) < arg4)) {
            return -0x21F;
        }
        func_00301FFC(arg1, temp_7 + arg2, arg4, temp_7);
        goto block_5;
    }
block_5:
    return 0;
}
