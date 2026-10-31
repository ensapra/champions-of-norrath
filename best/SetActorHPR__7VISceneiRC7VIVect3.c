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

s32 UpdateActor__7VIScenei();                       /* extern */

s32 SetActorHPR__7VISceneiRC7VIVect3(void *arg1, void *arg2) {
    void *temp_2;

    temp_2 = arg1 + 0x50;
    M2C_FIELD(arg1, f32 *, 0x50) = (f32) M2C_FIELD(arg2, f32 *, 0);
    M2C_FIELD(temp_2, f32 *, 4) = (f32) M2C_FIELD(arg2, f32 *, 4);
    M2C_FIELD(temp_2, f32 *, 8) = (f32) M2C_FIELD(arg2, f32 *, 8);
    return (UpdateActor__7VIScenei() >= 0) ? 0 : -1;
}
