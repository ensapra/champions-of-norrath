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

s32 UpdateActor__7VIScenei(void *);                 /* extern */

s32 SetActorTransform__7VISceneiRC7VIVect3fT2(void *arg1, void *arg2, void *arg3, f32 fparg0) {
    void *temp_2;
    void *temp_3;

    temp_2 = arg1 + 0x44;
    temp_3 = arg1 + 0x50;
    M2C_FIELD(arg1, f32 *, 0x44) = (f32) M2C_FIELD(arg3, f32 *, 0);
    M2C_FIELD(temp_2, f32 *, 4) = (f32) M2C_FIELD(arg3, f32 *, 4);
    M2C_FIELD(temp_2, f32 *, 8) = (f32) M2C_FIELD(arg3, f32 *, 8);
    M2C_FIELD(arg1, f32 *, 0x50) = (f32) M2C_FIELD(arg2, f32 *, 0);
    M2C_FIELD(temp_3, f32 *, 4) = (f32) M2C_FIELD(arg2, f32 *, 4);
    M2C_FIELD(temp_3, f32 *, 8) = (f32) M2C_FIELD(arg2, f32 *, 8);
    M2C_FIELD(arg1, f32 *, 0x5C) = fparg0;
    return (UpdateActor__7VIScenei(arg1) >= 0) ? 0 : -1;
}
