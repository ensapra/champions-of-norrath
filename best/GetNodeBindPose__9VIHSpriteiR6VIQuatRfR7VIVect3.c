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

s32 GetNodeBindPose__9VIHSpriteiR6VIQuatRfR7VIVect3(s32 arg0, s32 arg1, f32 *arg3, void *arg4) {
    void *temp_3;
    void *temp_3_2;

    M2C_ERROR(/* unknown instruction: ldl $v1, 0x83($a5) */);
    M2C_ERROR(/* unknown instruction: ldr $v1, 0x7c($a5) */);
    M2C_ERROR(/* unknown instruction: ldl $a6, 0x8b($a5) */);
    M2C_ERROR(/* unknown instruction: ldr $a6, 0x84($a5) */);
    M2C_ERROR(/* unknown instruction: sdl $v1, 0x7($a2) */);
    M2C_ERROR(/* unknown instruction: sdr $v1, ($a2) */);
    M2C_ERROR(/* unknown instruction: sdl $a6, 0xf($a2) */);
    M2C_ERROR(/* unknown instruction: sdr $a6, 0x8($a2) */);
    temp_3 = M2C_FIELD((arg0 + 0x40), s32 *, 8) + (arg1 << 8);
    temp_3_2 = temp_3 + 0x90;
    *arg3 = M2C_FIELD(temp_3, f32 *, 0x8C);
    M2C_FIELD(arg4, f32 *, 0) = (f32) M2C_FIELD(temp_3, f32 *, 0x90);
    M2C_FIELD(arg4, f32 *, 4) = (f32) M2C_FIELD(temp_3_2, f32 *, 4);
    M2C_FIELD(arg4, f32 *, 8) = (f32) M2C_FIELD(temp_3_2, f32 *, 8);
    return 0;
}
