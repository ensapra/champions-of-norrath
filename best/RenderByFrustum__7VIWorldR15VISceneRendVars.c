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

M2C_UNK GetTop__11VIClipStackRiPP7VIVect3T1PP7VIPlane(s32, void *, void *, void *, void *); /* extern */
s32 Pop__11VIClipStack(s32);                        /* extern */
s32 PushFrustum__11VIClipStackR8VICamera(s32, s32); /* extern */
s32 RenderByVolume__7VIWorldR15VISceneRendVars(void *, void *); /* extern */

s32 RenderByFrustum__7VIWorldR15VISceneRendVars(void *arg0, void *arg1) {
    s32 var_2;
    s32 var_3;

    M2C_FIELD(arg1, s32 *, 0x28) = 1;
    M2C_FIELD(arg1, void **, 8) = arg0;
    var_3 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x34) == 0) {
        var_3 = 1;
        if (M2C_FIELD(arg0, s32 *, 0x3C) != 0) {
            var_3 = 0;
        }
    }
    var_2 = 0;
    if (var_3 == 0) {
        if ((PushFrustum__11VIClipStackR8VICamera(M2C_FIELD(arg1, s32 *, 0x14), M2C_FIELD(arg1, s32 *, 0xC)) < 0) || (GetTop__11VIClipStackRiPP7VIVect3T1PP7VIPlane(M2C_FIELD(arg1, s32 *, 0x14), arg1 + 0x18, arg1 + 0x1C, arg1 + 0x20, arg1 + 0x24), (RenderByVolume__7VIWorldR15VISceneRendVars(arg0, arg1) < 0))) {
            return -1;
        }
        var_2 = (Pop__11VIClipStack(M2C_FIELD(arg1, s32 *, 0x14)) >= 0) ? 0 : -1;
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return var_2;
    }
    return var_2;
}
