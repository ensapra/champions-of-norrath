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

f32 DistanceSquared__C7VIBRectRC7VIVect2(void *arg0, void *arg1) {
    f32 sp0;
    f32 sp4;
    f32 temp_f2;
    f32 temp_f3;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f1;

    temp_f3 = M2C_FIELD(arg1, f32 *, 0);
    var_f0 = M2C_FIELD(arg0, f32 *, 0) - temp_f3;
    sp0 = 0.0f;
    sp4 = 0.0f;
    if (!(var_f0 > 0.0f)) {
        var_f0 = 0.0f;
    }
    sp0 = var_f0;
    var_f1 = M2C_FIELD(arg0, f32 *, 4) - M2C_FIELD(arg1, f32 *, 4);
    if (!(var_f1 > 0.0f)) {
        var_f1 = 0.0f;
    }
    sp4 = var_f1;
    var_f0_2 = temp_f3 - M2C_FIELD(arg0, f32 *, 8);
    if (!(sp0 < var_f0_2)) {
        var_f0_2 = sp0;
    }
    sp0 = var_f0_2;
    temp_f2 = sp4;
    var_f0_3 = M2C_FIELD(arg1, f32 *, 4) - M2C_FIELD(arg0, f32 *, 0xC);
    if (!(temp_f2 < var_f0_3)) {
        var_f0_3 = temp_f2;
    }
    sp4 = var_f0_3;
    return (sp0 * sp0) + (sp4 * sp4);
}
