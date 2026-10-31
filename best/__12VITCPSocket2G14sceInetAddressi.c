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

M2C_UNK SetPort__12VITCPSocket2i(void *, s32);      /* extern */
s32 __wrap_memalign(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK sceLibnetInitialize(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void __12VITCPSocket2G14sceInetAddressi(void *arg0, s32 arg2) {
    M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($a1) */);
    M2C_ERROR(/* unknown instruction: ldr $v0, ($a1) */);
    M2C_ERROR(/* unknown instruction: ldl $v1, 0xf($a1) */);
    M2C_ERROR(/* unknown instruction: ldr $v1, 0x8($a1) */);
    M2C_ERROR(/* unknown instruction: sdl $v0, 0x7($sp) */);
    M2C_ERROR(/* unknown instruction: sdr $v0, ($sp) */);
    M2C_ERROR(/* unknown instruction: sdl $v1, 0xf($sp) */);
    M2C_ERROR(/* unknown instruction: sdr $v1, 0x8($sp) */);
    M2C_ERROR(/* unknown instruction: ldl $a5, 0x7($sp) */);
    M2C_ERROR(/* unknown instruction: ldr $a5, ($sp) */);
    M2C_ERROR(/* unknown instruction: ldl $a6, 0xf($sp) */);
    M2C_ERROR(/* unknown instruction: ldr $a6, 0x8($sp) */);
    M2C_ERROR(/* unknown instruction: sdl $a5, 0x57($s0) */);
    M2C_ERROR(/* unknown instruction: sdl $a6, 0x5f($s0) */);
    M2C_FIELD(arg0, s32 *, 0x4C) = -1;
    M2C_FIELD(arg0, s32 *, 4) = -1;
    M2C_FIELD(arg0, s32 *, 0x60) = 1;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = __wrap_memalign(0x40, 0x800, M2C_ERROR(/* unknown instruction: sdr $a5, 0x50($s0) */), M2C_ERROR(/* unknown instruction: sdr $a6, 0x58($s0) */));
    sceLibnetInitialize(arg0 + 0x10, 0x800, 0x2000, 0x20);
    SetPort__12VITCPSocket2i(arg0, arg2);
}
