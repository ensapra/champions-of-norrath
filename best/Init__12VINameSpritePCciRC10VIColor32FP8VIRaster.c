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

s32 ShareFont__8VIRasteri(s32, s32);                /* extern */
M2C_UNK strncpy(s32, M2C_UNK);                      /* extern */

s32 Init__12VINameSpritePCciRC10VIColor32FP8VIRaster(void *arg0, s32 arg2, s32 arg3, s32 arg4) {
    strncpy(arg0 + 0x44, 0x1F);
    M2C_FIELD(arg0, s8 *, 0x63) = 0;
    M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($s2) */);
    M2C_ERROR(/* unknown instruction: ldr $v0, ($s2) */);
    M2C_ERROR(/* unknown instruction: ldl $v1, 0xf($s2) */);
    M2C_ERROR(/* unknown instruction: ldr $v1, 0x8($s2) */);
    M2C_ERROR(/* unknown instruction: sdl $v0, 0x6b($s0) */);
    M2C_ERROR(/* unknown instruction: sdr $v0, 0x64($s0) */);
    M2C_ERROR(/* unknown instruction: sdl $v1, 0x73($s0) */);
    M2C_ERROR(/* unknown instruction: sdr $v1, 0x6c($s0) */);
    M2C_FIELD(arg0, s32 *, 0x40) = arg2;
    if ((arg4 != 0) && (ShareFont__8VIRasteri(arg4, arg2) < 0)) {
        return -1;
    }
    return 0;
}
