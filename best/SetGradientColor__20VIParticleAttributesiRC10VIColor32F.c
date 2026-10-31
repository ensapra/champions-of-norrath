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

void SetGradientColor__20VIParticleAttributesiRC10VIColor32F(void *arg0, s32 arg1) {
    M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($a2) */);
    M2C_ERROR(/* unknown instruction: ldr $v0, ($a2) */);
    M2C_ERROR(/* unknown instruction: ldl $v1, 0xf($a2) */);
    M2C_ERROR(/* unknown instruction: ldr $v1, 0x8($a2) */);
    M2C_ERROR(/* unknown instruction: sdl $v0, 0x3f($a1) */);
    M2C_ERROR(/* unknown instruction: sdr $v0, 0x38($a1) */);
    M2C_ERROR(/* unknown instruction: sdl $v1, 0x47($a1) */);
    M2C_ERROR(/* unknown instruction: sdr $v1, 0x40($a1) */);
    M2C_FIELD(arg0, s32 *, 0x2CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x2CC) + 1);
}
