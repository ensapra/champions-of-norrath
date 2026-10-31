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
M2C_UNK Init__10VIUIWindowP4VIUIRC8VIVect2IT2iii(void *, s32, s32 *, s32 *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 McErrWnd__Fv();                                 /* extern */
M2C_UNK OnMessage__5VIWndP5VIWndiii(void *, void *, s32, s32, void *); /* extern */
M2C_UNK Open__10VIUIWindowb(void *, M2C_UNK);       /* extern */
M2C_UNK SetFocus__5VIWndP5VIWndb(void *, void *, M2C_UNK); /* extern */
M2C_UNK scePrintf(M2C_UNK *);                       /* extern */
extern s32 D_01192C70;
extern M2C_UNK D_011D5CD8;
extern M2C_UNK D_011D5D28;
extern M2C_UNK D_011D5D50;
extern M2C_UNK D_011D5D78;
extern M2C_UNK D_011D5DA0;
extern M2C_UNK D_011D5DC8;
extern M2C_UNK D_011D5DF0;
extern M2C_UNK D_011D5E18;

void OnMessage__11VIWndSplashP5VIWndiii(void *arg0, void *arg1, s32 arg2, s32 arg3, void *arg4) {
    s32 sp20;
    s32 sp24;
    s32 sp30;
    s32 sp34;
    s32 temp_3;
    void *temp_16;
    void *temp_3_2;
    void *var_5;

    scePrintf(&D_011D5CD8);
    switch (arg2) {                                 /* irregular */
    case 0x133:
        scePrintf(&D_011D5D50);
        M2C_FIELD(arg0, s32 *, 0x25B0) = 0;
        M2C_FIELD(arg0, s32 *, 0x25B4) = 0;
        var_5 = arg0;
block_32:
        SetFocus__5VIWndP5VIWndb(arg0, var_5, 1);
        break;
    case 0x1102:
        scePrintf(&D_011D5DC8);
        M2C_FIELD(arg0, void **, 0x25AC) = arg1;
        break;
    case 0x1106:
        scePrintf(&D_011D5DF0);
        SetFocus__5VIWndP5VIWndb(arg0, arg0, 1);
        temp_3 = M2C_FIELD(arg0, s32 *, 0x25BC);
        if (temp_3 != 1) {
            M2C_FIELD(arg0, s32 *, 0x25A8) = (s32) (M2C_FIELD(arg0, s32 *, 0x25A8) + 1);
        } else if (arg3 != temp_3) {
            M2C_FIELD(arg0, s32 *, 0x25A8) = 0;
            M2C_FIELD(arg0, s32 *, 0x25BC) = 0;
        } else {
            M2C_FIELD(arg0, s32 *, 0x25BC) = 2;
        }
        break;
    case 0x127:
        scePrintf(&D_011D5D28);
        if (arg4 == arg0) {
            temp_3_2 = arg4 + 0x1A0;
            if ((arg3 != temp_3_2) && (arg3 != (arg4 + 0x968)) && (arg3 != (arg4 + 0x12A8))) {
                if (M2C_FIELD(temp_3_2, s32 *, 0x7A8) != 0) {
                    M2C_FIELD(temp_3_2, s32 *, 0x7A8) = 0;
                    M2C_FIELD(arg4, s32 *, 0x25A8) = 0;
                    M2C_FIELD(arg4, s32 *, 0x25B8) = 0;
                    M2C_FIELD(arg4, s32 *, 0x25B0) = 0;
                    M2C_FIELD(arg4, s32 *, 0x25B4) = 0;
                    M2C_FIELD(arg4, s32 *, 0x25BC) = 0;
                }
                temp_16 = arg4 + 0x28;
                sp20 = 0;
                sp24 = 0xBE;
                sp30 = 0x140;
                sp34 = 0xE0;
                Init__10VIUIWindowP4VIUIRC8VIVect2IT2iii(temp_16, D_01192C70, &sp20, &sp30, 0x40, 1, 0, 0xE0);
                Open__10VIUIWindowb(temp_16, 1);
                if (arg3 != McErrWnd__Fv()) {
                    M2C_FIELD(arg4, s32 *, 0x25BC) = 0;
                }
            }
        }
        break;
    case 0x1104:
        scePrintf(&D_011D5D78);
        var_5 = arg1;
        goto block_32;
    case 0x1100:
        scePrintf(&D_011D5DA0);
        AddChild__5VIWndP5VIWnd(arg0, arg1);
        break;
    default:
        scePrintf(&D_011D5E18);
        OnMessage__5VIWndP5VIWndiii(arg0, arg1, arg2, arg3, arg4);
        break;
    }
}
