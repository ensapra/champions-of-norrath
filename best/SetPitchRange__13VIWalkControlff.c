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

s32 SetPitchRange__13VIWalkControlff(void *arg0) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 var_f0;
    f32 var_f0_2;
    s32 var_condition_bit;

    M2C_ERROR(/* unknown instruction: max.s $f13, $f13, $f0 */);
    M2C_ERROR(/* unknown instruction: max.s $f12, $f12, $f0 */);
    temp_f0 = M2C_ERROR(/* unknown instruction: min.s $f0, $f12, $f1 */);
    temp_f2 = M2C_ERROR(/* unknown instruction: min.s $f2, $f13, $f1 */);
    M2C_FIELD(arg0, f32 *, 0x6C) = temp_f2;
    M2C_FIELD(arg0, f32 *, 0x68) = temp_f0;
    temp_f1 = M2C_FIELD(arg0, f32 *, 0xC0);
    if (temp_f1 < temp_f0) {
        if (temp_f2 < temp_f0) {
            var_f0 = M2C_FIELD(arg0, f32 *, 0x6C);
        } else {
            var_f0 = M2C_FIELD(arg0, f32 *, 0x68);
            goto block_11;
        }
    } else if (!(temp_f2 < temp_f1)) {
        var_f0 = M2C_FIELD(arg0, f32 *, 0x68);
block_11:
        if (!(M2C_FIELD(arg0, f32 *, 0xC0) < var_f0)) {
            var_f0 = M2C_FIELD(arg0, f32 *, 0xC0);
        }
    } else {
        var_f0 = M2C_FIELD(arg0, f32 *, 0x6C);
    }
    M2C_FIELD(arg0, f32 *, 0xC0) = var_f0;
    temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x68);
    temp_f2_2 = M2C_FIELD(arg0, f32 *, 0x148);
    var_f0_2 = M2C_FIELD(arg0, f32 *, 0x6C);
    if (temp_f2_2 < temp_f1_2) {
        var_condition_bit = var_f0_2 < temp_f1_2;
    } else {
        var_condition_bit = var_f0_2 < temp_f2_2;
    }
    if (!var_condition_bit) {
        temp_f2_3 = M2C_FIELD(arg0, f32 *, 0x148);
        var_f0_2 = temp_f1_2;
        if (!(temp_f2_3 < var_f0_2)) {
            var_f0_2 = temp_f2_3;
        }
    }
    M2C_FIELD(arg0, f32 *, 0x148) = var_f0_2;
    return 0;
}
