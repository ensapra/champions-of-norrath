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

s32 PrecalcPlayback__9VIHSpritei(void *);           /* extern */

s32 SetPlaySpeed__9VIHSpriteif(void *arg0, s32 arg1, f32 fparg0) {
    void *temp_6;

    temp_6 = M2C_FIELD(arg0, s32 *, 0x80) + (arg1 * 0x68);
    M2C_FIELD(temp_6, f32 *, 0x28) = fparg0;
    return (PrecalcPlayback__9VIHSpritei(temp_6) >= 0) ? 0 : -1;
}
