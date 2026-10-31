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

s32 IsOpen__11VIGUIDialog(void *);                  /* extern */
M2C_UNK OnKeyUp__9VIWndEditi(void *, s32);          /* extern */

void OnKeyUp__20VIWndGenericRendereri(void *arg0, s32 arg1) {
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_6;
    void *temp_6_2;

    if ((M2C_FIELD(arg0, s32 *, 0x578) == 0) && (M2C_FIELD(arg0, void **, 0x34) != NULL)) {
        temp_2 = M2C_FIELD(arg0, void **, 0x38);
        if ((temp_2 != NULL) && (IsOpen__11VIGUIDialog(temp_2) != 0)) {
            temp_6 = M2C_FIELD(arg0, void **, 0x38);
            temp_2_2 = M2C_FIELD(temp_6, void **, 0x78);
            M2C_FIELD((temp_2_2 + 0x10), M2C_UNK (**)(void *, s32, void *), 4)(temp_6 + M2C_FIELD(temp_2_2, s16 *, 0x10), arg1, temp_6);
            return;
        }
        if (M2C_FIELD(arg0, s32 *, 0x58C) == 0) {
            temp_6_2 = M2C_FIELD(arg0, void **, 0x34);
            temp_2_3 = M2C_FIELD(temp_6_2, void **, 0x78);
            M2C_FIELD((temp_2_3 + 0x10), M2C_UNK (**)(void *, s32, void *), 4)(temp_6_2 + M2C_FIELD(temp_2_3, s16 *, 0x10), arg1, temp_6_2);
        } else {
            OnKeyUp__9VIWndEditi(arg0 + 0x590, arg1);
        }
    }
}
