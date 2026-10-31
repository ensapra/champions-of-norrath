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

s32 GetNodeFrame__13VIHSpriteAnimiiR14VIHSpriteFrame(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    s32 temp_3;
    s32 temp_7;
    void *temp_2;
    void *temp_2_2;
    void *temp_3_2;
    void *temp_4;
    void *temp_8;
    void *temp_9;

    temp_7 = M2C_FIELD(arg0, s32 *, 8);
    temp_8 = arg3 + 0x14;
    temp_3 = arg2 + M2C_FIELD(((arg1 * 8) + M2C_FIELD(arg0, s32 *, 0x24)), s32 *, 4);
    switch (temp_7) {                               /* irregular */
    case 1:
        temp_9 = arg3 + 0x10;
        temp_2 = M2C_FIELD(arg0, s32 *, 0x28) + (temp_3 * 0x10);
        temp_3_2 = temp_2 + 8;
        M2C_FIELD(arg3, f32 *, 0xC) = (f32) ((f32) M2C_FIELD(temp_2, s16 *, 6) * 0.00003051851f);
        M2C_FIELD(arg3, f32 *, 0) = (f32) ((f32) M2C_FIELD(temp_2, s16 *, 0) * 0.00003051851f);
        M2C_FIELD(arg3, f32 *, 4) = (f32) ((f32) M2C_FIELD(temp_2, s16 *, 2) * 0.00003051851f);
        M2C_FIELD(arg3, f32 *, 8) = (f32) ((f32) M2C_FIELD(temp_2, s16 *, 4) * 0.00003051851f);
        M2C_FIELD(temp_9, f32 *, 0xC) = (f32) ((f32) M2C_FIELD(temp_3_2, s16 *, 6) * 0.001953125f);
        M2C_FIELD(arg3, f32 *, 0x10) = (f32) ((f32) M2C_FIELD(temp_2, s16 *, 8) * 0.001953125f);
        M2C_FIELD(temp_9, f32 *, 4) = (f32) ((f32) M2C_FIELD(temp_3_2, s16 *, 2) * 0.001953125f);
        M2C_FIELD(temp_9, f32 *, 8) = (f32) ((f32) M2C_FIELD(temp_3_2, s16 *, 4) * 0.001953125f);
        return 0;
    default:
        return -1;
    case 0:
        temp_2_2 = M2C_FIELD(arg0, s32 *, 0x28) + (temp_3 << 5);
        M2C_ERROR(/* unknown instruction: ldl $v1, 0x7($v0) */);
        M2C_ERROR(/* unknown instruction: ldr $v1, ($v0) */);
        M2C_ERROR(/* unknown instruction: ldl $a1, 0xf($v0) */);
        M2C_ERROR(/* unknown instruction: ldr $a1, 0x8($v0) */);
        M2C_ERROR(/* unknown instruction: sdl $v1, 0x7($a6) */);
        M2C_ERROR(/* unknown instruction: sdr $v1, ($a6) */);
        M2C_ERROR(/* unknown instruction: sdl $a1, 0xf($a6) */);
        temp_4 = temp_2_2 + 0x14;
        M2C_ERROR(/* unknown instruction: sdr $a1, 0x8($a6) */);
        M2C_FIELD(arg3, f32 *, 0x10) = (f32) M2C_FIELD(temp_2_2, f32 *, 0x10);
        M2C_FIELD(arg3, f32 *, 0x14) = (f32) M2C_FIELD(temp_2_2, f32 *, 0x14);
        M2C_FIELD(temp_8, f32 *, 4) = (f32) M2C_FIELD(temp_4, f32 *, 4);
        M2C_FIELD(temp_8, f32 *, 8) = (f32) M2C_FIELD(temp_4, f32 *, 8);
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return 0;
    }
}
