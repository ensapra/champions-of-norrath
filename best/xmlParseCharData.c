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

s32 areBlanks_010DEA50(void *, u8 *, s32);          /* extern */
M2C_UNK xmlParseCharDataComplex(void *, s32);       /* extern */
s32 xmlParserInputGrow(void *, M2C_UNK);            /* extern */
M2C_UNK xmlParserInputShrink(void *, void *);       /* extern */
M2C_UNK xmlPopInput(void *);                        /* extern */

void xmlParseCharData(void *arg0, s32 arg1) {
    s32 sp0;
    M2C_UNK (*temp_2_2)(s32, s32, s32);
    M2C_UNK (*temp_3_2)(s32, u8 *, s32);
    s32 temp_18;
    s32 temp_30;
    s32 var_2;
    s32 var_2_2;
    s32 var_2_3;
    u32 var_4;
    u8 *temp_16;
    u8 *temp_2;
    u8 *var_16;
    u8 temp_3;
    u8 temp_3_3;
    u8 var_3;
    void *temp_5;
    void *temp_5_2;
    void *temp_5_3;
    void *temp_5_4;
    void *temp_5_5;

    temp_5 = M2C_FIELD(arg0, void **, 0x24);
    sp0 = M2C_FIELD(temp_5, s32 *, 0x1C);
    temp_30 = M2C_FIELD(temp_5, s32 *, 0x20);
    if ((M2C_FIELD(temp_5, u8 **, 0x10) - M2C_FIELD(temp_5, s32 *, 0xC)) >= 0xFB) {
        xmlParserInputShrink(temp_5, temp_5);
        temp_5_2 = M2C_FIELD(arg0, void **, 0x24);
        if (*M2C_FIELD(temp_5_2, u8 **, 0x10) == 0) {
            if (xmlParserInputGrow(temp_5_2, 0xFA) <= 0) {
                xmlPopInput(arg0);
            }
        }
    }
    if ((M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0x14) - M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0x10)) < 0xFA) {
        xmlParserInputGrow(M2C_FIELD(arg0, void **, 0x24), 0xFA);
        temp_5_3 = M2C_FIELD(arg0, void **, 0x24);
        if (*M2C_FIELD(temp_5_3, u8 **, 0x10) == 0) {
            if (xmlParserInputGrow(temp_5_3, 0xFA) <= 0) {
                xmlPopInput(arg0);
            }
        }
    }
    if ((M2C_FIELD(arg0, s32 *, 0xA4) == 0) && (arg1 == 0)) {
        var_16 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), u8 **, 0x10);
        var_3 = *var_16;
loop_15:
        var_4 = var_3 & 0xFF;
loop_16:
        var_2 = var_3 & 0xFF;
        switch (var_4) {                            /* switch 1; irregular */
        case 0x3C:                                  /* switch 1 */
            break;
        default:                                    /* switch 1 */
            if (var_3 & 0x80) {
            case 0x26:                              /* switch 1 */
                var_2 = var_3 & 0xFF;
            } else {
block_14:
                var_16 += 1;
                var_3 = *var_16;
                goto loop_15;
            }
            break;
        }
        if (var_2 == 9) {
            goto block_14;
        }
        if (var_2 != 0xA) {
            temp_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), u8 **, 0x10);
            temp_18 = var_16 - temp_2;
            if (temp_18 > 0) {
                temp_3 = *temp_2;
                if ((temp_3 == 0x20) || (temp_3 == 9) || (temp_3 == 0xA) || (temp_3 == 0xD)) {
                    if (areBlanks_010DEA50(arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), u8 **, 0x10), temp_18) == 0) {
                        goto block_38;
                    }
                    temp_3_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(s32, u8 *, s32), 0x48);
                    if (temp_3_2 != NULL) {
                        temp_3_2(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), u8 **, 0x10), temp_18);
                    }
                } else {
block_38:
                    temp_2_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(s32, s32, s32), 0x44);
                    if (temp_2_2 != NULL) {
                        temp_2_2(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0x10), temp_18);
                    }
                }
            }
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), u8 **, 0x10) = var_16;
            temp_3_3 = M2C_FIELD(var_16, u8 *, 0);
            var_2_2 = temp_3_3 & 0xFF;
            if (temp_3_3 == 0xD) {
                temp_16 = var_16 + 1;
                if (M2C_FIELD(var_16, u8 *, 1) != 0xA) {
                    var_2_2 = M2C_FIELD(temp_16, u8 *, -1) & 0xFF;
                    goto block_49;
                }
                var_2_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0x1C);
                M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), u8 **, 0x10) = temp_16;
                var_16 = temp_16 + 1;
                goto block_46;
            }
block_49:
            switch (var_2_2) {                      /* switch 2; irregular */
            case 0x3C:                              /* switch 2 */
                return;
            case 0x26:                              /* switch 2 */
                return;
            default:                                /* switch 2 */
                if ((M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), u8 **, 0x10) - M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0xC)) >= 0xFB) {
                    xmlParserInputShrink(M2C_FIELD(arg0, void **, 0x24), M2C_FIELD(arg0, void **, 0x24));
                    temp_5_4 = M2C_FIELD(arg0, void **, 0x24);
                    if (*M2C_FIELD(temp_5_4, u8 **, 0x10) == 0) {
                        if (xmlParserInputGrow(temp_5_4, 0xFA) <= 0) {
                            xmlPopInput(arg0);
                        }
                    }
                }
                if ((M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0x14) - M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0x10)) < 0xFA) {
                    xmlParserInputGrow(M2C_FIELD(arg0, void **, 0x24), 0xFA);
                    temp_5_5 = M2C_FIELD(arg0, void **, 0x24);
                    if (*M2C_FIELD(temp_5_5, u8 **, 0x10) == 0) {
                        if (xmlParserInputGrow(temp_5_5, 0xFA) <= 0) {
                            xmlPopInput(arg0);
                        }
                    }
                }
                var_16 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), u8 **, 0x10);
                goto block_66;
            }
        } else {
            var_2_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0x1C);
block_46:
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0x1C) = (s32) (var_2_3 + 1);
block_66:
            var_3 = *var_16;
            var_4 = var_3 & 0xFF;
            if ((u32) ((var_3 + 0xE0) & 0xFF) >= 0x60U) {
                /* Duplicate return node #67. Try simplifying control flow for better match */
                M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0x20) = temp_30;
                M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0x1C) = sp0;
                xmlParseCharDataComplex(arg0, arg1);
                return;
            }
            goto loop_16;
        }
    } else {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0x20) = temp_30;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0x1C) = sp0;
        xmlParseCharDataComplex(arg0, arg1);
    }
}
