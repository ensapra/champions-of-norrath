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

M2C_UNK xmlXPathCompUnionExpr(void *, u8 *, s32, s32, s32, s32, M2C_UNK); /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, s32 *);
extern s32 D_0118EDD4;
extern s32 (*D_011B1E20)(s32, s32);
extern M2C_UNK D_011DC228;

void xmlXPathCompUnaryExpr(void *arg0, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_17;
    s32 temp_17_2;
    s32 temp_2_3;
    s32 temp_2_4;
    s32 temp_2_5;
    s32 temp_2_6;
    s32 temp_5;
    s32 temp_5_2;
    s32 temp_5_3;
    s32 temp_5_4;
    s32 var_17;
    s32 var_18;
    s32 var_2_3;
    s32 var_6;
    s32 var_7;
    s32 var_8;
    s32 var_9;
    u8 *temp_2;
    u8 *var_2_2;
    u8 *var_4;
    u8 *var_5;
    u8 temp_2_2;
    u8 var_2;
    u8 var_3;
    void *temp_16;
    void *temp_3;
    void *temp_3_2;

    /* Flowgraph is not reducible, falling back to gotos-only mode. */
    var_6 = arg2;
    var_7 = arg3;
    var_8 = arg4;
    var_9 = arg5;
    var_17 = 0;
    var_18 = 0;
    var_4 = M2C_FIELD(arg0, u8 **, 0);
    var_3 = *var_4;
    goto loop_4;
block_1:
    temp_2 = var_4 + 1;
    if (*var_4 == 0) {
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
    var_5 = var_4;
    if (var_3 == 0xD) {
        goto block_1;
    }
    if (*var_5 != 0x2D) {
        goto block_19;
    }
    var_18 = 1;
    var_6 = 9;
    var_7 = 0xA;
    var_8 = 0xD;
    var_9 = 0x2D;
    var_2 = *var_5;
loop_10:
    var_17 = 1 - var_17;
    if (var_2 == 0) {
        goto loop_14;
    }
    var_2_2 = var_5 + 1;
    goto block_13;
block_12:
    var_2_2 = var_4 + 1;
    if (temp_2_2 == 0) {
        goto loop_14;
    }
block_13:
    M2C_FIELD(arg0, u8 **, 0) = var_2_2;
    var_4 = var_2_2;
loop_14:
    temp_2_2 = *var_4;
    if (temp_2_2 == 0x20) {
        goto block_12;
    }
    if (temp_2_2 == 9) {
        goto block_12;
    }
    if (temp_2_2 == 0xA) {
        goto block_12;
    }
    var_5 = var_4;
    if (temp_2_2 == 0xD) {
        goto block_12;
    }
    var_2 = *var_5;
    if (var_2 == 0x2D) {
        goto loop_10;
    }
block_19:
    xmlXPathCompUnionExpr(arg0, var_5, var_6, var_7, var_8, var_9, 1);
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        goto block_35;
    }
    if (var_18 == 0) {
        goto block_35;
    }
    temp_16 = M2C_FIELD(arg0, void **, 0x20);
    if (var_17 == 0) {
        goto block_27;
    }
    temp_5 = M2C_FIELD(temp_16, s32 *, 4);
    temp_17 = M2C_FIELD(temp_16, s32 *, 0xC);
    if (M2C_FIELD(temp_16, s32 *, 0) < temp_5) {
        goto block_25;
    }
    M2C_FIELD(temp_16, s32 *, 4) = (s32) (temp_5 * 2);
    temp_2_3 = D_011B1E20(M2C_FIELD(temp_16, s32 *, 8), temp_5 << 6);
    if (temp_2_3 == 0) {
        goto block_31;
    }
    M2C_FIELD(temp_16, s32 *, 8) = temp_2_3;
block_25:
    temp_5_2 = M2C_FIELD(temp_16, s32 *, 8);
    M2C_FIELD(temp_16, s32 *, 0xC) = M2C_FIELD(temp_16, s32 *, 0);
    M2C_FIELD(((M2C_FIELD(temp_16, s32 *, 0) << 5) + temp_5_2), s32 *, 4) = temp_17;
    M2C_FIELD(((M2C_FIELD(temp_16, s32 *, 0) << 5) + temp_5_2), s32 *, 8) = -1;
    var_2_3 = 2;
    goto block_34;
block_27:
    temp_5_3 = M2C_FIELD(temp_16, s32 *, 4);
    temp_17_2 = M2C_FIELD(temp_16, s32 *, 0xC);
    if (M2C_FIELD(temp_16, s32 *, 0) < temp_5_3) {
        goto block_33;
    }
    M2C_FIELD(temp_16, s32 *, 4) = (s32) (temp_5_3 * 2);
    temp_2_4 = D_011B1E20(M2C_FIELD(temp_16, s32 *, 8), temp_5_3 << 6);
    if (temp_2_4 == 0) {
        goto block_30;
    }
    M2C_FIELD(temp_16, s32 *, 8) = temp_2_4;
    goto block_32;
block_30:
block_31:
    temp_2_5 = M2C_FIELD(temp_16, s32 *, 4);
    M2C_FIELD(temp_16, s32 *, 4) = (s32) ((s32) (temp_2_5 + ((u32) temp_2_5 >> 0x1F)) >> 1);
    D_0118EDD0(D_0118EDD4, &D_011DC228, &D_0118EDD4);
    return;
block_32:
block_33:
    temp_5_4 = M2C_FIELD(temp_16, s32 *, 8);
    M2C_FIELD(temp_16, s32 *, 0xC) = M2C_FIELD(temp_16, s32 *, 0);
    M2C_FIELD(((M2C_FIELD(temp_16, s32 *, 0) << 5) + temp_5_4), s32 *, 4) = temp_17_2;
    M2C_FIELD(((M2C_FIELD(temp_16, s32 *, 0) << 5) + temp_5_4), s32 *, 8) = -1;
    var_2_3 = 3;
block_34:
    temp_3 = (M2C_FIELD(temp_16, s32 *, 0) << 5) + M2C_FIELD(temp_16, s32 *, 8);
    M2C_FIELD(temp_3, s32 *, 0xC) = var_2_3;
    M2C_FIELD(temp_3, s32 *, 0) = 5;
    M2C_FIELD(((M2C_FIELD(temp_16, s32 *, 0) << 5) + M2C_FIELD(temp_16, s32 *, 8)), s32 *, 0x10) = 0;
    M2C_FIELD(((M2C_FIELD(temp_16, s32 *, 0) << 5) + M2C_FIELD(temp_16, s32 *, 8)), s32 *, 0x14) = 0;
    temp_2_6 = M2C_FIELD(temp_16, s32 *, 0);
    temp_3_2 = (temp_2_6 << 5) + M2C_FIELD(temp_16, s32 *, 8);
    M2C_FIELD(temp_16, s32 *, 0) = (s32) (temp_2_6 + 1);
    M2C_FIELD(temp_3_2, s32 *, 0x1C) = 0;
    M2C_FIELD(temp_3_2, s32 *, 0x18) = 0;
block_35:
    return;
}
