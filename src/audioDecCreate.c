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

M2C_UNK changeMasterVolume(M2C_UNK);                /* extern */
M2C_UNK memset(s32, M2C_UNK, s32);                  /* extern */
M2C_UNK sendToIOP(s32, s32, s32);                   /* extern */

s32 audioDecCreate(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    M2C_FIELD(arg0, s32 *, 0x48) = arg4;
    M2C_FIELD(arg0, s32 *, 0x44) = arg3;
    M2C_FIELD(arg0, s32 *, 0x58) = arg6;
    M2C_FIELD(arg0, s32 *, 0x30) = arg1;
    M2C_FIELD(arg0, s32 *, 0x3C) = arg2;
    M2C_FIELD(arg0, s32 *, 0x5C) = arg7;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    memset(arg5, 0, arg7);
    sendToIOP(M2C_FIELD(arg0, s32 *, 0x58), arg5, arg7);
    changeMasterVolume(0x3FFF);
    return 1;
}
