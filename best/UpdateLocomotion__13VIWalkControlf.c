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

s32 UpdateLocomotion__13VIWalkControlf(void *arg0, f32 fparg0) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f7;
    f32 temp_f8;
    f32 var_f0;
    s32 temp_3_2;
    s32 temp_3_3;
    s32 var_2;
    void *temp_2;
    void *temp_3;
    void *temp_4;
    void *temp_5;

    temp_2 = arg0 + 0xB0;
    temp_3 = arg0 + 0x138;
    temp_4 = arg0 + 0x74;
    temp_5 = arg0 + 0x80;
    temp_f8 = M2C_FIELD(temp_2, f32 *, 8) - M2C_FIELD(temp_3, f32 *, 8);
    temp_f0 = M2C_FIELD(arg0, f32 *, 0xB0) - M2C_FIELD(arg0, f32 *, 0x138);
    temp_f7 = M2C_FIELD(temp_2, f32 *, 4) - M2C_FIELD(temp_3, f32 *, 4);
    sp8 = 0.0f;
    sp0 = 0.0f;
    sp4 = 0.0f;
    sp10 = temp_f0;
    sp18 = temp_f8;
    sp14 = temp_f7;
    sp0 = temp_f0;
    sp4 = temp_f7;
    temp_f4 = ((temp_f0 * M2C_FIELD(arg0, f32 *, 0x74)) + (temp_f7 * M2C_FIELD(temp_4, f32 *, 4)) + (temp_f8 * M2C_FIELD(temp_4, f32 *, 8))) / fparg0;
    temp_f3 = ((temp_f0 * M2C_FIELD(arg0, f32 *, 0x80)) + (temp_f7 * M2C_FIELD(temp_5, f32 *, 4)) + (temp_f8 * M2C_FIELD(temp_5, f32 *, 8))) / fparg0;
    sp8 = temp_f8;
    if (!(M2C_FIELD(arg0, s64 *, 0xF8) & 0x18FC)) {
        var_2 = 6;
        if ((s32) M2C_FIELD(arg0, s64 *, 0xF8) & 1) {
            temp_f0_2 = M2C_FIELD(arg0, f32 *, 0xC);
            if (!((temp_f0_2 + ((M2C_FIELD(arg0, f32 *, 0x10) - temp_f0_2) * 0.099999994f)) < temp_f4)) {
                temp_f5 = M2C_FIELD(arg0, f32 *, 8);
                if ((!(temp_f5 < temp_f3) || !(fabsf(temp_f4) < fabsf(temp_f3)) || (temp_3_2 = M2C_FIELD(arg0, s32 *, 0x188), (temp_3_2 == 1)) || (var_2 = 0xB, (temp_3_2 == 2))) && (!(temp_f3 < -temp_f5) || !(fabsf(temp_f4) < fabsf(temp_f3)) || (temp_3_3 = M2C_FIELD(arg0, s32 *, 0x188), (temp_3_3 == 1)) || (var_2 = 0xA, (temp_3_3 == 2)))) {
                    if (!(temp_f5 < temp_f3)) {
                        var_f0 = -temp_f5;
                        goto block_23;
                    }
                    if (!((fabsf(temp_f4) * 1.5f) < fabsf(temp_f3))) {
                        var_f0 = -temp_f5;
block_23:
                        if (!(temp_f3 < var_f0) || (var_2 = 0xA, !((fabsf(temp_f4) * 1.5f) < fabsf(temp_f3)))) {
                            if (!(temp_f5 < temp_f4)) {
                                if (!(temp_f4 < -temp_f5)) {
                                    temp_f2 = M2C_FIELD(arg0, f32 *, 0xD4);
                                    temp_f0_3 = M2C_FIELD(arg0, f32 *, 0x18) * 0.5f;
                                    if (!(temp_f0_3 < temp_f2)) {
                                        var_2 = 5;
                                        if (!(temp_f2 < -temp_f0_3)) {
                                            M2C_FIELD(arg0, s32 *, 0x100) = 0;
                                        } else {
                                            goto block_49;
                                        }
                                    } else {
                                        var_2 = 4;
                                        goto block_49;
                                    }
                                } else {
                                    var_2 = 2;
                                    goto block_49;
                                }
                            } else {
                                var_2 = 1;
                                goto block_49;
                            }
                        } else {
                            goto block_49;
                        }
                    } else {
                        var_2 = 0xB;
                        goto block_49;
                    }
                } else {
                    goto block_49;
                }
            } else {
                var_2 = 3;
                goto block_49;
            }
        } else {
            goto block_49;
        }
    } else {
        temp_f2_2 = M2C_FIELD(arg0, f32 *, 0x18) * 0.25f;
        if (!(temp_f2_2 < fabsf(M2C_FIELD(arg0, f32 *, 0xD8)))) {
            var_2 = 0xC;
            if (!(temp_f2_2 < fabsf(M2C_FIELD(arg0, f32 *, 0xD4)))) {
                temp_f1 = M2C_FIELD(arg0, f32 *, 8);
                if (!(temp_f1 < temp_f4)) {
                    if (!(temp_f1 < fabsf(temp_f3))) {
                        var_2 = 0xD;
                    } else {
                        goto block_48;
                    }
                }
            }
        } else {
block_48:
            var_2 = 0xC;
        }
block_49:
        M2C_FIELD(arg0, s32 *, 0x100) = var_2;
    }
    return 0;
}
