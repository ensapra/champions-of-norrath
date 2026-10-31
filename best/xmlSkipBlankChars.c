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
M2C_UNK xmlParserHandlePEReference(void *);         /* extern */
M2C_UNK xmlPopInput(void *);                        /* extern */

s32 xmlSkipBlankChars(void *arg0) {
    s32 var_16;
    s32 var_20;
    u8 *var_3;
    u8 *var_3_2;

    /* Flowgraph is not reducible, falling back to gotos-only mode. */
    var_20 = 0;
loop_1:
    var_16 = M2C_FIELD(arg0, s32 *, 0xA4);
    if (var_16 != 0) {
        goto loop_7;
    }
    var_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), u8 **, 0x10);
    goto block_6;
block_4:
    xmlNextChar(arg0);
    var_16 = M2C_FIELD(arg0, s32 *, 0xA4);
    var_20 += 1;
    if (var_16 != 0) {
        goto loop_7;
    }
    var_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), u8 **, 0x10);
block_6:
    var_16 = (s32) *var_3;
loop_7:
    if (var_16 == 0x20) {
        goto block_4;
    }
    if (var_16 == 9) {
        goto block_4;
    }
    if (var_16 == 0xA) {
        goto block_4;
    }
    if (var_16 == 0xD) {
        goto block_4;
    }
    if (var_16 != 0) {
        goto block_19;
    }
    if (M2C_FIELD(arg0, s32 *, 0x28) < 2) {
        goto block_19;
    }
    if (M2C_FIELD(arg0, s32 *, 0xA0) == 5) {
        goto block_19;
    }
loop_15:
    xmlPopInput(arg0);
    var_16 = M2C_FIELD(arg0, s32 *, 0xA4);
    if (var_16 != 0) {
        goto block_20;
    }
    var_3_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), u8 **, 0x10);
    var_16 = (s32) *var_3_2;
    if (var_16 != 0) {
        goto block_21;
    }
    if (M2C_FIELD(arg0, s32 *, 0x28) < 2) {
        goto block_19;
    }
    if (M2C_FIELD(arg0, s32 *, 0xA0) != 5) {
        goto loop_15;
    }
block_19:
block_20:
    var_3_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), u8 **, 0x10);
block_21:
    if (*var_3_2 != 0x25) {
        goto block_23;
    }
    xmlParserHandlePEReference(arg0);
block_23:
    if (var_16 == 0x20) {
        goto loop_1;
    }
    if (var_16 == 9) {
        goto loop_1;
    }
    if (var_16 == 0xA) {
        goto loop_1;
    }
    if (var_16 == 0xD) {
        goto loop_1;
    }
    return var_20;
}
