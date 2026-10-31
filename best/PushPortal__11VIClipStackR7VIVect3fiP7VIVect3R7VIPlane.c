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

M2C_UNK __cl__7VIPlaneRC7VIVect3N21(f32 *, void *, void *, void *); /* extern */

void PushPortal__11VIClipStackR7VIVect3fiP7VIVect3R7VIPlane(void *arg0, void *arg1, s32 arg2, void *arg3, void *arg4, f32 fparg0) {
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    void *sp30;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 temp_f5_3;
    f32 temp_f6;
    s32 temp_3;
    s32 temp_3_2;
    s32 temp_6;
    s32 temp_9;
    s32 var_20;
    void *temp_22;
    void *temp_30;
    void *temp_4;
    void *temp_4_2;
    void *temp_4_3;
    void *temp_5;
    void *temp_5_2;
    void *temp_8;
    void *var_16;
    void *var_21;

    temp_4 = arg0 + 0x1C;
    temp_30 = arg0 + 0x10;
    temp_f1 = M2C_FIELD(arg4, f32 *, 0);
    temp_f3 = M2C_FIELD(arg4, f32 *, 4);
    temp_22 = M2C_FIELD(arg0, s32 *, 8) + (M2C_FIELD(arg0, s32 *, 0) * 0x10);
    temp_f5 = -temp_f1;
    temp_f4 = M2C_FIELD(arg4, f32 *, 8);
    M2C_FIELD(temp_22, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
    sp30 = temp_4;
    M2C_FIELD(temp_22, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
    temp_9 = M2C_FIELD(arg0, s32 *, 0x18);
    sp4 = 0.0f;
    sp8 = 0.0f;
    temp_8 = M2C_FIELD(temp_4, s32 *, 4) + (temp_9 * 0x10);
    sp10 = 0.0f;
    sp14 = 0.0f;
    sp18 = 0.0f;
    sp1C = 0.0f;
    sp20 = temp_f5;
    sp28 = -temp_f4;
    var_21 = (arg3 + (arg2 * 0xC)) - 0xC;
    sp24 = -temp_f3;
    temp_3 = M2C_FIELD(arg0, s32 *, 0xC);
    M2C_FIELD(temp_8, f32 *, 0) = temp_f5;
    M2C_FIELD(temp_8, f32 *, 4) = sp24;
    temp_4_2 = M2C_FIELD(temp_30, s32 *, 4) + (temp_3 * 0xC);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (temp_9 + 1);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (temp_3 + 1);
    M2C_FIELD(temp_8, f32 *, 8) = sp28;
    M2C_FIELD(temp_8, f32 *, 0xC) = (f32) -((fparg0 - ((M2C_FIELD(arg1, f32 *, 0) * temp_f1) + (M2C_FIELD(arg1, f32 *, 4) * temp_f3) + (M2C_FIELD(arg1, f32 *, 8) * temp_f4) + M2C_FIELD(arg4, f32 *, 0xC))) + M2C_FIELD(arg4, f32 *, 0xC));
    M2C_FIELD(temp_4_2, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(temp_4_2, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(temp_4_2, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    if (arg2 > 0) {
        var_16 = arg3;
        var_20 = arg2;
        do {
            temp_5 = var_21;
            var_21 = var_16;
            var_20 -= 1;
            __cl__7VIPlaneRC7VIVect3N21(&sp10, temp_5, var_16, arg1);
            temp_3_2 = M2C_FIELD(arg0, s32 *, 0x18);
            temp_6 = M2C_FIELD(arg0, s32 *, 0xC);
            temp_4_3 = M2C_FIELD(sp30, s32 *, 4) + (temp_3_2 * 0x10);
            M2C_FIELD(temp_4_3, f32 *, 0) = (f32) sp10;
            temp_5_2 = M2C_FIELD(temp_30, s32 *, 4) + (temp_6 * 0xC);
            M2C_FIELD(arg0, s32 *, 0x18) = (s32) (temp_3_2 + 1);
            M2C_FIELD(temp_4_3, f32 *, 4) = sp14;
            M2C_FIELD(temp_4_3, f32 *, 8) = sp18;
            M2C_FIELD(temp_4_3, f32 *, 0xC) = sp1C;
            temp_f2 = M2C_FIELD(var_16, f32 *, 0) - M2C_FIELD(arg1, f32 *, 0);
            temp_f6 = M2C_FIELD(var_16, f32 *, 4) - M2C_FIELD(arg1, f32 *, 4);
            temp_f5_2 = M2C_FIELD(var_16, f32 *, 8);
            var_16 += 0xC;
            temp_f5_3 = temp_f5_2 - M2C_FIELD(arg1, f32 *, 8);
            sp4 = temp_f6;
            sp8 = temp_f5_3;
            M2C_FIELD(temp_5_2, f32 *, 0) = temp_f2;
            M2C_FIELD(temp_5_2, f32 *, 4) = sp4;
            temp_f0 = fparg0 / ((temp_f2 * M2C_FIELD(arg4, f32 *, 0)) + (temp_f6 * M2C_FIELD(arg4, f32 *, 4)) + (temp_f5_3 * M2C_FIELD(arg4, f32 *, 8)));
            temp_f3_2 = sp8 * temp_f0;
            temp_f2_2 = temp_f2 * temp_f0;
            temp_f1_2 = sp4 * temp_f0;
            M2C_FIELD(temp_5_2, f32 *, 8) = temp_f3_2;
            M2C_FIELD(temp_5_2, f32 *, 0) = temp_f2_2;
            M2C_FIELD(temp_5_2, f32 *, 4) = temp_f1_2;
            M2C_FIELD(temp_5_2, f32 *, 0) = (f32) (temp_f2_2 + M2C_FIELD(arg1, f32 *, 0));
            M2C_FIELD(arg0, s32 *, 0xC) = (s32) (temp_6 + 1);
            M2C_FIELD(temp_5_2, f32 *, 4) = (f32) (temp_f1_2 + M2C_FIELD(arg1, f32 *, 4));
            M2C_FIELD(temp_5_2, f32 *, 8) = (f32) (temp_f3_2 + M2C_FIELD(arg1, f32 *, 8));
        } while (var_20 != 0);
    }
    M2C_FIELD(temp_22, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) - M2C_FIELD(temp_22, s32 *, 4));
    M2C_FIELD(temp_22, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) - M2C_FIELD(temp_22, s32 *, 0xC));
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 1);
}
