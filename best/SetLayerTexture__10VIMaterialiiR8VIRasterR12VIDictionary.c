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

M2C_UNK ReleaseSurface__8VIRasteriR12VIDictionary(s32, s32, s32); /* extern */
M2C_UNK ShareSurface__8VIRasteri(s32, s32);         /* extern */

s32 SetLayerTexture__10VIMaterialiiR8VIRasterR12VIDictionary(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 *temp_17;
    s32 temp_2;

    temp_17 = arg0 + ((arg1 * 0x90) + 0x30);
    temp_2 = *temp_17;
    if (temp_2 != -1) {
        ReleaseSurface__8VIRasteriR12VIDictionary(arg3, temp_2, arg4);
    }
    *temp_17 = arg2;
    if (arg2 != -1) {
        ShareSurface__8VIRasteri(arg3, arg2);
    }
    M2C_FIELD(arg0, s32 *, 0x20) = 1;
    return 0;
}
