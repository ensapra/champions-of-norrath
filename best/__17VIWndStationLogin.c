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
extern s32 D_011D6BE0;
extern M2C_UNK D_011D6BE8;
extern M2C_UNK D_0120F7F0;

void __17VIWndStationLogin(void *arg0) {
    __5VIWnd();
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &D_0120F7F0;
    __10VIUIWindow(arg0 + 0x228);
    M2C_FIELD(arg0, s32 *, 0x224) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) D_011D6BE0;
    M2C_FIELD(arg0, s32 *, 0x124) = (s32) M2C_FIELD(&D_011D6BE8, s32 *, 0);
    M2C_FIELD(arg0, s16 *, 0x128) = (s16) M2C_FIELD(&D_011D6BE8, s16 *, 4);
    M2C_FIELD(arg0, s8 *, 0x12A) = (s8) M2C_FIELD(&D_011D6BE8, s8 *, 6);
}
