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

M2C_UNK InitParms__13VIWalkControl();               /* extern */
M2C_UNK Reset__14VICameraEffect(void *);            /* extern */
M2C_UNK SetLocation__12VIWalkCameraRC7VIVect3T1R8VICameraR7VIScene(void *, s32, s32, s32, s32, M2C_UNK); /* extern */

s32 Init__12VIWalkCameraRC7VIVect3T1R8VICameraR7VIScene(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    InitParms__13VIWalkControl();
    M2C_FIELD(arg0, f32 *, 0x250) = 1.5707961f;
    M2C_FIELD(arg0, f32 *, 0x264) = 25.0f;
    M2C_FIELD(arg0, f32 *, 0x288) = 3.0f;
    M2C_FIELD(arg0, f32 *, 0x254) = 11.75f;
    M2C_FIELD(arg0, f32 *, 0x25C) = 0.01f;
    M2C_FIELD(arg0, f32 *, 0x268) = 0.5235987f;
    M2C_FIELD(arg0, f32 *, 0x26C) = 1.0471973f;
    M2C_FIELD(arg0, f32 *, 0x270) = 0.5f;
    M2C_FIELD(arg0, f32 *, 0x274) = 1.0999999f;
    M2C_FIELD(arg0, f32 *, 0x278) = 1.68f;
    M2C_FIELD(arg0, f32 *, 0x280) = 3.1415923f;
    M2C_FIELD(arg0, f32 *, 0x284) = 23.5f;
    M2C_FIELD(arg0, f32 *, 0x228) = 1.5f;
    M2C_FIELD(arg0, f32 *, 0x24C) = 1.68f;
    M2C_FIELD(arg0, f32 *, 0x260) = 1.5f;
    M2C_FIELD(arg0, f32 *, 0x258) = 0.01f;
    M2C_FIELD(arg0, s32 *, 0x248) = 1;
    M2C_FIELD(arg0, s32 *, 0x27C) = 0;
    SetLocation__12VIWalkCameraRC7VIVect3T1R8VICameraR7VIScene(arg0, arg1, arg2, arg3, arg4, 0x3FD70A3D);
    Reset__14VICameraEffect(arg0 + 0x28C);
    return 0;
}
