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

M2C_UNK valuePush(void *, s32);                     /* extern */
M2C_UNK xmlXPathIdFunction(void *, M2C_UNK);        /* extern */
s32 xmlXPathNewString(void *, void *);              /* extern */
void *xmlXPathParseName(void *);                    /* extern */
M2C_UNK xmlXPathRoot(void *);                       /* extern */
M2C_UNK xmlXPatherror(void *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK xmlXPtrEvalFullXPtr(void *, void *);        /* extern */
M2C_UNK xmlXPtrGetChildNo(void *, s32, u8 *);       /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, M2C_UNK);
extern s32 D_0118EDD4;
extern M2C_UNK (*D_011B1E18)(void *);
extern s32 (*D_011B1E1C)(M2C_UNK);
extern M2C_UNK D_011DD800;
extern M2C_UNK D_011DD978;
extern M2C_UNK D_011DD9A0;

void xmlXPtrEvalXPointer(void *arg0) {
    M2C_UNK var_6;
    s32 temp_2;
    s32 var_5;
    s32 var_5_2;
    u8 *temp_2_2;
    u8 *temp_2_4;
    u8 *temp_2_5;
    u8 *var_2_2;
    u8 *var_4;
    u8 *var_4_2;
    u8 *var_6_2;
    u8 temp_17;
    u8 temp_18;
    u8 temp_3;
    u8 temp_3_2;
    u8 temp_3_3;
    u8 var_2;
    u8 var_3;
    void *temp_2_3;

    /* Flowgraph is not reducible, falling back to gotos-only mode. */
    if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        goto block_4;
    }
    temp_2 = D_011B1E1C(0x28);
    M2C_FIELD(arg0, s32 *, 0x1C) = temp_2;
    if (temp_2 != 0) {
        goto block_3;
    }
    D_011B1E18(arg0);
    D_0118EDD0(D_0118EDD4, &D_011DD9A0, D_0118EDD0);
    return;
block_3:
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0xA;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
block_4:
    var_4 = M2C_FIELD(arg0, u8 **, 0);
    var_3 = M2C_FIELD(var_4, u8 *, 0);
    goto loop_8;
block_5:
    temp_2_2 = var_4 + 1;
    if (*var_4 == 0) {
        goto block_7;
    }
    M2C_FIELD(arg0, u8 **, 0) = temp_2_2;
    var_4 = temp_2_2;
block_7:
    var_3 = *var_4;
loop_8:
    if (var_3 == 0x20) {
        goto block_5;
    }
    if (var_3 == 9) {
        goto block_5;
    }
    if (var_3 == 0xA) {
        goto block_5;
    }
    if (var_3 == 0xD) {
        goto block_5;
    }
    temp_17 = *var_4;
    if (temp_17 != 0x2F) {
        goto block_26;
    }
    xmlXPathRoot(arg0);
    var_4_2 = M2C_FIELD(arg0, u8 **, 0);
    temp_18 = M2C_FIELD(var_4_2, u8 *, 0);
    if (temp_18 != temp_17) {
        goto loop_47;
    }
    if (M2C_FIELD(var_4_2, u8 *, 1) == 0x31) {
        goto block_16;
    }
    D_0118EDD0(D_0118EDD4, &D_011DD978, D_0118EDD0);
    var_4_2 = M2C_FIELD(arg0, u8 **, 0);
block_16:
    if (*var_4_2 != temp_18) {
        goto loop_47;
    }
    var_2 = *var_4_2;
loop_18:
    var_5 = 0;
    if (var_2 == 0) {
        goto loop_23;
    }
    var_2_2 = var_4_2 + 1;
    goto block_22;
block_20:
    temp_3 = *var_4_2;
    var_5 = ((var_5 * 0xA) + temp_3) - 0x30;
    if (temp_3 == 0) {
        goto loop_23;
    }
    var_2_2 = var_4_2 + 1;
block_22:
    M2C_FIELD(arg0, u8 **, 0) = var_2_2;
    var_4_2 = var_2_2;
loop_23:
    if ((u32) ((*var_4_2 + 0xD0) & 0xFF) < 0xAU) {
        goto block_20;
    }
    xmlXPtrGetChildNo(arg0, var_5, var_4_2);
    var_4_2 = M2C_FIELD(arg0, u8 **, 0);
    var_2 = M2C_FIELD(var_4_2, u8 *, 0);
    if (var_2 == 0x2F) {
        goto loop_18;
    }
    goto loop_47;
block_26:
    temp_2_3 = xmlXPathParseName(arg0);
    if (temp_2_3 == NULL) {
        goto block_28;
    }
    goto block_30;
block_28:
    var_6 = 0x4AC;
    goto block_53;
block_30:
    if (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0), u8 *, 0) != 0x28) {
        goto block_33;
    }
    xmlXPtrEvalFullXPtr(arg0, temp_2_3);
    return;
block_33:
    valuePush(arg0, xmlXPathNewString(temp_2_3, temp_2_3));
    D_011B1E18(temp_2_3);
    xmlXPathIdFunction(arg0, 1);
    var_4_2 = M2C_FIELD(arg0, u8 **, 0);
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        goto loop_47;
    }
    var_6_2 = var_4_2;
    if (M2C_FIELD(var_4_2, u8 *, 0) != 0x2F) {
        goto loop_47;
    }
loop_36:
    var_5_2 = 0;
    if (*var_6_2 == 0) {
        goto loop_41;
    }
    goto block_40;
block_39:
    temp_3_2 = *var_6_2;
    var_5_2 = ((var_5_2 * 0xA) + temp_3_2) - 0x30;
    if (temp_3_2 == 0) {
        goto loop_41;
    }
block_40:
    temp_2_4 = var_6_2 + 1;
    M2C_FIELD(arg0, u8 **, 0) = temp_2_4;
    var_4_2 = temp_2_4;
loop_41:
    var_6_2 = var_4_2;
    if ((u32) ((*var_4_2 + 0xD0) & 0xFF) < 0xAU) {
        goto block_39;
    }
    xmlXPtrGetChildNo(arg0, var_5_2, var_6_2);
    var_4_2 = M2C_FIELD(arg0, u8 **, 0);
    var_6_2 = var_4_2;
    if (M2C_FIELD(var_4_2, u8 *, 0) == 0x2F) {
        goto loop_36;
    }
    goto loop_47;
block_44:
block_45:
    temp_2_5 = var_4_2 + 1;
    if (*var_4_2 == 0) {
        goto loop_47;
    }
    M2C_FIELD(arg0, u8 **, 0) = temp_2_5;
    var_4_2 = temp_2_5;
loop_47:
    temp_3_3 = *var_4_2;
    if (temp_3_3 == 0x20) {
        goto block_44;
    }
    if (temp_3_3 == 9) {
        goto block_44;
    }
    if (temp_3_3 == 0xA) {
        goto block_44;
    }
    if (temp_3_3 == 0xD) {
        goto block_45;
    }
    if (*var_4_2 == 0) {
        goto block_54;
    }
    var_6 = 0x4B8;
block_53:
    xmlXPatherror(arg0, &D_011DD800, var_6, 7);
    M2C_FIELD(arg0, s32 *, 8) = 7;
block_54:
    return;
}
