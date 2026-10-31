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

s32 CreateSprite__7VIScene12VISpriteTypei(s32, s32, s32); /* extern */
M2C_UNK ShareSprite__7VIScenei(s32, s32);           /* extern */
void *Sprite__7VIScenei(s32, s32);                  /* extern */

s32 Copy__11VILODSpriteR7VISceneP8VIRasterP13VISoundDeviceR9VICollidei(void *arg0, s32 arg1, s32 arg5) {
    s32 *var_16;
    s32 temp_2;
    s32 var_18;
    s32 var_2;
    s32 var_5;
    void *temp_2_2;
    void *temp_3;
    void *temp_4;
    void *temp_5;
    void *temp_6;
    void *temp_7;
    void *temp_8;

    temp_2 = CreateSprite__7VIScene12VISpriteTypei(arg1, M2C_FIELD(arg0, s32 *, 0x34), arg5);
    var_2 = -1;
    if (temp_2 >= 0) {
        temp_2_2 = Sprite__7VIScenei(arg1, temp_2);
        temp_3 = arg0 + 8;
        temp_4 = temp_2_2 + 8;
        temp_5 = arg0 + 0x14;
        M2C_FIELD(temp_2_2, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 8);
        temp_6 = temp_2_2 + 0x14;
        temp_7 = arg0 + 0x20;
        temp_8 = temp_2_2 + 0x20;
        M2C_FIELD(temp_4, f32 *, 4) = (f32) M2C_FIELD(temp_3, f32 *, 4);
        M2C_FIELD(temp_2_2, s32 *, 0x40) = (s32) M2C_FIELD(arg0, s32 *, 0x40);
        M2C_FIELD(temp_4, f32 *, 8) = (f32) M2C_FIELD(temp_3, f32 *, 8);
        M2C_FIELD(temp_2_2, s32 *, 0x44) = (s32) M2C_FIELD(arg0, s32 *, 0x44);
        M2C_FIELD(temp_2_2, f32 *, 0x14) = (f32) M2C_FIELD(arg0, f32 *, 0x14);
        M2C_FIELD(temp_2_2, s32 *, 0x34) = (s32) M2C_FIELD(arg0, s32 *, 0x34);
        M2C_FIELD(temp_6, f32 *, 4) = (f32) M2C_FIELD(temp_5, f32 *, 4);
        M2C_FIELD(temp_6, f32 *, 8) = (f32) M2C_FIELD(temp_5, f32 *, 8);
        M2C_FIELD(temp_2_2, f32 *, 0x20) = (f32) M2C_FIELD(arg0, f32 *, 0x20);
        M2C_FIELD(temp_8, f32 *, 4) = (f32) M2C_FIELD(temp_7, f32 *, 4);
        M2C_FIELD(temp_8, f32 *, 8) = (f32) M2C_FIELD(temp_7, f32 *, 8);
        M2C_FIELD(temp_8, f32 *, 0xC) = (f32) M2C_FIELD(temp_7, f32 *, 0xC);
        M2C_FIELD(temp_2_2, f32 *, 0x30) = (f32) M2C_FIELD(arg0, f32 *, 0x30);
        M2C_ERROR(/* unknown instruction: ldl $v0, 0x4f($s1) */);
        M2C_ERROR(/* unknown instruction: ldr $v0, 0x48($s1) */);
        M2C_ERROR(/* unknown instruction: ldl $v1, 0x57($s1) */);
        M2C_ERROR(/* unknown instruction: ldr $v1, 0x50($s1) */);
        M2C_ERROR(/* unknown instruction: ldl $a0, 0x5f($s1) */);
        M2C_ERROR(/* unknown instruction: ldr $a0, 0x58($s1) */);
        M2C_ERROR(/* unknown instruction: ldl $a1, 0x67($s1) */);
        M2C_ERROR(/* unknown instruction: ldr $a1, 0x60($s1) */);
        M2C_ERROR(/* unknown instruction: sdl $v0, 0x4f($a6) */);
        M2C_ERROR(/* unknown instruction: sdr $v0, 0x48($a6) */);
        M2C_ERROR(/* unknown instruction: sdl $v1, 0x57($a6) */);
        M2C_ERROR(/* unknown instruction: sdr $v1, 0x50($a6) */);
        M2C_ERROR(/* unknown instruction: sdl $a0, 0x5f($a6) */);
        M2C_ERROR(/* unknown instruction: sdr $a0, 0x58($a6) */);
        M2C_ERROR(/* unknown instruction: sdl $a1, 0x67($a6) */);
        M2C_ERROR(/* unknown instruction: sdr $a1, 0x60($a6) */);
        M2C_ERROR(/* unknown instruction: ldl $v0, 0x6f($s1) */);
        M2C_ERROR(/* unknown instruction: ldr $v0, 0x68($s1) */);
        M2C_ERROR(/* unknown instruction: sdl $v0, 0x6f($a6) */);
        M2C_ERROR(/* unknown instruction: sdr $v0, 0x68($a6) */);
        var_18 = 0;
        if (M2C_FIELD(arg0, s32 *, 0x44) > 0) {
            var_16 = temp_2_2 + 0x4C;
            var_5 = M2C_FIELD(temp_2_2, s32 *, 0x4C);
loop_3:
            var_16 += 8;
            var_18 += 1;
            ShareSprite__7VIScenei(arg1, var_5);
            if (var_18 < M2C_FIELD(arg0, s32 *, 0x44)) {
                var_5 = *var_16;
                goto loop_3;
            }
        }
        var_2 = temp_2;
    }
    return var_2;
}
