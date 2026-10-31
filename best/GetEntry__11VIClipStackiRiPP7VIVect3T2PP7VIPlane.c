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

s32 GetEntry__11VIClipStackiRiPP7VIVect3T2PP7VIPlane(void *arg0, s32 arg1, s32 *arg2, s32 *arg3, s32 *arg4, s32 *arg5) {
    void *temp_10;

    temp_10 = M2C_FIELD(arg0, s32 *, 8) + (arg1 * 0x10);
    *arg2 = M2C_FIELD(temp_10, s32 *, 8);
    *arg4 = M2C_FIELD(temp_10, s32 *, 0);
    *arg3 = M2C_FIELD(arg0, s32 *, 0x14) + (M2C_FIELD(temp_10, s32 *, 0xC) * 0xC);
    *arg5 = M2C_FIELD(arg0, s32 *, 0x20) + (M2C_FIELD(temp_10, s32 *, 4) * 0x10);
    return 0;
}
