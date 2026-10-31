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

M2C_UNK __10VIUIWindow(void *);                     /* extern */
M2C_UNK __12VIWndMessage(s32);                      /* extern */
M2C_UNK __5VIWnd();                                 /* extern */
extern M2C_UNK D_01207DB8;

void __12VIWndConnect(void *arg0) {
    __5VIWnd();
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &D_01207DB8;
    __12VIWndMessage(arg0 + 0x28);
    __10VIUIWindow(arg0 + 0x498);
    __10VIUIWindow(arg0 + 0x608);
    M2C_FIELD(arg0, s32 *, 0x7A0) = -1;
    M2C_FIELD(arg0, s32 *, 0x7AC) = 0;
    M2C_FIELD(arg0, s32 *, 0x788) = -1;
    M2C_FIELD(arg0, s32 *, 0x78C) = -1;
    M2C_FIELD(arg0, s32 *, 0x790) = -1;
    M2C_FIELD(arg0, s32 *, 0x794) = -1;
    M2C_FIELD(arg0, s32 *, 0x798) = -1;
    M2C_FIELD(arg0, s32 *, 0x79C) = -1;
    M2C_FIELD(arg0, s32 *, 0x778) = 0;
    M2C_FIELD(arg0, s32 *, 0x7A4) = 0;
    M2C_FIELD(arg0, s32 *, 0x7A8) = 0;
}
