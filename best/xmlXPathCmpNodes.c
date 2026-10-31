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

s32 xmlXPathCmpNodes(void *arg0, void *arg1) {
    s32 var_2;
    s32 var_2_2;
    s32 var_7;
    s32 var_8;
    void *temp_2;
    void *temp_2_2;
    void *temp_3;
    void *var_3;
    void *var_3_2;
    void *var_3_3;
    void *var_4;
    void *var_5;
    void *var_6;
    void *var_6_2;
    void *var_6_3;
    void *var_7_2;

    /* Flowgraph is not reducible, falling back to gotos-only mode. */
    var_4 = arg0;
    var_5 = arg1;
    if (var_4 == NULL) {
        goto block_27;
    }
    if (var_5 == NULL) {
        goto block_27;
    }
    var_2 = 0;
    if (var_4 == var_5) {
        goto block_39;
    }
    var_2 = 1;
    if (var_4 == M2C_FIELD(var_5, s32 *, 0x1C)) {
        goto block_39;
    }
    var_2 = -1;
    if (var_4 == M2C_FIELD(var_5, s32 *, 0x18)) {
        goto block_39;
    }
    var_3 = var_5;
    var_6 = M2C_FIELD(var_3, void **, 0x14);
    var_8 = 0;
    if (var_6 == NULL) {
        goto block_8;
    }
loop_6:
    var_3 = var_6;
    if (var_3 == var_4) {
        goto block_35;
    }
    var_6 = M2C_FIELD(var_3, void **, 0x14);
    var_8 += 1;
    if (var_6 != NULL) {
        goto loop_6;
    }
block_8:
    var_3_2 = var_4;
    var_6_2 = M2C_FIELD(var_3_2, void **, 0x14);
    var_7 = 0;
    if (var_6_2 == NULL) {
        goto block_11;
    }
loop_9:
    var_3_2 = var_6_2;
    if (var_3_2 == var_5) {
        goto block_33;
    }
    var_7 += 1;
    temp_2 = M2C_FIELD(var_3_2, void **, 0x14);
    var_6_2 = temp_2;
    if (temp_2 != NULL) {
        goto loop_9;
    }
block_11:
    var_2 = -2;
    if (var_3 != var_3_2) {
        goto block_39;
    }
    var_2_2 = var_7 < var_8;
    if (var_8 >= var_7) {
        goto block_18;
    }
loop_13:
    var_7 -= 1;
    var_4 = M2C_FIELD(var_4, void **, 0x14);
    if (var_8 < var_7) {
        goto loop_13;
    }
    goto block_17;
block_16:
    var_5 = M2C_FIELD(var_5, void **, 0x14);
block_17:
    var_2_2 = var_7 < var_8;
block_18:
    if (var_2_2 == 0) {
        goto block_20;
    }
    var_8 -= 1;
    goto block_16;
block_20:
    var_7_2 = M2C_FIELD(var_4, void **, 0x14);
    var_6_3 = M2C_FIELD(var_5, void **, 0x14);
    if (var_7_2 == var_6_3) {
        goto block_30;
    }
loop_23:
    var_4 = var_7_2;
    var_5 = var_6_3;
    if (var_4 == NULL) {
        goto block_27;
    }
    if (var_5 == NULL) {
        goto block_26;
    }
    temp_3 = M2C_FIELD(var_4, void **, 0x14);
    goto block_29;
block_26:
block_27:
    return -2;
block_29:
    temp_2_2 = M2C_FIELD(var_5, void **, 0x14);
    var_7_2 = temp_3;
    var_6_3 = temp_2_2;
    if (temp_3 != temp_2_2) {
        goto loop_23;
    }
block_30:
    if (var_4 == M2C_FIELD(var_5, s32 *, 0x18)) {
        goto block_32;
    }
    var_3_3 = M2C_FIELD(var_4, void **, 0x18);
    goto block_36;
block_32:
block_33:
    return -1;
block_35:
    return 1;
block_36:
    var_2 = -1;
    if (var_3_3 == NULL) {
        goto block_39;
    }
loop_37:
    var_2 = 1;
    if (var_3_3 == var_5) {
        goto block_39;
    }
    var_3_3 = M2C_FIELD(var_3_3, void **, 0x18);
    var_2 = -1;
    if (var_3_3 != NULL) {
        goto loop_37;
    }
block_39:
    return var_2;
}
