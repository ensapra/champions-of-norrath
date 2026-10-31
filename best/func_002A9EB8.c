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

s32 func_00165DC0(M2C_UNK *, M2C_UNK *);            /* extern */
M2C_UNK func_0024D4F8(s32, M2C_UNK *, void *, s32, M2C_UNK); /* extern */
M2C_UNK ovl_ntgui2_func_0013D230(void *, s32, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_00408600;
extern M2C_UNK D_0044E670;
extern M2C_UNK D_00452090;
extern M2C_UNK D_00478BC0;
extern f32 D_00482B78;
extern f32 D_00482B7C;
extern f32 D_00482B80;
extern u32 D_00483E5C;
extern s32 D_004844A4;
extern M2C_UNK D_00486388;

void func_002A9EB8(void *arg0, s8 arg1, void *arg2, void *arg3) {
    s32 sp8;
    M2C_UNK sp20;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    s16 *var_4;
    s16 *var_4_2;
    s16 *var_4_3;
    s16 *var_5;
    s16 temp_18;
    s16 temp_2_2;
    s16 temp_2_3;
    s16 temp_2_4;
    s16 temp_3_5;
    s16 var_2;
    s16 var_2_2;
    s32 temp_16;
    s32 temp_17;
    s32 temp_3_2;
    s32 temp_4_2;
    s32 temp_5;
    s32 temp_7_5;
    s32 var_5_3;
    s32 var_6;
    s32 var_6_2;
    s32 var_6_3;
    s32 var_6_4;
    s32 var_7;
    u32 temp_4;
    void *temp_2;
    void *temp_3;
    void *temp_3_3;
    void *temp_3_4;
    void *temp_6;
    void *temp_7;
    void *temp_7_2;
    void *temp_7_3;
    void *temp_7_4;
    void *temp_8;
    void *temp_8_2;
    void *var_5_2;
    void *var_5_4;

    M2C_FIELD(arg0, s8 *, 0) = arg1;
    temp_2 = arg0 + 0x20;
    temp_f1 = 1.0f / 0.0f;
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_0044E670;
    M2C_FIELD(arg0, void **, 0xC) = arg2;
    M2C_FIELD(arg0, void **, 8) = arg3;
    temp_4 = (D_00483E5C * 0x19660D) + 0x3C6EF35F;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    D_00483E5C = temp_4;
    M2C_FIELD(arg0, u32 *, 0x10) = (u32) (temp_4 >> 0x10);
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_00452090;
    M2C_ERROR(/* unknown instruction: ldl $v1, 0x17($s1) */);
    M2C_ERROR(/* unknown instruction: ldr $v1, 0x10($s1) */);
    temp_5 = M2C_FIELD(arg2, s32 *, 0x18);
    M2C_ERROR(/* unknown instruction: sdl $v1, 0x7($sp) */);
    M2C_ERROR(/* unknown instruction: sdr $v1, ($sp) */);
    sp8 = temp_5;
    M2C_FIELD(temp_2, s8 *, 9) = 0;
    M2C_ERROR(/* unknown instruction: ldl $v1, 0x7($sp) */);
    M2C_ERROR(/* unknown instruction: ldr $v1, ($sp) */);
    M2C_ERROR(/* unknown instruction: sdl $v1, 0x57($s3) */);
    M2C_ERROR(/* unknown instruction: sdr $v1, 0x50($s3) */);
    M2C_FIELD(arg0, s32 *, 0x58) = temp_5;
    M2C_FIELD(temp_2, f32 *, 0x28) = temp_f1;
    M2C_FIELD(temp_2, f32 *, 0x2C) = (f32) D_00482B78;
    M2C_FIELD(temp_2, f32 *, 0x1C) = 0.0f;
    M2C_FIELD(temp_2, f32 *, 0x24) = 0.0f;
    M2C_FIELD(temp_2, f32 *, 0x20) = temp_f1;
    M2C_FIELD(temp_2, s16 *, 0x12) = 0xFF;
    M2C_FIELD(temp_2, s16 *, 0xA) = 0xFF;
    M2C_FIELD(temp_2, s16 *, 0x14) = 0x80;
    M2C_FIELD(temp_2, s16 *, 0xC) = 0x80;
    M2C_FIELD(temp_2, s16 *, 0xE) = 0;
    M2C_FIELD(temp_2, s16 *, 0x10) = 0;
    M2C_FIELD(temp_2, s16 *, 0x16) = 0;
    M2C_FIELD(temp_2, s16 *, 0x18) = 0;
    M2C_FIELD(temp_2, s8 *, 8) = 0;
    ovl_ntgui2_func_0013D230(temp_2, temp_5, 0x80, 0xFF);
    M2C_FIELD(arg0, s8 *, 0) = arg1;
    M2C_FIELD(arg0, void **, 0xC) = arg2;
    temp_3 = M2C_FIELD(arg3, void **, 0x60);
    M2C_FIELD(arg0, void **, 8) = arg3;
    temp_8 = M2C_FIELD(arg0, void **, 8);
    temp_7 = M2C_FIELD(temp_8, void **, 0x60);
    temp_7_2 = temp_7 + 0x58;
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (D_004844A4 + (M2C_FIELD((temp_3 + 0x58), s32 (**)(void *, M2C_UNK, s8), 4)(arg3 + M2C_FIELD(temp_3, s16 *, 0x58), 1, arg1) * 0x3C));
    temp_3_2 = M2C_FIELD(temp_7_2, s32 (**)(void *, M2C_UNK, s8, void *, void *), 4)(temp_8 + M2C_FIELD(temp_7, s16 *, 0x58), 2, M2C_FIELD(arg0, s8 *, 0), temp_7_2, temp_8) * 0xC;
    M2C_FIELD(arg0, s32 *, 0x5C) = (s32) D_004844A4;
    M2C_FIELD(arg0, s32 *, 0x1C) = temp_3_2;
    temp_8_2 = M2C_FIELD(arg0, void **, 8);
    temp_3_3 = M2C_FIELD(temp_8_2, void **, 0x60);
    temp_7_3 = &D_00408600 + (M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x3C0) * 0x5DB0);
    temp_17 = M2C_FIELD(temp_7_3, s32 *, 0x55D0);
    temp_16 = M2C_FIELD(((M2C_FIELD(temp_7_3, s8 *, 0x5C14) * 4) + temp_7_3), s32 *, 0x55C8);
    temp_7_4 = M2C_FIELD(arg0, void **, 8);
    temp_18 = M2C_FIELD((temp_3_3 + 0x58), s16 (**)(void *, M2C_UNK, s8, void *, void *), 4)(temp_8_2 + M2C_FIELD(temp_3_3, s16 *, 0x58), 0, M2C_FIELD(arg0, s8 *, 0), temp_7_3, temp_8_2);
    temp_3_4 = M2C_FIELD(temp_7_4, void **, 0x60);
    temp_3_5 = M2C_FIELD((temp_3_4 + 0x58), s32 (**)(void *, M2C_UNK, s8, void *), 4)(temp_7_4 + M2C_FIELD(temp_3_4, s16 *, 0x58), 1, M2C_FIELD(arg0, s8 *, 0), temp_7_4) * 0x3C;
    if (temp_16 != 0) {
        var_7 = 0;
        var_5 = temp_16 + 0x24;
        var_6 = 0x20;
loop_2:
        temp_2_2 = *var_5;
        var_5 += 8;
        if (temp_2_2 != 0x15) {
            var_7 += 1;
            var_6 += 8;
            if (var_7 >= 4) {
                var_2 = 0;
            } else {
                goto loop_2;
            }
        } else {
            var_2 = M2C_FIELD((temp_16 + var_6), s16 *, 6);
        }
        if (var_2 == 0) {
            temp_f0 = (f32) temp_18;
            temp_f1_2 = temp_f0 + (temp_f0 * D_00482B7C);
            if (temp_f1_2 >= 0.0f) {

            }
            var_5_2 = temp_16 + 0x2A;
            var_4 = temp_16 + 4 + 0x20;
            var_6_2 = 0;
loop_15:
            temp_2_3 = *var_4;
            if (temp_2_3 != -1) {
                if (temp_2_3 != 0x15) {
                    var_6_2 += 1;
                    var_5_2 += 8;
                    var_4 += 8;
                    if (var_6_2 < 4) {
                        goto loop_15;
                    }
                } else {
                    goto block_19;
                }
            } else {
block_19:
                *var_4 = 0x15;
                M2C_FIELD(var_5_2, s16 *, -2) = M2C_BITWISE(s16, temp_f1_2);
                M2C_FIELD(var_5_2, s16 *, 0) = temp_3_5;
                M2C_FIELD(var_5_2, s16 *, -4) = temp_18;
            }
        }
    }
    if (temp_17 != 0) {
        var_6_3 = 0;
        var_4_2 = temp_17 + 0x24;
        var_5_3 = 0x20;
loop_23:
        var_4_2 += 8;
        if (*var_4_2 != 0x15) {
            var_6_3 += 1;
            var_5_3 += 8;
            if (var_6_3 >= 4) {
                var_2_2 = 0;
            } else {
                goto loop_23;
            }
        } else {
            var_2_2 = M2C_FIELD((temp_17 + var_5_3), s16 *, 6);
        }
        if (var_2_2 == 0) {
            temp_f0_2 = (f32) temp_18;
            temp_f1_3 = temp_f0_2 + (temp_f0_2 * D_00482B80);
            if (temp_f1_3 >= 0.0f) {

            }
            var_5_4 = temp_17 + 0x2A;
            var_4_3 = temp_17 + 4 + 0x20;
            var_6_4 = 0;
loop_32:
            temp_2_4 = *var_4_3;
            if (temp_2_4 != -1) {
                if (temp_2_4 != 0x15) {
                    var_6_4 += 1;
                    var_5_4 += 8;
                    var_4_3 += 8;
                    if (var_6_4 < 4) {
                        goto loop_32;
                    }
                } else {
                    goto block_36;
                }
            } else {
block_36:
                *var_4_3 = 0x15;
                M2C_FIELD(var_5_4, s16 *, 0) = temp_3_5;
                M2C_FIELD(var_5_4, s16 *, -4) = temp_18;
                M2C_FIELD(var_5_4, s16 *, -2) = M2C_BITWISE(s16, temp_f1_3);
            }
        }
    }
    temp_6 = M2C_FIELD(arg0, void **, 0xC);
    temp_4_2 = func_00165DC0(&D_00486388, &D_00478BC0);
    M2C_ERROR(/* unknown instruction: ldl $v0, 0x17($a2) */);
    M2C_ERROR(/* unknown instruction: ldr $v0, 0x10($a2) */);
    temp_7_5 = M2C_FIELD(temp_6, s32 *, 0x18);
    M2C_ERROR(/* unknown instruction: sdl $v0, 0x7($v1) */);
    M2C_ERROR(/* unknown instruction: sdr $v0, ($v1) */);
    M2C_FIELD(&sp20, s32 *, 8) = temp_7_5;
    func_0024D4F8(temp_4_2, &sp20, temp_6, temp_7_5, 0x3F800000);
}
