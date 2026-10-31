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

s32 reset_endpoint_cmp__FPC16reset_endpoint_tT0(u64 *arg0, u64 *arg1) {
    s32 var_2;
    u64 temp_3;
    u64 temp_4;

    temp_3 = *arg0;
    var_2 = 1;
    temp_4 = *arg1;
    if (temp_4 >= temp_3) {
        var_2 = (temp_3 >= temp_4) ? 0 : -1;
    }
    return var_2;
}
