/* machine draft (m2c) for ee-gcc-2.96 -O2 -G8, tried by autopilot */
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

M2C_UNK func_001395E8(s32);                         /* extern */

void func_00139808(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_2;
    s32 temp_5;
    s32 temp_8;
    s32 var_3;
    s32 var_3_2;
    s32 var_6;
    s32 var_6_2;
    s32 var_7;
    void *var_4;

    temp_8 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_8 >= M2C_FIELD(arg0, s32 *, 4)) {
        func_001395E8(temp_8);
    }
    var_7 = M2C_FIELD(arg0, s32 *, 0xC) - 1;
    temp_5 = M2C_FIELD(arg0, s32 *, 0);
    if (var_7 >= arg1) {
        var_6 = (var_7 * 0x4B0) + temp_5;
        do {
            var_3 = var_6;
            var_4 = var_6 + 0x4B0;
            if (var_6 & 7) {
                do {
                    M2C_ERROR(/* unknown instruction: ldl $a5, 0x7($v1) */);
                    M2C_ERROR(/* unknown instruction: ldr $a5, ($v1) */);
                    M2C_ERROR(/* unknown instruction: ldl $a6, 0xf($v1) */);
                    M2C_ERROR(/* unknown instruction: ldr $a6, 0x8($v1) */);
                    M2C_ERROR(/* unknown instruction: ldl $a7, 0x17($v1) */);
                    M2C_ERROR(/* unknown instruction: ldr $a7, 0x10($v1) */);
                    M2C_ERROR(/* unknown instruction: ldl $t0, 0x1f($v1) */);
                    M2C_ERROR(/* unknown instruction: ldr $t0, 0x18($v1) */);
                    M2C_ERROR(/* unknown instruction: sdl $a5, 0x7($a0) */);
                    M2C_ERROR(/* unknown instruction: sdr $a5, ($a0) */);
                    M2C_ERROR(/* unknown instruction: sdl $a6, 0xf($a0) */);
                    M2C_ERROR(/* unknown instruction: sdr $a6, 0x8($a0) */);
                    M2C_ERROR(/* unknown instruction: sdl $a7, 0x17($a0) */);
                    M2C_ERROR(/* unknown instruction: sdr $a7, 0x10($a0) */);
                    M2C_ERROR(/* unknown instruction: sdl $t0, 0x1f($a0) */);
                    M2C_ERROR(/* unknown instruction: sdr $t0, 0x18($a0) */);
                    var_3 += 0x20;
                } while (var_3 != (var_6 + 0x4A0));
            } else {
                do {
                    M2C_FIELD(var_4, s64 *, 0) = (s64) M2C_FIELD(var_3, s64 *, 0);
                    M2C_FIELD(var_4, s64 *, 8) = (s64) M2C_FIELD(var_3, s64 *, 8);
                    M2C_FIELD(var_4, s64 *, 0x10) = (s64) M2C_FIELD(var_3, s64 *, 0x10);
                    M2C_FIELD(var_4, s64 *, 0x18) = (s64) M2C_FIELD(var_3, s64 *, 0x18);
                    var_3 += 0x20;
                    var_4 += 0x20;
                } while (var_3 != (var_6 + 0x4A0));
            }
            M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($v1) */);
            M2C_ERROR(/* unknown instruction: ldr $v0, ($v1) */);
            M2C_ERROR(/* unknown instruction: ldl $a5, 0xf($v1) */);
            M2C_ERROR(/* unknown instruction: ldr $a5, 0x8($v1) */);
            M2C_ERROR(/* unknown instruction: sdl $v0, 0x7($a0) */);
            M2C_ERROR(/* unknown instruction: sdr $v0, ($a0) */);
            M2C_ERROR(/* unknown instruction: sdl $a5, 0xf($a0) */);
            var_7 -= 1;
            M2C_ERROR(/* unknown instruction: sdr $a5, 0x8($a0) */);
            var_6 -= 0x4B0;
        } while (var_7 >= arg1);
    }
    var_6_2 = arg2;
    var_3_2 = (arg1 * 0x4B0) + temp_5;
    temp_2 = var_6_2 + 0x4A0;
    if ((var_6_2 | var_3_2) & 7) {
        do {
            M2C_ERROR(/* unknown instruction: ldl $t0, 0x7($a2) */);
            M2C_ERROR(/* unknown instruction: ldr $t0, ($a2) */);
            M2C_ERROR(/* unknown instruction: ldl $a0, 0xf($a2) */);
            M2C_ERROR(/* unknown instruction: ldr $a0, 0x8($a2) */);
            M2C_ERROR(/* unknown instruction: ldl $a1, 0x17($a2) */);
            M2C_ERROR(/* unknown instruction: ldr $a1, 0x10($a2) */);
            M2C_ERROR(/* unknown instruction: ldl $a3, 0x1f($a2) */);
            M2C_ERROR(/* unknown instruction: ldr $a3, 0x18($a2) */);
            M2C_ERROR(/* unknown instruction: sdl $t0, 0x7($v1) */);
            M2C_ERROR(/* unknown instruction: sdr $t0, ($v1) */);
            M2C_ERROR(/* unknown instruction: sdl $a0, 0xf($v1) */);
            M2C_ERROR(/* unknown instruction: sdr $a0, 0x8($v1) */);
            M2C_ERROR(/* unknown instruction: sdl $a1, 0x17($v1) */);
            M2C_ERROR(/* unknown instruction: sdr $a1, 0x10($v1) */);
            M2C_ERROR(/* unknown instruction: sdl $a3, 0x1f($v1) */);
            M2C_ERROR(/* unknown instruction: sdr $a3, 0x18($v1) */);
            var_6_2 += 0x20;
        } while (var_6_2 != temp_2);
    } else {
        do {
            M2C_FIELD(var_3_2, s64 *, 0) = (s64) M2C_FIELD(var_6_2, s64 *, 0);
            M2C_FIELD(var_3_2, s64 *, 8) = (s64) M2C_FIELD(var_6_2, s64 *, 8);
            M2C_FIELD(var_3_2, s64 *, 0x10) = (s64) M2C_FIELD(var_6_2, s64 *, 0x10);
            M2C_FIELD(var_3_2, s64 *, 0x18) = (s64) M2C_FIELD(var_6_2, s64 *, 0x18);
            var_6_2 += 0x20;
            var_3_2 += 0x20;
        } while (var_6_2 != temp_2);
    }
    M2C_ERROR(/* unknown instruction: ldl $a0, 0x7($a2) */);
    M2C_ERROR(/* unknown instruction: ldr $a0, ($a2) */);
    M2C_ERROR(/* unknown instruction: ldl $a1, 0xf($a2) */);
    M2C_ERROR(/* unknown instruction: ldr $a1, 0x8($a2) */);
    M2C_ERROR(/* unknown instruction: sdl $a0, 0x7($v1) */);
    M2C_ERROR(/* unknown instruction: sdr $a0, ($v1) */);
    M2C_ERROR(/* unknown instruction: sdl $a1, 0xf($v1) */);
    M2C_ERROR(/* unknown instruction: sdr $a1, 0x8($v1) */);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 1);
}
