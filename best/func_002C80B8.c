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
M2C_UNK func_001535D0(M2C_UNK *, s16, M2C_UNK **, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00168A38(s32, M2C_UNK *, s16, void *, M2C_UNK, M2C_UNK *, M2C_UNK, s32, M2C_UNK); /* extern */
M2C_UNK func_00194300(M2C_UNK **);                  /* extern */
M2C_UNK func_001A35E8(void *, M2C_UNK, void *, M2C_UNK); /* extern */
s32 func_001A7C28(void *, M2C_UNK, s32);            /* extern */
M2C_UNK func_001CE218(void *, void *, M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK, M2C_UNK, f32, f32); /* extern */
M2C_UNK func_001E5278(s32, f32 *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, f32, f32, f32, f32); /* extern */
M2C_UNK func_002C86F8(void *);                      /* extern */
M2C_UNK ovl_ntgui2_func_0013F158(M2C_UNK *, s16, M2C_UNK **, s32, M2C_UNK); /* extern */
extern M2C_UNK D_0034BEB8;
extern f32 D_00483124;
extern f32 D_00483128;
extern f32 D_0048312C;
extern s8 D_0048382F;
extern u32 D_00483E5C;

void func_002C80B8(void *arg0, void *arg1) {
    M2C_UNK *sp30;
    M2C_UNK sp40;
    M2C_UNK sp50;
    s32 sp60;
    s32 sp64;
    M2C_UNK sp70;
    f32 sp80;
    f32 sp84;
    f32 sp88;
    f32 sp90;
    f32 sp94;
    f32 sp98;
    M2C_UNK spA0;
    s32 spB0;
    s32 spB4;
    s32 spB8;
    void *spBC;
    M2C_UNK *var_17;
    M2C_UNK *var_17_2;
    s32 temp_11;
    s32 temp_16;
    s32 temp_23;
    s32 temp_2_3;
    s32 temp_2_5;
    s32 temp_3_5;
    s32 temp_7_5;
    s32 temp_9;
    s32 var_22;
    s8 temp_4;
    u32 temp_3_6;
    void *temp_10;
    void *temp_10_2;
    void *temp_16_2;
    void *temp_19;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_4;
    void *temp_2_6;
    void *temp_2_7;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_3_4;
    void *temp_7;
    void *temp_7_2;
    void *temp_7_3;
    void *temp_7_4;
    void *temp_9_2;
    void *var_16;

    temp_19 = M2C_FIELD(arg0, void **, 0xC);
    M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($a1) */);
    M2C_ERROR(/* unknown instruction: ldr $v0, ($a1) */);
    M2C_ERROR(/* unknown instruction: sdl $v0, 0x27($sp) */);
    M2C_ERROR(/* unknown instruction: sdr $v0, 0x20($sp) */);
    sp30 = NULL;
    temp_16 = func_001A7C28(temp_19, 0x3F800000, M2C_FIELD(arg1, s32 *, 8));
    func_001A35E8(temp_19, 3, &D_0034BEB8 + (M2C_FIELD(temp_19, s32 *, 0x3C0) * 0x58), 0);
    temp_7 = M2C_FIELD(arg0, void **, 0x24);
    if (temp_7 != NULL) {
        temp_3 = M2C_FIELD(temp_19, void **, 0x48);
        M2C_ERROR(/* unknown instruction: ldl $a4, 0x17($a3) */);
        M2C_ERROR(/* unknown instruction: ldr $a4, 0x10($a3) */);
        temp_9 = M2C_FIELD(temp_7, s32 *, 0x18);
        M2C_ERROR(/* unknown instruction: sdl $a4, 0x7($v0) */);
        M2C_FIELD(&sp50, s32 *, 8) = temp_9;
        M2C_FIELD((temp_3 + 0xB0), M2C_UNK (**)(void *, M2C_UNK, M2C_UNK *, void *, M2C_UNK, s32), 4)(temp_19 + M2C_FIELD(temp_3, s16 *, 0xB0), 0, &sp50, temp_7, M2C_ERROR(/* unknown instruction: sdr $a4, ($v0) */), temp_9);
    }
    if (temp_16 & 2) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
    }
    if (M2C_FIELD(arg0, s32 *, 0x18) == 0) {
        if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
            temp_7_2 = M2C_FIELD(arg0, void **, 8);
            spB0 = 0x80000;
            temp_3_2 = M2C_FIELD(temp_7_2, void **, 0x60);
            temp_7_3 = M2C_FIELD(arg0, void **, 8);
            temp_23 = M2C_FIELD((temp_3_2 + 0x58), s32 (**)(void *, M2C_UNK, s8, void *), 4)(temp_7_2 + M2C_FIELD(temp_3_2, s16 *, 0x58), 3, M2C_FIELD(arg0, s8 *, 0), temp_7_2);
            temp_3_3 = M2C_FIELD(temp_7_3, void **, 0x60);
            spB4 = M2C_FIELD((temp_3_3 + 0x58), s32 (**)(void *, M2C_UNK, s8, void *), 4)(temp_7_3 + M2C_FIELD(temp_3_3, s16 *, 0x58), 1, M2C_FIELD(arg0, s8 *, 0), temp_7_3);
            temp_7_4 = M2C_FIELD(arg0, void **, 8);
            temp_3_4 = M2C_FIELD(temp_7_4, void **, 0x60);
            temp_4 = M2C_FIELD(arg0, s8 *, 0);
            temp_3_5 = M2C_FIELD((temp_3_4 + 0x58), s32 (**)(void *, M2C_UNK, s8, void *), 4)(temp_7_4 + M2C_FIELD(temp_3_4, s16 *, 0x58), 2, M2C_FIELD(arg0, s8 *, 0), temp_7_4) * 0x3C;
            spB0 = (temp_4 < 6) ? 0x40000 : spB0;
            spB8 = temp_3_5;
            if (temp_4 >= 0x10) {
                spB0 = 0x200000;
            }
            temp_9_2 = temp_19 + 0x10;
            spBC = temp_9_2;
            M2C_ERROR(/* unknown instruction: ldl $a6, 0x7($a5) */);
            M2C_ERROR(/* unknown instruction: ldr $a6, ($a5) */);
            temp_11 = M2C_FIELD(temp_9_2, s32 *, 8);
            M2C_ERROR(/* unknown instruction: sdl $a6, 0x7($a1) */);
            M2C_ERROR(/* unknown instruction: sdr $a6, ($a1) */);
            var_22 = 0;
            M2C_FIELD(&sp70, s32 *, 8) = temp_11;
            func_00168A38(M2C_FIELD(temp_19, s32 *, 0x534), &sp70, M2C_FIELD(temp_19, s16 *, 0x38), temp_19 + 0x120, 1, &sp40, 0, temp_11, 0x3F800000);
            func_001535D0(&sp40, M2C_FIELD(temp_19, s16 *, 0x38), &sp30, 0, 0x42240000, 0xBF800000);
            var_17 = sp30;
            if ((var_17 != NULL) && (temp_23 > 0)) {
loop_12:
                temp_16_2 = M2C_FIELD(var_17, void **, 0xC);
                if (!(M2C_FIELD(temp_16_2, s32 *, 0xC) & 0x01000000)) {
                    temp_10 = M2C_FIELD(arg0, void **, 8);
                    temp_2 = M2C_FIELD(temp_10, void **, 0x60);
                    M2C_FIELD((temp_2 + 0x48), M2C_UNK (**)(void *, M2C_UNK, s8, M2C_UNK, s32 *, s32 *, void *, f32), 4)(temp_10 + M2C_FIELD(temp_2, s16 *, 0x48), 0, M2C_FIELD(arg0, s8 *, 0), 0, &sp60, &sp64, temp_10, D_00483128);
                    func_001CE218(temp_16_2, temp_19, 0x186A0, 0, 0, spB0 | 0x40, 0, 1, (f32) sp60, (f32) sp64);
                    if (!(M2C_FIELD(temp_16_2, f32 *, 0x230) > 0.0f)) {
                        M2C_FIELD(temp_16_2, s16 *, 0x94) = 0x64;
                        goto block_20;
                    }
                    temp_3_6 = (D_00483E5C * 0x19660D) + 0x3C6EF35F;
                    D_00483E5C = temp_3_6;
                    if (spB4 < (((u32) (temp_3_6 >> 0x10) % 100U) + 1)) {
                        M2C_FIELD(temp_16_2, s16 *, 0x94) = 0x64;
block_20:
                        M2C_FIELD(temp_16_2, s16 *, 0x8C) = 0x64;
                        M2C_FIELD(temp_16_2, s16 *, 0x96) = 0x64;
                        M2C_FIELD(temp_16_2, s16 *, 0x8E) = 0x64;
                        M2C_FIELD(temp_16_2, s16 *, 0x98) = 0x40;
                        M2C_FIELD(temp_16_2, s16 *, 0x90) = 0x40;
                        M2C_FIELD(temp_16_2, s16 *, 0x92) = 0x40;
                    } else {
                        temp_2_2 = M2C_FIELD(temp_16_2, void **, 0x48);
                        M2C_FIELD((temp_2_2 + 0xD0), M2C_UNK (**)(void *, s32), 4)(temp_16_2 + M2C_FIELD(temp_2_2, s16 *, 0xD0), spB8);
                        M2C_FIELD(temp_16_2, s16 *, 0x8C) = 0x3A;
                        M2C_FIELD(temp_16_2, s16 *, 0x8E) = 0x9B;
                        M2C_FIELD(temp_16_2, s16 *, 0x90) = 0x9A;
                        M2C_FIELD(temp_16_2, s16 *, 0x92) = 0x48;
                        M2C_FIELD(temp_16_2, s16 *, 0x94) = 0x3A;
                        M2C_FIELD(temp_16_2, s16 *, 0x96) = 0x9B;
                        M2C_FIELD(temp_16_2, s16 *, 0x98) = 0x9A;
                    }
                    if (M2C_FIELD(arg0, s32 *, 0x18) == 0) {
                        temp_2_3 = func_001441B8(0xBC);
                        temp_2_4 = temp_16_2 + 0x10;
                        if (temp_2_3 != 0) {
                            sp90 = 0.0f;
                            sp94 = 0.0f;
                            sp98 = 64.0f;
                            sp80 = M2C_FIELD(temp_16_2, f32 *, 0x10) + 0.0f;
                            sp84 = M2C_FIELD(temp_2_4, f32 *, 4);
                            sp88 = M2C_FIELD(temp_2_4, f32 *, 8) + 64.0f;
                            func_001E5278(temp_2_3, &sp80, 0, 0, 0x43210000, 0x430A0000, 0x42800000, 0, 0, 0, 0, 0, 180.0f, 60.0f, 0.5f, D_0048312C);
                        }
                    }
                    var_22 += 1;
                    M2C_FIELD(arg0, s32 *, 0x18) = 1;
                }
                var_17 = M2C_FIELD(var_17, M2C_UNK **, 0);
                if ((var_17 != NULL) && (var_22 < temp_23)) {
                    goto loop_12;
                }
            }
            if (M2C_FIELD(arg0, s32 *, 0x18) == 0) {
                M2C_ERROR(/* unknown instruction: ldl $a2, 0x7($a1) */);
                M2C_ERROR(/* unknown instruction: ldr $a2, ($a1) */);
                temp_7_5 = M2C_FIELD(spBC, s32 *, 8);
                M2C_ERROR(/* unknown instruction: sdl $a2, 0x7($a0) */);
                M2C_ERROR(/* unknown instruction: sdr $a2, ($a0) */);
                M2C_FIELD(&spA0, s32 *, 8) = temp_7_5;
                ovl_ntgui2_func_0013F158(&spA0, M2C_FIELD(temp_19, s16 *, 0x38), &sp30, temp_7_5, 0x42240000);
                var_17_2 = sp30;
                if (var_17_2 != NULL) {
                    var_16 = M2C_FIELD(var_17_2, void **, 0xC);
loop_30:
                    temp_2_5 = M2C_FIELD(var_16, s32 *, 0xC);
                    if (!(temp_2_5 & 0x01000000)) {
                        if (!(temp_2_5 & 0x01000060)) {
                            temp_10_2 = M2C_FIELD(arg0, void **, 8);
                            temp_2_6 = M2C_FIELD(temp_10_2, void **, 0x60);
                            M2C_FIELD((temp_2_6 + 0x48), M2C_UNK (**)(void *, M2C_UNK, s8, M2C_UNK, s32 *, s32 *, void *, f32), 4)(temp_10_2 + M2C_FIELD(temp_2_6, s16 *, 0x48), 0, M2C_FIELD(arg0, s8 *, 0), 0, &sp60, &sp64, temp_10_2, D_00483124);
                            func_001CE218(var_16, temp_19, 0x186A0, 0, 0, spB0 | 0x40, 0, 1, (f32) sp60, (f32) sp64);
                            M2C_FIELD(arg0, s32 *, 0x18) = 1;
                        } else {
                            goto block_34;
                        }
                    } else {
block_34:
                        var_17_2 = *var_17_2;
                        if (var_17_2 != NULL) {
                            var_16 = M2C_FIELD(var_17_2, void **, 0xC);
                            goto loop_30;
                        }
                    }
                }
            }
            M2C_FIELD(arg0, s32 *, 0x18) = 1;
        } else {
            func_002C86F8(arg0);
        }
    }
    if (!(M2C_FIELD(temp_19, u16 *, 0x126) & 0x10) || (M2C_FIELD(temp_19, s32 *, 0x448) != 0)) {
        M2C_FIELD(temp_19, s32 *, 0x578) = 2;
        if (arg0 != NULL) {
            temp_2_7 = M2C_FIELD(arg0, void **, 0x14);
            M2C_FIELD((temp_2_7 + 8), M2C_UNK (**)(void *, M2C_UNK), 4)(arg0 + M2C_FIELD(temp_2_7, s16 *, 8), 3);
        }
        func_00194300(&sp30);
        return;
    }
    if (func_001353A8(M2C_FIELD(temp_19, s32 *, 0x3C0)) != 0) {
        D_0048382F = 0x3C;
    }
    func_00194300(&sp30);
}
