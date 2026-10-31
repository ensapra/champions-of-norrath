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

M2C_UNK str8to16__8VIStringPUsUiPCc(void *, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK strcat16__8VIStringPUsUiPCUs(void *, M2C_UNK, s32); /* extern */
M2C_UNK strcat16__8VIStringPUsUiPCc(void *, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK D_011D4FE8;
extern M2C_UNK D_011D4FF0;

void *PromptText__12VIWndMessagePCUsi(void *arg0, s32 arg1, s32 arg2) {
    void *var_16;

    var_16 = arg0 + 0x3F0;
    if (arg2 != 0) {
        str8to16__8VIStringPUsUiPCc(var_16, 0x80, &D_011D4FE8);
    } else {
        M2C_FIELD(arg0, s16 *, 0x3F0) = 0;
        var_16 = arg0 + 0x3F0;
    }
    strcat16__8VIStringPUsUiPCUs(var_16, 0x80, arg1);
    if (arg2 != 0) {
        strcat16__8VIStringPUsUiPCc(var_16, 0x80, &D_011D4FF0);
    }
    return var_16;
}
