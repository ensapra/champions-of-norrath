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

f32 NormalizeMagn__7VIVect3(void *);                /* extern */

s32 Init__8VIEnvRayRC7VIVect3T1Ui(void *arg0, void *arg1, void *arg2, s32 arg3) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;
    f32 var_f0;
    void *temp_2;
    void *temp_3;

    temp_3 = arg0 + 0xC;
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
    temp_2 = arg0 + 0x18;
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    temp_f3 = M2C_FIELD(arg2, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0xC) = temp_f3;
    M2C_FIELD(temp_3, f32 *, 4) = (f32) M2C_FIELD(arg2, f32 *, 4);
    M2C_FIELD(temp_3, f32 *, 8) = (f32) M2C_FIELD(arg2, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x18) = temp_f3;
    temp_f1 = M2C_FIELD(temp_3, f32 *, 4);
    M2C_FIELD(temp_2, f32 *, 4) = temp_f1;
    temp_f2 = M2C_FIELD(temp_3, f32 *, 8);
    M2C_FIELD(temp_2, f32 *, 8) = temp_f2;
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) (temp_f3 - M2C_FIELD(arg0, f32 *, 0));
    M2C_FIELD(temp_2, f32 *, 4) = (f32) (temp_f1 - M2C_FIELD(arg0, f32 *, 4));
    M2C_FIELD(temp_2, f32 *, 8) = (f32) (temp_f2 - M2C_FIELD(arg0, f32 *, 8));
    temp_f0 = NormalizeMagn__7VIVect3(temp_2);
    var_f0 = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x24) = temp_f0;
    if (temp_f0 != 0.0f) {
        var_f0 = 1.0f / temp_f0;
    }
    M2C_FIELD(arg0, f32 *, 0x28) = var_f0;
    M2C_FIELD(arg0, s32 *, 0x2C) = arg3;
    M2C_FIELD(arg0, f32 *, 0x38) = 1.0f;
    M2C_FIELD(arg0, s32 *, 0x34) = 1;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    return 0;
}
