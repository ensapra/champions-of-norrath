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
M2C_UNK SetLocation__13VIWalkControlRC7VIVect3T1R7VIScene(void *, s32, s32, s32); /* extern */

s32 Init__13VIWalkControlRC7VIVect3T1R7VIScene(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    InitParms__13VIWalkControl();
    M2C_FIELD(arg0, s32 *, 0x180) = 1;
    M2C_FIELD(arg0, s32 *, 0xF8) = 1;
    SetLocation__13VIWalkControlRC7VIVect3T1R7VIScene(arg0, arg1, arg2, arg3);
    return 0;
}
