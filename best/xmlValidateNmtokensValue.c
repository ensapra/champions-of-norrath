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

s32 xmlValidateNmtokensValue(u8 *arg0) {
    s32 var_2;
    s32 var_3;
    u8 *var_16;
    u8 temp_2;
    u8 temp_2_2;
    u8 temp_3;
    u8 temp_3_2;
    u8 temp_3_3;
    u8 var_4;

    /* Flowgraph is not reducible, falling back to gotos-only mode. */
    if (arg0 != NULL) {
        goto block_2;
    }
    return 0;
block_2:
    var_16 = arg0;
    goto loop_4;
block_3:
    var_16 += 1;
loop_4:
    temp_3 = *var_16;
    if (temp_3 == 0x20) {
        goto block_3;
    }
    if (temp_3 == 9) {
        goto block_3;
    }
    if (temp_3 == 0xA) {
        goto block_3;
    }
    if (temp_3 == 0xD) {
        goto block_3;
    }
    if (xmlIsBaseChar(*var_16) != 0) {
        goto block_18;
    }
    if (xmlIsIdeographic(*var_16) != 0) {
        goto block_18;
    }
    if (xmlIsDigit(*var_16) != 0) {
        goto block_18;
    }
    temp_3_2 = *var_16;
    if (temp_3_2 == 0x2E) {
        goto block_19;
    }
    if (temp_3_2 == 0x2D) {
        goto block_20;
    }
    if (temp_3_2 == 0x5F) {
        goto loop_21;
    }
    if (temp_3_2 == 0x3A) {
        goto loop_21;
    }
    if (xmlIsCombining(temp_3_2) != 0) {
        goto block_17;
    }
    var_2 = xmlIsExtender(*var_16);
    if (var_2 == 0) {
        goto block_102;
    }
block_17:
block_18:
block_19:
block_20:
loop_21:
    if (xmlIsBaseChar(*var_16) == 0) {
        goto block_23;
    }
    var_16 += 1;
    goto loop_21;
block_23:
    if (xmlIsIdeographic(*var_16) == 0) {
        goto block_26;
    }
    var_16 += 1;
    goto loop_21;
block_26:
    if (xmlIsDigit(*var_16) == 0) {
        goto block_29;
    }
    var_16 += 1;
    goto loop_21;
block_29:
    temp_2 = *var_16;
    if (temp_2 != 0x2E) {
        goto block_32;
    }
    var_16 += 1;
    goto loop_21;
block_32:
    if (temp_2 != 0x2D) {
        goto block_35;
    }
    var_16 += 1;
    goto loop_21;
block_35:
    if (temp_2 != 0x5F) {
        goto block_38;
    }
    var_16 += 1;
    goto loop_21;
block_38:
    if (temp_2 != 0x3A) {
        goto block_41;
    }
    var_16 += 1;
    goto loop_21;
block_41:
    if (xmlIsCombining(temp_2) == 0) {
        goto block_44;
    }
    var_16 += 1;
    goto loop_21;
block_44:
    if (xmlIsExtender(*var_16) == 0) {
        goto block_47;
    }
    var_16 += 1;
    goto loop_21;
block_47:
    goto loop_97;
block_49:
    var_16 += 1;
    var_4 = *var_16;
    var_3 = var_4 & 0xFF;
block_50:
    if (var_3 == 0x20) {
        goto block_49;
    }
    if (var_3 == 9) {
        goto block_49;
    }
    if (var_3 == 0xA) {
        goto block_49;
    }
    if (var_3 == 0xD) {
        goto block_49;
    }
    if (var_4 != 0) {
        goto block_56;
    }
    return 1;
block_56:
    if (xmlIsBaseChar(*var_16) != 0) {
        goto block_67;
    }
    if (xmlIsIdeographic(*var_16) != 0) {
        goto block_67;
    }
    if (xmlIsDigit(*var_16) != 0) {
        goto block_67;
    }
    temp_3_3 = *var_16;
    if (temp_3_3 == 0x2E) {
        goto block_68;
    }
    if (temp_3_3 == 0x2D) {
        goto block_69;
    }
    if (temp_3_3 == 0x5F) {
        goto loop_70;
    }
    if (temp_3_3 == 0x3A) {
        goto loop_70;
    }
    if (xmlIsCombining(temp_3_3) != 0) {
        goto block_66;
    }
    var_2 = xmlIsExtender(*var_16);
    if (var_2 == 0) {
        goto block_102;
    }
block_66:
block_67:
block_68:
block_69:
loop_70:
    if (xmlIsBaseChar(*var_16) == 0) {
        goto block_72;
    }
    var_16 += 1;
    goto loop_70;
block_72:
    if (xmlIsIdeographic(*var_16) == 0) {
        goto block_75;
    }
    var_16 += 1;
    goto loop_70;
block_75:
    if (xmlIsDigit(*var_16) == 0) {
        goto block_78;
    }
    var_16 += 1;
    goto loop_70;
block_78:
    temp_2_2 = *var_16;
    if (temp_2_2 != 0x2E) {
        goto block_81;
    }
    var_16 += 1;
    goto loop_70;
block_81:
    if (temp_2_2 != 0x2D) {
        goto block_84;
    }
    var_16 += 1;
    goto loop_70;
block_84:
    if (temp_2_2 != 0x5F) {
        goto block_87;
    }
    var_16 += 1;
    goto loop_70;
block_87:
    if (temp_2_2 != 0x3A) {
        goto block_90;
    }
    var_16 += 1;
    goto loop_70;
block_90:
    if (xmlIsCombining(temp_2_2) == 0) {
        goto block_93;
    }
    var_16 += 1;
    goto loop_70;
block_93:
    if (xmlIsExtender(*var_16) == 0) {
        goto block_96;
    }
    var_16 += 1;
    goto loop_70;
block_96:
loop_97:
    var_4 = *var_16;
    var_3 = var_4 & 0xFF;
    if (var_3 == 0x20) {
        goto block_49;
    }
    if (var_3 == 9) {
        goto block_50;
    }
    if (var_3 == 0xA) {
        goto block_50;
    }
    if (var_3 == 0xD) {
        goto block_50;
    }
    var_2 = var_4 == 0;
block_102:
    return var_2;
}
