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

s32 Init__t7VIArray1Z11VIClipEntryi(s32, M2C_UNK);  /* extern */
s32 Init__t7VIArray1Z7VIPlanei(s32, M2C_UNK);       /* extern */
s32 Init__t7VIArray1Z7VIVect3i(s32, M2C_UNK);       /* extern */
M2C_UNK Reset__11VIClipStack(s32);                  /* extern */

s32 Init__11VIClipStack(s32 arg0) {
    s32 var_2;

    if (Init__t7VIArray1Z11VIClipEntryi(arg0 + 4, 0x1F4) < 0) {
        return -1;
    }
    if (Init__t7VIArray1Z7VIVect3i(arg0 + 0x10, 0x7D0) < 0) {
        return -1;
    }
    if (Init__t7VIArray1Z7VIPlanei(arg0 + 0x1C, 0x7D0) < 0) {
        return -1;
    }
    if (Init__t7VIArray1Z7VIVect3i(arg0 + 0x24, 0x20) < 0) {
        return -1;
    }
    var_2 = -1;
    if (Init__t7VIArray1Z7VIVect3i(arg0 + 0x2C, 0x20) >= 0) {
        Reset__11VIClipStack(arg0);
        var_2 = 0;
    }
    return var_2;
}
