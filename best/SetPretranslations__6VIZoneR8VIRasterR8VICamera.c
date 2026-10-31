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

s32 SetPreTranslations__8VIRasteriP7VIVect3RC7VIVect3(s32, s32, void *, void *, void *, s32, s32, void *); /* extern */

s32 SetPretranslations__6VIZoneR8VIRasterR8VICamera(void *arg0, s32 arg1, void *arg2, s32 arg5) {
    s32 var_10;
    s32 var_9;
    void *temp_2;
    void *temp_5;
    void *var_3;
    void *var_7;

    var_9 = arg5;
    temp_5 = arg0 + 0x54;
    var_10 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x54) > 0) {
        var_7 = arg2 + 0x1C;
        var_3 = arg0 + 0xD0;
        var_9 = 0;
        do {
            var_10 += 1;
            temp_2 = M2C_FIELD(temp_5, s32 *, 4) + var_9;
            var_9 += 0xC;
            M2C_FIELD(var_3, f32 *, 0) = (f32) (M2C_FIELD(temp_2, f32 *, 0) - M2C_FIELD(arg2, f32 *, 0x1C));
            M2C_FIELD(var_3, f32 *, 4) = (f32) (M2C_FIELD(temp_2, f32 *, 4) - M2C_FIELD(var_7, f32 *, 4));
            M2C_FIELD(var_3, f32 *, 8) = (f32) (M2C_FIELD(temp_2, f32 *, 8) - M2C_FIELD(var_7, f32 *, 8));
            var_3 += 0xC;
        } while (var_10 < M2C_FIELD(arg0, s32 *, 0x54));
    } else {
        var_7 = arg2 + 0x1C;
    }
    return (SetPreTranslations__8VIRasteriP7VIVect3RC7VIVect3(arg1, M2C_FIELD(arg0, s32 *, 0x54), arg0 + 0xD0, var_7, temp_5, var_9, var_10, arg0) >= 0) ? 0 : -1;
}
