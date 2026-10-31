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

M2C_UNK memcpy(s32, s32, s32);                      /* extern */
s32 strlen(s32, u8, s32, s32, s32, s32, s32, s32);  /* extern */
M2C_UNK xmlURIUnescapeString(void *, s32, s8 *);    /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, M2C_UNK);
extern s32 D_0118EDD4;
extern M2C_UNK (*D_011B1E18)(s32);
extern s32 (*D_011B1E1C)(s32);
extern M2C_UNK D_011CAAA0;

s32 xmlParseURIPathSegments(void *arg0, void **arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 sp0;
    void *sp4;
    s32 temp_17;
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_3_3;
    s32 temp_4_3;
    s32 temp_4_5;
    s32 temp_5;
    s32 temp_5_2;
    s32 var_10;
    s32 var_11;
    s32 var_17;
    s32 var_18;
    s32 var_2;
    s32 var_2_2;
    s32 var_2_3;
    s32 var_2_4;
    s32 var_6;
    s32 var_7;
    s32 var_8;
    s32 var_9;
    s8 *temp_2_3;
    s8 *temp_6;
    u8 temp_3;
    u8 temp_3_2;
    u8 temp_3_4;
    u8 temp_3_5;
    u8 temp_4;
    u8 temp_4_2;
    u8 var_5;
    void *temp_4_4;
    void *var_16;

    var_6 = arg2;
    var_7 = arg3;
    var_8 = arg4;
    var_9 = arg5;
    var_10 = arg6;
    var_11 = arg7;
    var_2 = -1;
    sp0 = var_6;
    if (arg1 != NULL) {
        var_16 = *arg1;
        sp4 = var_16;
loop_5:
        temp_4 = M2C_FIELD(var_16, u8 *, 0);
        var_5 = temp_4;
        if ((u32) (temp_4 - 0x61) < 0x1AU) {
block_3:
            var_2_2 = var_5 << 0x18;
block_4:
            var_16 = (((var_2_2 >> 0x18) ^ 0x25) != 0) ? (var_16 + 1) : (var_16 + 3);
            goto loop_5;
        }
        var_2_2 = var_5 << 0x18;
        if ((u32) (temp_4 - 0x41) < 0x1AU) {
            goto block_4;
        }
        var_2_2 = var_5 << 0x18;
        if ((u32) (temp_4 - 0x30) < 0xAU) {
            goto block_4;
        }
        if ((s8) temp_4 == 0x2D) {
            goto block_3;
        }
        if ((s8) temp_4 == 0x5F) {
            goto block_3;
        }
        if ((s8) temp_4 == 0x2E) {
            goto block_3;
        }
        if ((s8) temp_4 == 0x21) {
            goto block_3;
        }
        if ((s8) temp_4 == 0x7E) {
            goto block_3;
        }
        if ((s8) temp_4 == 0x2A) {
            goto block_3;
        }
        if ((s8) temp_4 == 0x27) {
            goto block_3;
        }
        if ((s8) temp_4 == 0x28) {
            goto block_3;
        }
        if ((s8) temp_4 == 0x29) {
            goto block_3;
        }
        var_2_2 = var_5 << 0x18;
        if (((s8) temp_4 == 0x25) && ((temp_3 = M2C_FIELD(var_16, u8 *, 1), (((u32) (temp_3 - 0x30) < 0xAU) != 0)) || ((u32) (temp_3 - 0x61) < 6U) || (var_2_2 = var_5 << 0x18, (((u32) (temp_3 - 0x41) < 6U) != 0))) && ((temp_3_2 = M2C_FIELD(var_16, u8 *, 2), var_2_2 = var_5 << 0x18, (((u32) (temp_3_2 - 0x30) < 0xAU) != 0)) || (var_2_2 = var_5 << 0x18, (((u32) (temp_3_2 - 0x61) < 6U) != 0)) || (var_2_2 = var_5 << 0x18, (((u32) (temp_3_2 - 0x41) < 6U) != 0)))) {
            goto block_4;
        }
        temp_3_3 = var_2_2 >> 0x18;
        if (temp_3_3 == 0x3A) {
            goto block_3;
        }
        if (temp_3_3 == 0x40) {
            goto block_3;
        }
        if (temp_3_3 == 0x26) {
            goto block_3;
        }
        var_2_2 = var_5 << 0x18;
        if (temp_3_3 == 0x3D) {
            goto block_4;
        }
        if (temp_3_3 == 0x2B) {
            goto block_4;
        }
        if (temp_3_3 == 0x24) {
            goto block_4;
        }
        if (temp_3_3 == 0x2C) {
            goto block_3;
        }
        var_2_3 = temp_4 << 0x18;
        if (temp_3_3 == 0x3B) {
            var_16 += 1;
            var_11 = 0x29;
            var_6 = 0x25;
            var_10 = 0x3A;
            var_9 = 0x40;
            var_8 = 0x26;
            var_7 = 0x3D;
loop_36:
            temp_4_2 = M2C_FIELD(var_16, u8 *, 0);
            var_5 = temp_4_2;
            if ((u32) (temp_4_2 - 0x61) < 0x1AU) {
block_34:
                var_2_4 = var_5 << 0x18;
block_35:
                var_16 = (((var_2_4 >> 0x18) ^ 0x25) != 0) ? (var_16 + 1) : (var_16 + 3);
                goto loop_36;
            }
            var_2_4 = var_5 << 0x18;
            if ((u32) (temp_4_2 - 0x41) < 0x1AU) {
                goto block_35;
            }
            var_2_4 = var_5 << 0x18;
            if ((u32) (temp_4_2 - 0x30) < 0xAU) {
                goto block_35;
            }
            if ((s8) temp_4_2 == 0x2D) {
                goto block_34;
            }
            if ((s8) temp_4_2 == 0x5F) {
                goto block_34;
            }
            if ((s8) temp_4_2 == 0x2E) {
                goto block_34;
            }
            if ((s8) temp_4_2 == 0x21) {
                goto block_34;
            }
            if ((s8) temp_4_2 == 0x7E) {
                goto block_34;
            }
            if ((s8) temp_4_2 == 0x2A) {
                goto block_34;
            }
            if ((s8) temp_4_2 == 0x27) {
                goto block_34;
            }
            if ((s8) temp_4_2 == 0x28) {
                goto block_34;
            }
            if ((s8) temp_4_2 == 0x29) {
                goto block_34;
            }
            var_2_4 = var_5 << 0x18;
            if (((s8) temp_4_2 == 0x25) && ((temp_3_4 = M2C_FIELD(var_16, u8 *, 1), (((u32) (temp_3_4 - 0x30) < 0xAU) != 0)) || ((u32) (temp_3_4 - 0x61) < 6U) || (var_2_4 = var_5 << 0x18, (((u32) (temp_3_4 - 0x41) < 6U) != 0))) && ((temp_3_5 = M2C_FIELD(var_16, u8 *, 2), var_2_4 = var_5 << 0x18, (((u32) (temp_3_5 - 0x30) < 0xAU) != 0)) || (var_2_4 = var_5 << 0x18, (((u32) (temp_3_5 - 0x61) < 6U) != 0)) || (var_2_4 = var_5 << 0x18, (((u32) (temp_3_5 - 0x41) < 6U) != 0)))) {
                goto block_35;
            }
            temp_2 = var_2_4 >> 0x18;
            if (temp_2 == 0x3A) {
                goto block_34;
            }
            if (temp_2 == 0x40) {
                goto block_34;
            }
            if (temp_2 == 0x26) {
                goto block_34;
            }
            if (temp_2 == 0x3D) {
                goto block_34;
            }
            if (temp_2 == 0x2B) {
                goto block_34;
            }
            if (temp_2 == 0x24) {
                goto block_34;
            }
            var_2_3 = temp_4_2 << 0x18;
            if (temp_2 == 0x2C) {
                goto block_34;
            }
        }
        if ((var_2_3 >> 0x18) == 0x2F) {
            var_16 += 1;
            goto loop_5;
        }
        if (arg0 != NULL) {
            var_18 = 0;
            temp_4_3 = M2C_FIELD(arg0, s32 *, 0x18);
            temp_17 = var_16 - sp4;
            var_17 = (sp0 != 0) ? (temp_17 + 1) : temp_17;
            if (temp_4_3 != 0) {
                var_18 = strlen(temp_4_3, var_5, var_6, var_7, var_8, var_9, var_10, var_11);
                var_17 += var_18;
            }
            temp_2_2 = D_011B1E1C(var_17 + 1);
            if (temp_2_2 != 0) {
                temp_5 = M2C_FIELD(arg0, s32 *, 0x18);
                if (temp_5 != 0) {
                    memcpy(temp_2_2, temp_5, var_18);
                }
                temp_2_3 = temp_2_2 + var_18;
                if (sp0 != 0) {
                    var_18 += 1;
                    *temp_2_3 = 0x2F;
                }
                temp_6 = temp_2_2 + var_18;
                *temp_6 = 0;
                temp_4_4 = *arg1;
                temp_5_2 = var_16 - temp_4_4;
                if (temp_5_2 > 0) {
                    xmlURIUnescapeString(temp_4_4, temp_5_2, temp_6);
                }
                temp_4_5 = M2C_FIELD(arg0, s32 *, 0x18);
                if (temp_4_5 != 0) {
                    D_011B1E18(temp_4_5);
                }
                M2C_FIELD(arg0, s32 *, 0x18) = temp_2_2;
                goto block_81;
            }
            D_0118EDD0(D_0118EDD4, &D_011CAAA0, D_0118EDD0);
            *arg1 = var_16;
            return -1;
        }
block_81:
        *arg1 = var_16;
        var_2 = 0;
        /* Duplicate return node #82. Try simplifying control flow for better match */
        return var_2;
    }
    return var_2;
}
