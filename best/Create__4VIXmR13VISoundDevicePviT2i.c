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

s32 AllocSpuMem__13VISoundDevicei(s32, s32);        /* extern */
s32 AllocXmMem__13VISoundDevicei(s32, s32);         /* extern */
M2C_UNK Destroy__4VIXm(void *);                     /* extern */

s32 Create__4VIXmR13VISoundDevicePviT2i(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_2;
    s32 temp_2_2;

    M2C_FIELD(arg0, s32 *, 0x24) = arg2;
    M2C_FIELD(arg0, s32 *, 0x28) = arg3;
    M2C_FIELD(arg0, s32 *, 0x2C) = arg4;
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    M2C_FIELD(arg0, s32 *, 0x30) = arg5;
    temp_2 = AllocSpuMem__13VISoundDevicei(arg1, arg5);
    M2C_FIELD(arg0, s32 *, 0x14) = temp_2;
    if ((temp_2 == 0) || (temp_2_2 = AllocXmMem__13VISoundDevicei(M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, s32 *, 0x28)), M2C_FIELD(arg0, s32 *, 0x18) = temp_2_2, (temp_2_2 == 0))) {
        Destroy__4VIXm(arg0);
        return -1;
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    return 0;
}
