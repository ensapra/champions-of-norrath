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

M2C_UNK AddChild__5VIWndP5VIWnd(void *, void *, void *, s32); /* extern */
M2C_UNK __9VIWndEdit(void *);                       /* extern */
void *__builtin_new(M2C_UNK);                       /* extern */

s32 Init__17VIWndStationLogin(void *arg0) {
    s32 sp4;
    void *temp_2;
    void *temp_6;

    temp_2 = __builtin_new(0x1C0);
    if (temp_2 != NULL) {
        __9VIWndEdit(temp_2);
    }
    temp_6 = temp_2 + 0x38;
    sp4 = 0xBE;
    M2C_FIELD(temp_2, s32 *, 0x38) = 0x20;
    M2C_FIELD(arg0, void **, 0x224) = temp_2;
    M2C_FIELD(temp_2, s32 *, 0x1C) = 0;
    M2C_FIELD(temp_6, s32 *, 4) = 0xBE;
    AddChild__5VIWndP5VIWnd(arg0, temp_2, temp_6, 0x20);
    M2C_FIELD(arg0, s32 *, 0x398) = 2;
    return 0;
}
