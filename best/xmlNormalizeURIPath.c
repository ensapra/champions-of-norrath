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

M2C_UNK strcpy(s8 *, void *);                       /* extern */

s32 xmlNormalizeURIPath(s8 *arg0) {
    s32 var_2;
    s32 var_2_2;
    s32 var_2_3;
    s8 *temp_5;
    s8 *var_16;
    s8 *var_16_2;
    s8 *var_16_3;
    s8 *var_17;
    s8 *var_17_2;
    s8 *var_5;
    s8 *var_5_2;
    s8 temp_2;
    s8 temp_2_2;
    s8 temp_2_3;
    s8 temp_3;
    s8 temp_3_2;
    s8 temp_3_3;
    s8 temp_3_4;
    s8 temp_3_5;
    s8 temp_4;
    u8 var_3;
    u8 var_3_2;
    u8 var_3_3;
    u8 var_4;
    u8 var_4_2;

    var_2 = -1;
    if (arg0 != NULL) {
        var_16 = arg0;
loop_4:
        var_4 = (u8) *var_16;
        if (*var_16 == 0x2F) {
            var_16 += 1;
            goto loop_4;
        }
        var_2 = 0;
        if (var_4 != 0) {
            var_17 = var_16;
loop_14:
            if ((s8) var_4 != 0) {
                var_2_2 = var_4 << 0x18;
                if ((s8) var_4 == 0x2E) {
                    temp_2 = M2C_FIELD(var_16, s8 *, 1);
                    if (temp_2 == 0x2F) {
                        var_16 += 2;
                        goto block_13;
                    }
                    var_2_2 = var_4 << 0x18;
                    if (temp_2 != 0) {
                        goto block_8;
                    }
                } else {
block_8:
                    var_3 = var_4;
                    if ((var_2_2 >> 0x18) != 0x2F) {
loop_10:
                        if ((var_3 << 0x18) != 0) {
                            *var_17 = var_3;
                            var_17 += 1;
                            var_16 += 1;
                            var_4 = *var_16;
                            var_3 = var_4;
                            if ((s8) var_4 == 0x2F) {
                                goto block_12;
                            }
                            goto loop_10;
                        }
                    } else {
block_12:
                        *var_17 = var_4;
                        var_17 += 1;
                        var_16 += 1;
block_13:
                        var_4 = *var_16;
                        goto loop_14;
                    }
                }
            }
            *var_17 = 0;
            var_16_2 = arg0;
loop_21:
            var_4_2 = (u8) *var_16_2;
            if (*var_16_2 == 0x2F) {
                var_16_2 += 1;
                goto loop_21;
            }
            if (var_4_2 == 0) {
                goto block_87;
            }
loop_26:
            var_5 = var_16_2;
            if ((s8) var_4_2 != 0x2F) {
                if ((s8) var_4_2 != 0) {
loop_28:
                    var_5 += 1;
                    temp_2_2 = *var_5;
                    var_3_2 = (u8) *var_5;
                    if (temp_2_2 != 0x2F) {
                        if (temp_2_2 == 0) {

                        } else {
                            goto loop_28;
                        }
                    }
                    goto block_33;
                }
            } else {
                var_3_2 = M2C_FIELD(var_16_2, u8 *, 0);
block_33:
                if (var_3_2 != 0) {
                    temp_5 = var_5 + 1;
                    if (((s8) var_4_2 == 0x2E) && (M2C_FIELD(var_16_2, s8 *, 1) == (s8) var_4_2)) {
                        if (temp_5 == (var_16_2 + 3)) {
                            var_16_2 = temp_5;
                            goto block_25;
                        }
                        goto block_39;
                    }
block_39:
                    temp_3 = M2C_FIELD(var_5, s8 *, 1);
                    if (temp_3 != 0x2E) {
                        var_16_2 = temp_5;
                        goto block_25;
                    }
                    if (M2C_FIELD(temp_5, s8 *, 1) != temp_3) {
                        var_16_2 = temp_5;
                        goto block_25;
                    }
                    temp_3_2 = M2C_FIELD(temp_5, s8 *, 2);
                    switch (temp_3_2) {             /* switch 1; irregular */
                    case 47:                        /* switch 1 */
                        strcpy(var_16_2, temp_5 + 3);
                        var_5_2 = var_16_2;
                        var_2_3 = (u32) arg0 < (u32) var_5_2;
loop_53:
                        if (var_2_3 != 0) {
                            var_5_2 -= 1;
                            var_2_3 = (u32) arg0 < (u32) var_5_2;
                            if (*var_5_2 == 0x2F) {
                                goto loop_53;
                            }
                        }
                        if (var_5_2 != arg0) {
                            var_16_2 = var_5_2;
                            if ((u32) arg0 >= (u32) var_5_2) {
                                var_4_2 = (u8) M2C_FIELD(var_16_2, s8 *, 0);
                            } else if (M2C_FIELD(var_16_2, s8 *, -1) != 0x2F) {
loop_60:
                                var_16_2 -= 1;
                                if ((u32) arg0 >= (u32) var_16_2) {
                                    var_4_2 = (u8) M2C_FIELD(var_16_2, s8 *, 0);
                                } else if (M2C_FIELD(var_16_2, s8 *, -1) == 0x2F) {
                                    var_4_2 = (u8) M2C_FIELD(var_16_2, s8 *, 0);
                                } else {
                                    goto loop_60;
                                }
                            } else {
                                goto block_25;
                            }
                        } else {
block_25:
                            var_4_2 = *var_16_2;
                        }
                        goto loop_26;
                    case 0:                         /* switch 1 */
                        M2C_FIELD(var_16_2, s8 *, 0) = 0;
                        break;
                    default:                        /* switch 1 */
                        var_16_2 = temp_5;
                        goto block_25;
                    }
                }
            }
            *var_17 = 0;
            temp_4 = M2C_FIELD(arg0, s8 *, 0);
            var_2 = 0;
            if (temp_4 == 0x2F) {
                var_16_3 = arg0;
                temp_3_3 = M2C_FIELD(var_16_3, s8 *, 1);
                if ((temp_3_3 == 0x2E) && (M2C_FIELD(var_16_3, s8 *, 2) == temp_3_3)) {
                    temp_2_3 = M2C_FIELD(var_16_3, s8 *, 3);
                    if (temp_2_3 == temp_4) {
                        var_16_3 += 3;
                        goto loop_74;
                    }
                    if (temp_2_3 == 0) {
                        var_16_3 += 3;
loop_74:
                        temp_3_4 = M2C_FIELD(var_16_3, s8 *, 1);
                        if ((temp_3_4 == 0x2E) && (M2C_FIELD(var_16_3, s8 *, 2) == temp_3_4)) {
                            temp_3_5 = M2C_FIELD(var_16_3, s8 *, 3);
                            switch (temp_3_5) {     /* switch 2; irregular */
                            case 47:                /* switch 2 */
                                var_16_3 += 3;
                                goto loop_74;
                            case 0:                 /* switch 2 */
                                var_16_3 += 3;
                                goto loop_74;
                            }
                        }
                    }
                }
                var_17_2 = arg0;
                if (var_16_3 != arg0) {
                    var_3_3 = (u8) *var_16_3;
                    if (*var_16_3 != 0) {
                        do {
                            *var_17_2 = (s8) var_3_3;
                            var_17_2 += 1;
                            var_16_3 += 1;
                            var_3_3 = (u8) *var_16_3;
                        } while (*var_16_3 != 0);
                    }
                    *var_17_2 = 0;
                }
block_87:
                var_2 = 0;
            }
        }
    }
    return var_2;
}
