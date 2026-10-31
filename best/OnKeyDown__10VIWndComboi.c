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

s32 ListSelection__C8VIWidget(s32);                 /* extern */
M2C_UNK SetListSelection__8VIWidgeti(s32, s32);     /* extern */
M2C_UNK SetSelection__8VIWidgeti(s32, s32);         /* extern */

void OnKeyDown__10VIWndComboi(void *arg0, s32 arg1) {
    s32 temp_16;
    s32 temp_16_2;
    void *temp_2;
    void *temp_2_2;
    void *temp_9;
    void *temp_9_2;

    switch (arg1) {                                 /* irregular */
    case 0x84:
        temp_9 = M2C_FIELD(arg0, void **, 0x14);
        temp_2 = M2C_FIELD(temp_9, void **, 0x20);
        M2C_FIELD((temp_2 + 0x30), M2C_UNK (**)(void *, void *, M2C_UNK, M2C_UNK, M2C_UNK, void *), 4)(temp_9 + M2C_FIELD(temp_2, s16 *, 0x30), arg0, 0x134, 0, 0, temp_9);
        return;
    case 0x8B:
        temp_16 = M2C_FIELD(arg0, s32 *, 0x28);
        SetListSelection__8VIWidgeti(temp_16, ListSelection__C8VIWidget(temp_16) + 1);
        return;
    case 0x8A:
        temp_16_2 = M2C_FIELD(arg0, s32 *, 0x28);
        SetListSelection__8VIWidgeti(temp_16_2, ListSelection__C8VIWidget(temp_16_2) - 1);
        return;
    case 0x86:
        SetSelection__8VIWidgeti(M2C_FIELD(arg0, s32 *, 0x28), ListSelection__C8VIWidget(M2C_FIELD(arg0, s32 *, 0x28)));
        temp_9_2 = M2C_FIELD(arg0, void **, 0x14);
        temp_2_2 = M2C_FIELD(temp_9_2, void **, 0x20);
        M2C_FIELD((temp_2_2 + 0x30), M2C_UNK (**)(void *, void *, M2C_UNK, M2C_UNK, M2C_UNK, void *), 4)(temp_9_2 + M2C_FIELD(temp_2_2, s16 *, 0x30), arg0, 0x134, 0, 0, temp_9_2);
        return;
    }
}
