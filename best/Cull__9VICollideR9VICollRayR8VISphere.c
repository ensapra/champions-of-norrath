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

s32 Cull__9VICollideR9VICollRayR8VISphere(void *arg1, void *arg2) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 temp_f0;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f6;
    f32 temp_f8;
    s32 var_2;
    void *temp_3;

    temp_3 = arg1 + 0x24;
    var_2 = 1;
    temp_f4 = M2C_FIELD(arg1, f32 *, 4) - M2C_FIELD(arg2, f32 *, 4);
    temp_f6 = M2C_FIELD(arg1, f32 *, 0) - M2C_FIELD(arg2, f32 *, 0);
    temp_f2 = M2C_FIELD(arg2, f32 *, 0xC);
    temp_f5 = M2C_FIELD(arg1, f32 *, 8) - M2C_FIELD(arg2, f32 *, 8);
    sp4 = temp_f4;
    sp0 = temp_f6;
    temp_f8 = ((temp_f6 * temp_f6) + (temp_f4 * temp_f4) + (temp_f5 * temp_f5)) - (temp_f2 * temp_f2);
    sp8 = temp_f5;
    if (!(temp_f8 > 0.0f) || ((temp_f3 = (temp_f6 * M2C_FIELD(arg1, f32 *, 0x24)) + (temp_f4 * M2C_FIELD(temp_3, f32 *, 4)) + (temp_f5 * M2C_FIELD(temp_3, f32 *, 8)), (temp_f3 < 0.0f)) && (temp_f0 = (temp_f3 * temp_f3) - temp_f8, (temp_f0 > 0.0f)) && (M2C_ERROR(/* unknown instruction: c1 0x4 */), ((-(temp_f3 + temp_f0) * M2C_FIELD(arg1, f32 *, 0x34)) < M2C_FIELD(arg1, f32 *, 0x44))))) {
        var_2 = 0;
    }
    return var_2;
}
