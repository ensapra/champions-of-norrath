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

M2C_UNK Normalize__7VIVect3(void *);                /* extern */

s32 Collide__9VICollideR9VICollRayRC8VISphere(void *arg1, void *arg2) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f1_5;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f3_3;
    f32 temp_f3_4;
    f32 temp_f3_5;
    f32 temp_f3_6;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f6;
    f32 temp_f7;
    f32 temp_f9;
    s32 var_2;
    void *temp_2;
    void *temp_3;

    temp_3 = arg1 + 0x24;
    temp_f9 = M2C_FIELD(arg1, f32 *, 0);
    var_2 = 0;
    temp_f6 = temp_f9 - M2C_FIELD(arg2, f32 *, 0);
    temp_f7 = M2C_FIELD(arg1, f32 *, 4) - M2C_FIELD(arg2, f32 *, 4);
    temp_f3 = M2C_FIELD(arg1, f32 *, 8) - M2C_FIELD(arg2, f32 *, 8);
    temp_f5 = (temp_f6 * M2C_FIELD(arg1, f32 *, 0x24)) + (temp_f7 * M2C_FIELD(temp_3, f32 *, 4)) + (temp_f3 * M2C_FIELD(temp_3, f32 *, 8));
    if (temp_f5 < 0.0f) {
        temp_f1 = M2C_FIELD(arg2, f32 *, 0xC);
        temp_f0 = (temp_f5 * temp_f5) - (((temp_f6 * temp_f6) + (temp_f7 * temp_f7) + (temp_f3 * temp_f3)) - (temp_f1 * temp_f1));
        if (temp_f0 > 0.0f) {
            M2C_ERROR(/* unknown instruction: c1 0x4 */);
            temp_f0_2 = -(temp_f5 + temp_f0);
            temp_f1_2 = temp_f0_2 * M2C_FIELD(arg1, f32 *, 0x34);
            if (temp_f1_2 < M2C_FIELD(arg1, f32 *, 0x44)) {
                temp_2 = arg1 + 0x4C;
                if (temp_f1_2 > 0.0f) {
                    M2C_FIELD(arg1, f32 *, 0x44) = temp_f1_2;
                    temp_f3_2 = M2C_FIELD(arg1, f32 *, 0x24);
                    M2C_FIELD(arg1, f32 *, 0x4C) = temp_f3_2;
                    temp_f3_3 = temp_f3_2 * temp_f0_2;
                    temp_f2 = M2C_FIELD(temp_3, f32 *, 4);
                    M2C_FIELD(temp_2, f32 *, 4) = temp_f2;
                    temp_f2_2 = temp_f2 * temp_f0_2;
                    M2C_FIELD(arg1, f32 *, 0x4C) = temp_f3_3;
                    temp_f1_3 = M2C_FIELD(temp_3, f32 *, 8) * temp_f0_2;
                    M2C_FIELD(temp_2, f32 *, 4) = temp_f2_2;
                    M2C_FIELD(temp_2, f32 *, 8) = temp_f1_3;
                    temp_f3_4 = temp_f3_3 + M2C_FIELD(arg1, f32 *, 0);
                    M2C_FIELD(arg1, f32 *, 0x4C) = temp_f3_4;
                    temp_f2_3 = temp_f2_2 + M2C_FIELD(arg1, f32 *, 4);
                    M2C_FIELD(temp_2, f32 *, 4) = temp_f2_3;
                    temp_f1_4 = temp_f1_3 + M2C_FIELD(arg1, f32 *, 8);
                    M2C_FIELD(temp_2, f32 *, 8) = temp_f1_4;
                    temp_f3_5 = temp_f3_4 - M2C_FIELD(arg2, f32 *, 0);
                    M2C_FIELD(arg1, f32 *, 0x4C) = temp_f3_5;
                    temp_f2_4 = temp_f2_3 - M2C_FIELD(arg2, f32 *, 4);
                    M2C_FIELD(temp_2, f32 *, 4) = temp_f2_4;
                    temp_f1_5 = temp_f1_4 - M2C_FIELD(arg2, f32 *, 8);
                    M2C_FIELD(temp_2, f32 *, 8) = temp_f1_5;
                    temp_f4 = 1.0f / M2C_FIELD(arg2, f32 *, 0xC);
                    M2C_FIELD(temp_2, f32 *, 8) = (f32) (temp_f1_5 * temp_f4);
                    M2C_FIELD(arg1, f32 *, 0x4C) = (f32) (temp_f3_5 * temp_f4);
                    M2C_FIELD(temp_2, f32 *, 4) = (f32) (temp_f2_4 * temp_f4);
                } else {
                    M2C_FIELD(arg1, f32 *, 0x44) = 0.0f;
                    M2C_FIELD(arg1, f32 *, 0x4C) = temp_f9;
                    temp_f2_5 = M2C_FIELD(arg1, f32 *, 4);
                    M2C_FIELD(temp_2, f32 *, 4) = temp_f2_5;
                    temp_f3_6 = M2C_FIELD(arg1, f32 *, 8);
                    M2C_FIELD(temp_2, f32 *, 8) = temp_f3_6;
                    M2C_FIELD(arg1, f32 *, 0x4C) = (f32) (temp_f9 - M2C_FIELD(arg2, f32 *, 0));
                    M2C_FIELD(temp_2, f32 *, 4) = (f32) (temp_f2_5 - M2C_FIELD(arg2, f32 *, 4));
                    M2C_FIELD(temp_2, f32 *, 8) = (f32) (temp_f3_6 - M2C_FIELD(arg2, f32 *, 8));
                    Normalize__7VIVect3(temp_2);
                }
                var_2 = 1;
            }
        }
    }
    return var_2;
}
