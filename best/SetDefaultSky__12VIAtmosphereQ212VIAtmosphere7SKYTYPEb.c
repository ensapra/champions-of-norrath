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

s32 SetDefaultSky__12VIAtmosphereQ212VIAtmosphere7SKYTYPEb(void *arg0, s32 arg1, s32 arg2) {
    f32 var_f0;
    s32 temp_2;
    s32 var_2;
    s32 var_2_2;

    var_2 = -1;
    if (M2C_FIELD(arg0, s32 *, 0x4CC) != 0) {
        if (M2C_FIELD(arg0, f32 *, 0x608) == 0.0f) {
            if (M2C_FIELD(arg0, s32 *, 0x60C) != arg1) {
                if (arg2 != 0) {
                    var_f0 = 1.0f;
                } else {
                    var_f0 = 0.00001f;
                }
                M2C_FIELD(arg0, f32 *, 0x608) = var_f0;
                M2C_FIELD(arg0, s32 *, 0x614) = arg1;
                M2C_FIELD(arg0, s32 *, 0x610) = arg1;
                if (arg1 == 0) {
                    if (M2C_FIELD(arg0, s32 *, 0x5FC) <= 0) {
                        var_2_2 = M2C_FIELD(arg0, s32 *, 0x4D0);
                        M2C_FIELD(arg0, s32 *, 0x5F0) = 0;
                        goto block_28;
                    }
                    M2C_FIELD(arg0, f32 *, 0x608) = 0.0f;
                    M2C_FIELD(arg0, s32 *, 0x60C) = 0;
                    return 0;
                }
                temp_2 = M2C_FIELD(arg0, s32 *, 0x5FC);
                if (arg1 == 1) {
                    if (temp_2 <= 0) {
                        var_2_2 = M2C_FIELD(arg0, s32 *, 0x4D4);
                        M2C_FIELD(arg0, s32 *, 0x5F0) = 0;
                        goto block_28;
                    }
                    M2C_FIELD(arg0, s32 *, 0x60C) = 1;
                    /* Duplicate return node #26. Try simplifying control flow for better match */
                    M2C_FIELD(arg0, f32 *, 0x608) = 0.0f;
                    return 0;
                }
                if (temp_2 <= 0) {
                    var_2_2 = M2C_FIELD(arg0, s32 *, 0x4D8);
                    M2C_FIELD(arg0, s32 *, 0x5F0) = 1;
block_28:
                    M2C_FIELD(arg0, s32 *, 0x5F8) = var_2_2;
                    goto block_29;
                }
                M2C_FIELD(arg0, s32 *, 0x60C) = arg1;
                M2C_FIELD(arg0, f32 *, 0x608) = 0.0f;
                return 0;
            }
            goto block_29;
        }
        M2C_FIELD(arg0, s32 *, 0x614) = arg1;
block_29:
        var_2 = 0;
        /* Duplicate return node #30. Try simplifying control flow for better match */
        return var_2;
    }
    return var_2;
}
