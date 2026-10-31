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

s32 GetHeight__6VIFontP8VIRasterP12VIDictionary(s32, s32, s32); /* extern */
M2C_UNK SetUiColors__10VIUIWindow(void *, s32, void *, M2C_UNK); /* extern */

s32 Init__10VIUIWindowP4VIUIRC8VIVect2IT2iii(void *arg0, void *arg1, void *arg2, void *arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 temp_2;
    s32 temp_5;
    void *temp_6;

    M2C_FIELD(arg0, void **, 0) = arg1;
    temp_2 = GetHeight__6VIFontP8VIRasterP12VIDictionary(arg1 + 0x38, M2C_FIELD(arg1, s32 *, 0x48), M2C_FIELD(arg1, s32 *, 0x50)) - 4;
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg2, s32 *, 0);
    temp_6 = arg0 + 0xC;
    M2C_FIELD((arg0 + 4), s32 *, 4) = (s32) M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg3, s32 *, 0);
    temp_5 = M2C_FIELD(arg3, s32 *, 4);
    M2C_FIELD(temp_6, s32 *, 4) = temp_5;
    M2C_FIELD(arg0, s32 *, 0x14) = arg4;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0x12;
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) ((arg5 * temp_2) + 0x24);
    M2C_FIELD(arg0, s32 *, 0x20) = arg5;
    M2C_FIELD(arg0, s32 *, 0x168) = arg6;
    SetUiColors__10VIUIWindow(arg0, temp_5, temp_6, 0x12);
    M2C_FIELD(arg0, s32 *, 0x24) = 1;
    return 0;
}
