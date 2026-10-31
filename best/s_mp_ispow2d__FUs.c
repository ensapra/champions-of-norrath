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

s32 s_mp_ispow2d__FUs(s32 arg0) {
    s32 var_4;
    u32 var_3;

    var_3 = arg0 & 0xFFFF;
    var_4 = 0;
loop_3:
    if (!(var_3 & 1 & 0xFFFF)) {
        var_3 = var_3 >> 1;
        var_4 += 1;
        goto loop_3;
    }
    return ((var_3 ^ 1) == 0) ? var_4 : -1;
}
