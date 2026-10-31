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

s32 Clear__t7VIArray1Z10VIZoneLeaf(s32);            /* extern */
s32 Clear__t7VIArray1Z10VIZoneNode();               /* extern */

s32 Clear__10VIZoneTree(s32 arg0) {
    if (Clear__t7VIArray1Z10VIZoneNode() < 0) {
        return -1;
    }
    return (Clear__t7VIArray1Z10VIZoneLeaf(arg0 + 8) >= 0) ? 0 : -1;
}
