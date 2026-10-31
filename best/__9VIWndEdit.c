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

M2C_UNK ClearText__9VIWndEdit(void *);              /* extern */
M2C_UNK EnableCr__9VIWndEditi(void *, M2C_UNK);     /* extern */
M2C_UNK SetDisplayRows__9VIWndEditi(void *, M2C_UNK, M2C_UNK, s32 *, M2C_UNK, s32, M2C_UNK, s32, s32); /* extern */
M2C_UNK SetMaxTextLen__9VIWndEditi(void *, M2C_UNK); /* extern */
M2C_UNK __5VIWnd();                                 /* extern */
extern M2C_UNK D_01208040;

void __9VIWndEdit(void *arg0) {
    s32 sp10;
    s32 sp14;
    s32 sp20;
    s32 sp24;
    s32 sp30;
    s32 sp34;
    s32 temp_9;
    void *temp_17;
    void *temp_18;
    void *temp_19;
    void *temp_20;

    temp_17 = arg0 + 0x38;
    temp_18 = arg0 + 0x148;
    temp_19 = arg0 + 0x150;
    temp_20 = arg0 + 0x158;
    __5VIWnd();
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(temp_17, s32 *, 4) = 0;
    M2C_FIELD((arg0 + 0x40), s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &D_01208040;
    M2C_FIELD(arg0, s32 *, 0x148) = 0;
    M2C_FIELD(temp_18, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x1A8) = 0;
    M2C_FIELD(arg0, s32 *, 0x150) = 0;
    M2C_FIELD(temp_19, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x1B0) = 0;
    M2C_FIELD(arg0, s32 *, 0x158) = 0;
    M2C_FIELD(temp_20, s32 *, 4) = 0;
    SetMaxTextLen__9VIWndEditi(arg0, 0x40);
    ClearText__9VIWndEdit(arg0);
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    sp10 = 0;
    sp14 = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x164) = 0;
    temp_9 = sp10;
    sp20 = 0;
    sp24 = 0;
    M2C_FIELD(temp_17, s32 *, 4) = 0x28;
    M2C_FIELD(arg0, s32 *, 0x168) = 0;
    sp30 = 0;
    sp34 = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0x10;
    M2C_FIELD(arg0, s32 *, 0x16C) = 0;
    M2C_FIELD(arg0, s32 *, 0x160) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s64 *, 0x1A0) = 0;
    M2C_FIELD(arg0, s32 *, 0x148) = temp_9;
    M2C_FIELD(temp_18, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x150) = (s32) sp20;
    M2C_FIELD(temp_19, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x170) = 1;
    M2C_FIELD(arg0, s32 *, 0x158) = (s32) sp30;
    M2C_FIELD(temp_20, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x18C) = 0;
    M2C_FIELD(arg0, s32 *, 0x190) = 0;
    M2C_FIELD(arg0, s32 *, 0x194) = 0;
    M2C_FIELD(arg0, s32 *, 0x1B8) = 0;
    M2C_FIELD(arg0, s32 *, 0x1BC) = 1;
    SetDisplayRows__9VIWndEditi(arg0, 2, 0x28, &sp30, 0x10, temp_9, 1, 0x10, 0x28);
    EnableCr__9VIWndEditi(arg0, 0);
    M2C_FIELD(arg0, s16 *, 0x48) = 0;
    M2C_FIELD(arg0, s64 *, 0x178) = 0;
}
