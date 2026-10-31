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

M2C_UNK ConvertFrom__6VIQuatRC7VIVect3(void *, s32); /* extern */
s32 GetTime__7VIScene(s32);                         /* extern */

s32 SetCenterTransform__9VIHSpriteR7VIVect3RC7VIVect3fT2R7VIScene(void *arg0, void *arg1, s32 arg2, void *arg3, s32 arg4, f32 fparg0) {
    void *temp_2;
    void *temp_2_2;

    if ((M2C_FIELD(arg0, s32 *, 0x12C) == 0) || (M2C_FIELD(arg0, s32 *, 0x12C) < (GetTime__7VIScene(arg4) - M2C_FIELD(arg0, s64 *, 0x130)))) {
        temp_2 = arg0 + 0xE0;
        M2C_FIELD(arg0, f32 *, 0xE0) = (f32) M2C_FIELD(arg1, f32 *, 0);
        M2C_FIELD(temp_2, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
        M2C_FIELD(temp_2, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
        ConvertFrom__6VIQuatRC7VIVect3(arg0 + 0x10C, arg2);
        M2C_FIELD(arg0, f32 *, 0x11C) = fparg0;
        temp_2_2 = arg0 + 0x120;
        M2C_FIELD(arg0, f32 *, 0x120) = (f32) M2C_FIELD(arg3, f32 *, 0);
        M2C_FIELD(temp_2_2, f32 *, 4) = (f32) M2C_FIELD(arg3, f32 *, 4);
        M2C_FIELD(temp_2_2, f32 *, 8) = (f32) M2C_FIELD(arg3, f32 *, 8);
    }
    return 0;
}
