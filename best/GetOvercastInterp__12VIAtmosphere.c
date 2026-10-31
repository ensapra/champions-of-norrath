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

f32 GetOvercastInterp__12VIAtmosphere(void *arg0) {
    f32 var_f0;
    s32 temp_3;
    s32 temp_5;

    temp_5 = M2C_FIELD(arg0, s32 *, 0x5EC);
    if (temp_5 == 0) {
        temp_3 = M2C_FIELD(arg0, s32 *, 0x5F0);
        var_f0 = 0.0f;
        if (temp_3 != 0) {
            if (temp_3 == 1) {
                return M2C_FIELD(arg0, f32 *, 0x608);
            }
            goto block_5;
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return var_f0;
    }
block_5:
    if ((temp_5 == 1) && (M2C_FIELD(arg0, s32 *, 0x5F0) == 0)) {
        return 1.0f - M2C_FIELD(arg0, f32 *, 0x608);
    }
    var_f0 = 1.0f;
    return var_f0;
}
