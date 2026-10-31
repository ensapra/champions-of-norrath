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

s32 GetMaterialPalEntry__8VIRasterii(s32, s32, s32); /* extern */
s32 GetMaterialPalSize__8VIRasteri(s32, s32);       /* extern */
M2C_UNK SetDither__10VIMateriali(s32, s32);         /* extern */

s32 SetMaterialPalDither__13VIFloraSpriteiR8VIRaster(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_6;
    s32 var_16;

    var_16 = 0;
loop_3:
    temp_6 = var_16;
    var_16 += 1;
    if (var_16 < GetMaterialPalSize__8VIRasteri(arg2, M2C_FIELD(arg0, s32 *, 0x44))) {
        SetDither__10VIMateriali(GetMaterialPalEntry__8VIRasterii(arg2, M2C_FIELD(arg0, s32 *, 0x44), temp_6), arg1);
        goto loop_3;
    }
    return 0;
}
