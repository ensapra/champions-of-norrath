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

s32 PrecalcPlayback__9VIHSpritei(void *arg0, s32 arg1) {
    f32 temp_f0;
    f32 var_f3;
    void *temp_3;

    temp_3 = M2C_FIELD(arg0, s32 *, 0x80) + (arg1 * 0x68);
    var_f3 = M2C_FIELD(temp_3, f32 *, 0x28);
    if (var_f3 == 0.0f) {
        M2C_FIELD(temp_3, f32 *, 0x4C) = 0.0f;
        M2C_FIELD(temp_3, f32 *, 0x48) = 0.0f;
    } else {
        if (!(var_f3 > 0.0f)) {
            var_f3 = -var_f3;
        }
        temp_f0 = M2C_FIELD(temp_3, f32 *, 0x24) * var_f3 * 0.0009999999f;
        M2C_FIELD(temp_3, f32 *, 0x48) = temp_f0;
        M2C_FIELD(temp_3, f32 *, 0x4C) = (f32) (1.0f / temp_f0);
    }
    return 0;
}
