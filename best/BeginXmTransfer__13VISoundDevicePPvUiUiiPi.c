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

s32 BeginXmTransfer__13VISoundDevicePPvUiUiiPi(void *arg0, s32 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    M2C_FIELD(arg0, s32 *, 0xD38) = arg4;
    M2C_FIELD(arg0, s32 *, 0xD34) = (s32) *arg1;
    M2C_FIELD(arg0, s32 *, 0xD3C) = -1;
    M2C_FIELD(arg0, s32 *, 0xD44) = arg2;
    M2C_FIELD(arg0, s32 *, 0xD48) = arg3;
    M2C_FIELD(arg0, s32 *, 0xD58) = arg5;
    M2C_FIELD(arg0, s32 *, 0xD5C) = 0;
    M2C_FIELD(arg0, s32 *, 0xD40) = arg2;
    M2C_FIELD(arg0, s32 *, 0xD54) = 0;
    return 0;
}
