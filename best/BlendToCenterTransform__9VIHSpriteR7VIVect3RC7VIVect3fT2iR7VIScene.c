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

M2C_UNK ConvertFrom__6VIQuatRC7VIVect3(void *, s32, void *, void *, void *, M2C_UNK); /* extern */
s64 GetTime__7VIScene(s32);                         /* extern */

s32 BlendToCenterTransform__9VIHSpriteR7VIVect3RC7VIVect3fT2iR7VIScene(void *arg0, void *arg1, s32 arg2, void *arg3, s32 arg4, s32 arg5, f32 fparg0) {
    void *temp_17;
    void *temp_2;
    void *temp_3;
    void *temp_6;
    void *temp_7;
    void *temp_8;

    temp_17 = arg0 + 0x120;
    if ((M2C_FIELD(arg0, s32 *, 0x12C) == 0) || (M2C_FIELD(arg0, s32 *, 0x12C) < (GetTime__7VIScene(arg5) - M2C_FIELD(arg0, s64 *, 0x130)))) {
        temp_6 = arg0 + 0xE0;
        temp_2 = arg0 + 0xD4;
        temp_3 = arg0 + 0x10C;
        temp_8 = arg0 + 0xEC;
        temp_7 = arg0 + 0x100;
        M2C_FIELD(arg0, f32 *, 0xD4) = (f32) M2C_FIELD(arg0, f32 *, 0xE0);
        M2C_FIELD(temp_2, f32 *, 4) = (f32) M2C_FIELD(temp_6, f32 *, 4);
        M2C_FIELD(temp_2, f32 *, 8) = (f32) M2C_FIELD(temp_6, f32 *, 8);
        M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($v1) */);
        M2C_ERROR(/* unknown instruction: ldr $v0, ($v1) */);
        M2C_ERROR(/* unknown instruction: ldl $a5, 0xf($v1) */);
        M2C_ERROR(/* unknown instruction: ldr $a5, 0x8($v1) */);
        M2C_ERROR(/* unknown instruction: sdl $v0, 0x7($a4) */);
        M2C_ERROR(/* unknown instruction: sdr $v0, ($a4) */);
        M2C_ERROR(/* unknown instruction: sdl $a5, 0xf($a4) */);
        M2C_FIELD(temp_8, f32 *, 0x10) = (f32) M2C_FIELD(temp_3, f32 *, 0x10);
        M2C_FIELD(arg0, f32 *, 0x100) = (f32) M2C_FIELD(arg0, f32 *, 0x120);
        M2C_FIELD(temp_7, f32 *, 4) = (f32) M2C_FIELD(temp_17, f32 *, 4);
        M2C_FIELD(temp_7, f32 *, 8) = (f32) M2C_FIELD(temp_17, f32 *, 8);
        M2C_FIELD(arg0, f32 *, 0xE0) = (f32) M2C_FIELD(arg1, f32 *, 0);
        M2C_FIELD(temp_6, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
        M2C_FIELD(temp_6, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
        ConvertFrom__6VIQuatRC7VIVect3(temp_3, arg2, temp_6, temp_7, temp_8, M2C_ERROR(/* unknown instruction: sdr $a5, 0x8($a4) */));
        M2C_FIELD(arg0, f32 *, 0x11C) = fparg0;
        M2C_FIELD(arg0, s32 *, 0x12C) = arg4;
        M2C_FIELD(arg0, f32 *, 0x120) = (f32) M2C_FIELD(arg3, f32 *, 0);
        M2C_FIELD(temp_17, f32 *, 4) = (f32) M2C_FIELD(arg3, f32 *, 4);
        M2C_FIELD(temp_17, f32 *, 8) = (f32) M2C_FIELD(arg3, f32 *, 8);
        M2C_FIELD(arg0, s64 *, 0x130) = GetTime__7VIScene(arg5);
    }
    return 0;
}
