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

M2C_UNK VIFreeUSocketExApi__Fv();                   /* extern */
M2C_UNK __wrap_free(s32);                           /* extern */
M2C_UNK sceLibnetTerminate(M2C_UNK *);              /* extern */
extern s32 D_0118E6B0;
extern s32 D_0118E6B4;
extern M2C_UNK D_0118E740;

void unet_shutdown__Fv(void) {
    if (D_0118E6B4 != 0) {
        sceLibnetTerminate(&D_0118E740);
        D_0118E6B4 = 0;
        VIFreeUSocketExApi__Fv();
        __wrap_free(D_0118E6B0);
    }
}
