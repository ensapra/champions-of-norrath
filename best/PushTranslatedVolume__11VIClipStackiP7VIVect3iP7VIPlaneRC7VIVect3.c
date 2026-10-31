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

void PushTranslatedVolume__11VIClipStackiP7VIVect3iP7VIPlaneRC7VIVect3(void *arg0, s32 arg1, void *arg2, void *arg4, void *arg5) {
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f6;
    s32 var_4;
    s32 var_4_2;
    s32 var_7;
    s32 var_7_2;
    void *temp_11;
    void *var_2;
    void *var_2_2;
    void *var_6;
    void *var_8;

    var_6 = arg2;
    var_8 = arg4;
    temp_11 = M2C_FIELD(arg0, s32 *, 8) + (M2C_FIELD(arg0, s32 *, 0) * 0x10);
    M2C_FIELD(temp_11, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
    M2C_FIELD(temp_11, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
    if (arg1 > 0) {
        var_4 = M2C_FIELD(arg0, s32 *, 0xC);
        var_7 = arg1;
        var_2 = (var_4 * 0xC) + M2C_FIELD(arg0, s32 *, 0x14);
        do {
            temp_f2 = M2C_FIELD(var_6, f32 *, 0);
            var_7 -= 1;
            var_4 += 1;
            M2C_FIELD(var_2, f32 *, 0) = temp_f2;
            temp_f1 = M2C_FIELD(var_6, f32 *, 4);
            M2C_FIELD(var_2, f32 *, 4) = temp_f1;
            temp_f3 = M2C_FIELD(var_6, f32 *, 8);
            var_6 += 0xC;
            M2C_FIELD(var_2, f32 *, 8) = temp_f3;
            M2C_FIELD(var_2, f32 *, 0) = (f32) (temp_f2 + M2C_FIELD(arg5, f32 *, 0));
            M2C_FIELD(var_2, f32 *, 4) = (f32) (temp_f1 + M2C_FIELD(arg5, f32 *, 4));
            M2C_FIELD(var_2, f32 *, 8) = (f32) (temp_f3 + M2C_FIELD(arg5, f32 *, 8));
            var_2 += 0xC;
        } while (var_7 != 0);
        M2C_FIELD(arg0, s32 *, 0xC) = var_4;
    }
    if (arg1 > 0) {
        var_4_2 = M2C_FIELD(arg0, s32 *, 0x18);
        var_7_2 = arg1;
        var_2_2 = (var_4_2 * 0x10) + M2C_FIELD(arg0, s32 *, 0x20);
        do {
            temp_f6 = M2C_FIELD(var_8, f32 *, 0);
            var_7_2 -= 1;
            var_4_2 += 1;
            M2C_FIELD(var_2_2, f32 *, 0) = temp_f6;
            temp_f5 = M2C_FIELD(var_8, f32 *, 4);
            M2C_FIELD(var_2_2, f32 *, 4) = temp_f5;
            temp_f4 = M2C_FIELD(var_8, f32 *, 8);
            M2C_FIELD(var_2_2, f32 *, 8) = temp_f4;
            temp_f3_2 = M2C_FIELD(var_8, f32 *, 0xC);
            var_8 += 0x10;
            M2C_FIELD(var_2_2, f32 *, 0xC) = temp_f3_2;
            M2C_FIELD(var_2_2, f32 *, 0xC) = (f32) (temp_f3_2 - ((M2C_FIELD(arg5, f32 *, 0) * temp_f6) + (M2C_FIELD(arg5, f32 *, 4) * temp_f5) + (M2C_FIELD(arg5, f32 *, 8) * temp_f4)));
            var_2_2 += 0x10;
        } while (var_7_2 != 0);
        M2C_FIELD(arg0, s32 *, 0x18) = var_4_2;
    }
    M2C_FIELD(temp_11, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) - M2C_FIELD(temp_11, s32 *, 4));
    M2C_FIELD(temp_11, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) - M2C_FIELD(temp_11, s32 *, 0xC));
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 1);
}
