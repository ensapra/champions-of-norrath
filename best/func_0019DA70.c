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

f32 func_0019E250(s32, f32);                        /* extern */
f32 func_0019FC80(s32, f32);                        /* extern */
f32 func_0019FCA8(s32, s32, s32, s32, s32, u32, f32, f32); /* extern */
extern M2C_UNK jtbl_00503023;

f32 func_0019DA70(s32 arg0, f32 fparg0, f32 fparg1) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp14;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f13;
    f32 temp_f13_2;
    f32 temp_f13_3;
    f32 temp_f13_4;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f16_3;
    f32 temp_f16_4;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f20;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f4_3;
    f32 temp_f6;
    f32 temp_f7;
    f32 var_5;
    f32 var_7_2;
    f32 var_f0;
    f32 var_f1;
    f32 var_f20;
    f32 var_f2;
    f32 var_f4;
    f32 var_f4_2;
    f32 var_f8;
    s32 temp_16;
    s32 temp_17;
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_2_4;
    s32 temp_3;
    s32 temp_3_2;
    s32 temp_3_3;
    s32 temp_3_4;
    s32 temp_4;
    s32 temp_4_2;
    s32 temp_6;
    s32 temp_6_2;
    s32 temp_7;
    s32 temp_8_2;
    s32 var_17;
    s32 var_20;
    s32 var_3;
    s32 var_4;
    s32 var_7;
    s32 var_8;
    s32 var_8_2;
    s32 var_f6;
    u32 temp_8;
    u32 temp_9;

    var_4 = arg0;
    temp_16 = M2C_BITWISE(s32, fparg1) & 0x7FFFFFFF;
    var_f0 = 1.0f;
    temp_17 = M2C_BITWISE(s32, fparg0) & 0x7FFFFFFF;
    if (temp_16 > 0x7FFFFF) {
        var_20 = 0;
        if (M2C_BITWISE(s32, fparg0) < 0) {
            if (temp_16 > 0x4B7FFFFF) {
                var_20 = 2;
            } else if (temp_16 > 0x3F7FFFFF) {
                temp_2 = 0x96 - (temp_16 >> 0x17);
                var_4 = temp_16 >> temp_2;
                if ((var_4 << temp_2) == temp_16) {
                    var_20 = 2 - (var_4 & 1);
                }
            }
        }
        if (temp_16 != 0x3F800000) {
            if (M2C_BITWISE(s32, fparg1) == 0x40000000) {
                return fparg0 * fparg0;
            }
            if ((M2C_BITWISE(s32, fparg1) == 0x3F000000) && (M2C_BITWISE(s32, fparg0) >= 0)) {
                return func_0019E250(var_4, fparg0);
            }
            temp_f12 = func_0019FC80(var_4, fparg0);
            if ((temp_17 <= 0x7FFFFF) || (temp_9 = M2C_BITWISE(u32, fparg0) >> 0x1F, (temp_17 == 0x3F800000))) {
                var_f4 = temp_f12;
                if (M2C_BITWISE(s32, fparg1) < 0) {
                    var_f4 = 1.0f / var_f4;
                }
                var_f0 = var_f4;
                if (M2C_BITWISE(s32, fparg0) < 0) {
                    if (((temp_17 + 0xC0800000) | var_20) == 0) {
                        temp_f0_2 = var_f4 - var_f4;
                        return temp_f0_2 / temp_f0_2;
                    }
                    if (var_20 == 1) {
                        var_f4 = -var_f4;
                    }
                    return var_f4;
                }
                /* Duplicate return node #70. Try simplifying control flow for better match */
                return var_f0;
            }
            if (((temp_9 - 1) | var_20) == 0) {
                temp_f0 = fparg0 - fparg0;
                return temp_f0 / temp_f0;
            }
            if (temp_16 > 0x4D000000) {
                if (temp_17 <= 0x3F7FFFF7) {
                    if (M2C_BITWISE(s32, fparg1) < 0) {
                        return M2C_FIELD(&jtbl_00503023, f32 *, 0x3401);
                    }
                    goto block_40;
                }
                if (temp_17 > 0x3F800007) {
                    if (M2C_BITWISE(s32, fparg1) > 0) {
                        return M2C_FIELD(&jtbl_00503023, f32 *, 0x3401);
                    }
block_40:
                    return 0.0f;
                }
                temp_f12_2 = fparg0 - 1.0f;
                temp_f16 = temp_f12_2 * 1.442688f;
                temp_f13 = (temp_f12_2 * 0.000007052607f) - (temp_f12_2 * temp_f12_2 * (0.5f - (temp_f12_2 * (0.3333333f - (temp_f12_2 * 0.25f)))) * 1.4426949f);
                sp0 = temp_f16 + temp_f13;
                var_f6 = M2C_BITWISE(s32, sp0) & ~0xFFF;
                var_f2 = temp_f13 - (M2C_BITWISE(f32, var_f6) - temp_f16);
                goto block_48;
            }
            temp_4 = temp_17 & 0x7FFFFF;
            temp_3 = temp_17 >> 0x17;
            var_8 = temp_3 - 0x7F;
            var_17 = temp_4 | 0x3F800000;
            var_7 = 0;
            if (temp_4 > 0x1CC471) {
                var_7 = 1;
                if (temp_4 > 0x5DB3D6) {
                    var_8 = temp_3 - 0x7E;
                    var_17 += 0xFF800000;
                    var_7 = 0;
                }
            }
            temp_6 = var_7 * 4;
            temp_f1 = *(&jtbl_00503023 + 0x337D + temp_6);
            temp_f16_2 = M2C_BITWISE(f32, var_17) - temp_f1;
            temp_f13_2 = 1.0f / (M2C_BITWISE(f32, var_17) + temp_f1);
            temp_f20 = temp_f16_2 * temp_f13_2;
            sp4 = temp_f20;
            temp_2_2 = M2C_BITWISE(s32, sp4) & ~0xFFF;
            temp_2_3 = ((var_17 >> 1) | 0x20000000) + (var_7 << 0x15) + 0x40000;
            temp_f14 = temp_f20 * temp_f20;
            temp_f1_2 = temp_f13_2 * ((temp_f16_2 - (M2C_BITWISE(f32, temp_2_2) * M2C_BITWISE(f32, temp_2_3))) - (M2C_BITWISE(f32, temp_2_2) * (M2C_BITWISE(f32, var_17) - (M2C_BITWISE(f32, temp_2_3) - temp_f1))));
            temp_f14_2 = M2C_BITWISE(f32, temp_2_2) * M2C_BITWISE(f32, temp_2_2);
            temp_f0_3 = (temp_f14 * temp_f14 * ((temp_f14 * ((temp_f14 * ((temp_f14 * ((temp_f14 * ((temp_f14 * 0.20697501f) + 0.23066074f)) + 0.2727281f)) + 0.33333334f)) + 0.42857143f)) + 0.59999996f)) + (temp_f1_2 * (M2C_BITWISE(f32, temp_2_2) + temp_f20));
            sp8 = temp_f14_2 + 3.0f + temp_f0_3;
            temp_3_2 = M2C_BITWISE(s32, sp8) & ~0xFFF;
            temp_f16_3 = M2C_BITWISE(f32, temp_2_2) * M2C_BITWISE(f32, temp_3_2);
            temp_f13_3 = (temp_f1_2 * M2C_BITWISE(f32, temp_3_2)) + ((temp_f0_3 - ((M2C_BITWISE(f32, temp_3_2) - 3.0f) - temp_f14_2)) * temp_f20);
            spC = temp_f16_3 + temp_f13_3;
            temp_2_4 = M2C_BITWISE(s32, spC) & ~0xFFF;
            temp_f3 = *(&jtbl_00503023 + 0x3385 + temp_6);
            temp_f2 = M2C_BITWISE(f32, temp_2_4) * 0.961792f;
            temp_f12_3 = (f32) var_8;
            temp_f1_3 = (M2C_BITWISE(f32, temp_2_4) * 0.000004701738f) + ((temp_f13_3 - (M2C_BITWISE(f32, temp_2_4) - temp_f16_3)) * 0.96179664f) + *(&jtbl_00503023 + 0x338D + temp_6);
            sp10 = temp_f2 + temp_f1_3 + temp_f3 + temp_f12_3;
            var_f6 = M2C_BITWISE(s32, sp10) & ~0xFFF;
            var_f2 = temp_f1_3 - (((M2C_BITWISE(f32, var_f6) - temp_f12_3) - temp_f3) - temp_f2);
block_48:
            var_f20 = 1.0f;
            if (((temp_9 - 1) | (var_20 - 1)) == 0) {
                var_f20 = -1.0f;
            }
            sp14 = fparg1;
            temp_3_3 = M2C_BITWISE(s32, sp14) & ~0xFFF;
            var_f8 = M2C_BITWISE(f32, temp_3_3) * M2C_BITWISE(f32, var_f6);
            temp_f7 = ((fparg1 - M2C_BITWISE(f32, temp_3_3)) * M2C_BITWISE(f32, var_f6)) + (fparg1 * var_f2);
            temp_f4 = temp_f7 + var_f8;
            var_7_2 = temp_f4;
            var_5 = temp_f4;
            temp_6_2 = M2C_BITWISE(s32, var_5) & 0x7FFFFFFF;
            if (M2C_BITWISE(s32, var_5) > 0) {
                if (temp_6_2 > 0x43010000) {
                    var_f1 = 9.9999994e29f;
                    goto block_62;
                }
                if (temp_6_2 == 0x43010000) {
                    var_3 = temp_6_2 >> 0x17;
                    if ((temp_f4 - var_f8) < (temp_f7 + 4.2995662e-8f)) {
                        var_f1 = 9.9999994e29f;
                        goto block_62;
                    }
                    goto block_64;
                }
                goto block_63;
            }
            if (temp_6_2 <= 0x42FC0000) {
                if (temp_6_2 == 0x42FC0000) {
                    var_3 = temp_6_2 >> 0x17;
                    if (temp_f7 <= (temp_f4 - var_f8)) {
                        goto block_61;
                    }
                    goto block_64;
                }
block_63:
                var_3 = temp_6_2 >> 0x17;
block_64:
                var_8_2 = 0;
                if (temp_6_2 > 0x3F000000) {
                    temp_8 = M2C_BITWISE(s32, var_5) + (0x800000 >> (var_3 - 0x7E));
                    temp_7 = ((temp_8 >> 0x17) & 0xFF) - 0x7F;
                    var_f8 -= M2C_BITWISE(f32, (temp_8 & ~(0x7FFFFF >> temp_7)));
                    var_5 = M2C_BITWISE(f32, (M2C_BITWISE(s32, var_5) < 0));
                    temp_8_2 = (s32) ((temp_8 & 0x7FFFFF) | 0x800000) >> (0x17 - temp_7);
                    var_8_2 = (M2C_BITWISE(s32, var_5) != 0) ? -temp_8_2 : temp_8_2;
                    var_7_2 = temp_f7 + var_f8;
                }
                temp_3_4 = M2C_BITWISE(s32, var_7_2) & ~0xFFF;
                temp_f16_4 = M2C_BITWISE(f32, temp_3_4) * 0.69314575f;
                temp_f13_4 = ((temp_f7 - (M2C_BITWISE(f32, temp_3_4) - var_f8)) * 0.6931471f) + (M2C_BITWISE(f32, temp_3_4) * 0.0000014286065f);
                temp_f4_2 = temp_f16_4 + temp_f13_4;
                temp_f12_4 = temp_f4_2 * temp_f4_2;
                temp_f1_4 = temp_f13_4 - (temp_f4_2 - temp_f16_4);
                temp_f6 = temp_f4_2 - (temp_f12_4 * ((temp_f12_4 * ((temp_f12_4 * ((temp_f12_4 * ((temp_f12_4 * 4.1381366e-8f) + -0.0000016533902f)) + 0.00006613755f)) + -0.0027777776f)) + 0.16666666f));
                temp_f4_3 = 1.0f - ((((temp_f4_2 * temp_f6) / (temp_f6 - 2.0f)) - (temp_f1_4 + (temp_f4_2 * temp_f1_4))) - temp_f4_2);
                temp_4_2 = M2C_BITWISE(s32, temp_f4_3) + (var_8_2 << 0x17);
                if ((temp_4_2 >> 0x17) <= 0) {
                    var_f4_2 = func_0019FCA8(var_8_2, M2C_BITWISE(s32, var_5), temp_6_2, M2C_BITWISE(s32, var_7_2), var_8_2, temp_9, temp_f4_3, temp_f13_4);
                } else {
                    var_f4_2 = M2C_BITWISE(f32, temp_4_2);
                }
                var_f0 = var_f20 * var_f4_2;
                /* Duplicate return node #70. Try simplifying control flow for better match */
                return var_f0;
            }
block_61:
            var_f1 = 9.999999e-31f;
block_62:
            return var_f20 * var_f1 * var_f1;
        }
        if (M2C_BITWISE(s32, fparg1) >= 0) {
            return fparg0;
        }
        return 1.0f / fparg0;
    }
    return var_f0;
}
