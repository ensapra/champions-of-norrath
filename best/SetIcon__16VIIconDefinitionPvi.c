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

extern M2C_UNK D_011CD560;

void SetIcon__16VIIconDefinitionPvi(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x3C4) = arg1;
    M2C_FIELD(arg0, s32 *, 0x3C8) = arg2;
    M2C_ERROR(/* unknown instruction: ldl $v1, 0x7($v0) */);
    M2C_ERROR(/* unknown instruction: ldr $v1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sdl $v1, 0x10b($a0) */);
    M2C_ERROR(/* unknown instruction: sdr $v1, 0x104($a0) */);
    M2C_FIELD(arg0, s16 *, 0x10C) = (s16) M2C_FIELD(&D_011CD560, s16 *, 8);
    M2C_FIELD(arg0, s8 *, 0x10E) = (s8) M2C_FIELD(&D_011CD560, s8 *, 0xA);
    M2C_ERROR(/* unknown instruction: ldl $v1, 0x7($v0) */);
    M2C_ERROR(/* unknown instruction: ldr $v1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sdl $v1, 0x14b($a0) */);
    M2C_ERROR(/* unknown instruction: sdr $v1, 0x144($a0) */);
    M2C_FIELD(arg0, s16 *, 0x14C) = (s16) M2C_FIELD(&D_011CD560, s16 *, 8);
    M2C_FIELD(arg0, s8 *, 0x14E) = (s8) M2C_FIELD(&D_011CD560, s8 *, 0xA);
    M2C_ERROR(/* unknown instruction: ldl $v1, 0x7($v0) */);
    M2C_ERROR(/* unknown instruction: ldr $v1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sdl $v1, 0x18b($a0) */);
    M2C_ERROR(/* unknown instruction: sdr $v1, 0x184($a0) */);
    M2C_FIELD(arg0, s16 *, 0x18C) = (s16) M2C_FIELD(&D_011CD560, s16 *, 8);
    M2C_FIELD(arg0, s8 *, 0x18E) = (s8) M2C_FIELD(&D_011CD560, s8 *, 0xA);
}
