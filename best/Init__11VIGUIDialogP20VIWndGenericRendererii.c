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

s32 GetAppPtr__5VIWnd(s32);                         /* extern */
M2C_UNK Init__10VIUIWindowP4VIUIRC8VIVect2IT2iii(void *, s32, s32 *, s32 *, M2C_UNK, M2C_UNK, M2C_UNK, s32 *); /* extern */
M2C_UNK Init__9VIGUIPageP20VIWndGenericRendererii(); /* extern */
M2C_UNK memset(s32, M2C_UNK, M2C_UNK);              /* extern */

void Init__11VIGUIDialogP20VIWndGenericRendererii(void *arg0) {
    s32 sp20;
    s32 sp24;
    s32 sp30;
    s32 sp34;
    s32 temp_2;

    Init__9VIGUIPageP20VIWndGenericRendererii();
    memset(arg0 + 0x1F0, 0, 0x800);
    temp_2 = GetAppPtr__5VIWnd(M2C_FIELD(arg0, s32 *, 0x64));
    if (temp_2 != 0) {
        M2C_FIELD(arg0, s32 *, 0xDF4) = 0;
        M2C_FIELD(arg0, s32 *, 0xDF8) = 0;
        M2C_FIELD(arg0, s32 *, 0xDFC) = 0;
        M2C_FIELD(arg0, s32 *, 0xDF0) = 0;
        sp20 = 0;
        sp24 = 0;
        sp30 = 0x140;
        sp34 = 0xC8;
        Init__10VIUIWindowP4VIUIRC8VIVect2IT2iii(arg0 + 0x80, temp_2 + 0xB3F0, &sp20, &sp30, 0x190, 0xB, 0, &sp30);
    }
}
