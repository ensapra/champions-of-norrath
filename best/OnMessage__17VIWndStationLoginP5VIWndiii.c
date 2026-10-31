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

M2C_UNK Init__10VIUIWindowP4VIUIRC8VIVect2IT2iii(void *, s32, s32 *, s32 *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK OnMessage__5VIWndP5VIWndiii(void *);        /* extern */
M2C_UNK Open__10VIUIWindowb(void *, M2C_UNK);       /* extern */
M2C_UNK SetFocus__5VIWndP5VIWndb(void *, M2C_UNK);  /* extern */
M2C_UNK str16to8__8VIStringPcUiPCUs(void *, M2C_UNK, s32); /* extern */
extern s32 D_01192C70;

void OnMessage__17VIWndStationLoginP5VIWndiii(void *arg0, s32 arg2, s32 arg3, void *arg4) {
    s32 sp20;
    s32 sp24;
    s32 sp30;
    s32 sp34;
    s32 temp_3;
    void *temp_16;
    void *var_4;

    switch (arg2) {                                 /* switch 1; irregular */
    case 0x103:                                     /* switch 1 */
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x224), s32 *, 0x1C) = 0;
        SetFocus__5VIWndP5VIWndb(arg0, 1);
        temp_3 = M2C_FIELD(arg0, s32 *, 0x398);
        switch (temp_3) {                           /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            var_4 = arg0 + 0x24;
block_20:
            str16to8__8VIStringPcUiPCUs(var_4, 0x100, M2C_FIELD(M2C_FIELD(arg0, void **, 0x224), s32 *, 0x1A8));
            break;
        case 1:                                     /* switch 2 */
            var_4 = arg0 + 0x124;
            goto block_20;
        }
        break;
    case 0x127:                                     /* switch 1 */
        if ((arg4 == arg0) && (arg3 != M2C_FIELD(arg4, s32 *, 0x224))) {
            sp20 = 0;
            temp_16 = arg4 + 0x228;
            sp24 = 0;
            sp30 = 0x140;
            sp34 = 0xE0;
            Init__10VIUIWindowP4VIUIRC8VIVect2IT2iii(temp_16, D_01192C70, &sp20, &sp30, 0x12C, 7, 0, 0x140);
            Open__10VIUIWindowb(temp_16, 0);
        }
        break;
    case 0x104:                                     /* switch 1 */
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x224), s32 *, 0x1C) = 0;
        SetFocus__5VIWndP5VIWndb(arg0, 1);
        break;
    default:                                        /* switch 1 */
        OnMessage__5VIWndP5VIWndiii(arg0);
        break;
    }
}
