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

M2C_UNK Free__9VIWndEula();                         /* extern */
M2C_UNK ___10VIUIWindow(void *, M2C_UNK);           /* extern */
M2C_UNK ___12VIWndMessage(void *, M2C_UNK);         /* extern */
M2C_UNK ___5VIWnd(void *, M2C_UNK);                 /* extern */
M2C_UNK __builtin_delete(void *);                   /* extern */
extern M2C_UNK D_01208A78;

void ___9VIWndEula(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &D_01208A78;
    Free__9VIWndEula();
    ___12VIWndMessage(arg0 + 0x198, 2);
    ___10VIUIWindow(arg0 + 0x28, 2);
    ___5VIWnd(arg0, 0);
    if (arg1 & 1) {
        __builtin_delete(arg0);
    }
}
