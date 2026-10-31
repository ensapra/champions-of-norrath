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

s32 Stream__6VIZoneiR21VISceneBBoxStreamVars(M2C_UNK, void *); /* extern */
M2C_UNK UpdateActors__7VIScene(s32);                /* extern */

s32 Stream__6VIZoneR21VISceneBBoxStreamVars(void *arg0, void *arg1) {
    M2C_UNK var_5;
    s32 var_2;

    var_5 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x44) == 0) {
        var_5 = 0x40000000;
    }
    var_2 = -1;
    if (Stream__6VIZoneiR21VISceneBBoxStreamVars(var_5, arg1) >= 0) {
        UpdateActors__7VIScene(M2C_FIELD(arg1, s32 *, 4));
        var_2 = 0;
    }
    return var_2;
}
