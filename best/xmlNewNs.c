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

M2C_UNK memset(M2C_UNK *, M2C_UNK, M2C_UNK);        /* extern */
M2C_UNK xmlFreeNs(M2C_UNK *);                       /* extern */
s32 xmlStrEqual(s32, s32);                          /* extern */
s32 xmlStrdup(s32);                                 /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, M2C_UNK);
extern s32 D_0118EDD4;
extern M2C_UNK *(*D_011B1E1C)(M2C_UNK);
extern M2C_UNK D_011C2820;

M2C_UNK *xmlNewNs(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK *temp_2;
    M2C_UNK *temp_2_2;
    M2C_UNK *temp_2_4;
    M2C_UNK *var_17;
    M2C_UNK *var_2;
    s32 temp_2_3;
    s32 var_4;

    /* Flowgraph is not reducible, falling back to gotos-only mode. */
    if (arg0 == NULL) {
        goto block_2;
    }
    var_2 = NULL;
    if (M2C_FIELD(arg0, s32 *, 4) != 1) {
        goto block_32;
    }
block_2:
    temp_2 = D_011B1E1C(0x10);
    if (temp_2 != NULL) {
        goto block_4;
    }
    D_0118EDD0(D_0118EDD4, &D_011C2820, D_0118EDD0);
    return NULL;
block_4:
    memset(temp_2, 0, 0x10);
    M2C_FIELD(temp_2, s32 *, 4) = 0x12;
    if (arg1 == 0) {
        goto block_6;
    }
    M2C_FIELD(temp_2, s32 *, 8) = xmlStrdup(arg1);
block_6:
    if (arg2 == 0) {
        goto block_8;
    }
    M2C_FIELD(temp_2, s32 *, 0xC) = xmlStrdup(arg2);
block_8:
    var_2 = temp_2;
    if (arg0 == NULL) {
        goto block_32;
    }
    temp_2_2 = M2C_FIELD(arg0, M2C_UNK **, 0x30);
    if (temp_2_2 == NULL) {
        goto block_11;
    }
    var_17 = temp_2_2;
    goto block_14;
block_11:
    M2C_FIELD(arg0, M2C_UNK **, 0x30) = temp_2;
    goto block_31;
block_14:
    var_4 = M2C_FIELD(var_17, s32 *, 0xC);
    if (var_4 != 0) {
        goto loop_22;
    }
    goto block_19;
block_17:
    temp_2_3 = M2C_FIELD(var_17, s32 *, 0xC);
    var_4 = temp_2_3;
    if (temp_2_3 != 0) {
        goto block_21;
    }
block_19:
    if (M2C_FIELD(temp_2, s32 *, 0xC) == 0) {
        goto block_25;
    }
    goto loop_22;
block_21:
loop_22:
    if (xmlStrEqual(var_4, M2C_FIELD(temp_2, s32 *, 0xC)) != 0) {
        goto block_24;
    }
    temp_2_4 = *var_17;
    goto block_27;
block_24:
block_25:
    xmlFreeNs(temp_2);
    return NULL;
block_27:
    if (temp_2_4 == NULL) {
        goto block_29;
    }
    var_17 = temp_2_4;
    goto block_17;
block_29:
    *var_17 = temp_2;
block_31:
    var_2 = temp_2;
block_32:
    return var_2;
}
