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

M2C_UNK func_001395E8(void *);                      /* extern */

void func_00139D68(void *arg0, s32 arg1, void *arg2) {
    s32 temp_17;
    s32 temp_3;
    s32 temp_4;
    s32 temp_9;
    s32 var_2;
    s32 var_3;
    s32 var_3_2;
    s32 var_4_2;
    s32 var_5;
    s32 var_6;
    s32 var_7;
    s32 var_8;
    s32 var_8_2;
    void *var_4;

    temp_17 = M2C_FIELD(arg2, s32 *, 0xC);
loop_3:
    temp_9 = M2C_FIELD(arg0, s32 *, 0xC);
    temp_3 = temp_9 + temp_17;
    temp_4 = arg1 + temp_17;
    if (M2C_FIELD(arg0, s32 *, 4) < temp_3) {
        func_001395E8(arg0);
        goto loop_3;
    }
    var_8 = temp_3 - 1;
    if (var_8 >= temp_4) {
        var_5 = (var_8 * 0x4B0) + M2C_FIELD(arg0, s32 *, 0);
        do {
            var_3 = var_5;
            var_4 = var_5 + 0x4B0;
            if (var_5 & 7) {
                do {
                    M2C_ERROR(/* unknown instruction: ldl $a3, 0x7($v1) */);
                    M2C_ERROR(/* unknown instruction: ldr $a3, ($v1) */);
                    M2C_ERROR(/* unknown instruction: ldl $a6, 0xf($v1) */);
                    M2C_ERROR(/* unknown instruction: ldr $a6, 0x8($v1) */);
                    M2C_ERROR(/* unknown instruction: ldl $a7, 0x17($v1) */);
                    M2C_ERROR(/* unknown instruction: ldr $a7, 0x10($v1) */);
                    M2C_ERROR(/* unknown instruction: ldl $t0, 0x1f($v1) */);
                    M2C_ERROR(/* unknown instruction: ldr $t0, 0x18($v1) */);
                    M2C_ERROR(/* unknown instruction: sdl $a3, 0x7($a0) */);
                    M2C_ERROR(/* unknown instruction: sdr $a3, ($a0) */);
                    M2C_ERROR(/* unknown instruction: sdl $a6, 0xf($a0) */);
                    M2C_ERROR(/* unknown instruction: sdr $a6, 0x8($a0) */);
                    M2C_ERROR(/* unknown instruction: sdl $a7, 0x17($a0) */);
                    M2C_ERROR(/* unknown instruction: sdr $a7, 0x10($a0) */);
                    M2C_ERROR(/* unknown instruction: sdl $t0, 0x1f($a0) */);
                    M2C_ERROR(/* unknown instruction: sdr $t0, 0x18($a0) */);
                    var_3 += 0x20;
                } while (var_3 != (var_5 + 0x4A0));
            } else {
                do {
                    M2C_FIELD(var_4, s64 *, 0) = (s64) M2C_FIELD(var_3, s64 *, 0);
                    M2C_FIELD(var_4, s64 *, 8) = (s64) M2C_FIELD(var_3, s64 *, 8);
                    M2C_FIELD(var_4, s64 *, 0x10) = (s64) M2C_FIELD(var_3, s64 *, 0x10);
                    M2C_FIELD(var_4, s64 *, 0x18) = (s64) M2C_FIELD(var_3, s64 *, 0x18);
                    var_3 += 0x20;
                    var_4 += 0x20;
                } while (var_3 != (var_5 + 0x4A0));
            }
            M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($v1) */);
            M2C_ERROR(/* unknown instruction: ldr $v0, ($v1) */);
            M2C_ERROR(/* unknown instruction: ldl $a3, 0xf($v1) */);
            M2C_ERROR(/* unknown instruction: ldr $a3, 0x8($v1) */);
            M2C_ERROR(/* unknown instruction: sdl $v0, 0x7($a0) */);
            M2C_ERROR(/* unknown instruction: sdr $v0, ($a0) */);
            M2C_ERROR(/* unknown instruction: sdl $a3, 0xf($a0) */);
            var_8 -= 1;
            M2C_ERROR(/* unknown instruction: sdr $a3, 0x8($a0) */);
            var_5 -= 0x4B0;
        } while (var_8 >= temp_4);
    }
    var_2 = temp_9 + temp_17;
    if (temp_17 > 0) {
        var_6 = M2C_FIELD(arg2, s32 *, 0);
        var_8_2 = temp_17;
        var_3_2 = (arg1 * 0x4B0) + M2C_FIELD(arg0, s32 *, 0);
        do {
            var_7 = var_3_2;
            var_4_2 = var_6;
            if ((var_6 | var_3_2) & 7) {
                do {
                    M2C_ERROR(/* unknown instruction: ldl $t0, 0x7($a0) */);
                    M2C_ERROR(/* unknown instruction: ldr $t0, ($a0) */);
                    M2C_ERROR(/* unknown instruction: ldl $a1, 0xf($a0) */);
                    M2C_ERROR(/* unknown instruction: ldr $a1, 0x8($a0) */);
                    M2C_ERROR(/* unknown instruction: ldl $a6, 0x17($a0) */);
                    M2C_ERROR(/* unknown instruction: ldr $a6, 0x10($a0) */);
                    M2C_ERROR(/* unknown instruction: ldl $a7, 0x1f($a0) */);
                    M2C_ERROR(/* unknown instruction: ldr $a7, 0x18($a0) */);
                    M2C_ERROR(/* unknown instruction: sdl $t0, 0x7($a3) */);
                    M2C_ERROR(/* unknown instruction: sdr $t0, ($a3) */);
                    M2C_ERROR(/* unknown instruction: sdl $a1, 0xf($a3) */);
                    M2C_ERROR(/* unknown instruction: sdr $a1, 0x8($a3) */);
                    M2C_ERROR(/* unknown instruction: sdl $a6, 0x17($a3) */);
                    M2C_ERROR(/* unknown instruction: sdr $a6, 0x10($a3) */);
                    M2C_ERROR(/* unknown instruction: sdl $a7, 0x1f($a3) */);
                    M2C_ERROR(/* unknown instruction: sdr $a7, 0x18($a3) */);
                    var_4_2 += 0x20;
                } while (var_4_2 != (var_6 + 0x4A0));
            } else {
                do {
                    M2C_FIELD(var_7, s64 *, 0) = (s64) M2C_FIELD(var_4_2, s64 *, 0);
                    M2C_FIELD(var_7, s64 *, 8) = (s64) M2C_FIELD(var_4_2, s64 *, 8);
                    M2C_FIELD(var_7, s64 *, 0x10) = (s64) M2C_FIELD(var_4_2, s64 *, 0x10);
                    M2C_FIELD(var_7, s64 *, 0x18) = (s64) M2C_FIELD(var_4_2, s64 *, 0x18);
                    var_4_2 += 0x20;
                    var_7 += 0x20;
                } while (var_4_2 != (var_6 + 0x4A0));
            }
            M2C_ERROR(/* unknown instruction: ldl $t0, 0x7($a0) */);
            M2C_ERROR(/* unknown instruction: ldr $t0, ($a0) */);
            M2C_ERROR(/* unknown instruction: ldl $v0, 0xf($a0) */);
            M2C_ERROR(/* unknown instruction: ldr $v0, 0x8($a0) */);
            M2C_ERROR(/* unknown instruction: sdl $t0, 0x7($a3) */);
            M2C_ERROR(/* unknown instruction: sdr $t0, ($a3) */);
            M2C_ERROR(/* unknown instruction: sdl $v0, 0xf($a3) */);
            var_8_2 -= 1;
            var_6 += 0x4B0;
            var_3_2 += 0x4B0;
            M2C_ERROR(/* unknown instruction: sdr $v0, 0x8($a3) */);
        } while (var_8_2 != 0);
        var_2 = temp_9 + temp_17;
    }
    M2C_FIELD(arg0, s32 *, 0xC) = var_2;
}
