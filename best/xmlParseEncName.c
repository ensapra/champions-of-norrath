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

M2C_UNK xmlNextChar(void *);                        /* extern */
s32 xmlParserInputGrow(void *, M2C_UNK);            /* extern */
M2C_UNK xmlParserInputShrink(void *);               /* extern */
M2C_UNK xmlPopInput(void *);                        /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, s32, M2C_UNK);
extern s32 D_0118EDD4;
extern u8 *(*D_011B1E1C)(M2C_UNK);
extern u8 *(*D_011B1E20)(u8 *, s32);
extern M2C_UNK D_011D70D8;
extern M2C_UNK D_011D70F8;
extern M2C_UNK D_011D86F0;

u8 *xmlParseEncName(void *arg0) {
    M2C_UNK (*temp_2)(s32, M2C_UNK *);
    M2C_UNK *var_5;
    s32 temp_16;
    s32 var_20;
    s32 var_21;
    s32 var_2_3;
    s32 var_2_4;
    s32 var_6;
    u8 *var_19;
    u8 *var_2_5;
    u8 var_17;
    u8 var_2;
    u8 var_2_2;
    u8 var_2_6;
    void *temp_3;
    void *temp_4;
    void *temp_4_2;
    void *temp_4_3;

    var_19 = NULL;
    var_20 = 0xA;
    if (M2C_FIELD(arg0, s32 *, 0xA4) != 0) {
        var_2 = (u8) M2C_FIELD(arg0, s32 *, 0xA4);
    } else {
        var_2 = *M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), u8 **, 0x10);
    }
    if ((u32) ((var_2 + 0x9F) & 0xFF) >= 0x1AU) {
        if ((u32) ((var_2 + 0xBF) & 0xFF) >= 0x1AU) {
            temp_3 = M2C_FIELD(arg0, void **, 0);
            M2C_FIELD(arg0, s32 *, 0x60) = 0x4F;
            if (temp_3 != NULL) {
                temp_2 = M2C_FIELD(temp_3, M2C_UNK (**)(s32, M2C_UNK *), 0x58);
                if (temp_2 != NULL) {
                    temp_2(M2C_FIELD(arg0, s32 *, 4), &D_011D86F0);
                }
            }
            M2C_FIELD(arg0, s32 *, 0xC) = 0;
            M2C_FIELD(arg0, s32 *, 0xD4) = 1;
            goto block_56;
        }
        goto block_9;
    }
block_9:
    var_19 = D_011B1E1C(0xA);
    if (var_19 != NULL) {
        *var_19 = var_2;
        var_21 = 1;
        xmlNextChar(arg0);
loop_35:
        if (M2C_FIELD(arg0, s32 *, 0xA4) == 0) {
            var_2_2 = *M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), u8 **, 0x10);
        } else {
            var_2_2 = (u8) M2C_FIELD(arg0, s32 *, 0xA4);
        }
        var_17 = var_2_2;
        var_2_3 = var_17 + 0x9F;
loop_41:
        temp_16 = var_21 + 1;
        if ((u32) (var_2_3 & 0xFF) >= 0x1AU) {
            var_2_4 = temp_16 < var_20;
            if ((u32) ((var_17 + 0xBF) & 0xFF) >= 0x1AU) {
                var_2_4 = temp_16 < var_20;
                if ((u32) ((var_17 + 0xD0) & 0xFF) >= 0xAU) {
                    if ((var_17 != 0x2E) && (var_17 != 0x5F) && (var_17 != 0x2D)) {
                        var_19[var_21] = 0;
block_56:
                        return var_19;
                    }
                    goto block_16;
                }
            }
            goto block_17;
        }
block_16:
        var_2_4 = temp_16 < var_20;
block_17:
        var_2_5 = &var_19[var_21];
        if ((var_2_4 != 0) || (var_20 *= 2, var_19 = D_011B1E20(var_19, var_20), var_2_5 = &var_19[var_21], (var_19 != NULL))) {
            var_21 = temp_16;
            *var_2_5 = var_17;
            xmlNextChar(arg0);
            if (M2C_FIELD(arg0, s32 *, 0xA4) == 0) {
                var_2_6 = *M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), u8 **, 0x10);
            } else {
                var_2_6 = (u8) M2C_FIELD(arg0, s32 *, 0xA4);
            }
            var_17 = var_2_6;
            var_2_3 = var_17 + 0x9F;
            if (var_17 == 0) {
                temp_4 = M2C_FIELD(arg0, void **, 0x24);
                if ((M2C_FIELD(temp_4, u8 **, 0x10) - M2C_FIELD(temp_4, s32 *, 0xC)) >= 0xFB) {
                    xmlParserInputShrink(temp_4);
                    temp_4_2 = M2C_FIELD(arg0, void **, 0x24);
                    if (*M2C_FIELD(temp_4_2, u8 **, 0x10) == 0) {
                        if (xmlParserInputGrow(temp_4_2, 0xFA) <= 0) {
                            xmlPopInput(arg0);
                        }
                    }
                }
                if ((M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0x14) - M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0x10)) < 0xFA) {
                    xmlParserInputGrow(M2C_FIELD(arg0, void **, 0x24), 0xFA);
                    temp_4_3 = M2C_FIELD(arg0, void **, 0x24);
                    if ((*M2C_FIELD(temp_4_3, u8 **, 0x10) == 0) && (xmlParserInputGrow(temp_4_3, 0xFA) <= 0)) {
                        xmlPopInput(arg0);
                    }
                }
                goto loop_35;
            }
            goto loop_41;
        }
        var_5 = &D_011D70F8;
        var_6 = var_20;
        goto block_50;
    }
    var_5 = &D_011D70D8;
    var_6 = 0xA;
block_50:
    ((M2C_UNK (*)(s32, M2C_UNK *, s32, M2C_UNK)) D_0118EDD0)(D_0118EDD4, var_5, var_6, (M2C_UNK (*)(s32, M2C_UNK *, s32, M2C_UNK)) D_0118EDD0);
    return NULL;
}
