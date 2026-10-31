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

s32 RenderByVolume__6VIZoneiR15VISceneRendVars(void *, M2C_UNK, void *); /* extern */
s32 SetPretranslations__6VIZoneR8VIRasterR8VICamera(s32, s32); /* extern */

s32 RenderByVolume__6VIZoneR15VISceneRendVarsi(void *arg0, void *arg1, s32 arg2) {
    M2C_UNK var_5;

    M2C_FIELD(arg1, s32 *, 0x30) = arg2;
    if (SetPretranslations__6VIZoneR8VIRasterR8VICamera(M2C_FIELD(arg1, s32 *, 0x10), M2C_FIELD(arg1, s32 *, 0xC)) >= 0) {
        if (M2C_FIELD(arg0, s32 *, 0x44) != 0) {
            var_5 = 0;
        } else {
            var_5 = 0x40000000;
        }
        if (RenderByVolume__6VIZoneiR15VISceneRendVars(arg0, var_5, arg1) >= 0) {
            return 0;
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return -1;
    }
    return -1;
}
