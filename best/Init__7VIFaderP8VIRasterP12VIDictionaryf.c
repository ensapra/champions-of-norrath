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

s32 CreateMaterial__8VIRasteri(s32, M2C_UNK);       /* extern */
s64 GetTime__7VITimer();                            /* extern */
M2C_UNK InitSolidFill__10VIMaterial(s32);           /* extern */
s32 Material__8VIRasteri(s32, s32);                 /* extern */
M2C_UNK SetLayerBlendMode__10VIMateriali16VIAlphaBlendMode(s32, M2C_UNK, M2C_UNK); /* extern */

s32 Init__7VIFaderP8VIRasterP12VIDictionaryf(void *arg0, s32 arg1, f32 fparg0) {
    s32 temp_2;
    s32 temp_2_2;
    s32 var_2;

    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, f32 *, 8) = fparg0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    temp_2 = CreateMaterial__8VIRasteri(arg1, 1);
    var_2 = -1;
    M2C_FIELD(arg0, s32 *, 0x14) = temp_2;
    if (temp_2 >= 0) {
        temp_2_2 = Material__8VIRasteri(M2C_FIELD(arg0, s32 *, 0), temp_2);
        InitSolidFill__10VIMaterial(temp_2_2);
        SetLayerBlendMode__10VIMateriali16VIAlphaBlendMode(temp_2_2, 0, 3);
        M2C_FIELD(arg0, s64 *, 0x18) = GetTime__7VITimer();
        var_2 = 0;
    }
    return var_2;
}
