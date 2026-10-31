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

M2C_UNK __10VIUIWindow(s32);                        /* extern */
M2C_UNK __9VIGUIPage();                             /* extern */
M2C_UNK memset(void *, M2C_UNK, M2C_UNK);           /* extern */
extern M2C_UNK D_011FF418;

void __11VIGUIDialog(void *arg0) {
    __9VIGUIPage();
    M2C_FIELD(arg0, M2C_UNK **, 0x78) = &D_011FF418;
    __10VIUIWindow(arg0 + 0x80);
    memset(arg0 + 0x9F0, 0, 0x400);
    M2C_FIELD(arg0, s32 *, 0xE00) = 0;
    M2C_FIELD(arg0, s32 *, 0xE04) = 0;
}
