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

M2C_UNK strcpy16__8VIStringPUsUiPCUs(s32, M2C_UNK, s32); /* extern */

s32 InitCombo__8VIWidgetPCUsiG8VIVect2Iiiii(void *arg0, s32 arg1, s32 arg2, void *arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 temp_17;

    M2C_FIELD(arg0, s32 *, 0) = 4;
    strcpy16__8VIStringPUsUiPCUs(arg0 + 4, 0x40, arg1);
    M2C_FIELD(arg0, s32 *, 0x60) = 2;
    temp_17 = (arg6 - arg5) + 1;
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) M2C_FIELD(arg3, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x74) = arg5;
    M2C_FIELD((arg0 + 0x44), s32 *, 4) = (s32) M2C_FIELD(arg3, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x50) = arg2;
    M2C_FIELD(arg0, s32 *, 0x4C) = arg4;
    M2C_FIELD(arg0, s32 *, 0x58) = arg7;
    M2C_FIELD(arg0, s32 *, 0x78) = temp_17;
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) ((temp_17 < 4) ? temp_17 : 3);
    M2C_FIELD(arg0, s32 *, 0x6C) = 0;
    M2C_FIELD(arg0, s32 *, 0x70) = 0;
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    return 0;
}
