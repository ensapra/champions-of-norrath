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

M2C_UNK func_00163CB0(s32, s32, void *, u32, s32);  /* extern */
void *func_0024A120(void *);                        /* extern */
M2C_UNK func_0024A660(M2C_UNK, M2C_UNK *, M2C_UNK, s32, s32, s32, s16, s32); /* extern */
s32 func_0024ADB8(M2C_UNK);                         /* extern */
M2C_UNK func_0024C1C0();                            /* extern */
M2C_UNK func_00303EB8(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK D_0037F988;
extern M2C_UNK D_0042DE48;
extern u32 D_00483E58;
extern M2C_UNK D_004859A0;
extern s32 D_004859BC;
extern M2C_UNK D_007D80C0;
extern M2C_UNK D_007DD290;
extern M2C_UNK D_007DD8C0;
extern M2C_UNK D_007DD8D0;

void func_0024DA80(void) {
    M2C_UNK *var_21;
    f32 temp_f0;
    s32 *temp_5;
    s32 *var_4;
    s32 *var_4_2;
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_2_6;
    s32 temp_7;
    s32 temp_8;
    s32 var_18;
    s32 var_19;
    s32 var_20;
    s32 var_2;
    s32 var_30;
    s32 var_3;
    s32 var_3_2;
    s32 var_5;
    s32 var_5_2;
    s32 var_5_4;
    s32 var_5_5;
    s8 *var_3_3;
    s8 *var_3_4;
    s8 *var_5_3;
    s8 temp_2_5;
    s8 temp_3_2;
    u32 temp_3_3;
    u32 temp_4;
    void *temp_2_4;
    void *temp_2_7;
    void *temp_3;
    void *var_17;
    void *var_2_2;
    void *var_6;

    if (!(func_0024ADB8(2) & 0x20)) {
        var_5 = 0;
        if (M2C_FIELD(&D_007DD290, s32 *, 0x39C) != 0) {
            var_5 = M2C_FIELD(&D_007DD290, s32 *, 0x3A8);
        }
        if (M2C_FIELD(&D_007DD290, s32 *, 0x548) > 0) {
            var_4 = &D_007DD290 + 0x3F4;
            var_3 = M2C_FIELD(&D_007DD290, s32 *, 0x548);
            do {
                temp_2 = *var_4;
                var_4 += 0x30;
                var_3 -= 1;
                var_5 |= temp_2;
            } while (var_3 != 0);
        }
        if (!(var_5 & 0x20)) {
            var_5_2 = 0;
            if (M2C_FIELD(&D_007DD290, s32 *, 0x14) != 0) {
                var_5_2 = M2C_FIELD(&D_007DD290, s32 *, 0x20);
            }
            if (M2C_FIELD(&D_007DD290, s32 *, 0x1C0) > 0) {
                var_4_2 = &D_007DD290 + 0x6C;
                var_3_2 = M2C_FIELD(&D_007DD290, s32 *, 0x1C0);
                do {
                    temp_2_2 = *var_4_2;
                    var_4_2 += 0x30;
                    var_3_2 -= 1;
                    var_5_2 |= temp_2_2;
                } while (var_3_2 != 0);
            }
            if (!(var_5_2 & 0x20)) {
                if (M2C_FIELD(&D_007DD290, s32 *, 0x548) <= 0) {
                    temp_8 = D_004859BC;
                    var_30 = 0;
                    if (temp_8 > 0) {
                        var_19 = 0;
                        var_21 = &D_007DD8C0;
                        do {
                            var_6 = &D_007DD8C0 + 0xC;
                            temp_5 = var_19 + var_6;
                            temp_2_3 = *temp_5;
                            *temp_5 = temp_2_3 - 1;
                            if (temp_2_3 <= 0) {
                                temp_4 = (D_00483E58 * 0x19660D) + 0x3C6EF35F;
                                *temp_5 = M2C_BITWISE(s32, ((f32) (temp_4 >> 0x10) * 0.000015258789f * (f32) (M2C_FIELD((&D_007DD8C0 + var_19), s32 *, 4) - M2C_FIELD(var_21, s32 *, 0))));
                                var_20 = 0;
                                if (M2C_FIELD(var_21, s32 *, 8) > 0) {
                                    temp_2_4 = var_6 + var_19;
                                    temp_3 = temp_2_4;
                                    var_6 = M2C_FIELD(temp_2_4, void **, -4);
                                    var_5_3 = temp_3 + 0x34;
                                    do {
                                        temp_3_2 = *var_5_3;
                                        var_5_3 += 0x29;
                                        var_6 -= 1;
                                        var_20 = (temp_3_2 == 0) ? (var_20 + 1) : var_20;
                                    } while (var_6 != NULL);
                                }
                                if (var_20 != 0) {
                                    var_18 = 0;
                                    temp_3_3 = (temp_4 * 0x19660D) + 0x3C6EF35F;
                                    var_5_4 = (s32) (temp_3_3 >> 0x10) % var_20;
                                    D_00483E58 = temp_3_3;
                                    if ((M2C_FIELD(var_21, s32 *, 8) - 1) > 0) {
                                        var_6 = NULL;
                                        var_3_3 = var_19 + &D_007DD8D0 + 0x30;
loop_23:
                                        temp_2_5 = *var_3_3;
                                        var_3_3 += 0x29;
                                        var_17 = var_6;
                                        if ((temp_2_5 != 0) || (var_5_4 -= 1, (var_5_4 >= 0))) {
                                            var_18 += 1;
                                            var_6 = var_17 + 4;
                                            if (var_18 >= (M2C_FIELD((&D_007DD8D0 + var_19), s32 *, -8) - 1)) {
                                                var_17 = (void *) (var_18 * 4);
                                            } else {
                                                goto loop_23;
                                            }
                                        }
                                    } else {
                                        var_17 = NULL;
                                    }
                                    temp_2_6 = var_19 + 0x10;
                                    func_00163CB0(*(temp_2_6 + &D_007DD8C0), M2C_FIELD((&D_007DD8C0 + temp_2_6), s32 *, 4), var_6, temp_4, temp_8);
                                    M2C_ERROR(/* unknown instruction: min.s $f1, $f20, $f1 */);
                                    M2C_ERROR(/* unknown instruction: max.s $f2, $f2, $f0 */);
                                    temp_f0 = M2C_ERROR(/* unknown instruction: min.s $f0, $f20, $f2 */);
                                    if (temp_f0 != M2C_FIELD(&D_0042DE48, f32 *, 8)) {
                                        M2C_FIELD(&D_0042DE48, f32 *, 8) = temp_f0;
                                        func_0024C1C0();
                                    }
                                    temp_2_7 = func_0024A120(var_19 + (((s32) (var_17 + var_18) * 8) + var_18) + (&D_007DD8C0 + 0x18));
                                    var_2 = var_20 < 2;
                                    if (temp_2_7 != NULL) {
                                        if (M2C_FIELD(temp_2_7, s32 *, 0x90) != M2C_FIELD(temp_2_7, s32 *, 0x40)) {
                                            func_00303EB8(&D_007D80C0, &D_004859A0, &D_0037F988);
                                            temp_7 = M2C_FIELD(temp_2_7, s32 *, 0x40);
                                            func_0024A660(2, &D_007D80C0, 0x80, temp_7, M2C_FIELD(temp_2_7, s32 *, 0x90) - temp_7, M2C_FIELD(temp_2_7, s32 *, 0x44), M2C_FIELD(temp_2_7, s16 *, 0x48), M2C_FIELD(temp_2_7, s32 *, 0x4C));
                                        }
                                        var_2 = var_20 < 2;
                                    }
                                    var_2_2 = var_17 + var_18;
                                    if (var_2 != 0) {
                                        var_5_5 = 0;
                                        if (M2C_FIELD(var_21, s32 *, 8) > 0) {
                                            var_3_4 = var_19 + &D_007DD8D0 + 0x30;
                                            do {
                                                *var_3_4 = 0;
                                                var_5_5 += 1;
                                                var_3_4 += 0x29;
                                            } while (var_5_5 < *(var_19 + (&D_007DD8D0 - 8)));
                                        }
                                        var_2_2 = var_17 + var_18;
                                    }
                                    M2C_FIELD((((s32) var_2_2 * 8) + var_18 + var_19 + &D_007DD8D0), s8 *, 0x30) = 1;
                                } else {
                                    D_00483E58 = temp_4;
                                }
                            }
                            var_30 += 1;
                            var_19 += 0x2A8;
                            var_21 += 0x2A8;
                        } while (var_30 < temp_8);
                    }
                }
            }
        }
    }
}
