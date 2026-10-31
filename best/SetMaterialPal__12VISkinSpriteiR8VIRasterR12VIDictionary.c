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

s32 ReleaseMaterialPal__8VIRasteriR12VIDictionary(s32, s32, s32); /* extern */
s32 ShareMaterialPal__8VIRasteri(s32, s32);         /* extern */

s32 SetMaterialPal__12VISkinSpriteiR8VIRasterR12VIDictionary(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (ReleaseMaterialPal__8VIRasteriR12VIDictionary(arg2, M2C_FIELD(arg0, s32 *, 0x48), arg3) < 0) {
        return -1;
    }
    M2C_FIELD(arg0, s32 *, 0x48) = arg1;
    return (ShareMaterialPal__8VIRasteri(arg2, arg1) >= 0) ? 0 : -1;
}
