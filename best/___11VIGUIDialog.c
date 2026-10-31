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

M2C_UNK Free__10VIUIWindow(s32);                    /* extern */
M2C_UNK ___10VIUIWindow(s32, M2C_UNK);              /* extern */
M2C_UNK ___9VIGUIPage(void *, M2C_UNK);             /* extern */
M2C_UNK __builtin_delete(void *);                   /* extern */
M2C_UNK memset(void *, M2C_UNK, M2C_UNK);           /* extern */
extern M2C_UNK D_011FF418;

void ___11VIGUIDialog(void *arg0, s32 arg1) {
    s32 temp_18;

    temp_18 = arg0 + 0x80;
    M2C_FIELD(arg0, M2C_UNK **, 0x78) = &D_011FF418;
    Free__10VIUIWindow(temp_18);
    memset(arg0 + 0x1F0, 0, 0x800);
    ___10VIUIWindow(temp_18, 2);
    ___9VIGUIPage(arg0, 0);
    if (arg1 & 1) {
        __builtin_delete(arg0);
    }
}
