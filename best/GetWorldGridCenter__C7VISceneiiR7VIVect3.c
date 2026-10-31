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

s32 GetWorldGridCenter__C7VISceneiiR7VIVect3(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    f32 temp_f0;
    f32 temp_f2;
    s32 temp_3;
    void *temp_8;

    temp_3 = M2C_FIELD(arg0, s32 *, 0x1C);
    temp_8 = arg0 + 0x28;
    if ((temp_3 == 1) && (M2C_FIELD(arg0, s32 *, 0x20) == temp_3)) {
        M2C_FIELD(arg3, f32 *, 8) = 0.0f;
        M2C_FIELD(arg3, f32 *, 0) = 0.0f;
        M2C_FIELD(arg3, f32 *, 4) = 0.0f;
    } else {
        M2C_FIELD(arg3, f32 *, 4) = 0.0f;
        temp_f0 = (f32) arg1 * M2C_FIELD(arg0, f32 *, 0x24);
        M2C_FIELD(arg3, f32 *, 0) = temp_f0;
        temp_f2 = (f32) arg2 * M2C_FIELD(arg0, f32 *, 0x24);
        M2C_FIELD(arg3, f32 *, 8) = temp_f2;
        M2C_FIELD(arg3, f32 *, 0) = (f32) (temp_f0 + M2C_FIELD(arg0, f32 *, 0x28));
        M2C_FIELD(arg3, f32 *, 4) = (f32) (M2C_FIELD(arg3, f32 *, 4) + M2C_FIELD(temp_8, f32 *, 4));
        M2C_FIELD(arg3, f32 *, 8) = (f32) (temp_f2 + M2C_FIELD(temp_8, f32 *, 8));
    }
    return 0;
}
