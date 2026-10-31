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
M2C_UNK DrawGameOptions__12VIWndOptions(void *);    /* extern */
M2C_UNK DrawInterfaceOptions__12VIWndOptions(void *); /* extern */
M2C_UNK DrawMainMenu__12VIWndOptions(void *);       /* extern */
M2C_UNK DrawSoundOptions__12VIWndOptions(void *);   /* extern */
M2C_UNK Draw__10VIUIWindow(void *);                 /* extern */
M2C_UNK End2D__4VIUI(void *);                       /* extern */
s32 GetString__13VIStringTableii(void *, M2C_UNK, s32); /* extern */
M2C_UNK Init__10VIUIWindowP4VIUIRC8VIVect2IT2iii(void *, void *, s32 *, s32 *, M2C_UNK, M2C_UNK, M2C_UNK, s32 *); /* extern */
M2C_UNK Open__10VIUIWindowb(void *, M2C_UNK);       /* extern */
M2C_UNK Play__13VIBattleMusici(void *, u8);         /* extern */
M2C_UNK Process__13VIBattleMusic(void *);           /* extern */
M2C_UNK RemoveChild__5VIWndP5VIWnd(void *, s32);    /* extern */
M2C_UNK ResetTickPulse__10VIUIWindow(void *);       /* extern */
M2C_UNK SaveAndExit__12VIWndOptions(void *);        /* extern */
M2C_UNK StopNow__13VIBattleMusic(void *);           /* extern */
M2C_UNK Stop__13VIBattleMusicb(void *, M2C_UNK);    /* extern */
s32 T__10VIUIWindowPCc(void *, M2C_UNK *);          /* extern */
M2C_UNK TextBox__10VIUIWindowPCUsiiii9VIUICOLORUi(void *, s32, M2C_UNK, M2C_UNK, s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 VIGetFeatureFlags__Fv();                        /* extern */
void *VIGetGameOptions__Fv();                       /* extern */
extern void *D_01192C70;
extern s32 D_01192C74;
extern M2C_UNK D_011D53B0;
extern M2C_UNK D_011E8BD0;
extern M2C_UNK D_011E8BF8;
extern M2C_UNK D_011E8C00;
extern M2C_UNK D_011E8C08;
extern M2C_UNK D_011E8C10;
extern M2C_UNK D_011E8C18;

void OnDrawSelf__12VIWndOptions(void *arg0) {
    s32 sp20;
    s32 sp24;
    s32 sp30;
    s32 sp34;
    s32 sp60;
    s32 sp64;
    s32 sp70;
    s32 sp74;
    s32 temp_2;
    s32 temp_3;
    s32 temp_5;
    u8 temp_5_2;
    void *temp_16;
    void *temp_16_2;
    void *temp_16_3;
    void *temp_21;
    void *temp_22;

    temp_22 = D_01192C70;
    temp_5 = M2C_FIELD(arg0, s32 *, 0x4AC);
    temp_21 = VIGetGameOptions__Fv();
    if ((temp_5 != 0) && (M2C_FIELD(arg0, s32 *, 0x4A0) == 0)) {
        RemoveChild__5VIWndP5VIWnd(arg0, temp_5);
        M2C_FIELD(arg0, s32 *, 0x4AC) = 0;
    }
    if (M2C_FIELD(&D_011E8BD0, s32 *, 0) == 0) {
        M2C_FIELD(&D_011E8BD0, s32 *, 0) = GetString__13VIStringTableii(D_01192C70, 0x205, M2C_FIELD(D_01192C70, s32 *, 0x30));
        M2C_FIELD(&D_011E8BD0, s32 *, 4) = GetString__13VIStringTableii(D_01192C70, 0x31B, M2C_FIELD(D_01192C70, s32 *, 0x30));
        M2C_FIELD(&D_011E8BD0, s32 *, 8) = GetString__13VIStringTableii(D_01192C70, 0x31C, M2C_FIELD(D_01192C70, s32 *, 0x30));
        if (VIGetFeatureFlags__Fv() & 0x100) {
            M2C_FIELD(&D_011E8BD0, s32 *, 0xC) = GetString__13VIStringTableii(D_01192C70, 0x31D, M2C_FIELD(D_01192C70, s32 *, 0x30));
            M2C_FIELD(&D_011E8BD0, s32 *, 0x10) = GetString__13VIStringTableii(D_01192C70, 0x31E, M2C_FIELD(D_01192C70, s32 *, 0x30));
            M2C_FIELD(&D_011E8BD0, s32 *, 0x14) = GetString__13VIStringTableii(D_01192C70, 0x31F, M2C_FIELD(D_01192C70, s32 *, 0x30));
            M2C_FIELD(&D_011E8BD0, s32 *, 0x18) = GetString__13VIStringTableii(D_01192C70, 0x628, M2C_FIELD(D_01192C70, s32 *, 0x30));
            M2C_FIELD(&D_011E8BD0, s32 *, 0x1C) = GetString__13VIStringTableii(D_01192C70, 0x629, M2C_FIELD(D_01192C70, s32 *, 0x30));
            M2C_FIELD(&D_011E8BD0, s32 *, 0x20) = GetString__13VIStringTableii(D_01192C70, 0x62A, M2C_FIELD(D_01192C70, s32 *, 0x30));
            M2C_FIELD(&D_011E8BD0, s32 *, 0x24) = GetString__13VIStringTableii(D_01192C70, 0x65E, M2C_FIELD(D_01192C70, s32 *, 0x30));
        }
        M2C_FIELD(&D_011E8BF8, s32 *, 0) = GetString__13VIStringTableii(D_01192C70, 0x30D, M2C_FIELD(D_01192C70, s32 *, 0x30));
        M2C_FIELD(&D_011E8BF8, s32 *, 4) = GetString__13VIStringTableii(D_01192C70, 0x324, M2C_FIELD(D_01192C70, s32 *, 0x30));
        M2C_FIELD(&D_011E8C00, s32 *, 0) = GetString__13VIStringTableii(D_01192C70, 0x322, M2C_FIELD(D_01192C70, s32 *, 0x30));
        M2C_FIELD(&D_011E8C00, s32 *, 4) = GetString__13VIStringTableii(D_01192C70, 0x2F3, M2C_FIELD(D_01192C70, s32 *, 0x30));
        M2C_FIELD(&D_011E8C08, s32 *, 0) = GetString__13VIStringTableii(D_01192C70, 0x228, M2C_FIELD(D_01192C70, s32 *, 0x30));
        M2C_FIELD(&D_011E8C08, s32 *, 4) = GetString__13VIStringTableii(D_01192C70, 0x227, M2C_FIELD(D_01192C70, s32 *, 0x30));
        M2C_FIELD(&D_011E8C10, s32 *, 0) = GetString__13VIStringTableii(D_01192C70, 0x325, M2C_FIELD(D_01192C70, s32 *, 0x30));
        M2C_FIELD(&D_011E8C10, s32 *, 4) = GetString__13VIStringTableii(D_01192C70, 0x44, M2C_FIELD(D_01192C70, s32 *, 0x30));
        M2C_FIELD(&D_011E8C18, s32 *, 0) = GetString__13VIStringTableii(D_01192C70, 0x310, M2C_FIELD(D_01192C70, s32 *, 0x30));
        M2C_FIELD(&D_011E8C18, s32 *, 4) = GetString__13VIStringTableii(D_01192C70, 0x30B, M2C_FIELD(D_01192C70, s32 *, 0x30));
    }
    if (D_01192C74 != arg0) {
        ResetTickPulse__10VIUIWindow(arg0 + 0x28);
    }
    temp_16 = arg0 + 0x4B0;
    if (M2C_FIELD(arg0, s32 *, 0x478) == 2) {
        temp_5_2 = M2C_FIELD(temp_21, u8 *, 4);
        if (VIGetFeatureFlags__Fv() & 0x100) {
            if (temp_5_2 >= 9U) {
                Stop__13VIBattleMusicb(temp_16, 0);
            } else {
                goto block_20;
            }
        } else if (temp_5_2 == M2C_FIELD(temp_16, s32 *, 4)) {
            Play__13VIBattleMusici(temp_16, -1U);
        } else {
block_20:
            Play__13VIBattleMusici(temp_16, temp_5_2);
        }
    } else {
        StopNow__13VIBattleMusic(temp_16);
    }
    Process__13VIBattleMusic(temp_16);
    Begin2D__4VIUI(temp_22);
    DrawMainMenu__12VIWndOptions(arg0);
    temp_3 = M2C_FIELD(arg0, s32 *, 0x478);
    switch (temp_3) {                               /* irregular */
    case 0:
        DrawGameOptions__12VIWndOptions(arg0);
        break;
    case 1:
        DrawInterfaceOptions__12VIWndOptions(arg0);
        break;
    case 2:
        DrawSoundOptions__12VIWndOptions(arg0);
        break;
    }
    temp_2 = M2C_FIELD(arg0, s32 *, 0x4A4);
    if (temp_2 != 0) {
        M2C_FIELD(arg0, s32 *, 0x4A4) = (s32) (temp_2 - 1);
        temp_16_2 = arg0 + 0x308;
        sp20 = 0;
        sp24 = 0;
        sp30 = M2C_FIELD(arg0, s32 *, 0x34);
        sp34 = M2C_FIELD((arg0 + 0x34), s32 *, 4);
        Init__10VIUIWindowP4VIUIRC8VIVect2IT2iii(temp_16_2, D_01192C70, &sp20, &sp30, 0x190, 3, 0, &sp30);
        Open__10VIUIWindowb(temp_16_2, 1);
        Draw__10VIUIWindow(temp_16_2);
        TextBox__10VIUIWindowPCUsiiii9VIUICOLORUi(temp_16_2, GetString__13VIStringTableii(D_01192C70, 0x64F, M2C_FIELD(D_01192C70, s32 *, 0x30)), 0x28, 0, M2C_FIELD(temp_16_2, s32 *, 0x14) - 0x50, 3, 0, 8);
        if (M2C_FIELD(arg0, s32 *, 0x4A4) == 0) {
            SaveAndExit__12VIWndOptions(arg0);
        }
    }
    if (M2C_FIELD(arg0, s32 *, 0x4A8) != 0) {
        temp_16_3 = arg0 + 0x308;
        sp60 = 0;
        sp64 = 0;
        sp70 = M2C_FIELD(arg0, s32 *, 0x34);
        sp74 = M2C_FIELD((arg0 + 0x34), s32 *, 4);
        Init__10VIUIWindowP4VIUIRC8VIVect2IT2iii(temp_16_3, D_01192C70, &sp60, &sp70, 0x1B8, 6, 0, &sp70);
        Open__10VIUIWindowb(temp_16_3, 1);
        Draw__10VIUIWindow(temp_16_3);
        TextBox__10VIUIWindowPCUsiiii9VIUICOLORUi(temp_16_3, GetString__13VIStringTableii(D_01192C70, 0x650, M2C_FIELD(D_01192C70, s32 *, 0x30)), 0x28, 0, M2C_FIELD(temp_16_3, s32 *, 0x14) - 0x50, 4, 0, 8);
        TextBox__10VIUIWindowPCUsiiii9VIUICOLORUi(temp_16_3, T__10VIUIWindowPCc(temp_16_3, &D_011D53B0), 0x28, 5, M2C_FIELD(temp_16_3, s32 *, 0x14) - 0x50, 1, 0, 8);
    }
    End2D__4VIUI(temp_22);
}
