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

s32 xmlURIUnescapeString(void *, s32, M2C_UNK);     /* extern */
extern M2C_UNK (*D_011B1E18)(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

s32 xmlParseURIRelSegment(void *arg0, void **arg1) {
    s32 temp_2;
    s32 temp_4;
    s32 temp_4_3;
    s32 var_2;
    s32 var_2_2;
    s32 var_2_3;
    u8 temp_3;
    u8 temp_3_2;
    u8 temp_3_3;
    u8 temp_3_4;
    u8 temp_4_2;
    u8 temp_5;
    void *temp_16;
    void *var_16;

    var_2 = -1;
    if (arg1 != NULL) {
        temp_16 = *arg1;
        temp_5 = M2C_FIELD(temp_16, u8 *, 0);
        if ((u32) (temp_5 - 0x61) >= 0x1AU) {
            var_2_2 = temp_5 << 0x18;
            if (((u32) (temp_5 - 0x41) >= 0x1AU) && (var_2_2 = temp_5 << 0x18, (((u32) (temp_5 - 0x30) < 0xAU) == 0))) {
                if (((s8) temp_5 != 0x2D) && ((s8) temp_5 != 0x5F) && ((s8) temp_5 != 0x2E) && ((s8) temp_5 != 0x21) && ((s8) temp_5 != 0x7E) && ((s8) temp_5 != 0x2A) && ((s8) temp_5 != 0x27) && ((s8) temp_5 != 0x28) && ((s8) temp_5 != 0x29)) {
                    var_2_2 = temp_5 << 0x18;
                    if (((s8) temp_5 != 0x25) || ((temp_3 = M2C_FIELD(temp_16, u8 *, 1), (((u32) (temp_3 - 0x30) < 0xAU) == 0)) && ((u32) (temp_3 - 0x61) >= 6U) && (var_2_2 = temp_5 << 0x18, (((u32) (temp_3 - 0x41) < 6U) == 0))) || ((temp_3_2 = M2C_FIELD(temp_16, u8 *, 2), var_2_2 = temp_5 << 0x18, (((u32) (temp_3_2 - 0x30) < 0xAU) == 0)) && (var_2_2 = temp_5 << 0x18, (((u32) (temp_3_2 - 0x61) < 6U) == 0)) && (var_2_2 = temp_5 << 0x18, (((u32) (temp_3_2 - 0x41) < 6U) == 0)))) {
                        temp_4 = var_2_2 >> 0x18;
                        if ((temp_4 == 0x3B) || (temp_4 == 0x40) || (temp_4 == 0x26) || (temp_4 == 0x3D) || (temp_4 == 0x2B) || (temp_4 == 0x24) || (var_2 = 3, (temp_4 == 0x2C))) {
                            goto block_27;
                        }
                    } else {
                        goto block_28;
                    }
                } else {
                    goto block_27;
                }
            } else {
                goto block_28;
            }
        } else {
block_27:
            var_2_2 = temp_5 << 0x18;
block_28:
            var_16 = (((var_2_2 >> 0x18) ^ 0x25) != 0) ? (temp_16 + 1) : (temp_16 + 3);
loop_31:
            temp_4_2 = M2C_FIELD(var_16, u8 *, 0);
            var_2_3 = temp_4_2 << 0x18;
            if ((u32) (temp_4_2 - 0x61) < 0x1AU) {
block_30:
                var_16 = (((var_2_3 >> 0x18) ^ 0x25) != 0) ? (var_16 + 1) : (var_16 + 3);
                goto loop_31;
            }
            var_2_3 = temp_4_2 << 0x18;
            if ((u32) (temp_4_2 - 0x41) < 0x1AU) {
                goto block_30;
            }
            var_2_3 = temp_4_2 << 0x18;
            if ((u32) (temp_4_2 - 0x30) < 0xAU) {
                goto block_30;
            }
            if ((s8) temp_4_2 == 0x2D) {
                var_2_3 = temp_4_2 << 0x18;
                goto block_30;
            }
            if ((s8) temp_4_2 == 0x5F) {
                var_2_3 = temp_4_2 << 0x18;
                goto block_30;
            }
            if ((s8) temp_4_2 == 0x2E) {
                var_2_3 = temp_4_2 << 0x18;
                goto block_30;
            }
            if ((s8) temp_4_2 == 0x21) {
                var_2_3 = temp_4_2 << 0x18;
                goto block_30;
            }
            if ((s8) temp_4_2 == 0x7E) {
                var_2_3 = temp_4_2 << 0x18;
                goto block_30;
            }
            if ((s8) temp_4_2 == 0x2A) {
                var_2_3 = temp_4_2 << 0x18;
                goto block_30;
            }
            if ((s8) temp_4_2 == 0x27) {
                var_2_3 = temp_4_2 << 0x18;
                goto block_30;
            }
            if ((s8) temp_4_2 == 0x28) {
                var_2_3 = temp_4_2 << 0x18;
                goto block_30;
            }
            if ((s8) temp_4_2 == 0x29) {
                var_2_3 = temp_4_2 << 0x18;
                goto block_30;
            }
            var_2_3 = temp_4_2 << 0x18;
            if (((s8) temp_4_2 == 0x25) && ((temp_3_3 = M2C_FIELD(var_16, u8 *, 1), (((u32) (temp_3_3 - 0x30) < 0xAU) != 0)) || ((u32) (temp_3_3 - 0x61) < 6U) || (var_2_3 = temp_4_2 << 0x18, (((u32) (temp_3_3 - 0x41) < 6U) != 0))) && ((temp_3_4 = M2C_FIELD(var_16, u8 *, 2), var_2_3 = temp_4_2 << 0x18, (((u32) (temp_3_4 - 0x30) < 0xAU) != 0)) || (var_2_3 = temp_4_2 << 0x18, (((u32) (temp_3_4 - 0x61) < 6U) != 0)) || (var_2_3 = temp_4_2 << 0x18, (((u32) (temp_3_4 - 0x41) < 6U) != 0)))) {
                goto block_30;
            }
            temp_2 = var_2_3 >> 0x18;
            if (temp_2 == 0x3B) {
                var_2_3 = temp_4_2 << 0x18;
                goto block_30;
            }
            if (temp_2 == 0x40) {
                var_2_3 = temp_4_2 << 0x18;
                goto block_30;
            }
            if (temp_2 == 0x26) {
                var_2_3 = temp_4_2 << 0x18;
                goto block_30;
            }
            if (temp_2 == 0x3D) {
                var_2_3 = temp_4_2 << 0x18;
                goto block_30;
            }
            if (temp_2 == 0x2B) {
                var_2_3 = temp_4_2 << 0x18;
                goto block_30;
            }
            if (temp_2 == 0x24) {
                var_2_3 = temp_4_2 << 0x18;
                goto block_30;
            }
            if (temp_2 == 0x2C) {
                var_2_3 = temp_4_2 << 0x18;
                goto block_30;
            }
            if (arg0 != NULL) {
                temp_4_3 = M2C_FIELD(arg0, s32 *, 0x18);
                if (temp_4_3 != 0) {
                    D_011B1E18(temp_4_3, 0x25, 0x2C, 0x24, 0x2B, 0x3D, 0x26, 0x40);
                }
                M2C_FIELD(arg0, s32 *, 0x18) = xmlURIUnescapeString(*arg1, var_16 - *arg1, 0);
            }
            *arg1 = var_16;
            var_2 = 0;
        }
    }
    return var_2;
}
