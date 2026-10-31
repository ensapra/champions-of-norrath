/* machine draft (m2c) for ee-gcc-2.96 -Os -G8 -mno-check-zero-division, tried by autopilot */
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

u16 *strncpyWide__FPUsPCUsUi(u16 *arg0, u16 *arg1, s32 arg2) {
    s32 temp_2;
    u16 *temp_8;
    u32 temp_6;
    u32 var_9;

    temp_6 = arg2 - 1;
    var_9 = 0;
    if (temp_6 != 0) {
        *arg0 = *arg1;
        if (*arg1 != 0) {
            var_9 = 1;
loop_3:
            temp_2 = var_9 * 2;
            temp_8 = temp_2 + arg1;
            if (var_9 < temp_6) {
                *(temp_2 + arg0) = *temp_8;
                if (*temp_8 != 0) {
                    var_9 += 1;
                    goto loop_3;
                }
            }
        }
    }
    if (var_9 == temp_6) {
        *((temp_6 * 2) + arg0) = 0;
    }
    return arg0;
}
