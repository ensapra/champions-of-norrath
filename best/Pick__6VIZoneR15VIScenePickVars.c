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

s32 Pick__6VIZoneiR15VIScenePickVars(void *, M2C_UNK, void *); /* extern */
s32 SetPreTranslations__8VIRasteriP7VIVect3RC7VIVect3(s32, s32, s32, f32 *); /* extern */

s32 Pick__6VIZoneR15VIScenePickVars(void *arg0, void *arg1) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    s32 temp_2;
    s32 var_18;

    var_18 = 0;
    temp_2 = M2C_FIELD(arg0, s32 *, 0x54);
    if (temp_2 > 0) {
        sp10 = 0.0f;
        sp18 = 0.0f;
        sp14 = 0.0f;
        if (SetPreTranslations__8VIRasteriP7VIVect3RC7VIVect3(M2C_FIELD(arg1, s32 *, 0x10), temp_2, M2C_FIELD((arg0 + 0x54), s32 *, 4), &sp10) < 0) {
            return -1;
        }
    }
    if (M2C_FIELD(arg0, s32 *, 0x44) != 0) {
        if (Pick__6VIZoneiR15VIScenePickVars(arg0, 0, arg1) != 0) {
            var_18 = 1;
        }
    } else {
        var_18 = Pick__6VIZoneiR15VIScenePickVars(arg0, 0x40000000, arg1) != 0;
    }
    return var_18;
}
