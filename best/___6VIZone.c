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

M2C_UNK ___10VIMatrix44(s32, M2C_UNK);              /* extern */
M2C_UNK ___10VIZoneTree(s32, M2C_UNK);              /* extern */
M2C_UNK ___t7VIArray1Z10VIZoneRoom(s32, M2C_UNK);   /* extern */
M2C_UNK ___t7VIArray1Z14VIResourceElem(s32, M2C_UNK); /* extern */
M2C_UNK ___t7VIArray1Z16VIRadialFloraSet(s32, M2C_UNK); /* extern */
M2C_UNK ___t7VIArray1Z17VIRadialFloraDist(s32, M2C_UNK); /* extern */
M2C_UNK ___t7VIArray1Z18VIRadialFloraModel(s32, M2C_UNK); /* extern */
M2C_UNK ___t7VIArray1Z21VIZoneStaticTableElem(s32, M2C_UNK); /* extern */
M2C_UNK ___t7VIArray1Z7VIVect3(s32, M2C_UNK);       /* extern */
M2C_UNK __builtin_delete(s32);                      /* extern */

void ___6VIZone(s32 arg0, s32 arg1) {
    ___10VIMatrix44(arg0 + 0x90, 2);
    ___t7VIArray1Z16VIRadialFloraSet(arg0 + 0x84, 2);
    ___t7VIArray1Z17VIRadialFloraDist(arg0 + 0x7C, 2);
    ___t7VIArray1Z18VIRadialFloraModel(arg0 + 0x74, 2);
    ___t7VIArray1Z21VIZoneStaticTableElem(arg0 + 0x6C, 2);
    ___t7VIArray1Z14VIResourceElem(arg0 + 0x64, 2);
    ___t7VIArray1Z10VIZoneRoom(arg0 + 0x5C, 2);
    ___t7VIArray1Z7VIVect3(arg0 + 0x54, 2);
    ___10VIZoneTree(arg0 + 0x44, 2);
    if (arg1 & 1) {
        __builtin_delete(arg0);
    }
}
