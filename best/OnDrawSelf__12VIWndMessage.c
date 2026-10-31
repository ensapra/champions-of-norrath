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

M2C_UNK Begin2D__4VIUI(void *);                     /* extern */
M2C_UNK Draw__10VIUIWindow(void *, s32);            /* extern */
M2C_UNK End2D__4VIUI(void *);                       /* extern */
s32 GetString__13VIStringTableii(void *, M2C_UNK, s32); /* extern */
void *PromptText__12VIWndMessagePCUsi(void *, s32, s32); /* extern */
M2C_UNK TextBox__10VIUIWindowPCUsiiii9VIUICOLORUi(void *, void *, s32, s32, s32, s32, M2C_UNK, M2C_UNK); /* extern */
extern void *D_01192C70;

void OnDrawSelf__12VIWndMessage(void *arg0) {
    s32 sp0;
    s32 sp4;
    s32 temp_3;
    s32 temp_5;
    s32 temp_lo;
    s32 var_6;
    s32 var_7;
    s32 var_8;
    void *temp_17;
    void *temp_19;
    void *var_5;

    temp_19 = D_01192C70;
    temp_17 = arg0 + 0x28;
    Begin2D__4VIUI(temp_19);
    temp_lo = (s32) M2C_FIELD(temp_17, s32 *, 0x14) / 3;
    temp_5 = temp_lo * 2;
    sp0 = temp_lo;
    sp4 = temp_5;
    Draw__10VIUIWindow(temp_17, temp_5);
    TextBox__10VIUIWindowPCUsiiii9VIUICOLORUi(temp_17, arg0 + 0x1D8, 0x28, 1, M2C_FIELD(temp_17, s32 *, 0x14) - 0x50, M2C_FIELD(arg0, s32 *, 0x3E8) - 2, 0, 8);
    temp_3 = M2C_FIELD(arg0, s32 *, 0x3EC);
    switch (temp_3) {                               /* irregular */
    case 0:
        var_5 = PromptText__12VIWndMessagePCUsi(arg0, GetString__13VIStringTableii(D_01192C70, 0x312, M2C_FIELD(D_01192C70, s32 *, 0x30)), 1);
        var_8 = M2C_FIELD(temp_17, s32 *, 0x14);
        var_7 = M2C_FIELD(arg0, s32 *, 0x3E8) - 1;
        var_6 = 0;
block_15:
        TextBox__10VIUIWindowPCUsiiii9VIUICOLORUi(temp_17, var_5, var_6, var_7, var_8, 1, 0, 8);
        break;
    case 2:
        TextBox__10VIUIWindowPCUsiiii9VIUICOLORUi(temp_17, PromptText__12VIWndMessagePCUsi(arg0, GetString__13VIStringTableii(D_01192C70, 0x15, M2C_FIELD(D_01192C70, s32 *, 0x30)), M2C_FIELD(arg0, s32 *, 0x3D8) == 0), sp0 - 0x64, M2C_FIELD(arg0, s32 *, 0x3E8) - 1, 0xC8, 1, 0, 8);
        TextBox__10VIUIWindowPCUsiiii9VIUICOLORUi(temp_17, PromptText__12VIWndMessagePCUsi(arg0, GetString__13VIStringTableii(D_01192C70, 0x16, M2C_FIELD(D_01192C70, s32 *, 0x30)), M2C_FIELD(arg0, s32 *, 0x3D8) == 1), sp4 - 0x64, M2C_FIELD(arg0, s32 *, 0x3E8) - 1, 0xC8, 1, 0, 8);
        break;
    case 1:
        TextBox__10VIUIWindowPCUsiiii9VIUICOLORUi(temp_17, PromptText__12VIWndMessagePCUsi(arg0, GetString__13VIStringTableii(D_01192C70, 0x312, M2C_FIELD(D_01192C70, s32 *, 0x30)), M2C_FIELD(arg0, s32 *, 0x3D8) == 0), sp0 - 0x64, M2C_FIELD(arg0, s32 *, 0x3E8) - 1, 0xC8, 1, 0, 8);
        var_5 = PromptText__12VIWndMessagePCUsi(arg0, GetString__13VIStringTableii(D_01192C70, 0x2F1, M2C_FIELD(D_01192C70, s32 *, 0x30)), M2C_FIELD(arg0, s32 *, 0x3D8) == 1);
        var_7 = M2C_FIELD(arg0, s32 *, 0x3E8) - 1;
        var_6 = sp4 - 0x64;
        var_8 = 0xC8;
        goto block_15;
    }
    End2D__4VIUI(temp_19);
}
