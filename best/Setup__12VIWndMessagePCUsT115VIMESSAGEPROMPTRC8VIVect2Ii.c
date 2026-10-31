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

s32 CountLines__10VIUIWindowPCUsi(void *, s32, s32); /* extern */
M2C_UNK Init__10VIUIWindowP4VIUIRC8VIVect2IT2iii(void *, s32, s32 *, void *, s32, M2C_UNK, M2C_UNK, s32 *); /* extern */
M2C_UNK strcpy16__8VIStringPUsUiPCUs(s32, M2C_UNK, s32); /* extern */
extern s32 D_01192C70;

void Setup__12VIWndMessagePCUsT115VIMESSAGEPROMPTRC8VIVect2Ii(void *arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4, s32 arg5) {
    s32 sp10;
    s32 sp14;
    s32 temp_21;
    s32 temp_2_2;
    void *temp_17;
    void *temp_2;

    temp_21 = arg0 + 0x1D8;
    strcpy16__8VIStringPUsUiPCUs(arg0 + 0x198, 0x40, arg1);
    strcpy16__8VIStringPUsUiPCUs(temp_21, 0x200, arg2);
    M2C_FIELD(arg0, s32 *, 0x3EC) = arg3;
    temp_2 = arg0 + 0x3DC;
    M2C_FIELD(arg0, s32 *, 0x3DC) = (s32) M2C_FIELD(arg4, s32 *, 0);
    temp_17 = arg0 + 0x28;
    M2C_FIELD(temp_2, s32 *, 4) = (s32) M2C_FIELD(arg4, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x3E4) = arg5;
    sp10 = 0;
    sp14 = 0;
    Init__10VIUIWindowP4VIUIRC8VIVect2IT2iii(temp_17, D_01192C70, &sp10, temp_2, arg5, 0x14, 0, &D_01192C70);
    temp_2_2 = CountLines__10VIUIWindowPCUsi(temp_17, temp_21, arg5 - 0x50);
    M2C_FIELD(arg0, s32 *, 0x3D8) = 0;
    M2C_FIELD(arg0, s32 *, 0x3E8) = (s32) (temp_2_2 + 3);
}
