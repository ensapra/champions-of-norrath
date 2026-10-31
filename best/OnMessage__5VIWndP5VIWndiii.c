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

M2C_UNK OnMessage__10VIWndMcErrP5VIWndiii();        /* extern */
extern M2C_UNK D_01190A20;

void OnMessage__5VIWndP5VIWndiii(void *arg0) {
    void *temp_2;
    void *temp_9;

    if (arg0 == &D_01190A20) {
        OnMessage__10VIWndMcErrP5VIWndiii();
        return;
    }
    temp_9 = M2C_FIELD(arg0, void **, 0x14);
    if (temp_9 != NULL) {
        temp_2 = M2C_FIELD(temp_9, void **, 0x20);
        M2C_FIELD((temp_2 + 0x30), M2C_UNK (**)(void *, void *), 4)(temp_9 + M2C_FIELD(temp_2, s16 *, 0x30), temp_9);
    }
}
