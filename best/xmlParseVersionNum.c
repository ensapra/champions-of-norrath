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
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, s32, M2C_UNK);
extern s32 D_0118EDD4;
extern u8 *(*D_011B1E1C)(M2C_UNK);
extern u8 *(*D_011B1E20)(u8 *, s32);
extern M2C_UNK D_011D70D8;
extern M2C_UNK D_011D70F8;

u8 *xmlParseVersionNum(void *arg0) {
    M2C_UNK *var_5;
    s32 var_16;
    s32 var_20;
    s32 var_21;
    s32 var_2_2;
    s32 var_6;
    u8 *var_17;
    u8 *var_2_3;
    u8 *var_3;
    u8 var_19;
    u8 var_2;
    u8 var_3_2;

    /* Flowgraph is not reducible, falling back to gotos-only mode. */
    var_20 = 0xA;
    var_21 = 0;
    var_17 = D_011B1E1C(0xA);
    if (var_17 == NULL) {
        goto block_2;
    }
    goto block_4;
block_2:
    var_5 = &D_011D70D8;
    var_6 = 0xA;
    goto block_9;
block_4:
    if (M2C_FIELD(arg0, s32 *, 0xA4) != 0) {
        goto block_6;
    }
    goto block_11;
block_6:
    var_2 = (u8) M2C_FIELD(arg0, s32 *, 0xA4);
    goto block_12;
block_8:
    var_5 = &D_011D70F8;
    var_6 = var_20;
block_9:
    ((M2C_UNK (*)(s32, M2C_UNK *, s32, M2C_UNK)) D_0118EDD0)(D_0118EDD4, var_5, var_6, (M2C_UNK (*)(s32, M2C_UNK *, s32, M2C_UNK)) D_0118EDD0);
    return NULL;
block_11:
    var_2 = *M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), u8 **, 0x10);
block_12:
    var_19 = var_2;
    var_16 = 1;
    if ((u32) ((var_19 + 0x9F) & 0xFF) < 0x1AU) {
        goto block_21;
    }
    var_2_2 = 1 < 0xA;
    if ((u32) ((var_19 + 0xBF) & 0xFF) < 0x1AU) {
        goto loop_22;
    }
    var_2_2 = 1 < 0xA;
    if ((u32) ((var_19 + 0xD0) & 0xFF) < 0xAU) {
        goto loop_22;
    }
    if (var_19 == 0x5F) {
        goto block_21;
    }
    if (var_19 == 0x2E) {
        goto block_21;
    }
    if (var_19 == 0x3A) {
        goto block_21;
    }
    var_3 = var_17;
    if (var_19 != 0x2D) {
        goto block_36;
    }
block_20:
    var_16 = var_21 + 1;
block_21:
    var_2_2 = var_16 < var_20;
loop_22:
    var_2_3 = &var_17[var_21];
    if (var_2_2 != 0) {
        goto block_24;
    }
    var_20 *= 2;
    var_17 = D_011B1E20(var_17, var_20);
    var_2_3 = &var_17[var_21];
    if (var_17 == NULL) {
        goto block_8;
    }
block_24:
    var_21 = var_16;
    *var_2_3 = var_19;
    xmlNextChar(arg0);
    if (M2C_FIELD(arg0, s32 *, 0xA4) != 0) {
        goto block_26;
    }
    goto block_28;
block_26:
    var_3_2 = (u8) M2C_FIELD(arg0, s32 *, 0xA4);
    goto block_29;
block_28:
    var_3_2 = *M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), u8 **, 0x10);
block_29:
    var_19 = var_3_2;
    if ((u32) ((var_3_2 + 0x9F) & 0xFF) < 0x1AU) {
        goto block_20;
    }
    var_16 = var_21 + 1;
    if ((u32) ((var_3_2 + 0xBF) & 0xFF) < 0x1AU) {
        goto block_21;
    }
    var_2_2 = var_16 < var_20;
    if ((u32) ((var_3_2 + 0xD0) & 0xFF) < 0xAU) {
        goto loop_22;
    }
    if (var_3_2 == 0x5F) {
        goto block_21;
    }
    if (var_3_2 == 0x2E) {
        goto block_21;
    }
    if (var_3_2 == 0x3A) {
        goto block_21;
    }
    var_3 = &var_17[var_21];
    if (var_3_2 == 0x2D) {
        goto block_21;
    }
block_36:
    *var_3 = 0;
    return var_17;
}
