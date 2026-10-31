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

s64 GetTime__7VITimer();                            /* extern */
s32 rand(s32 *);                                    /* extern */
extern s32 D_011E2800;
extern s64 D_011E2810;
extern s32 D_011E2818;
extern s32 D_011E281C;
extern s32 D_011E2820;

void VISplashFxReset__Fv(void) {
    D_011E2810 = GetTime__7VITimer();
    D_011E2800 = 0;
    D_011E2820 = (rand(&D_011E2800) & 0xFF) + 0x96;
    D_011E281C = 1;
    D_011E2818 = 0;
}
