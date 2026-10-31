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

s32 DrawPrimBuffer__8VIRasteriiUi(s32, s32, s32, s32); /* extern */

s32 Raster__12VISkinSpriteR8VICameraR7VISceneR8VIRasterUi(void *arg0, s32 arg3, s32 arg4) {
    if ((M2C_FIELD(arg0, s32 *, 0x40) ^ 1) & 1) {
        return DrawPrimBuffer__8VIRasteriiUi(arg3, M2C_FIELD(arg0, s32 *, 0x44), M2C_FIELD(arg0, s32 *, 0x48), arg4);
    }
    return 0;
}
