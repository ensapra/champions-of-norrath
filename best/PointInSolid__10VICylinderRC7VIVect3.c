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

s32 PointInSolid__10VICylinderRC7VIVect3(void *arg0, void *arg1) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f11;
    f32 temp_f12;
    f32 temp_f13;
    f32 temp_f14;
    f32 temp_f15;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f6;
    f32 temp_f7;
    f32 temp_f8;
    s32 var_2;
    s32 var_5;
    void *temp_3;

    temp_f14 = M2C_FIELD(arg1, f32 *, 0);
    temp_f15 = M2C_FIELD(arg1, f32 *, 8);
    temp_f13 = M2C_FIELD(arg1, f32 *, 4);
    sp0 = 0.0f;
    temp_3 = arg0 + 0xC;
    sp4 = 0.0f;
    sp8 = 0.0f;
    sp10 = 0.0f;
    sp14 = 0.0f;
    sp18 = 0.0f;
    sp10 = temp_f14;
    sp14 = temp_f13;
    temp_f11 = M2C_FIELD(arg0, f32 *, 0);
    sp18 = temp_f15;
    temp_f0 = temp_f14 - temp_f11;
    temp_f6 = M2C_FIELD(arg0, f32 *, 0xC);
    temp_f7 = M2C_FIELD(temp_3, f32 *, 4);
    temp_f8 = M2C_FIELD(temp_3, f32 *, 8);
    temp_f10 = M2C_FIELD(arg0, f32 *, 4);
    temp_f12 = M2C_FIELD(arg0, f32 *, 8);
    sp10 = temp_f0;
    temp_f1 = sp14 - temp_f10;
    temp_f4 = M2C_FIELD(arg0, f32 *, 0x1C);
    temp_f2 = sp18 - temp_f12;
    sp14 = temp_f1;
    sp18 = temp_f2;
    temp_f0_2 = (temp_f0 * temp_f6) + (temp_f1 * temp_f7) + (temp_f2 * temp_f8);
    temp_f3 = temp_f0 - (temp_f6 * temp_f0_2);
    sp10 = temp_f3;
    temp_f1_2 = temp_f1 - (temp_f7 * temp_f0_2);
    temp_f2_2 = temp_f2 - (temp_f8 * temp_f0_2);
    sp14 = temp_f1_2;
    sp18 = temp_f2_2;
    var_5 = 0;
    if (((temp_f3 * temp_f3) + (temp_f1_2 * temp_f1_2) + (temp_f2_2 * temp_f2_2)) <= (temp_f4 * temp_f4)) {
        temp_f1_3 = ((temp_f6 * temp_f14) + (temp_f7 * temp_f13) + (temp_f8 * temp_f15)) - ((temp_f11 * temp_f6) + (temp_f10 * temp_f7) + (temp_f12 * temp_f8));
        var_2 = 0;
        if (temp_f1_3 >= 0.0f) {
            if (temp_f1_3 <= M2C_FIELD(arg0, f32 *, 0x18)) {
                var_5 = 1;
            }
            goto block_4;
        }
    } else {
block_4:
        var_2 = var_5;
    }
    return var_2;
}
