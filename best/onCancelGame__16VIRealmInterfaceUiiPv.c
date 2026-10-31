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
M2C_UNK Reset__16VIRealmInterface();                /* extern */
M2C_UNK SetText__11VIGUIDialogPCUsb(s32, s32, M2C_UNK); /* extern */
M2C_UNK Show__11VIGUIDialogPCUsPCc(s32, s32, M2C_UNK); /* extern */
M2C_UNK UnLock__11VIGUIDialog(s32);                 /* extern */
M2C_UNK printf(M2C_UNK *, s32, s32);                /* extern */
extern void *D_01192C70;
extern M2C_UNK D_011D93E8;

void onCancelGame__16VIRealmInterfaceUiiPv(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_16;
    s32 temp_16_2;
    s32 temp_16_3;
    s32 temp_17;
    s32 temp_17_2;

    M2C_FIELD(arg0, s32 *, 0xD8C) = 0;
    Reset__16VIRealmInterface();
    printf(&D_011D93E8, arg1, arg2);
    if (arg2 == 0) {
        UnLock__11VIGUIDialog(M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x38));
        temp_17 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x38);
        Show__11VIGUIDialogPCUsPCc(temp_17, GetString__13VIStringTableii(D_01192C70, 0x730, M2C_FIELD(D_01192C70, s32 *, 0x30)), 0);
        temp_16 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x38);
        SetText__11VIGUIDialogPCUsb(temp_16, GetString__13VIStringTableii(D_01192C70, 0x73E, M2C_FIELD(D_01192C70, s32 *, 0x30)), 0);
        return;
    }
    if (arg2 == 1) {
        temp_16_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x38);
        SetText__11VIGUIDialogPCUsb(temp_16_2, GetString__13VIStringTableii(D_01192C70, 0x745, M2C_FIELD(D_01192C70, s32 *, 0x30)), 0);
        return;
    }
    temp_17_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x38);
    Show__11VIGUIDialogPCUsPCc(temp_17_2, GetString__13VIStringTableii(D_01192C70, 0x72B, M2C_FIELD(D_01192C70, s32 *, 0x30)), 0);
    temp_16_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x38);
    SetText__11VIGUIDialogPCUsb(temp_16_3, GetString__13VIStringTableii(D_01192C70, 0x73F, M2C_FIELD(D_01192C70, s32 *, 0x30)), 0);
}
