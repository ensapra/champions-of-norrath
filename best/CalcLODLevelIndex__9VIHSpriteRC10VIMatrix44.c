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

s32 CalcLODLevelIndex__9VIHSpriteRC10VIMatrix44(void *arg0, void *arg1) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 *var_4;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f1;
    f32 temp_f2;
    s32 temp_2;
    s32 var_6;
    s32 var_7;

    temp_f1 = M2C_FIELD(arg1, f32 *, 0x34);
    var_7 = -1;
    sp0 = M2C_FIELD(arg1, f32 *, 0x30);
    var_6 = 0;
    sp4 = 0.0f;
    sp4 = temp_f1;
    temp_2 = M2C_FIELD(arg0, s32 *, 0xA8);
    temp_f0 = M2C_FIELD(arg1, f32 *, 0x38);
    sp8 = 0.0f;
    sp8 = temp_f0;
    temp_f2 = (sp0 * sp0) + (temp_f1 * temp_f1) + (temp_f0 * temp_f0);
    if (temp_2 > 0) {
        var_4 = arg0 + 0xAC;
        temp_f0_2 = M2C_FIELD(arg0, f32 *, 0xAC);
        if (!(temp_f2 < (temp_f0_2 * temp_f0_2))) {
loop_3:
            var_6 += 1;
            var_4 += 4;
            var_7 += 1;
            if (var_6 < temp_2) {
                temp_f0_3 = *var_4;
                if (!(temp_f2 < (temp_f0_3 * temp_f0_3))) {
                    goto loop_3;
                }
            }
        }
    }
    return var_7;
}
