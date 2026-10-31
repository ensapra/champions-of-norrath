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

s32 s_mp_exch__FP6mp_intT0(void) {
    M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($a0) */);
    M2C_ERROR(/* unknown instruction: ldr $v0, ($a0) */);
    M2C_ERROR(/* unknown instruction: ldl $v1, 0xf($a0) */);
    M2C_ERROR(/* unknown instruction: ldr $v1, 0x8($a0) */);
    M2C_ERROR(/* unknown instruction: sdl $v0, 0x7($sp) */);
    M2C_ERROR(/* unknown instruction: sdr $v0, ($sp) */);
    M2C_ERROR(/* unknown instruction: sdl $v1, 0xf($sp) */);
    M2C_ERROR(/* unknown instruction: sdr $v1, 0x8($sp) */);
    M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($a1) */);
    M2C_ERROR(/* unknown instruction: ldr $v0, ($a1) */);
    M2C_ERROR(/* unknown instruction: ldl $v1, 0xf($a1) */);
    M2C_ERROR(/* unknown instruction: ldr $v1, 0x8($a1) */);
    M2C_ERROR(/* unknown instruction: sdl $v0, 0x7($a0) */);
    M2C_ERROR(/* unknown instruction: sdr $v0, ($a0) */);
    M2C_ERROR(/* unknown instruction: sdl $v1, 0xf($a0) */);
    M2C_ERROR(/* unknown instruction: sdr $v1, 0x8($a0) */);
    M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($sp) */);
    M2C_ERROR(/* unknown instruction: ldr $v0, ($sp) */);
    M2C_ERROR(/* unknown instruction: ldl $v1, 0xf($sp) */);
    M2C_ERROR(/* unknown instruction: ldr $v1, 0x8($sp) */);
    M2C_ERROR(/* unknown instruction: sdl $v0, 0x7($a1) */);
    M2C_ERROR(/* unknown instruction: sdl $v1, 0xf($a1) */);
    M2C_ERROR(/* unknown instruction: sdr $v1, 0x8($a1) */);
    return M2C_ERROR(/* unknown instruction: sdr $v0, ($a1) */);
}
