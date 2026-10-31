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

M2C_UNK Normalize__7VIVect3(M2C_UNK);               /* extern */
M2C_UNK SubMatrixMul__C10VIMatrix44RC7VIVect3R7VIVect3(s32, void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

s32 SetSunLight__8VIRasterRC10VIMatrix44RC16VIRasterDirLight(void *arg0, s32 arg1, void *arg2) {
    M2C_FIELD((void *)0x700001A0, f32 *, 0) = (f32) M2C_FIELD(arg2, f32 *, 0);
    M2C_FIELD((void *)0x700001A0, f32 *, 4) = (f32) M2C_FIELD(arg2, f32 *, 4);
    M2C_FIELD((void *)0x700001A0, f32 *, 8) = (f32) M2C_FIELD(arg2, f32 *, 8);
    M2C_ERROR(/* unknown instruction: ldl $v0, 0x13($v1) */);
    M2C_ERROR(/* unknown instruction: ldr $v0, 0xc($v1) */);
    M2C_ERROR(/* unknown instruction: ldl $a3, 0x1b($v1) */);
    M2C_ERROR(/* unknown instruction: ldr $a3, 0x14($v1) */);
    M2C_ERROR(/* unknown instruction: sdl $v0, 0x7($a5) */);
    M2C_ERROR(/* unknown instruction: sdr $v0, ($a5) */);
    M2C_ERROR(/* unknown instruction: sdl $a3, 0xf($a5) */);
    SubMatrixMul__C10VIMatrix44RC7VIVect3R7VIVect3(arg1, arg2, 0x700001A0, M2C_ERROR(/* unknown instruction: sdr $a3, 0x8($a5) */), 0x700001AC);
    Normalize__7VIVect3(0x700001A0);
    M2C_FIELD(arg0, s32 *, 0x45E0) = 1;
    return 0;
}
