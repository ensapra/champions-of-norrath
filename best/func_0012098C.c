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

s32 func_0012098C(s32 *arg0, f32 arg_sp2C, s64 arg_sp70, s64 arg_sp78, s64 arg_sp80, s64 arg_sp88, s64 arg_sp90, s64 arg_sp98, s64 arg_spA0, s64 arg_spA8, s64 arg_spB0, s64 arg_spB8) {
    s32 temp_2;

    temp_2 = (s32) M2C_ERROR(/* Read from unset register $f1 */) >> 4;
    if (*arg0 < temp_2) {
        *arg0 = temp_2;
    }
    return 0;
}
