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

s32 SetNodeFrame__13VIHSpriteAnimiiR14VIHSpriteFrame(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    s32 var_2;
    void *temp_3;
    void *temp_4;
    void *temp_8;

    temp_8 = arg3 + 0x14;
    var_2 = -1;
    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        var_2 = 0;
        temp_3 = M2C_FIELD(arg0, s32 *, 0x28) + ((arg2 + M2C_FIELD(((arg1 * 8) + M2C_FIELD(arg0, s32 *, 0x24)), s32 *, 4)) << 5);
        M2C_ERROR(/* unknown instruction: ldl $a0, 0x7($a3) */);
        M2C_ERROR(/* unknown instruction: ldr $a0, ($a3) */);
        M2C_ERROR(/* unknown instruction: ldl $a1, 0xf($a3) */);
        M2C_ERROR(/* unknown instruction: ldr $a1, 0x8($a3) */);
        M2C_ERROR(/* unknown instruction: sdl $a0, 0x7($v1) */);
        M2C_ERROR(/* unknown instruction: sdr $a0, ($v1) */);
        M2C_ERROR(/* unknown instruction: sdl $a1, 0xf($v1) */);
        M2C_ERROR(/* unknown instruction: sdr $a1, 0x8($v1) */);
        temp_4 = temp_3 + 0x14;
        M2C_FIELD(temp_3, f32 *, 0x10) = (f32) M2C_FIELD(arg3, f32 *, 0x10);
        M2C_FIELD(temp_3, f32 *, 0x14) = (f32) M2C_FIELD(arg3, f32 *, 0x14);
        M2C_FIELD(temp_4, f32 *, 4) = (f32) M2C_FIELD(temp_8, f32 *, 4);
        M2C_FIELD(temp_4, f32 *, 8) = (f32) M2C_FIELD(temp_8, f32 *, 8);
    }
    return var_2;
}
