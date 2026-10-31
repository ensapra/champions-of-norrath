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

M2C_UNK ReleaseMaterialPal__8VIRasteriR12VIDictionary(s32, s32); /* extern */
M2C_UNK ShareMaterialPal__8VIRasteri(s32, s32);     /* extern */

s32 SetMaterialPal__14VISimpleSpriteiR12VIDictionaryR8VIRaster(void *arg0, s32 arg1, s32 arg3) {
    ReleaseMaterialPal__8VIRasteriR12VIDictionary(arg3, M2C_FIELD(arg0, s32 *, 0x48));
    M2C_FIELD(arg0, s32 *, 0x48) = arg1;
    ShareMaterialPal__8VIRasteri(arg3, arg1);
    return 0;
}
