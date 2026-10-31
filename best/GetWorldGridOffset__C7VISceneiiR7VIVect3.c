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

s32 GetWorldGridOffset__C7VISceneiiR7VIVect3(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    s32 temp_3;

    temp_3 = M2C_FIELD(arg0, s32 *, 0x1C);
    if ((temp_3 == 1) && (M2C_FIELD(arg0, s32 *, 0x20) == temp_3)) {
        M2C_FIELD(arg3, f32 *, 8) = 0.0f;
        M2C_FIELD(arg3, f32 *, 0) = 0.0f;
        M2C_FIELD(arg3, s32 *, 4) = 0;
    } else {
        M2C_FIELD(arg3, s32 *, 4) = 0;
        M2C_FIELD(arg3, f32 *, 0) = (f32) ((f32) arg1 * M2C_FIELD(arg0, f32 *, 0x24));
        M2C_FIELD(arg3, f32 *, 8) = (f32) ((f32) arg2 * M2C_FIELD(arg0, f32 *, 0x24));
    }
    return 0;
}
