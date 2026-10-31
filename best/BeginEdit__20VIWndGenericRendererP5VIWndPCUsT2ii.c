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

M2C_UNK AddChild__5VIWndP5VIWnd(s32, void *, void *, s32); /* extern */
M2C_UNK SetCenter__9VIWndEditRC8VIVect2I(void *, s32 *, M2C_UNK); /* extern */
M2C_UNK SetDisplayRows__9VIWndEditi(void *, M2C_UNK); /* extern */
M2C_UNK SetMaxTextLen__9VIWndEditi(void *, s32);    /* extern */
M2C_UNK SetText__9VIWndEditPCUs(void *, s32);       /* extern */
M2C_UNK SetTitle__9VIWndEditPCUs(void *, s32);      /* extern */

s32 BeginEdit__20VIWndGenericRendererP5VIWndPCUsT2ii(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 sp10;
    s32 sp14;
    s32 var_2;
    void *temp_16;

    temp_16 = arg0 + 0x590;
    var_2 = -1;
    if (M2C_FIELD(arg0, s32 *, 0x58C) == 0) {
        M2C_FIELD(arg0, s32 *, 0x58C) = arg1;
        AddChild__5VIWndP5VIWnd(arg1, temp_16, arg0, arg1);
        sp10 = 0x140;
        sp14 = 0xE0;
        SetCenter__9VIWndEditRC8VIVect2I(temp_16, &sp10, 0x140);
        SetMaxTextLen__9VIWndEditi(temp_16, arg4);
        SetTitle__9VIWndEditPCUs(temp_16, arg2);
        SetDisplayRows__9VIWndEditi(temp_16, 1);
        SetText__9VIWndEditPCUs(temp_16, arg3);
        M2C_FIELD(temp_16, s32 *, 0x18C) = (s32) (arg5 != 0);
        M2C_FIELD(temp_16, s32 *, 0x1C) = 1;
        var_2 = 0;
    }
    return var_2;
}
