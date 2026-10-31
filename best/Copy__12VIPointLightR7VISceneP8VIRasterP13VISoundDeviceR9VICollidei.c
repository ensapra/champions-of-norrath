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
void *Sprite__7VIScenei(s32, s32);                  /* extern */

s32 Copy__12VIPointLightR7VISceneP8VIRasterP13VISoundDeviceR9VICollidei(void *arg0, s32 arg1, s32 arg5) {
    s32 temp_2;
    s32 var_2;
    void *temp_2_2;
    void *temp_4;
    void *temp_5;
    void *temp_6;
    void *temp_7;
    void *temp_8;
    void *temp_9;

    temp_2 = CreateSprite__7VIScene12VISpriteTypei(arg1, M2C_FIELD(arg0, s32 *, 0x34), arg5);
    var_2 = -1;
    if (temp_2 >= 0) {
        temp_2_2 = Sprite__7VIScenei(arg1, temp_2);
        temp_4 = arg0 + 8;
        temp_5 = temp_2_2 + 8;
        temp_6 = arg0 + 0x14;
        M2C_FIELD(temp_2_2, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 8);
        temp_7 = temp_2_2 + 0x14;
        temp_9 = arg0 + 0x20;
        temp_8 = temp_2_2 + 0x20;
        var_2 = temp_2;
        M2C_FIELD(temp_5, f32 *, 4) = (f32) M2C_FIELD(temp_4, f32 *, 4);
        M2C_FIELD(temp_2_2, s32 *, 0x34) = (s32) M2C_FIELD(arg0, s32 *, 0x34);
        M2C_FIELD(temp_5, f32 *, 8) = (f32) M2C_FIELD(temp_4, f32 *, 8);
        M2C_FIELD(temp_2_2, f32 *, 0x14) = (f32) M2C_FIELD(arg0, f32 *, 0x14);
        M2C_FIELD(temp_7, f32 *, 4) = (f32) M2C_FIELD(temp_6, f32 *, 4);
        M2C_FIELD(temp_7, f32 *, 8) = (f32) M2C_FIELD(temp_6, f32 *, 8);
        M2C_FIELD(temp_2_2, f32 *, 0x20) = (f32) M2C_FIELD(arg0, f32 *, 0x20);
        M2C_FIELD(temp_8, f32 *, 4) = (f32) M2C_FIELD(temp_9, f32 *, 4);
        M2C_FIELD(temp_8, f32 *, 8) = (f32) M2C_FIELD(temp_9, f32 *, 8);
        M2C_FIELD(temp_8, f32 *, 0xC) = (f32) M2C_FIELD(temp_9, f32 *, 0xC);
        M2C_FIELD(temp_2_2, f32 *, 0x30) = (f32) M2C_FIELD(arg0, f32 *, 0x30);
        M2C_ERROR(/* unknown instruction: ldl $v1, 0x47($s1) */);
        M2C_ERROR(/* unknown instruction: ldr $v1, 0x40($s1) */);
        M2C_ERROR(/* unknown instruction: ldl $a0, 0x4f($s1) */);
        M2C_ERROR(/* unknown instruction: ldr $a0, 0x48($s1) */);
        M2C_ERROR(/* unknown instruction: sdl $v1, 0x47($a6) */);
        M2C_ERROR(/* unknown instruction: sdr $v1, 0x40($a6) */);
        M2C_ERROR(/* unknown instruction: sdl $a0, 0x4f($a6) */);
        M2C_ERROR(/* unknown instruction: sdr $a0, 0x48($a6) */);
    }
    return var_2;
}
