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

s32 s_mp_cmp_d__FP6mp_intUs(void *arg0, s32 arg1) {
    s32 var_2;
    u16 temp_2;
    u32 temp_5;

    temp_5 = arg1 & 0xFFFF;
    var_2 = 1;
    if ((u32) M2C_FIELD(arg0, u32 *, 8) < 2U) {
        temp_2 = *M2C_FIELD(arg0, u16 **, 0xC);
        var_2 = (((temp_2 < temp_5) ^ 0) != 0) ? -1 : (temp_5 < temp_2);
    }
    return var_2;
}
