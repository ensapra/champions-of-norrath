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

s32 xmlIsBaseChar(u8);                              /* extern */
s32 xmlIsCombining(u8);                             /* extern */
s32 xmlIsDigit(u8);                                 /* extern */
s32 xmlIsExtender(u8);                              /* extern */
s32 xmlIsIdeographic(u8);                           /* extern */

s32 xmlValidateNamesValue(u8 *arg0) {
    s32 var_2;
    u8 *var_16;
    u8 temp_2;
    u8 temp_2_2;
    u8 temp_4;
    u8 temp_4_2;
    u8 temp_4_3;
    u8 var_3;

    /* Flowgraph is not reducible, falling back to gotos-only mode. */
    var_2 = 0;
    if (arg0 == NULL) {
        goto block_78;
    }
    var_16 = arg0;
    if (xmlIsBaseChar(*var_16) != 0) {
        goto block_5;
    }
    var_2 = xmlIsIdeographic(*var_16);
    if (var_2 != 0) {
        goto block_5;
    }
    temp_4 = *var_16;
    if (temp_4 == 0x5F) {
        goto block_5;
    }
    if (temp_4 != 0x3A) {
        goto block_78;
    }
block_5:
loop_6:
    if (xmlIsBaseChar(*var_16) == 0) {
        goto block_8;
    }
    var_16 += 1;
    goto loop_6;
block_8:
    if (xmlIsIdeographic(*var_16) == 0) {
        goto block_11;
    }
    var_16 += 1;
    goto loop_6;
block_11:
    if (xmlIsDigit(*var_16) == 0) {
        goto block_14;
    }
    var_16 += 1;
    goto loop_6;
block_14:
    temp_2 = *var_16;
    if (temp_2 != 0x2E) {
        goto block_17;
    }
    var_16 += 1;
    goto loop_6;
block_17:
    if (temp_2 != 0x2D) {
        goto block_20;
    }
    var_16 += 1;
    goto loop_6;
block_20:
    if (temp_2 != 0x5F) {
        goto block_23;
    }
    var_16 += 1;
    goto loop_6;
block_23:
    if (temp_2 != 0x3A) {
        goto block_26;
    }
    var_16 += 1;
    goto loop_6;
block_26:
    if (xmlIsCombining(temp_2) == 0) {
        goto block_29;
    }
    var_16 += 1;
    goto loop_6;
block_29:
    if (xmlIsExtender(*var_16) == 0) {
        goto block_32;
    }
    var_16 += 1;
    goto loop_6;
block_32:
    goto loop_73;
block_35:
    var_16 += 1;
    var_3 = *var_16;
block_36:
    if (var_3 == 0x20) {
        goto block_35;
    }
    if (var_3 == 9) {
        goto block_35;
    }
    if (var_3 == 0xA) {
        goto block_35;
    }
    if (var_3 == 0xD) {
        goto block_35;
    }
    if (xmlIsBaseChar(*var_16) != 0) {
        goto block_45;
    }
    var_2 = xmlIsIdeographic(*var_16);
    if (var_2 != 0) {
        goto block_45;
    }
    temp_4_2 = *var_16;
    if (temp_4_2 == 0x5F) {
        goto block_45;
    }
    if (temp_4_2 != 0x3A) {
        goto block_78;
    }
block_45:
loop_46:
    if (xmlIsBaseChar(*var_16) == 0) {
        goto block_48;
    }
    var_16 += 1;
    goto loop_46;
block_48:
    if (xmlIsIdeographic(*var_16) == 0) {
        goto block_51;
    }
    var_16 += 1;
    goto loop_46;
block_51:
    if (xmlIsDigit(*var_16) == 0) {
        goto block_54;
    }
    var_16 += 1;
    goto loop_46;
block_54:
    temp_2_2 = *var_16;
    if (temp_2_2 != 0x2E) {
        goto block_57;
    }
    var_16 += 1;
    goto loop_46;
block_57:
    if (temp_2_2 != 0x2D) {
        goto block_60;
    }
    var_16 += 1;
    goto loop_46;
block_60:
    if (temp_2_2 != 0x5F) {
        goto block_63;
    }
    var_16 += 1;
    goto loop_46;
block_63:
    if (temp_2_2 != 0x3A) {
        goto block_66;
    }
    var_16 += 1;
    goto loop_46;
block_66:
    if (xmlIsCombining(temp_2_2) == 0) {
        goto block_69;
    }
    var_16 += 1;
    goto loop_46;
block_69:
    if (xmlIsExtender(*var_16) == 0) {
        goto block_72;
    }
    var_16 += 1;
    goto loop_46;
block_72:
loop_73:
    temp_4_3 = *var_16;
    var_3 = temp_4_3 & 0xFF;
    if (var_3 == 0x20) {
        goto block_35;
    }
    if (var_3 == 9) {
        goto block_36;
    }
    if (var_3 == 0xA) {
        goto block_36;
    }
    if (var_3 == 0xD) {
        goto block_36;
    }
    var_2 = temp_4_3 == 0;
block_78:
    return var_2;
}
