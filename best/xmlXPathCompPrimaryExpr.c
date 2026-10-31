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

s32 xmlIsDigit(u8);                                 /* extern */
M2C_UNK xmlXPathCompFunctionCall(void *);           /* extern */
M2C_UNK xmlXPathCompLiteral(void *);                /* extern */
M2C_UNK xmlXPathCompNumber(void *);                 /* extern */
M2C_UNK xmlXPathCompVariableReference(void *);      /* extern */
M2C_UNK xmlXPathCompileExpr(void *);                /* extern */
M2C_UNK xmlXPatherror(void *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_011DCD70;

void xmlXPathCompPrimaryExpr(void *arg0) {
    u8 *temp_2;
    u8 *temp_2_2;
    u8 *temp_2_3;
    u8 *temp_2_4;
    u8 *temp_3_2;
    u8 *temp_4;
    u8 *var_4;
    u8 *var_4_2;
    u8 *var_4_3;
    u8 temp_3;
    u8 temp_4_2;
    u8 temp_5;
    u8 var_3;
    u8 var_3_2;
    u8 var_3_3;

    /* Flowgraph is not reducible, falling back to gotos-only mode. */
    var_4 = M2C_FIELD(arg0, u8 **, 0);
    var_3 = M2C_FIELD(var_4, u8 *, 0);
    goto loop_4;
block_1:
    temp_2 = var_4 + 1;
    if (M2C_FIELD(var_4, u8 *, 0) == 0) {
        goto block_3;
    }
    M2C_FIELD(arg0, u8 **, 0) = temp_2;
    var_4 = temp_2;
block_3:
    var_3 = *var_4;
loop_4:
    if (var_3 == 0x20) {
        goto block_1;
    }
    if (var_3 == 9) {
        goto block_1;
    }
    if (var_3 == 0xA) {
        goto block_1;
    }
    if (var_3 == 0xD) {
        goto block_1;
    }
    temp_3 = M2C_FIELD(var_4, u8 *, 0);
    if (temp_3 != 0x24) {
        goto block_10;
    }
    xmlXPathCompVariableReference(arg0);
    var_4_2 = M2C_FIELD(arg0, u8 **, 0);
    goto block_46;
block_10:
    if (temp_3 != 0x28) {
        goto block_36;
    }
    var_4_3 = var_4 + 1;
    M2C_FIELD(arg0, u8 **, 0) = var_4_3;
    var_3_2 = M2C_FIELD(var_4, u8 *, 1);
    goto loop_15;
block_12:
    temp_2_2 = var_4_3 + 1;
    if (*var_4_3 == 0) {
        goto block_14;
    }
    M2C_FIELD(arg0, u8 **, 0) = temp_2_2;
    var_4_3 = temp_2_2;
block_14:
    var_3_2 = *var_4_3;
loop_15:
    if (var_3_2 == 0x20) {
        goto block_12;
    }
    if (var_3_2 == 9) {
        goto block_12;
    }
    if (var_3_2 == 0xA) {
        goto block_12;
    }
    if (var_3_2 == 0xD) {
        goto block_12;
    }
    xmlXPathCompileExpr(arg0);
    temp_4 = M2C_FIELD(arg0, u8 **, 0);
    if (M2C_FIELD(temp_4, u8 *, 0) == 0x29) {
        goto block_22;
    }
    xmlXPatherror(arg0, &D_011DCD70, 0x1573, 7);
    M2C_FIELD(arg0, s32 *, 8) = 7;
    return;
block_22:
    temp_3_2 = temp_4 + 1;
    M2C_FIELD(arg0, u8 **, 0) = temp_3_2;
    temp_5 = M2C_FIELD(temp_4, u8 *, 1);
    if (temp_5 == 0x20) {
        goto block_27;
    }
    if (temp_5 == 9) {
        goto block_27;
    }
    if (temp_5 == 0xA) {
        goto block_27;
    }
    var_4_2 = temp_3_2;
    if (temp_5 != 0xD) {
        goto block_46;
    }
    goto loop_28;
block_27:
    var_4_2 = temp_3_2;
loop_28:
    temp_2_3 = var_4_2 + 1;
    if (*var_4_2 == 0) {
        goto block_30;
    }
    M2C_FIELD(arg0, u8 **, 0) = temp_2_3;
    var_4_2 = temp_2_3;
block_30:
    var_3_3 = *var_4_2;
    if (var_3_3 == 0x20) {
        goto loop_28;
    }
    if (var_3_3 == 9) {
        goto loop_28;
    }
    if (var_3_3 == 0xA) {
        goto loop_28;
    }
    if (var_3_3 == 0xD) {
        goto loop_28;
    }
    goto block_47;
block_36:
    if (xmlIsDigit(M2C_FIELD(var_4, u8 *, 0)) != 0) {
        goto block_38;
    }
    goto block_40;
block_38:
    xmlXPathCompNumber(arg0);
    var_4_2 = M2C_FIELD(arg0, u8 **, 0);
    goto block_46;
block_40:
    temp_4_2 = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0), u8 *, 0);
    if (temp_4_2 == 0x27) {
        goto block_42;
    }
    if (temp_4_2 != 0x22) {
        goto block_43;
    }
block_42:
    xmlXPathCompLiteral(arg0);
    var_4_2 = M2C_FIELD(arg0, u8 **, 0);
    goto block_46;
block_43:
    xmlXPathCompFunctionCall(arg0);
    var_4_2 = M2C_FIELD(arg0, u8 **, 0);
    goto block_46;
block_44:
    temp_2_4 = var_4_2 + 1;
    if (*var_4_2 == 0) {
        goto block_46;
    }
    M2C_FIELD(arg0, u8 **, 0) = temp_2_4;
    var_4_2 = temp_2_4;
block_46:
    var_3_3 = *var_4_2;
block_47:
    if (var_3_3 == 0x20) {
        goto block_44;
    }
    if (var_3_3 == 9) {
        goto block_44;
    }
    if (var_3_3 == 0xA) {
        goto block_44;
    }
    if (var_3_3 == 0xD) {
        goto block_44;
    }
    return;
}
