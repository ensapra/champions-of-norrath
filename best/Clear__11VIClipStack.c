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

s32 Clear__t7VIArray1Z11VIClipEntry(s32);           /* extern */
s32 Clear__t7VIArray1Z7VIPlane(s32);                /* extern */
s32 Clear__t7VIArray1Z7VIVect3(s32);                /* extern */

s32 Clear__11VIClipStack(s32 arg0) {
    if (Clear__t7VIArray1Z11VIClipEntry(arg0 + 4) >= 0) {
        if (Clear__t7VIArray1Z7VIVect3(arg0 + 0x10) < 0) {
            return -1;
        }
        if ((Clear__t7VIArray1Z7VIPlane(arg0 + 0x1C) < 0) || (Clear__t7VIArray1Z7VIVect3(arg0 + 0x24) < 0)) {
            goto block_6;
        }
        return (Clear__t7VIArray1Z7VIVect3(arg0 + 0x2C) >= 0) ? 0 : -1;
    }
block_6:
    return -1;
}
