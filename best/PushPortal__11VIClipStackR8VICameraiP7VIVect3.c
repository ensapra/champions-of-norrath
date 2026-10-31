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

void PushPortal__11VIClipStackR8VICameraiP7VIVect3(void *arg0, void *arg1, s32 arg2, void *arg3) {
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    void *sp20;
    void *sp24;
    f32 temp_f0;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f3_3;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f4_3;
    f32 temp_f6;
    f32 temp_f6_2;
    s32 temp_3_2;
    s32 temp_4;
    s32 temp_5;
    s32 temp_6;
    s32 var_20;
    void *temp_10;
    void *temp_19;
    void *temp_21;
    void *temp_3;
    void *temp_4_2;
    void *temp_5_2;
    void *temp_5_3;
    void *temp_8;
    void *temp_9;
    void *var_17;
    void *var_22;

    temp_9 = arg1 + 0x1A0;
    temp_10 = arg1 + 0x1C;
    sp20 = arg0 + 0x1C;
    temp_21 = M2C_FIELD(arg0, s32 *, 8) + (M2C_FIELD(arg0, s32 *, 0) * 0x10);
    M2C_FIELD(temp_21, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
    sp24 = arg0 + 0x10;
    M2C_FIELD(temp_21, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
    var_22 = (arg3 + (arg2 * 0xC)) - 0xC;
    temp_5 = M2C_FIELD(arg0, s32 *, 0x18);
    sp4 = 0.0f;
    temp_8 = M2C_FIELD(sp20, s32 *, 4) + (temp_5 * 0x10);
    sp8 = 0.0f;
    sp10 = 0.0f;
    sp14 = 0.0f;
    sp18 = 0.0f;
    sp1C = 0.0f;
    M2C_FIELD(temp_8, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0x1A0);
    temp_4 = M2C_FIELD(arg0, s32 *, 0xC);
    M2C_FIELD(temp_8, f32 *, 4) = (f32) M2C_FIELD(temp_9, f32 *, 4);
    temp_3 = M2C_FIELD(sp24, s32 *, 4) + (temp_4 * 0xC);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (temp_5 + 1);
    M2C_FIELD(temp_8, f32 *, 8) = (f32) M2C_FIELD(temp_9, f32 *, 8);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (temp_4 + 1);
    M2C_FIELD(temp_8, f32 *, 0xC) = (f32) M2C_FIELD(temp_9, f32 *, 0xC);
    M2C_FIELD(temp_3, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0x1C);
    M2C_FIELD(temp_3, f32 *, 4) = (f32) M2C_FIELD(temp_10, f32 *, 4);
    M2C_FIELD(temp_3, f32 *, 8) = (f32) M2C_FIELD(temp_10, f32 *, 8);
    if (arg2 > 0) {
        var_17 = arg3;
        var_20 = arg2;
        temp_19 = arg1 + 8;
        do {
            temp_5_2 = var_22;
            var_22 = var_17;
            var_20 -= 1;
            __cl__7VIPlaneRC7VIVect3N21(&sp10, temp_5_2, var_17, temp_10);
            temp_3_2 = M2C_FIELD(arg0, s32 *, 0x18);
            temp_6 = M2C_FIELD(arg0, s32 *, 0xC);
            temp_4_2 = M2C_FIELD(sp20, s32 *, 4) + (temp_3_2 * 0x10);
            M2C_FIELD(temp_4_2, f32 *, 0) = (f32) sp10;
            M2C_FIELD(temp_4_2, f32 *, 4) = sp14;
            temp_5_3 = M2C_FIELD(sp24, s32 *, 4) + (temp_6 * 0xC);
            M2C_FIELD(arg0, s32 *, 0x18) = (s32) (temp_3_2 + 1);
            M2C_FIELD(temp_4_2, f32 *, 8) = sp18;
            M2C_FIELD(temp_4_2, f32 *, 0xC) = sp1C;
            temp_f4 = M2C_FIELD(var_17, f32 *, 0);
            temp_f3 = M2C_FIELD(var_17, f32 *, 4);
            temp_f6 = M2C_FIELD(var_17, f32 *, 8);
            var_17 += 0xC;
            temp_f4_2 = temp_f4 - M2C_FIELD(arg1, f32 *, 0x1C);
            temp_f3_2 = temp_f3 - M2C_FIELD(temp_10, f32 *, 4);
            temp_f6_2 = temp_f6 - M2C_FIELD(temp_10, f32 *, 8);
            sp4 = temp_f3_2;
            sp8 = temp_f6_2;
            M2C_FIELD(temp_5_3, f32 *, 0) = temp_f4_2;
            M2C_FIELD(temp_5_3, f32 *, 4) = sp4;
            M2C_FIELD(temp_5_3, f32 *, 8) = sp8;
            temp_f0 = M2C_FIELD(arg1, f32 *, 4) / ((temp_f4_2 * M2C_FIELD(arg1, f32 *, 8)) + (temp_f3_2 * M2C_FIELD(temp_19, f32 *, 4)) + (temp_f6_2 * M2C_FIELD(temp_19, f32 *, 8)));
            temp_f3_3 = sp8 * temp_f0;
            temp_f4_3 = temp_f4_2 * temp_f0;
            temp_f2 = sp4 * temp_f0;
            M2C_FIELD(temp_5_3, f32 *, 0) = temp_f4_3;
            M2C_FIELD(temp_5_3, f32 *, 4) = temp_f2;
            M2C_FIELD(temp_5_3, f32 *, 8) = temp_f3_3;
            M2C_FIELD(arg0, s32 *, 0xC) = (s32) (temp_6 + 1);
            M2C_FIELD(temp_5_3, f32 *, 0) = (f32) (temp_f4_3 + M2C_FIELD(arg1, f32 *, 0x1C));
            M2C_FIELD(temp_5_3, f32 *, 4) = (f32) (temp_f2 + M2C_FIELD(temp_10, f32 *, 4));
            M2C_FIELD(temp_5_3, f32 *, 8) = (f32) (temp_f3_3 + M2C_FIELD(temp_10, f32 *, 8));
        } while (var_20 != 0);
    }
    M2C_FIELD(temp_21, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) - M2C_FIELD(temp_21, s32 *, 4));
    M2C_FIELD(temp_21, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) - M2C_FIELD(temp_21, s32 *, 0xC));
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 1);
}
