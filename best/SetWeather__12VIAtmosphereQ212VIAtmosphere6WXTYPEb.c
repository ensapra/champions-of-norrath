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

s32 SetWeather__12VIAtmosphereQ212VIAtmosphere6WXTYPEb(void *arg0, s32 arg1, s32 arg2) {
    f32 var_f0;
    s32 temp_2;
    s32 var_2;

    var_2 = -1;
    if (M2C_FIELD(arg0, s32 *, 0x4CC) != 0) {
        if (M2C_FIELD(arg0, f32 *, 0x608) == 0.0f) {
            if (M2C_FIELD(arg0, s32 *, 0x5FC) != arg1) {
                if (arg2 != 0) {
                    var_f0 = 1.0f;
                } else {
                    var_f0 = 0.00001f;
                }
                M2C_FIELD(arg0, f32 *, 0x608) = var_f0;
                M2C_FIELD(arg0, s32 *, 0x604) = arg1;
                M2C_FIELD(arg0, s32 *, 0x600) = arg1;
                if (arg1 == 0) {
                    temp_2 = M2C_FIELD(arg0, s32 *, 0x60C);
                    M2C_FIELD(arg0, s32 *, 0x5F0) = (s32) (temp_2 == 2);
                    M2C_FIELD(arg0, s32 *, 0x5F8) = (s32) M2C_FIELD(((temp_2 * 4) + arg0), s32 *, 0x4D0);
                } else {
                    M2C_FIELD(arg0, s32 *, 0x5F0) = 1;
                    M2C_FIELD(arg0, s32 *, 0x5F8) = (s32) M2C_FIELD(arg0, s32 *, 0x4D8);
                }
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0x604) = arg1;
        }
        var_2 = 0;
    }
    return var_2;
}
