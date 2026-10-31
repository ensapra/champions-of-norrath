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

M2C_UNK Close__10VIUIWindowb(s32, M2C_UNK);         /* extern */
M2C_UNK Init__10VIUIWindowP4VIUIRC8VIVect2IT2iii(s32, s32, s32 *, s32 *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK Open__10VIUIWindowb(s32, M2C_UNK);          /* extern */
M2C_UNK scePrintf(M2C_UNK *);                       /* extern */
extern s32 D_01192C70;
extern M2C_UNK D_011D2D00;
extern M2C_UNK D_011D2D50;
extern M2C_UNK D_011D2D80;
extern M2C_UNK D_011D2DC0;
extern M2C_UNK D_011D2DF8;

void OnMessage__10VIWndMcErrP5VIWndiii(s32 arg0, s32 arg2, s32 arg3, s32 arg4) {
    s32 sp20;
    s32 sp24;
    s32 sp30;
    s32 sp34;
    s32 temp_16;

    scePrintf(&D_011D2D00);
    if (arg2 == 0x127) {
        scePrintf(&D_011D2D50);
        if (arg4 == arg0) {
            temp_16 = arg0 + 0x28;
            scePrintf(&D_011D2D80);
            Close__10VIUIWindowb(temp_16, 1);
            sp20 = 0;
            sp24 = 0;
            sp30 = 0x140;
            sp34 = 0xF6;
            Init__10VIUIWindowP4VIUIRC8VIVect2IT2iii(temp_16, D_01192C70, &sp20, &sp30, 0x17C, 7, 0, 0x140);
            Open__10VIUIWindowb(temp_16, 0);
        }
        if (arg3 == arg0) {
            scePrintf(&D_011D2DC0);
        }
    } else {
        scePrintf(&D_011D2DF8);
    }
}
