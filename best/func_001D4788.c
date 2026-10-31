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

s32 func_001441B8(M2C_UNK);                         /* extern */
s32 func_00144CB8(M2C_UNK *, s32);                  /* extern */
s32 func_00153FA8(void *);                          /* extern */
M2C_UNK func_00180DA0(M2C_UNK *, M2C_UNK *, f32 *, M2C_UNK); /* extern */
M2C_UNK func_0028DA68(s32, f32 *, f32, f32, M2C_UNK); /* extern */
extern M2C_UNK D_0042ADC0;
extern f32 D_004806E0;
extern f32 D_004806E4;

void func_001D4788(void *arg0) {
    M2C_UNK sp10;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    M2C_UNK sp40;
    f32 sp44;
    f32 sp48;
    f32 sp50;
    f32 sp54;
    f32 sp58;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f20;
    f32 temp_f25;
    f32 temp_f26;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_3;
    s32 temp_6;
    s32 temp_ret;
    s32 var_22;
    s32 var_2;
    s32 var_2_2;
    u16 temp_2;
    void *temp_19;
    void *temp_2_4;
    void *temp_2_5;

    temp_2 = M2C_FIELD(arg0, u16 *, 0x6C) - 1;
    M2C_FIELD(arg0, u16 *, 0x6C) = temp_2;
    if ((temp_2 << 0x10) > 0) {
        M2C_ERROR(/* unknown instruction: ldl $v1, 0x7($s1) */);
        M2C_ERROR(/* unknown instruction: ldr $v1, ($s1) */);
        temp_6 = M2C_FIELD((arg0 + 0x54), s32 *, 8);
        M2C_ERROR(/* unknown instruction: sdl $v1, 0x7($v0) */);
        M2C_ERROR(/* unknown instruction: sdr $v1, ($v0) */);
        M2C_FIELD(&sp10, s32 *, 8) = temp_6;
        temp_2_2 = func_00144CB8(&sp10, temp_6);
        if (temp_2_2 != 0) {
            temp_3 = M2C_FIELD(arg0, s32 *, 0x60);
            if (temp_2_2 == 1) {
                if (temp_3 & 8) {
                    temp_f0 = M2C_FIELD(arg0, f32 *, 0x58);
                    temp_f1 = M2C_FIELD(arg0, f32 *, 0x5C);
                    sp30 = M2C_FIELD(arg0, f32 *, 0x54);
                    sp34 = temp_f0;
                    sp38 = temp_f1;
                    temp_f2 = M2C_ERROR(/* unknown instruction: rsqrt.s $f2, $f2, $f0 */);
                    sp30 *= temp_f2;
                    sp20 = M2C_FIELD(arg0, f32 *, 0x10);
                    sp24 = M2C_FIELD(arg0, f32 *, 0x14);
                    sp28 = M2C_FIELD(arg0, f32 *, 0x18);
                    sp34 = temp_f0 * temp_f2;
                    sp38 = temp_f1 * temp_f2;
                    temp_f20 = (((f32) func_00153FA8(arg0) * 0.000015258789f * 6.0f) + 2.0f) * 60.0f;
                    temp_ret = func_001441B8(0x4A8);
                    temp_2_3 = temp_ret;
                    if (temp_2_3 != 0) {
                        func_0028DA68(temp_2_3, &sp20, M2C_BITWISE(f32, temp_ret), temp_f20, 0x3F000000);
                    }
                }
                var_2 = M2C_FIELD(arg0, s32 *, 0x60) & 2;
                if (M2C_FIELD(arg0, s32 *, 0x60) & 0x10) {
                    var_22 = 0;
                    temp_f26 = D_004806E0;
                    temp_19 = arg0 + 0x10;
                    temp_f25 = D_004806E4;
                    do {
loop_9:
                        M2C_FIELD(&sp40, f32 *, 0) = (f32) ((2.0f * ((f32) func_00153FA8(arg0) * 0.000015258789f)) - 1.0f);
                        M2C_FIELD(&sp40, f32 *, 4) = (f32) ((2.0f * ((f32) func_00153FA8(arg0) * 0.000015258789f)) - 1.0f);
                        temp_f2_2 = M2C_FIELD(&sp40, f32 *, 0);
                        temp_f1_2 = M2C_FIELD(&sp40, f32 *, 4);
                        temp_f0_2 = (2.0f * ((f32) func_00153FA8(arg0) * 0.000015258789f)) - 1.0f;
                        M2C_FIELD(&sp40, f32 *, 8) = temp_f0_2;
                        if (((temp_f2_2 * temp_f2_2) + (temp_f1_2 * temp_f1_2) + (temp_f0_2 * temp_f0_2)) > 1.0f) {
                            goto loop_9;
                        }
                        temp_f1_3 = sp44 * 10.0f;
                        temp_f2_3 = sp48 * 10.0f;
                        M2C_FIELD(&sp40, f32 *, 0) = (f32) (M2C_FIELD(&sp40, f32 *, 0) * 10.0f);
                        sp44 = temp_f1_3;
                        sp48 = temp_f2_3;
                        M2C_FIELD(&sp40, f32 *, 0) = (f32) (M2C_FIELD(&sp40, f32 *, 0) + M2C_FIELD(arg0, f32 *, 0x10));
                        sp44 = temp_f1_3 + M2C_FIELD(temp_19, f32 *, 4);
                        sp48 = temp_f2_3 + M2C_FIELD(temp_19, f32 *, 8);
loop_11:
                        M2C_FIELD(&sp50, f32 *, 0) = (2.0f * ((f32) func_00153FA8(arg0) * 0.000015258789f)) - 1.0f;
                        M2C_FIELD(&sp50, f32 *, 4) = (f32) ((2.0f * ((f32) func_00153FA8(arg0) * 0.000015258789f)) - 1.0f);
                        temp_f2_4 = M2C_FIELD(&sp50, f32 *, 0);
                        temp_f1_4 = M2C_FIELD(&sp50, f32 *, 4);
                        temp_f0_3 = (2.0f * ((f32) func_00153FA8(arg0) * 0.000015258789f)) - 1.0f;
                        M2C_FIELD(&sp50, f32 *, 8) = temp_f0_3;
                        if (((temp_f2_4 * temp_f2_4) + (temp_f1_4 * temp_f1_4) + (temp_f0_3 * temp_f0_3)) > 1.0f) {
                            goto loop_11;
                        }
                        M2C_FIELD(&sp50, f32 *, 0) *= temp_f26;
                        var_22 += 1;
                        sp50 -= M2C_FIELD(arg0, f32 *, 0x54) * temp_f25;
                        sp54 = (sp54 * temp_f26) - (M2C_FIELD(arg0, f32 *, 0x58) * temp_f25);
                        sp58 = ((sp58 * temp_f26) + 10.0f) - (M2C_FIELD(arg0, f32 *, 0x5C) * temp_f25);
                        func_00180DA0(&D_0042ADC0, &sp40, &sp50, 0);
                    } while (var_22 < 0x80);
                    var_2 = M2C_FIELD(arg0, s32 *, 0x60) & 2;
                }
                var_2_2 = M2C_FIELD(arg0, s32 *, 0x60) & 1;
                if (var_2 != 0) {
                    goto block_15;
                }
                goto block_19;
            }
            var_2_2 = temp_3 & 1;
block_19:
            if ((var_2_2 != 0) && (arg0 != NULL)) {
                temp_2_4 = M2C_FIELD(arg0, void **, 0x48);
                M2C_FIELD((temp_2_4 + 8), M2C_UNK (**)(void *, M2C_UNK), 4)(arg0 + M2C_FIELD(temp_2_4, s16 *, 8), 3);
            }
        }
    } else {
block_15:
        if (arg0 != NULL) {
            temp_2_5 = M2C_FIELD(arg0, void **, 0x48);
            M2C_FIELD((temp_2_5 + 8), M2C_UNK (**)(void *, M2C_UNK), 4)(arg0 + M2C_FIELD(temp_2_5, s16 *, 8), 3);
        }
    }
}
