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

M2C_UNK SetText__11VIGUIDialogPCcb(s32, s32, M2C_UNK); /* extern */
M2C_UNK Show__11VIGUIDialogPCcT1(s32, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK D_011C3C20;

void ConsolePrint__9VIStationPCc(void *arg0, s32 arg1) {
    s32 temp_16;

    temp_16 = M2C_FIELD(arg0, s32 *, 0xB858);
    if (temp_16 != 0) {
        Show__11VIGUIDialogPCcT1(temp_16, &D_011C3C20, 0);
        SetText__11VIGUIDialogPCcb(temp_16, arg1, 0);
    }
}
