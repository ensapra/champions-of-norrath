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

s32 SetUiColors__10VIUIWindow(void) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp2C;

    sp8 = 0.0f;
    sp0 = 0.0f;
    sp4 = 0.0f;
    spC = 1.0f;
    M2C_ERROR(/* unknown instruction: ldl $a1, 0x7($sp) */);
    M2C_ERROR(/* unknown instruction: ldr $a1, ($sp) */);
    M2C_ERROR(/* unknown instruction: ldl $a2, 0xf($sp) */);
    M2C_ERROR(/* unknown instruction: ldr $a2, 0x8($sp) */);
    M2C_ERROR(/* unknown instruction: sdl $a1, 0x137($a0) */);
    M2C_ERROR(/* unknown instruction: sdr $a1, 0x130($a0) */);
    M2C_ERROR(/* unknown instruction: sdl $a2, 0x13f($a0) */);
    M2C_ERROR(/* unknown instruction: sdr $a2, 0x138($a0) */);
    sp10 = 0.039215684f;
    sp14 = 0.19607842f;
    sp18 = 0.2745098f;
    sp1C = 1.0f;
    M2C_ERROR(/* unknown instruction: ldl $a1, 0x7($v0) */);
    M2C_ERROR(/* unknown instruction: ldr $a1, ($v0) */);
    M2C_ERROR(/* unknown instruction: ldl $a2, 0xf($v0) */);
    M2C_ERROR(/* unknown instruction: ldr $a2, 0x8($v0) */);
    M2C_ERROR(/* unknown instruction: sdl $a1, 0x147($a0) */);
    M2C_ERROR(/* unknown instruction: sdr $a1, 0x140($a0) */);
    M2C_ERROR(/* unknown instruction: sdl $a2, 0x14f($a0) */);
    M2C_ERROR(/* unknown instruction: sdr $a2, 0x148($a0) */);
    sp20 = 0.39999998f;
    sp28 = 0.39999998f;
    sp2C = 1.0f;
    sp24 = 0.39999998f;
    M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($v1) */);
    M2C_ERROR(/* unknown instruction: ldr $v0, ($v1) */);
    M2C_ERROR(/* unknown instruction: ldl $a1, 0xf($v1) */);
    M2C_ERROR(/* unknown instruction: ldr $a1, 0x8($v1) */);
    M2C_ERROR(/* unknown instruction: sdl $v0, 0x157($a0) */);
    M2C_ERROR(/* unknown instruction: sdl $a1, 0x15f($a0) */);
    M2C_ERROR(/* unknown instruction: sdr $a1, 0x158($a0) */);
    return M2C_ERROR(/* unknown instruction: sdr $v0, 0x150($a0) */);
}
