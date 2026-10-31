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

s32 NetCnfCombination__11VIWndSplash(s32 arg0, void *arg1) {
    s32 var_6;
    void *temp_4;
    void *var_3;

    temp_4 = (M2C_FIELD(arg1, s32 *, 0x91C) * 0x26C) + arg1;
    var_3 = temp_4 + 0x1924;
    var_6 = arg0;
    if (((s32) var_3 | arg0) & 7) {
        do {
            M2C_ERROR(/* unknown instruction: ldl $a0, 0x7($v1) */);
            M2C_ERROR(/* unknown instruction: ldr $a0, ($v1) */);
            M2C_ERROR(/* unknown instruction: ldl $a1, 0xf($v1) */);
            M2C_ERROR(/* unknown instruction: ldr $a1, 0x8($v1) */);
            M2C_ERROR(/* unknown instruction: ldl $a4, 0x17($v1) */);
            M2C_ERROR(/* unknown instruction: ldr $a4, 0x10($v1) */);
            M2C_ERROR(/* unknown instruction: ldl $a5, 0x1f($v1) */);
            M2C_ERROR(/* unknown instruction: ldr $a5, 0x18($v1) */);
            M2C_ERROR(/* unknown instruction: sdl $a0, 0x7($a2) */);
            M2C_ERROR(/* unknown instruction: sdr $a0, ($a2) */);
            M2C_ERROR(/* unknown instruction: sdl $a1, 0xf($a2) */);
            M2C_ERROR(/* unknown instruction: sdr $a1, 0x8($a2) */);
            M2C_ERROR(/* unknown instruction: sdl $a4, 0x17($a2) */);
            M2C_ERROR(/* unknown instruction: sdr $a4, 0x10($a2) */);
            M2C_ERROR(/* unknown instruction: sdl $a5, 0x1f($a2) */);
            M2C_ERROR(/* unknown instruction: sdr $a5, 0x18($a2) */);
            var_3 += 0x20;
        } while (var_3 != (temp_4 + 0x1984));
    } else {
        do {
            M2C_FIELD(var_6, s64 *, 0) = (s64) M2C_FIELD(var_3, s64 *, 0);
            M2C_FIELD(var_6, s64 *, 8) = (s64) M2C_FIELD(var_3, s64 *, 8);
            M2C_FIELD(var_6, s64 *, 0x10) = (s64) M2C_FIELD(var_3, s64 *, 0x10);
            M2C_FIELD(var_6, s64 *, 0x18) = (s64) M2C_FIELD(var_3, s64 *, 0x18);
            var_3 += 0x20;
            var_6 += 0x20;
        } while (var_3 != (temp_4 + 0x1984));
    }
    M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($v1) */);
    M2C_ERROR(/* unknown instruction: ldr $v0, ($v1) */);
    M2C_ERROR(/* unknown instruction: sdl $v0, 0x7($a2) */);
    M2C_ERROR(/* unknown instruction: sdr $v0, ($a2) */);
    return arg0;
}
