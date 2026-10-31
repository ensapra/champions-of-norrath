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

s32 CalcWorldGridOffset__C7VISceneRC7VIVect3RiT2R7VIVect3(void *arg0, void *arg1, f32 *arg2, s32 *arg3, void *arg4) {
    f32 temp_f0;
    f32 temp_f4;
    s32 temp_2;
    s32 temp_3;
    void *temp_9;

    temp_3 = M2C_FIELD(arg0, s32 *, 0x1C);
    temp_9 = arg0 + 0x28;
    if ((temp_3 == 1) && (M2C_FIELD(arg0, s32 *, 0x20) == temp_3)) {
        *arg3 = 0;
        M2C_FIELD(arg4, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
        *arg2 = 0.0f;
        M2C_FIELD(arg4, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
        M2C_FIELD(arg4, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    } else {
        temp_f4 = M2C_FIELD(arg1, f32 *, 0);
        M2C_FIELD(arg4, f32 *, 0) = temp_f4;
        M2C_FIELD(arg4, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
        temp_f0 = M2C_FIELD(arg1, f32 *, 8);
        temp_2 = M2C_ERROR(/* Read from unset register $f2 */);
        M2C_FIELD(arg4, f32 *, 8) = temp_f0;
        *arg2 = temp_f0;
        *arg3 = temp_2;
        M2C_FIELD(arg4, f32 *, 0) = (f32) (temp_f4 - ((f32) *arg2 * M2C_FIELD(arg0, f32 *, 0x24)));
        M2C_FIELD(arg4, f32 *, 8) = (f32) (M2C_FIELD(arg4, f32 *, 8) - ((f32) temp_2 * M2C_FIELD(arg0, f32 *, 0x24)));
        M2C_FIELD(arg4, f32 *, 0) = (f32) (M2C_FIELD(arg4, f32 *, 0) - M2C_FIELD(arg0, f32 *, 0x28));
        M2C_FIELD(arg4, f32 *, 4) = (f32) (M2C_FIELD(arg4, f32 *, 4) - M2C_FIELD(temp_9, f32 *, 4));
        M2C_FIELD(arg4, f32 *, 8) = (f32) (M2C_FIELD(arg4, f32 *, 8) - M2C_FIELD(temp_9, f32 *, 8));
    }
    return 0;
}
