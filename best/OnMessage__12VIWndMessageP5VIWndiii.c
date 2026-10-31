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
M2C_UNK Init__10VIUIWindowP4VIUIRC8VIVect2IT2iii(s32, s32, s32 *, s32, s32, s32, M2C_UNK); /* extern */
M2C_UNK OnMessage__5VIWndP5VIWndiii();              /* extern */
M2C_UNK Open__10VIUIWindowb(s32, M2C_UNK);          /* extern */
M2C_UNK SetTitle__10VIUIWindowPCUs(s32, s32);       /* extern */
s32 T__10VIUIWindowPCUs(s32, void *);               /* extern */
extern s32 D_01192C70;

void OnMessage__12VIWndMessageP5VIWndiii(s32 arg0, s32 arg2, void *arg4) {
    s32 sp10;
    s32 sp14;
    s32 temp_16;

    if (arg2 == 0x127) {
        if (arg4 == arg0) {
            temp_16 = arg4 + 0x28;
            Close__10VIUIWindowb(temp_16, 1);
            sp10 = 0;
            sp14 = 0;
            Init__10VIUIWindowP4VIUIRC8VIVect2IT2iii(temp_16, D_01192C70, &sp10, arg4 + 0x3DC, M2C_FIELD(arg4, s32 *, 0x3E4), M2C_FIELD(arg4, s32 *, 0x3E8), 0);
            Open__10VIUIWindowb(temp_16, 0);
            SetTitle__10VIUIWindowPCUs(temp_16, T__10VIUIWindowPCUs(temp_16, arg4 + 0x198));
            if (M2C_FIELD(arg4, s32 *, 0x3EC) == 0) {
                M2C_FIELD(arg4, s32 *, 0x3D8) = 0;
            } else {
                M2C_FIELD(arg4, s32 *, 0x3D8) = 1;
            }
        }
    } else {
        OnMessage__5VIWndP5VIWndiii();
    }
}
