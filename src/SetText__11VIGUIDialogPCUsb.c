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

s32 CountLines__10VIUIWindowPCUsi(s32, s32, M2C_UNK); /* extern */
M2C_UNK memset(s32, M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK strcpy16__8VIStringPUsUiPCUs(s32, M2C_UNK, s32); /* extern */

void SetText__11VIGUIDialogPCUsb(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_16;
    s32 temp_2;

    temp_16 = arg0 + 0x1F0;
    if (arg1 != 0) {
        memset(temp_16, 0, 0x800);
        strcpy16__8VIStringPUsUiPCUs(temp_16, 0x800, arg1);
        temp_2 = CountLines__10VIUIWindowPCUsi(arg0 + 0x80, temp_16, 0x140);
        M2C_FIELD(arg0, s32 *, 0xDF8) = 0;
        M2C_FIELD(arg0, s32 *, 0xDF4) = temp_2;
    }
    M2C_FIELD(arg0, s32 *, 0xE00) = arg2;
}
