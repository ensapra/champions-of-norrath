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

M2C_UNK OnKeyDown__10VIWndMcErri();                 /* extern */
extern M2C_UNK D_01190A20;

void OnKeyDown__5VIWndi(void *arg0) {
    void *temp_2;
    void *temp_6;

    if (arg0 == &D_01190A20) {
        OnKeyDown__10VIWndMcErri();
        return;
    }
    temp_6 = M2C_FIELD(arg0, void **, 0x14);
    if (temp_6 != NULL) {
        temp_2 = M2C_FIELD(temp_6, void **, 0x20);
        M2C_FIELD((temp_2 + 0x28), M2C_UNK (**)(void *, void *), 4)(temp_6 + M2C_FIELD(temp_2, s16 *, 0x28), temp_6);
    }
}
