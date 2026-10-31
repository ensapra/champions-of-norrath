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

s32 Split__12VIRasterTessiP12VITessVertexR7VIPlaneRiT2T4T2(s32 arg1, void *arg2, void *arg3, s32 *arg4, void *arg5, s32 *arg6, void *arg7) {
    f32 temp_f1;
    f32 temp_f1_10;
    f32 temp_f1_11;
    f32 temp_f1_12;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f1_5;
    f32 temp_f1_6;
    f32 temp_f1_7;
    f32 temp_f1_8;
    f32 temp_f1_9;
    f32 temp_f2;
    f32 temp_f2_10;
    f32 temp_f2_11;
    f32 temp_f2_12;
    f32 temp_f2_13;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f2_6;
    f32 temp_f2_7;
    f32 temp_f2_8;
    f32 temp_f2_9;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f6;
    f32 var_f4;
    f32 var_f5;
    s32 var_18;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_2_5;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_3_4;
    void *temp_3_5;
    void *temp_4;
    void *temp_4_2;
    void *temp_4_3;
    void *temp_5;
    void *temp_5_2;
    void *temp_5_3;
    void *temp_7;
    void *temp_7_2;
    void *var_11;
    void *var_12;
    void *var_13;
    void *var_14;
    void *var_15;
    void *var_24;
    void *var_25;
    void *var_6;
    void *var_9;

    var_11 = arg7;
    var_13 = arg5;
    var_18 = arg1;
    var_12 = (arg2 + (var_18 * 0x30)) - 0x30;
    var_f4 = M2C_FIELD(var_12, f32 *, 0);
    var_24 = arg2;
    *arg4 = 0;
    *arg6 = 0;
    var_f5 = (var_f4 * M2C_FIELD(arg3, f32 *, 0)) + (M2C_FIELD(var_12, f32 *, 4) * M2C_FIELD(arg3, f32 *, 4)) + (M2C_FIELD(var_12, f32 *, 8) * M2C_FIELD(arg3, f32 *, 8)) + M2C_FIELD(arg3, f32 *, 0xC);
    if (var_18 != 0) {
loop_3:
        temp_f6 = (M2C_FIELD(var_24, f32 *, 0) * M2C_FIELD(arg3, f32 *, 0)) + (M2C_FIELD(var_24, f32 *, 4) * M2C_FIELD(arg3, f32 *, 4)) + (M2C_FIELD(var_24, f32 *, 8) * M2C_FIELD(arg3, f32 *, 8)) + M2C_FIELD(arg3, f32 *, 0xC);
        if (var_f5 > 0.0f) {
            M2C_FIELD(var_13, f32 *, 0) = var_f4;
            var_14 = var_12 + 0xC;
            temp_2 = var_13 + 0xC;
            var_25 = var_12 + 0x18;
            var_15 = var_12 + 0x28;
            temp_3 = var_13 + 0x28;
            M2C_FIELD(var_13, f32 *, 4) = (f32) M2C_FIELD(var_12, f32 *, 4);
            M2C_FIELD(var_13, f32 *, 8) = (f32) M2C_FIELD(var_12, f32 *, 8);
            M2C_FIELD(var_13, f32 *, 0xC) = (f32) M2C_FIELD(var_12, f32 *, 0xC);
            M2C_FIELD(temp_2, f32 *, 4) = (f32) M2C_FIELD(var_14, f32 *, 4);
            M2C_FIELD(temp_2, f32 *, 8) = (f32) M2C_FIELD(var_14, f32 *, 8);
            M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($t9) */);
            M2C_ERROR(/* unknown instruction: ldr $v0, ($t9) */);
            M2C_ERROR(/* unknown instruction: ldl $a0, 0xf($t9) */);
            M2C_ERROR(/* unknown instruction: ldr $a0, 0x8($t9) */);
            M2C_ERROR(/* unknown instruction: sdl $v0, 0x1f($t1) */);
            M2C_ERROR(/* unknown instruction: sdr $v0, 0x18($t1) */);
            M2C_ERROR(/* unknown instruction: sdl $a0, 0x27($t1) */);
            M2C_ERROR(/* unknown instruction: sdr $a0, 0x20($t1) */);
            var_13 += 0x30;
            M2C_FIELD(temp_3, f32 *, 0) = (f32) M2C_FIELD(var_12, f32 *, 0x28);
            *arg4 += 1;
            M2C_FIELD(temp_3, f32 *, 4) = (f32) M2C_FIELD(var_15, f32 *, 4);
        } else if (!(var_f5 < 0.0f)) {
            M2C_FIELD(var_13, f32 *, 0) = var_f4;
            var_14 = var_12 + 0xC;
            temp_2_2 = var_13 + 0xC;
            var_25 = var_12 + 0x18;
            var_15 = var_12 + 0x28;
            temp_4 = var_13 + 0x28;
            temp_3_2 = var_11 + 0xC;
            M2C_FIELD(var_13, f32 *, 4) = (f32) M2C_FIELD(var_12, f32 *, 4);
            temp_5 = var_11 + 0x28;
            M2C_FIELD(var_13, f32 *, 8) = (f32) M2C_FIELD(var_12, f32 *, 8);
            M2C_FIELD(var_13, f32 *, 0xC) = (f32) M2C_FIELD(var_12, f32 *, 0xC);
            M2C_FIELD(temp_2_2, f32 *, 4) = (f32) M2C_FIELD(var_14, f32 *, 4);
            M2C_FIELD(temp_2_2, f32 *, 8) = (f32) M2C_FIELD(var_14, f32 *, 8);
            M2C_ERROR(/* unknown instruction: ldl $a2, 0x7($t9) */);
            M2C_ERROR(/* unknown instruction: ldr $a2, ($t9) */);
            M2C_ERROR(/* unknown instruction: ldl $a3, 0xf($t9) */);
            M2C_ERROR(/* unknown instruction: ldr $a3, 0x8($t9) */);
            M2C_ERROR(/* unknown instruction: sdl $a2, 0x1f($t1) */);
            M2C_ERROR(/* unknown instruction: sdr $a2, 0x18($t1) */);
            M2C_ERROR(/* unknown instruction: sdl $a3, 0x27($t1) */);
            M2C_ERROR(/* unknown instruction: sdr $a3, 0x20($t1) */);
            var_13 += 0x30;
            M2C_FIELD(temp_4, f32 *, 0) = (f32) M2C_FIELD(var_12, f32 *, 0x28);
            *arg4 += 1;
            M2C_FIELD(temp_4, f32 *, 4) = (f32) M2C_FIELD(var_15, f32 *, 4);
            M2C_FIELD(var_11, f32 *, 0) = (f32) M2C_FIELD(var_12, f32 *, 0);
            M2C_FIELD(var_11, f32 *, 4) = (f32) M2C_FIELD(var_12, f32 *, 4);
            M2C_FIELD(var_11, f32 *, 8) = (f32) M2C_FIELD(var_12, f32 *, 8);
            M2C_FIELD(var_11, f32 *, 0xC) = (f32) M2C_FIELD(var_12, f32 *, 0xC);
            M2C_FIELD(temp_3_2, f32 *, 4) = (f32) M2C_FIELD(var_14, f32 *, 4);
            M2C_FIELD(temp_3_2, f32 *, 8) = (f32) M2C_FIELD(var_14, f32 *, 8);
            M2C_ERROR(/* unknown instruction: ldl $v1, 0x7($t9) */);
            M2C_ERROR(/* unknown instruction: ldr $v1, ($t9) */);
            M2C_ERROR(/* unknown instruction: ldl $a0, 0xf($t9) */);
            M2C_ERROR(/* unknown instruction: ldr $a0, 0x8($t9) */);
            M2C_ERROR(/* unknown instruction: sdl $v1, 0x1f($a7) */);
            M2C_ERROR(/* unknown instruction: sdr $v1, 0x18($a7) */);
            M2C_ERROR(/* unknown instruction: sdl $a0, 0x27($a7) */);
            M2C_ERROR(/* unknown instruction: sdr $a0, 0x20($a7) */);
            var_11 += 0x30;
            M2C_FIELD(temp_5, f32 *, 0) = (f32) M2C_FIELD(var_12, f32 *, 0x28);
            M2C_FIELD(temp_5, f32 *, 4) = (f32) M2C_FIELD(var_15, f32 *, 4);
            *arg6 += 1;
        } else {
            M2C_FIELD(var_11, f32 *, 0) = var_f4;
            var_14 = var_12 + 0xC;
            temp_2_3 = var_11 + 0xC;
            var_25 = var_12 + 0x18;
            var_15 = var_12 + 0x28;
            temp_3_3 = var_11 + 0x28;
            M2C_FIELD(var_11, f32 *, 4) = (f32) M2C_FIELD(var_12, f32 *, 4);
            M2C_FIELD(var_11, f32 *, 8) = (f32) M2C_FIELD(var_12, f32 *, 8);
            M2C_FIELD(var_11, f32 *, 0xC) = (f32) M2C_FIELD(var_12, f32 *, 0xC);
            M2C_FIELD(temp_2_3, f32 *, 4) = (f32) M2C_FIELD(var_14, f32 *, 4);
            M2C_FIELD(temp_2_3, f32 *, 8) = (f32) M2C_FIELD(var_14, f32 *, 8);
            M2C_ERROR(/* unknown instruction: ldl $a3, 0x7($t9) */);
            M2C_ERROR(/* unknown instruction: ldr $a3, ($t9) */);
            M2C_ERROR(/* unknown instruction: ldl $a4, 0xf($t9) */);
            M2C_ERROR(/* unknown instruction: ldr $a4, 0x8($t9) */);
            M2C_ERROR(/* unknown instruction: sdl $a3, 0x1f($a7) */);
            M2C_ERROR(/* unknown instruction: sdr $a3, 0x18($a7) */);
            M2C_ERROR(/* unknown instruction: sdl $a4, 0x27($a7) */);
            M2C_ERROR(/* unknown instruction: sdr $a4, 0x20($a7) */);
            var_11 += 0x30;
            M2C_FIELD(temp_3_3, f32 *, 0) = (f32) M2C_FIELD(var_12, f32 *, 0x28);
            *arg6 += 1;
            M2C_FIELD(temp_3_3, f32 *, 4) = (f32) M2C_FIELD(var_15, f32 *, 4);
        }
        if (var_f5 < 0.0f) {
            temp_2_4 = var_24 + 0xC;
            if (temp_f6 > 0.0f) {
                temp_f2 = M2C_FIELD(var_12, f32 *, 0);
                temp_3_4 = var_13 + 0xC;
                var_6 = var_13 + 0x28;
                temp_f3 = var_f5 / (var_f5 - temp_f6);
                temp_4_2 = var_24 + 0x18;
                temp_5_2 = var_13 + 0x18;
                temp_7 = var_11 + 0xC;
                var_9 = var_11 + 0x28;
                M2C_FIELD(var_13, f32 *, 0) = (f32) (temp_f2 + ((M2C_FIELD(var_24, f32 *, 0) - temp_f2) * temp_f3));
                temp_f1 = M2C_FIELD(var_12, f32 *, 4);
                M2C_FIELD(var_13, f32 *, 4) = (f32) (temp_f1 + ((M2C_FIELD(var_24, f32 *, 4) - temp_f1) * temp_f3));
                temp_f2_2 = M2C_FIELD(var_12, f32 *, 8);
                M2C_FIELD(var_13, f32 *, 8) = (f32) (temp_f2_2 + ((M2C_FIELD(var_24, f32 *, 8) - temp_f2_2) * temp_f3));
                temp_f1_2 = M2C_FIELD(var_14, f32 *, 0);
                M2C_FIELD(var_13, f32 *, 0xC) = (f32) (temp_f1_2 + ((M2C_FIELD(var_24, f32 *, 0xC) - temp_f1_2) * temp_f3));
                temp_f2_3 = M2C_FIELD(var_14, f32 *, 4);
                M2C_FIELD(temp_3_4, f32 *, 4) = (f32) (temp_f2_3 + ((M2C_FIELD(temp_2_4, f32 *, 4) - temp_f2_3) * temp_f3));
                temp_f1_3 = M2C_FIELD(var_14, f32 *, 8);
                M2C_FIELD(temp_3_4, f32 *, 8) = (f32) (temp_f1_3 + ((M2C_FIELD(temp_2_4, f32 *, 8) - temp_f1_3) * temp_f3));
                temp_f2_4 = M2C_FIELD(var_15, f32 *, 0);
                M2C_FIELD(var_13, f32 *, 0x28) = (f32) (temp_f2_4 + ((M2C_FIELD(var_24, f32 *, 0x28) - temp_f2_4) * temp_f3));
                temp_f1_4 = M2C_FIELD(var_15, f32 *, 4);
                M2C_FIELD(var_6, f32 *, 4) = (f32) (temp_f1_4 + ((M2C_FIELD((var_24 + 0x28), f32 *, 4) - temp_f1_4) * temp_f3));
                temp_f2_5 = M2C_FIELD(var_25, f32 *, 0);
                M2C_FIELD(var_13, f32 *, 0x18) = (f32) (temp_f2_5 + ((M2C_FIELD(var_24, f32 *, 0x18) - temp_f2_5) * temp_f3));
                temp_f1_5 = M2C_FIELD(var_25, f32 *, 4);
                M2C_FIELD(temp_5_2, f32 *, 4) = (f32) (temp_f1_5 + ((M2C_FIELD(temp_4_2, f32 *, 4) - temp_f1_5) * temp_f3));
                temp_f2_6 = M2C_FIELD(var_25, f32 *, 8);
                M2C_FIELD(temp_5_2, f32 *, 8) = (f32) (temp_f2_6 + ((M2C_FIELD(temp_4_2, f32 *, 8) - temp_f2_6) * temp_f3));
                temp_f1_6 = M2C_FIELD(var_25, f32 *, 0xC);
                M2C_FIELD(temp_5_2, f32 *, 0xC) = (f32) (temp_f1_6 + ((M2C_FIELD(temp_4_2, f32 *, 0xC) - temp_f1_6) * temp_f3));
                M2C_FIELD(var_11, f32 *, 0) = (f32) M2C_FIELD(var_13, f32 *, 0);
                M2C_FIELD(var_11, f32 *, 4) = (f32) M2C_FIELD(var_13, f32 *, 4);
                M2C_FIELD(var_11, f32 *, 8) = (f32) M2C_FIELD(var_13, f32 *, 8);
                M2C_FIELD(var_11, f32 *, 0xC) = (f32) M2C_FIELD(var_13, f32 *, 0xC);
                M2C_FIELD(temp_7, f32 *, 4) = (f32) M2C_FIELD(temp_3_4, f32 *, 4);
                M2C_FIELD(temp_7, f32 *, 8) = (f32) M2C_FIELD(temp_3_4, f32 *, 8);
                M2C_ERROR(/* unknown instruction: ldl $a4, 0x7($a1) */);
                M2C_ERROR(/* unknown instruction: ldr $a4, ($a1) */);
                M2C_ERROR(/* unknown instruction: ldl $v0, 0xf($a1) */);
                M2C_ERROR(/* unknown instruction: ldr $v0, 0x8($a1) */);
                M2C_ERROR(/* unknown instruction: sdl $a4, 0x1f($a7) */);
                M2C_ERROR(/* unknown instruction: sdr $a4, 0x18($a7) */);
                M2C_ERROR(/* unknown instruction: sdl $v0, 0x27($a7) */);
                M2C_ERROR(/* unknown instruction: sdr $v0, 0x20($a7) */);
                var_13 += 0x30;
                goto block_17;
            }
        }
        if ((temp_f6 < 0.0f) && (var_f5 > 0.0f)) {
            temp_f2_7 = M2C_FIELD(var_24, f32 *, 0);
            temp_2_5 = var_24 + 0xC;
            temp_3_5 = var_13 + 0xC;
            var_6 = var_13 + 0x28;
            temp_f3_2 = temp_f6 / (temp_f6 - var_f5);
            temp_4_3 = var_24 + 0x18;
            temp_5_3 = var_13 + 0x18;
            temp_7_2 = var_11 + 0xC;
            var_9 = var_11 + 0x28;
            M2C_FIELD(var_13, f32 *, 0) = (f32) (temp_f2_7 + ((M2C_FIELD(var_12, f32 *, 0) - temp_f2_7) * temp_f3_2));
            temp_f1_7 = M2C_FIELD(var_24, f32 *, 4);
            M2C_FIELD(var_13, f32 *, 4) = (f32) (temp_f1_7 + ((M2C_FIELD(var_12, f32 *, 4) - temp_f1_7) * temp_f3_2));
            temp_f1_8 = M2C_FIELD(var_24, f32 *, 8);
            M2C_FIELD(var_13, f32 *, 8) = (f32) (temp_f1_8 + ((M2C_FIELD(var_12, f32 *, 8) - temp_f1_8) * temp_f3_2));
            temp_f2_8 = M2C_FIELD(var_24, f32 *, 0xC);
            M2C_FIELD(var_13, f32 *, 0xC) = (f32) (temp_f2_8 + ((M2C_FIELD(var_14, f32 *, 0) - temp_f2_8) * temp_f3_2));
            temp_f1_9 = M2C_FIELD(temp_2_5, f32 *, 4);
            M2C_FIELD(temp_3_5, f32 *, 4) = (f32) (temp_f1_9 + ((M2C_FIELD(var_14, f32 *, 4) - temp_f1_9) * temp_f3_2));
            temp_f2_9 = M2C_FIELD(temp_2_5, f32 *, 8);
            M2C_FIELD(temp_3_5, f32 *, 8) = (f32) (temp_f2_9 + ((M2C_FIELD(var_14, f32 *, 8) - temp_f2_9) * temp_f3_2));
            temp_f1_10 = M2C_FIELD(var_24, f32 *, 0x28);
            M2C_FIELD(var_13, f32 *, 0x28) = (f32) (temp_f1_10 + ((M2C_FIELD(var_15, f32 *, 0) - temp_f1_10) * temp_f3_2));
            temp_f2_10 = M2C_FIELD((var_24 + 0x28), f32 *, 4);
            M2C_FIELD(var_6, f32 *, 4) = (f32) (temp_f2_10 + ((M2C_FIELD(var_15, f32 *, 4) - temp_f2_10) * temp_f3_2));
            temp_f1_11 = M2C_FIELD(var_24, f32 *, 0x18);
            M2C_FIELD(var_13, f32 *, 0x18) = (f32) (temp_f1_11 + ((M2C_FIELD(var_25, f32 *, 0) - temp_f1_11) * temp_f3_2));
            temp_f2_11 = M2C_FIELD(temp_4_3, f32 *, 4);
            M2C_FIELD(temp_5_3, f32 *, 4) = (f32) (temp_f2_11 + ((M2C_FIELD(var_25, f32 *, 4) - temp_f2_11) * temp_f3_2));
            temp_f1_12 = M2C_FIELD(temp_4_3, f32 *, 8);
            M2C_FIELD(temp_5_3, f32 *, 8) = (f32) (temp_f1_12 + ((M2C_FIELD(var_25, f32 *, 8) - temp_f1_12) * temp_f3_2));
            temp_f2_12 = M2C_FIELD(temp_4_3, f32 *, 0xC);
            M2C_FIELD(temp_5_3, f32 *, 0xC) = (f32) (temp_f2_12 + ((M2C_FIELD(var_25, f32 *, 0xC) - temp_f2_12) * temp_f3_2));
            M2C_FIELD(var_11, f32 *, 0) = (f32) M2C_FIELD(var_13, f32 *, 0);
            M2C_FIELD(var_11, f32 *, 4) = (f32) M2C_FIELD(var_13, f32 *, 4);
            temp_f2_13 = M2C_FIELD(var_13, f32 *, 8);
            var_13 += 0x30;
            M2C_FIELD(var_11, f32 *, 8) = temp_f2_13;
            M2C_FIELD(var_11, f32 *, 0xC) = (f32) M2C_FIELD(var_13, f32 *, 0xC);
            M2C_FIELD(temp_7_2, f32 *, 4) = (f32) M2C_FIELD(temp_3_5, f32 *, 4);
            M2C_FIELD(temp_7_2, f32 *, 8) = (f32) M2C_FIELD(temp_3_5, f32 *, 8);
            M2C_ERROR(/* unknown instruction: ldl $a3, 0x7($a1) */);
            M2C_ERROR(/* unknown instruction: ldr $a3, ($a1) */);
            M2C_ERROR(/* unknown instruction: ldl $a4, 0xf($a1) */);
            M2C_ERROR(/* unknown instruction: ldr $a4, 0x8($a1) */);
            M2C_ERROR(/* unknown instruction: sdl $a3, 0x1f($a7) */);
            M2C_ERROR(/* unknown instruction: sdr $a3, 0x18($a7) */);
            M2C_ERROR(/* unknown instruction: sdl $a4, 0x27($a7) */);
            M2C_ERROR(/* unknown instruction: sdr $a4, 0x20($a7) */);
block_17:
            var_11 += 0x30;
            *arg4 += 1;
            M2C_FIELD(var_9, f32 *, 0) = (f32) M2C_FIELD(var_6, f32 *, 0);
            M2C_FIELD(var_9, f32 *, 4) = (f32) M2C_FIELD(var_6, f32 *, 4);
            *arg6 += 1;
        }
        var_18 -= 1;
        var_12 = var_24;
        var_f5 = temp_f6;
        var_24 += 0x30;
        if (var_18 != 0) {
            var_f4 = M2C_FIELD(var_12, f32 *, 0);
            goto loop_3;
        }
    }
    return 0;
}
