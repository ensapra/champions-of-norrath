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

M2C_UNK ProcessScreen__10VIWndMcErriii(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK scePrintf(M2C_UNK *, s32);                  /* extern */
extern M2C_UNK D_011D2C88;

void OnDrawSelf__10VIWndMcErr(void *arg0) {
    s32 var_5;

    var_5 = M2C_FIELD(arg0, s32 *, 0x19C);
    if (var_5 == 0xA) {
        var_5 = 0xF;
        M2C_FIELD(arg0, s32 *, 0x19C) = 0xF;
    }
    if (var_5 == 0xB) {
        var_5 = 0x32;
        M2C_FIELD(arg0, s32 *, 0x19C) = 0x32;
    }
    scePrintf(&D_011D2C88, var_5);
    ProcessScreen__10VIWndMcErriii(arg0, 0, 0, 0);
}
