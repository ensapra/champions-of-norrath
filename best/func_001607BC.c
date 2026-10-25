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

void func_001607BC(void *arg0) {
    u8 sp0;
    u8 sp1;
    u8 sp2;
    s8 sp3;
    u8 sp4;
    u8 sp5;
    u8 sp6;
    s8 sp7;
    f32 temp_f1;
    f32 temp_f3;
    f32 var_3;
    f32 var_3_2;
    f32 var_3_3;
    f32 var_3_4;
    f32 var_4;
    f32 var_f0;
    s32 temp_4;
    s32 temp_4_2;
    s32 temp_4_3;
    s32 temp_4_4;
    s32 temp_4_5;
    s32 temp_4_6;
    s32 var_9;
    s32 var_9_2;
    s8 temp_3;
    s8 temp_3_2;
    s8 temp_4_10;
    s8 temp_4_11;
    s8 temp_4_12;
    s8 temp_4_13;
    s8 temp_4_14;
    s8 temp_4_15;
    s8 temp_4_16;
    s8 temp_4_7;
    s8 temp_4_8;
    s8 temp_4_9;
    s8 var_2;
    s8 var_2_10;
    s8 var_2_11;
    s8 var_2_12;
    s8 var_2_2;
    s8 var_2_3;
    s8 var_2_4;
    s8 var_2_5;
    s8 var_2_6;
    s8 var_2_7;
    s8 var_2_8;
    s8 var_2_9;
    u8 temp_11;
    u8 temp_5_2;
    u8 temp_9;
    u8 var_3_5;
    u8 var_4_2;
    void *temp_5;
    void *temp_6;
    void *temp_7;
    void *temp_8;
    void *var_7;
    void *var_7_2;
    void *var_8;
    void *var_8_2;

    temp_6 = arg0 + 0x910;
    temp_5 = temp_6 + (M2C_FIELD(arg0, s32 *, 0x4EC) * 0x19C0);
    temp_8 = temp_5 + 0x150;
    temp_7 = temp_5 + 0x310;
    if (M2C_FIELD(temp_6, s32 *, 0x33B0) != 0) {
        temp_f1 = (f32) M2C_FIELD(arg0, s32 *, 0x5B0);
        M2C_FIELD(temp_5, u8 *, 0x150) = (u8) M2C_FIELD(temp_6, u8 *, 0x33A4);
        temp_f3 = temp_f1 / 10.0f;
        M2C_FIELD(temp_8, u8 *, 1) = (u8) M2C_FIELD(temp_6, u8 *, 0x33A5);
        M2C_FIELD(temp_8, u8 *, 2) = (u8) M2C_FIELD(temp_6, u8 *, 0x33A6);
        M2C_FIELD(temp_8, s8 *, 3) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(temp_6, u8 *, 0x33A7)) / 255);
        var_8 = temp_5 + 0x170;
        M2C_FIELD(temp_5, u8 *, 0x310) = (u8) M2C_FIELD(temp_6, u8 *, 0x33A4);
        M2C_FIELD(temp_7, u8 *, 1) = (u8) M2C_FIELD(temp_6, u8 *, 0x33A5);
        M2C_FIELD(temp_7, u8 *, 2) = (u8) M2C_FIELD(temp_6, u8 *, 0x33A6);
        M2C_FIELD(temp_7, s8 *, 3) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(temp_6, u8 *, 0x33A7)) / 255);
        var_7 = temp_5 + 0x330;
        temp_5_2 = M2C_FIELD(temp_6, u8 *, 0x33A4);
        temp_4 = temp_5_2 - M2C_FIELD(temp_6, u8 *, 0x33A0);
        if (temp_4 >= 0) {
            var_3 = temp_f1;
            if (((f32) ((temp_4 < 0x100) ? temp_4 : 0xFF) / temp_f3) >= 2.1474836e9f) {
                goto block_6;
            }
        } else {
            var_3 = temp_f1;
            if ((0.0f / temp_f3) >= 2.1474836e9f) {
block_6:
                var_3 = M2C_BITWISE(f32, (M2C_BITWISE(s32, temp_f1) | 0x80000000));
            }
        }
        temp_11 = M2C_FIELD(temp_6, u8 *, 0x33A5);
        temp_4_2 = temp_11 - M2C_FIELD(temp_6, u8 *, 0x33A1);
        sp0 = M2C_BITWISE(u8, var_3);
        if (temp_4_2 >= 0) {
            var_3_2 = temp_f1;
            if (((f32) ((temp_4_2 < 0x100) ? temp_4_2 : 0xFF) / temp_f3) >= 2.1474836e9f) {
                goto block_12;
            }
        } else {
            var_3_2 = temp_f1;
            if ((0.0f / temp_f3) >= 2.1474836e9f) {
block_12:
                var_3_2 = M2C_BITWISE(f32, (M2C_BITWISE(s32, temp_f1) | 0x80000000));
            }
        }
        temp_9 = M2C_FIELD(temp_6, u8 *, 0x33A6);
        temp_4_3 = temp_9 - M2C_FIELD(temp_6, u8 *, 0x33A2);
        sp1 = M2C_BITWISE(u8, var_3_2);
        if (temp_4_3 >= 0) {
            var_f0 = (f32) ((temp_4_3 < 0x100) ? temp_4_3 : 0xFF);
        } else {
            var_f0 = 0.0f;
        }
        var_4 = temp_f1;
        if ((var_f0 / temp_f3) >= 2.1474836e9f) {
            var_4 = M2C_BITWISE(f32, (M2C_BITWISE(s32, temp_f1) | 0x80000000));
        }
        sp2 = M2C_BITWISE(u8, var_4);
        temp_4_4 = M2C_FIELD(temp_6, u8 *, 0x33A8) - temp_5_2;
        sp3 = -0x80;
        if (temp_4_4 >= 0) {
            var_3_3 = temp_f1;
            if (((f32) ((temp_4_4 < 0x100) ? temp_4_4 : 0xFF) / temp_f3) >= 2.1474836e9f) {
                goto block_23;
            }
        } else {
            var_3_3 = temp_f1;
            if ((0.0f / temp_f3) >= 2.1474836e9f) {
block_23:
                var_3_3 = M2C_BITWISE(f32, (M2C_BITWISE(s32, temp_f1) | 0x80000000));
            }
        }
        temp_4_5 = M2C_FIELD(temp_6, u8 *, 0x33A9) - temp_11;
        sp4 = M2C_BITWISE(u8, var_3_3);
        if (temp_4_5 >= 0) {
            var_3_4 = temp_f1;
            if (((f32) ((temp_4_5 < 0x100) ? temp_4_5 : 0xFF) / temp_f3) >= 2.1474836e9f) {
                goto block_29;
            }
        } else {
            var_3_4 = temp_f1;
            if ((0.0f / temp_f3) >= 2.1474836e9f) {
block_29:
                var_3_4 = M2C_BITWISE(f32, (M2C_BITWISE(s32, temp_f1) | 0x80000000));
            }
        }
        temp_4_6 = M2C_FIELD(temp_6, u8 *, 0x33AA) - temp_9;
        sp5 = M2C_BITWISE(u8, var_3_4);
        if (temp_4_6 >= 0) {
            var_3_5 = 0x4F000000;
            if (((f32) ((temp_4_6 < 0x100) ? temp_4_6 : 0xFF) / temp_f3) >= 2.1474836e9f) {
                goto block_35;
            }
        } else {
            var_3_5 = 0x4F000000;
            if ((0.0f / temp_f3) >= 2.1474836e9f) {
block_35:
                var_3_5 = 0x4F000000 | 0x80000000;
            }
        }
        sp6 = var_3_5;
        sp7 = -0x80;
        var_9 = 0;
        do {
            if (var_9 > 6) {
                temp_4_7 = sp4 + M2C_FIELD(temp_6, u8 *, 0x33A8);
                if (temp_4_7 >= 0) {
                    var_2 = (temp_4_7 < 0x100) ? temp_4_7 : -1;
                } else {
                    var_2 = 0;
                }
                M2C_FIELD(var_7, s8 *, 0) = var_2;
                temp_4_8 = sp5 + M2C_FIELD(temp_6, u8 *, 0x33A9);
                if (temp_4_8 >= 0) {
                    var_2_2 = (temp_4_8 < 0x100) ? temp_4_8 : -1;
                } else {
                    var_2_2 = 0;
                }
                M2C_FIELD(var_7, s8 *, 1) = var_2_2;
                temp_4_9 = sp6 + M2C_FIELD(temp_6, u8 *, 0x33AA);
                if (temp_4_9 >= 0) {
                    var_2_3 = (temp_4_9 < 0x100) ? temp_4_9 : -1;
                } else {
                    var_2_3 = 0;
                }
                M2C_FIELD(var_7, s8 *, 2) = var_2_3;
                M2C_FIELD(var_7, s8 *, 3) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(temp_6, u8 *, 0x33AB)) / 255);
                temp_3 = sp0 + M2C_FIELD(temp_6, u8 *, 0x33A0);
                if (temp_3 >= 0) {
                    var_2_4 = (temp_3 < 0x100) ? temp_3 : -1;
                } else {
                    var_2_4 = 0;
                }
                M2C_FIELD(var_8, s8 *, 0) = var_2_4;
                temp_4_10 = sp1 + M2C_FIELD(temp_6, u8 *, 0x33A1);
                if (temp_4_10 >= 0) {
                    var_2_5 = (temp_4_10 < 0x100) ? temp_4_10 : -1;
                } else {
                    var_2_5 = 0;
                }
                M2C_FIELD(var_8, s8 *, 1) = var_2_5;
                temp_4_11 = sp2 + M2C_FIELD(temp_6, u8 *, 0x33A2);
                if (temp_4_11 >= 0) {
                    var_2_6 = (temp_4_11 < 0x100) ? temp_4_11 : -1;
                } else {
                    var_2_6 = 0;
                }
                M2C_FIELD(var_8, s8 *, 2) = var_2_6;
                var_4_2 = M2C_FIELD(temp_6, u8 *, 0x33A3);
            } else {
                temp_4_12 = sp0 + M2C_FIELD(temp_6, u8 *, 0x33A0);
                if (temp_4_12 >= 0) {
                    var_2_7 = (temp_4_12 < 0x100) ? temp_4_12 : -1;
                } else {
                    var_2_7 = 0;
                }
                M2C_FIELD(var_7, s8 *, 0) = var_2_7;
                temp_4_13 = sp1 + M2C_FIELD(temp_6, u8 *, 0x33A1);
                if (temp_4_13 >= 0) {
                    var_2_8 = (temp_4_13 < 0x100) ? temp_4_13 : -1;
                } else {
                    var_2_8 = 0;
                }
                M2C_FIELD(var_7, s8 *, 1) = var_2_8;
                temp_4_14 = sp2 + M2C_FIELD(temp_6, u8 *, 0x33A2);
                if (temp_4_14 >= 0) {
                    var_2_9 = (temp_4_14 < 0x100) ? temp_4_14 : -1;
                } else {
                    var_2_9 = 0;
                }
                M2C_FIELD(var_7, s8 *, 2) = var_2_9;
                M2C_FIELD(var_7, s8 *, 3) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(temp_6, u8 *, 0x33A3)) / 255);
                temp_3_2 = sp4 + M2C_FIELD(temp_6, u8 *, 0x33A8);
                if (temp_3_2 >= 0) {
                    var_2_10 = (temp_3_2 < 0x100) ? temp_3_2 : -1;
                } else {
                    var_2_10 = 0;
                }
                M2C_FIELD(var_8, s8 *, 0) = var_2_10;
                temp_4_15 = sp5 + M2C_FIELD(temp_6, u8 *, 0x33A9);
                if (temp_4_15 >= 0) {
                    var_2_11 = (temp_4_15 < 0x100) ? temp_4_15 : -1;
                } else {
                    var_2_11 = 0;
                }
                M2C_FIELD(var_8, s8 *, 1) = var_2_11;
                temp_4_16 = sp6 + M2C_FIELD(temp_6, u8 *, 0x33AA);
                if (temp_4_16 >= 0) {
                    var_2_12 = (temp_4_16 < 0x100) ? temp_4_16 : -1;
                } else {
                    var_2_12 = 0;
                }
                M2C_FIELD(var_8, s8 *, 2) = var_2_12;
                var_4_2 = M2C_FIELD(temp_6, u8 *, 0x33AB);
            }
            M2C_FIELD(var_8, s8 *, 3) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * var_4_2) / 255);
            var_9 += 1;
            var_8 += 0x20;
            var_7 += 0x20;
        } while (var_9 < 0xC);
        return;
    }
    var_9_2 = 0xB;
    M2C_FIELD(temp_5, u8 *, 0x150) = (u8) M2C_FIELD(temp_6, u8 *, 0x33A0);
    M2C_FIELD(temp_8, u8 *, 1) = (u8) M2C_FIELD(temp_6, u8 *, 0x33A1);
    M2C_FIELD(temp_8, u8 *, 2) = (u8) M2C_FIELD(temp_6, u8 *, 0x33A2);
    M2C_FIELD(temp_8, s8 *, 3) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(temp_6, u8 *, 0x33A3)) / 255);
    var_8_2 = temp_8 + 0x20;
    M2C_FIELD(temp_5, u8 *, 0x310) = (u8) M2C_FIELD(temp_6, u8 *, 0x33A0);
    M2C_FIELD(temp_7, u8 *, 1) = (u8) M2C_FIELD(temp_6, u8 *, 0x33A1);
    M2C_FIELD(temp_7, u8 *, 2) = (u8) M2C_FIELD(temp_6, u8 *, 0x33A2);
    M2C_FIELD(temp_7, s8 *, 3) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(temp_6, u8 *, 0x33A3)) / 255);
    var_7_2 = temp_7 + 0x20;
    do {
        var_9_2 -= 1;
        M2C_FIELD(var_7_2, u8 *, 0) = (u8) M2C_FIELD(temp_6, u8 *, 0x33A0);
        M2C_FIELD(var_7_2, u8 *, 1) = (u8) M2C_FIELD(temp_6, u8 *, 0x33A1);
        M2C_FIELD(var_7_2, u8 *, 2) = (u8) M2C_FIELD(temp_6, u8 *, 0x33A2);
        M2C_FIELD(var_7_2, s8 *, 3) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(temp_6, u8 *, 0x33A3)) / 255);
        var_7_2 += 0x20;
        M2C_FIELD(var_8_2, u8 *, 0) = (u8) M2C_FIELD(temp_6, u8 *, 0x33A0);
        M2C_FIELD(var_8_2, u8 *, 1) = (u8) M2C_FIELD(temp_6, u8 *, 0x33A1);
        M2C_FIELD(var_8_2, u8 *, 2) = (u8) M2C_FIELD(temp_6, u8 *, 0x33A2);
        M2C_FIELD(var_8_2, s8 *, 3) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(temp_6, u8 *, 0x33A3)) / 255);
        var_8_2 += 0x20;
    } while (var_9_2 >= 0);
}
