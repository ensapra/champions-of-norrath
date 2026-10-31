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

s32 CollideLeaf__6VIZoneiR15VISceneCollVars(s32);   /* extern */

s32 Collide__6VIZoneiR15VISceneCollVars(s32 arg0, s32 arg1, void *arg2) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f6_3;
    f32 temp_f6_4;
    f32 temp_f6_5;
    f32 temp_f7;
    f32 temp_f7_2;
    f32 temp_f7_3;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 temp_f8_3;
    f32 temp_f9;
    f32 temp_f9_2;
    s32 temp_16;
    s32 temp_16_2;
    s32 var_16;
    s32 var_22;
    s32 var_5;
    void *temp_17;
    void *temp_18;
    void *temp_20;
    void *temp_2;
    void *temp_2_2;
    void *temp_3;

    var_16 = arg1;
    var_22 = 0;
    if (var_16 & 0xF0000000) {
        if (var_16 & 0x40000000) {
            return CollideLeaf__6VIZoneiR15VISceneCollVars(var_16 & 0x0FFFFFFF);
        }
        var_16 &= 0x0FFFFFFF;
        goto block_5;
    }
block_5:
    temp_20 = arg0 + 0x44;
    temp_17 = arg2 + 0x14;
    temp_3 = M2C_FIELD(temp_20, s32 *, 4) + (var_16 * 0x18);
    temp_f2 = M2C_FIELD(temp_3, f32 *, 0);
    temp_18 = arg2 + 0x20;
    temp_f6 = M2C_FIELD(temp_3, f32 *, 4);
    temp_f7 = M2C_FIELD(temp_3, f32 *, 8);
    temp_f6_2 = M2C_FIELD(arg2, f32 *, 0x2C);
    temp_f8 = M2C_FIELD(temp_3, f32 *, 0xC);
    temp_f3 = temp_f6_2 + 0.03125f;
    temp_f1 = (M2C_FIELD(arg2, f32 *, 0x14) * temp_f2) + (M2C_FIELD(temp_17, f32 *, 4) * temp_f6) + (M2C_FIELD(temp_17, f32 *, 8) * temp_f7) + temp_f8;
    temp_f2_2 = (M2C_FIELD(arg2, f32 *, 0x20) * temp_f2) + (M2C_FIELD(temp_18, f32 *, 4) * temp_f6) + (M2C_FIELD(temp_18, f32 *, 8) * temp_f7) + temp_f8;
    if ((temp_f3 < temp_f1) && (temp_f3 < temp_f2_2)) {
        var_5 = M2C_FIELD(temp_3, s32 *, 0x10);
        goto block_15;
    }
    temp_f0 = -0.03125f - temp_f6_2;
    if ((temp_f1 < temp_f0) && (temp_f2_2 < temp_f0)) {
        var_5 = M2C_FIELD((M2C_FIELD(temp_20, s32 *, 4) + (var_16 * 0x18)), s32 *, 0x14);
        goto block_16;
    }
    if (temp_f1 > 0.0f) {
        temp_16 = var_16 * 0x18;
        var_22 = Collide__6VIZoneiR15VISceneCollVars(arg0, M2C_FIELD((M2C_FIELD(temp_20, s32 *, 4) + temp_16), s32 *, 0x10), arg2) != 0;
        temp_2 = M2C_FIELD(temp_20, s32 *, 4) + temp_16;
        temp_f6_3 = M2C_FIELD(temp_2, f32 *, 0);
        temp_f9 = M2C_FIELD(temp_2, f32 *, 4);
        temp_f7_2 = M2C_FIELD(temp_2, f32 *, 8);
        temp_f8_2 = M2C_FIELD(temp_2, f32 *, 0xC);
        temp_f6_4 = M2C_FIELD(arg2, f32 *, 0x2C) + 0.03125f;
        if ((((M2C_FIELD(arg2, f32 *, 0x14) * temp_f6_3) + (M2C_FIELD(temp_17, f32 *, 4) * temp_f9) + (M2C_FIELD(temp_17, f32 *, 8) * temp_f7_2) + temp_f8_2) < temp_f6_4) || (((M2C_FIELD(arg2, f32 *, 0x20) * temp_f6_3) + (M2C_FIELD(temp_18, f32 *, 4) * temp_f9) + (M2C_FIELD(temp_18, f32 *, 8) * temp_f7_2) + temp_f8_2) < temp_f6_4)) {
            var_5 = M2C_FIELD(temp_2, s32 *, 0x14);
block_15:
block_16:
            if (Collide__6VIZoneiR15VISceneCollVars(arg0, var_5, arg2) != 0) {
                var_22 = 1;
            }
        }
    } else {
        temp_16_2 = var_16 * 0x18;
        var_22 = Collide__6VIZoneiR15VISceneCollVars(arg0, M2C_FIELD((M2C_FIELD(temp_20, s32 *, 4) + temp_16_2), s32 *, 0x14), arg2) != 0;
        temp_2_2 = M2C_FIELD(temp_20, s32 *, 4) + temp_16_2;
        temp_f6_5 = M2C_FIELD(temp_2_2, f32 *, 0);
        temp_f9_2 = M2C_FIELD(temp_2_2, f32 *, 4);
        temp_f7_3 = M2C_FIELD(temp_2_2, f32 *, 8);
        temp_f8_3 = M2C_FIELD(temp_2_2, f32 *, 0xC);
        temp_f4 = -0.03125f - M2C_FIELD(arg2, f32 *, 0x2C);
        if ((temp_f4 < ((M2C_FIELD(arg2, f32 *, 0x14) * temp_f6_5) + (M2C_FIELD(temp_17, f32 *, 4) * temp_f9_2) + (M2C_FIELD(temp_17, f32 *, 8) * temp_f7_3) + temp_f8_3)) || (temp_f4 < ((M2C_FIELD(arg2, f32 *, 0x20) * temp_f6_5) + (M2C_FIELD(temp_18, f32 *, 4) * temp_f9_2) + (M2C_FIELD(temp_18, f32 *, 8) * temp_f7_3) + temp_f8_3))) {
            var_22 = (Collide__6VIZoneiR15VISceneCollVars(arg0, M2C_FIELD(temp_2_2, s32 *, 0x10), arg2) != 0) ? 1 : var_22;
        }
    }
    return var_22;
}
