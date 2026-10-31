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

M2C_UNK SetFogRegisters__8VIRaster(M2C_UNK, M2C_UNK); /* extern */

s32 SetFog__8VIRasteriffRC10VIColor32F(void *arg0, s32 arg1, f32 fparg0, f32 fparg1) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f4;

    M2C_FIELD(arg0, f32 *, 0x4490) = fparg0;
    M2C_FIELD(arg0, f32 *, 0x4494) = fparg1;
    M2C_FIELD(arg0, s32 *, 0x448C) = arg1;
    *(f32 *)0x700001F8 = 0.0f;
    *(f32 *)0x700001FC = 255.0f;
    M2C_ERROR(/* unknown instruction: ldl $a1, 0x7($a2) */);
    M2C_ERROR(/* unknown instruction: ldr $a1, ($a2) */);
    M2C_ERROR(/* unknown instruction: ldl $a3, 0xf($a2) */);
    M2C_ERROR(/* unknown instruction: ldr $a3, 0x8($a2) */);
    M2C_ERROR(/* unknown instruction: sdl $a1, 0x449f($s0) */);
    M2C_ERROR(/* unknown instruction: sdl $a3, 0x44a7($s0) */);
    temp_f2 = *(f32 *)0x700001FC;
    temp_f4 = *(f32 *)0x700001F8;
    *(f32 *)0x700001F0 = (temp_f4 - temp_f2) / (M2C_FIELD(arg0, f32 *, 0x4494) - M2C_FIELD(arg0, f32 *, 0x4490));
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x4490);
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x4494);
    *(f32 *)0x700001F4 = ((temp_f2 * temp_f1) - (temp_f4 * temp_f0)) / (temp_f1 - temp_f0);
    SetFogRegisters__8VIRaster(M2C_ERROR(/* unknown instruction: sdr $a1, 0x4498($s0) */), M2C_ERROR(/* unknown instruction: sdr $a3, 0x44a0($s0) */));
    M2C_FIELD(arg0, s32 *, 0x45E0) = 1;
    return 0;
}
