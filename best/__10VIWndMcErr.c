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
M2C_UNK __5VIWnd();                                 /* extern */
M2C_UNK scePrintf(M2C_UNK *);                       /* extern */
extern M2C_UNK D_011D2C20;
extern M2C_UNK D_01207BE8;

void __10VIWndMcErr(void *arg0) {
    __5VIWnd();
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &D_01207BE8;
    __10VIUIWindow(arg0 + 0x28);
    M2C_FIELD((arg0 + 0x1A4), s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x1A4) = 0;
    scePrintf(&D_011D2C20);
}
