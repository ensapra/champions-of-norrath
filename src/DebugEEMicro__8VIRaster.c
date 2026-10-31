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

M2C_UNK VIEEDebugVU1Memory__Fii(M2C_UNK, M2C_UNK);  /* extern */

s32 DebugEEMicro__8VIRaster(void) {
    VIEEDebugVU1Memory__Fii(0x12, 0x23);
    VIEEDebugVU1Memory__Fii(0x156, 0x167);
    VIEEDebugVU1Memory__Fii(0x64, 0x82);
    VIEEDebugVU1Memory__Fii(0x83, 0x86);
    VIEEDebugVU1Memory__Fii(0x92, 0xB0);
    VIEEDebugVU1Memory__Fii(0x25F, 0x27D);
    VIEEDebugVU1Memory__Fii(0x1D6, 0x1F6);
    VIEEDebugVU1Memory__Fii(0xF2, 0x119);
    VIEEDebugVU1Memory__Fii(0x124, 0x14B);
    return 0;
}
