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

s32 GetString__13VIStringTableii(void *, M2C_UNK, s32); /* extern */
s64 GetTime__7VITimer();                            /* extern */
M2C_UNK SetText__11VIGUIDialogPCUsb(s32, s32, M2C_UNK); /* extern */
M2C_UNK Show__11VIGUIDialogPCUsPCc(s32, s32, M2C_UNK); /* extern */
extern void *D_01192C70;

void startGame__16VIRealmInterface(void *arg0) {
    M2C_UNK var_5;
    s32 *var_2;
    s32 temp_16;
    s32 temp_16_2;
    s32 temp_17;
    s32 temp_17_2;
    s32 temp_17_3;
    s32 var_3;

    if (M2C_FIELD(arg0, s32 *, 0xD94) < 2) {
        temp_17 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x38);
        Show__11VIGUIDialogPCUsPCc(temp_17, GetString__13VIStringTableii(D_01192C70, 0x723, M2C_FIELD(D_01192C70, s32 *, 0x30)), 0);
        var_5 = 0x748;
        goto block_4;
    }
    if ((M2C_FIELD(arg0, s32 *, 0xD8C) ^ 2) != 0) {
        temp_17_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x38);
        Show__11VIGUIDialogPCUsPCc(temp_17_2, GetString__13VIStringTableii(D_01192C70, 0x723, M2C_FIELD(D_01192C70, s32 *, 0x30)), 0);
        var_5 = 0x749;
block_4:
        temp_16 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x38);
        SetText__11VIGUIDialogPCUsb(temp_16, GetString__13VIStringTableii(D_01192C70, var_5, M2C_FIELD(D_01192C70, s32 *, 0x30)), 0);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0xD8C) = 3;
    var_3 = 3;
    var_2 = arg0 + 0x2560;
    do {
        var_3 -= 1;
        *var_2 = 9;
        var_2 -= 0x478;
    } while (var_3 >= 0);
    temp_17_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x38);
    Show__11VIGUIDialogPCUsPCc(temp_17_3, GetString__13VIStringTableii(D_01192C70, 0x723, M2C_FIELD(D_01192C70, s32 *, 0x30)), 0);
    temp_16_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x38);
    SetText__11VIGUIDialogPCUsb(temp_16_2, GetString__13VIStringTableii(D_01192C70, 0x72D, M2C_FIELD(D_01192C70, s32 *, 0x30)), 1);
    M2C_FIELD(arg0, s64 *, 0x25C0) = GetTime__7VITimer();
}
