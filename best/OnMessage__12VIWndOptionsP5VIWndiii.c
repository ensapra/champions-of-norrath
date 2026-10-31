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

M2C_UNK AddChild__5VIWndP5VIWnd(void *, void *);    /* extern */
M2C_UNK Close__10VIUIWindowb(s32, M2C_UNK);         /* extern */
s32 GetString__13VIStringTableii(void *, M2C_UNK, s32); /* extern */
M2C_UNK Init__10VIUIWindowP4VIUIRC8VIVect2IT2iii(s32, void *, s32 *, s32 *, M2C_UNK, M2C_UNK, M2C_UNK, s32 *); /* extern */
void *McErrWnd__Fv();                               /* extern */
M2C_UNK OnMessage__5VIWndP5VIWndiii(void *, void *, s32, s32, void *); /* extern */
M2C_UNK Open__10VIUIWindowb(s32, M2C_UNK);          /* extern */
M2C_UNK RemoveChild__5VIWndP5VIWnd(void *, s32);    /* extern */
M2C_UNK SetFocus__5VIWndP5VIWndb(void *, void *, M2C_UNK); /* extern */
M2C_UNK SetTitle__10VIUIWindowPCUs(s32, s32);       /* extern */
M2C_UNK Unload__13VIBattleMusic(s32);               /* extern */
void *VIGetGameOptions__Fv();                       /* extern */
extern void *D_01192C70;

void OnMessage__12VIWndOptionsP5VIWndiii(void *arg0, void *arg1, s32 arg2, s32 arg3, void *arg4) {
    s32 sp20;
    s32 sp24;
    s32 sp30;
    s32 sp34;
    s32 temp_17;
    s32 temp_5;
    void *temp_19;
    void *temp_22;
    void *var_5;

    temp_19 = VIGetGameOptions__Fv();
    switch (arg2) {                                 /* switch 1; irregular */
    case 0x127:                                     /* switch 1 */
        if (arg4 == arg0) {
            temp_22 = arg4 + 0x4D0;
            if (arg3 != McErrWnd__Fv()) {
                temp_17 = arg4 + 0x28;
                if (arg3 != temp_22) {
                    Close__10VIUIWindowb(temp_17, 1);
                    sp20 = 0;
                    sp24 = 0;
                    sp30 = 0x140;
                    sp34 = 0xF6;
                    Init__10VIUIWindowP4VIUIRC8VIVect2IT2iii(temp_17, D_01192C70, &sp20, &sp30, 0x12C, 7, 0, &sp20);
                    Open__10VIUIWindowb(temp_17, 0);
                    SetTitle__10VIUIWindowPCUs(temp_17, GetString__13VIStringTableii(D_01192C70, 0x314, M2C_FIELD(D_01192C70, s32 *, 0x30)));
                    M2C_FIELD(temp_22, s32 *, 0x1C) = 0;
                    temp_5 = M2C_FIELD(arg4, s32 *, 0x4AC);
                    M2C_FIELD(arg4, s32 *, 0x484) = (s32) M2C_FIELD(temp_19, u8 *, 6);
                    M2C_FIELD(arg4, u8 *, 0x488) = (u8) M2C_FIELD(temp_19, u8 *, 7);
                    M2C_FIELD(arg4, u8 *, 0x489) = (u8) M2C_FIELD(temp_19, u8 *, 4);
                    M2C_FIELD(arg4, u8 *, 0x48A) = (u8) M2C_FIELD(temp_19, u8 *, 5);
                    M2C_FIELD(arg4, f32 *, 0x48C) = (f32) M2C_FIELD(temp_19, f32 *, 8);
                    M2C_FIELD(arg4, f32 *, 0x490) = (f32) M2C_FIELD(temp_19, f32 *, 0xC);
                    M2C_FIELD(arg4, u8 *, 0x494) = (u8) M2C_FIELD(temp_19, u8 *, 0x91);
                    M2C_FIELD(arg4, s8 *, 0x495) = (s8) (M2C_FIELD(temp_19, u8 *, 0x92) == 0);
                    M2C_FIELD(arg4, s8 *, 0x496) = (s8) (M2C_FIELD(temp_19, u8 *, 0x93) == 0);
                    M2C_FIELD(arg4, s8 *, 0x497) = (s8) (M2C_FIELD(temp_19, u8 *, 0x94) == 0);
                    M2C_FIELD(arg4, u8 *, 0x498) = (u8) M2C_FIELD(temp_19, u8 *, 0x95);
                    M2C_FIELD(arg4, s32 *, 0x480) = -1;
                    M2C_FIELD(arg4, u8 *, 0x499) = (u8) M2C_FIELD(temp_19, u8 *, 0x97);
                    M2C_FIELD(arg4, s32 *, 0x49C) = 0;
                    M2C_FIELD(arg4, s32 *, 0x478) = -1;
                    M2C_FIELD(arg4, s32 *, 0x4A0) = 0;
                    M2C_FIELD(arg4, s32 *, 0x4A4) = 0;
                    M2C_FIELD(arg4, s32 *, 0x4A8) = 0;
                    if (temp_5 != 0) {
                        RemoveChild__5VIWndP5VIWnd(arg4, temp_5);
                        M2C_FIELD(arg4, s32 *, 0x4AC) = 0;
                    }
                }
            }
        }
        if ((arg3 == arg0) && (arg4 != McErrWnd__Fv())) {
            Unload__13VIBattleMusic(arg3 + 0x4B0);
        }
        return;
    case 0x133:                                     /* switch 1 */
        SetFocus__5VIWndP5VIWndb(arg0, arg0, 1);
        if (arg1 == (arg0 + 0x4D0)) {
            if (arg3 == 0) {
                M2C_FIELD(temp_19, u8 *, 0x93) = (u8) (M2C_FIELD(arg0, u8 *, 0x496) == 0);
                M2C_FIELD(temp_19, u8 *, 0x94) = (u8) (M2C_FIELD(arg0, u8 *, 0x497) == 0);
                M2C_FIELD(temp_19, u8 *, 0x95) = (u8) M2C_FIELD(arg0, u8 *, 0x498);
                M2C_FIELD(temp_19, u8 *, 0x97) = (u8) M2C_FIELD(arg0, u8 *, 0x499);
                M2C_FIELD(arg0, s32 *, 0x4A4) = 4;
                return;
            }
        }
        break;
    case 0x1104:                                    /* switch 1 */
        var_5 = arg1;
block_38:
        SetFocus__5VIWndP5VIWndb(arg0, var_5, 1);
        break;
    case 0x1100:                                    /* switch 1 */
        AddChild__5VIWndP5VIWnd(arg0, arg1);
        M2C_FIELD(arg0, void **, 0x4AC) = McErrWnd__Fv();
        break;
    case 0x1102:                                    /* switch 1 */
        M2C_FIELD(arg0, void **, 0x4AC) = arg1;
        break;
    case 0x1106:                                    /* switch 1 */
        SetFocus__5VIWndP5VIWndb(arg0, arg0, 1);
        M2C_FIELD(arg0, s32 *, 0x4A0) = 0;
        switch (arg3) {                             /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            M2C_FIELD(arg0, s32 *, 0x1C) = 0;
            var_5 = M2C_FIELD(arg0, void **, 0x14);
            goto block_38;
        case 1:                                     /* switch 2 */
            M2C_FIELD(arg0, s32 *, 0x4A4) = 4;
            break;
        }
        break;
    default:                                        /* switch 1 */
        OnMessage__5VIWndP5VIWndiii(arg0, arg1, arg2, arg3, arg4);
        break;
    }
}
