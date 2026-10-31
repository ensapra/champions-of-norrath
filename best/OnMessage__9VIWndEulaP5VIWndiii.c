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
s32 GetString__13VIStringTableii(void *, M2C_UNK, s32); /* extern */
M2C_UNK Init__10VIUIWindowP4VIUIRC8VIVect2IT2iii(s32, void *, s32 *, s32 *, M2C_UNK, M2C_UNK, M2C_UNK, s32 *); /* extern */
M2C_UNK Open__10VIUIWindowb(s32, M2C_UNK);          /* extern */
M2C_UNK SetTitle__10VIUIWindowPCUs(s32, s32);       /* extern */
extern void *D_01192C70;

void OnMessage__9VIWndEulaP5VIWndiii(s32 arg0, s32 arg2, void *arg4) {
    s32 sp20;
    s32 sp24;
    s32 sp30;
    s32 sp34;
    s32 temp_17;

    if ((arg2 == 0x127) && (arg4 == arg0)) {
        temp_17 = arg4 + 0x28;
        Close__10VIUIWindowb(temp_17, 1);
        sp20 = 0;
        sp24 = 0;
        sp30 = 0x140;
        sp34 = 0xE0;
        Init__10VIUIWindowP4VIUIRC8VIVect2IT2iii(temp_17, D_01192C70, &sp20, &sp30, 0x258, 0x12, 0, &sp20);
        SetTitle__10VIUIWindowPCUs(temp_17, GetString__13VIStringTableii(D_01192C70, 0x63C, M2C_FIELD(D_01192C70, s32 *, 0x30)));
        Open__10VIUIWindowb(temp_17, 0);
        M2C_FIELD(arg4, s32 *, 0x2624) = 0;
        M2C_FIELD(arg4, s32 *, 0x608) = 0;
    }
}
