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

s32 RenderByVolume__7VIWorldiR15VISceneRendVars(M2C_UNK, s32 *, s32 *); /* extern */

s32 RenderByVolume__7VIWorldR15VISceneRendVars(void *arg0, s32 *arg1) {
    M2C_UNK var_5;

    *arg1 = M2C_FIELD(arg0, s32 *, 0x44);
    var_5 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x34) == 0) {
        var_5 = 0x40000000;
    }
    if (RenderByVolume__7VIWorldiR15VISceneRendVars(var_5, arg1, arg1) >= 0) {
        M2C_FIELD(arg0, s32 *, 0x44) = (s32) (M2C_FIELD(arg0, s32 *, 0x44) + 1);
        return 0;
    }
    return -1;
}
