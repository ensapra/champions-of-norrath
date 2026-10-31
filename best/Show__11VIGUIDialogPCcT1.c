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

M2C_UNK Open__10VIUIWindowb(s32, M2C_UNK);          /* extern */
M2C_UNK SetTitle__10VIUIWindowPCc(s32);             /* extern */
M2C_UNK memset(s32, M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK strcpy(s32, s32);                           /* extern */

void Show__11VIGUIDialogPCcT1(s32 arg0, s8 *arg1, s32 arg2) {
    s32 temp_17;
    s32 temp_4;

    temp_17 = arg0 + 0x80;
    if ((arg1 != NULL) && (*arg1 != 0)) {
        SetTitle__10VIUIWindowPCc(temp_17);
    }
    temp_4 = arg0 + 0x9F0;
    if (arg2 != 0) {
        strcpy(temp_4, arg2);
    } else {
        memset(temp_4, 0, 0x400);
    }
    Open__10VIUIWindowb(temp_17, 0);
}
