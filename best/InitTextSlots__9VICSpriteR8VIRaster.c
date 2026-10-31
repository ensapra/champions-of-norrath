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

s32 GetLayerTexture__10VIMateriali(s32, s32);       /* extern */
s32 GetMaterialPalEntry__8VIRasterii(s32, s32, s32); /* extern */

s32 InitTextSlots__9VICSpriteR8VIRaster(void *arg0, s32 arg1) {
    s32 *temp_3;
    s32 temp_2;
    s32 var_18;
    s32 var_19;
    void *var_16;

    var_16 = arg0 + 0xF44;
    var_18 = 0x12;
    var_19 = 0xF30;
    do {
        temp_3 = arg0 + 0xC + var_19;
        var_19 += 0x18;
        temp_2 = *temp_3;
        if (temp_2 != -1) {
            M2C_FIELD(var_16, s32 *, 0) = GetLayerTexture__10VIMateriali(GetMaterialPalEntry__8VIRasterii(arg1, M2C_FIELD(arg0, s32 *, 0x1A0), temp_2), M2C_FIELD(var_16, s32 *, -4));
        }
        var_18 -= 1;
        var_16 += 0x18;
    } while (var_18 >= 0);
    return 0;
}
