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

M2C_UNK InvertAffine__10VIMatrix44RC10VIMatrix44(M2C_UNK, M2C_UNK); /* extern */
M2C_UNK Mul__10VIMatrix44RC10VIMatrix44T1(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK Mul__C10VIMatrix44RC7VIVect3R7VIVect3(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK Normalize__7VIVect3(M2C_UNK);               /* extern */
M2C_UNK SubMatrixMul__C10VIMatrix44RC7VIVect3R7VIVect3(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

s32 CalcMatrices__8VIRaster(void) {
    Mul__10VIMatrix44RC10VIMatrix44T1(0x70000080, 0x70000000, 0x70000040);
    Mul__10VIMatrix44RC10VIMatrix44T1(0x70000140, 0x70000080, 0x700000C0);
    InvertAffine__10VIMatrix44RC10VIMatrix44(0x70000100, 0x70000000);
    SubMatrixMul__C10VIMatrix44RC7VIVect3R7VIVect3(0x70000100, 0x700001A0, 0x70000180);
    Normalize__7VIVect3(0x70000180);
    if (*(u8 *)0x70000222 != 0) {
        Mul__C10VIMatrix44RC7VIVect3R7VIVect3(0x70000100, 0x700001C0, 0x70000190);
    }
    return 0;
}
