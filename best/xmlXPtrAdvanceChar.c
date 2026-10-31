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

s32 xmlStrlen(s32);                                 /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, M2C_UNK *, M2C_UNK);
extern s32 D_0118EDD4;
extern M2C_UNK D_011DD7E0;
extern M2C_UNK D_011DD800;
extern M2C_UNK D_011DD848;

s32 xmlXPtrAdvanceChar(void **arg0, s32 *arg1, s32 arg2) {
    void **sp0;
    s32 *sp4;
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_2_4;
    s32 temp_4;
    s32 var_16;
    s32 var_18;
    s32 var_22;
    s32 var_3;
    s32 var_4;
    s32 var_5;
    void *var_16_2;
    void *var_17;
    void *var_2;
    void *var_2_2;
    void *var_3_2;
    void *var_3_3;

    var_22 = arg2;
    sp0 = arg0;
    sp4 = arg1;
    if ((arg0 != NULL) && (arg1 != NULL)) {
        var_17 = *sp0;
        if (var_17 != NULL) {
            var_18 = *sp4;
            if (var_22 >= 0) {
loop_39:
                if (var_17 != NULL) {
                    temp_2 = M2C_FIELD(var_17, s32 *, 4);
                    if ((temp_2 != 1) && (temp_2 != 9) && (temp_2 != 0xD)) {
                        if (var_17 == NULL) {
                            goto block_44;
                        }
                        var_18 = (var_18 == 0) ? 1 : var_18;
                        if (var_22 != 0) {
                            temp_4 = M2C_FIELD(var_17, s32 *, 0x28);
                            var_16 = 0;
                            if (temp_4 != 0) {
                                var_16 = xmlStrlen(temp_4);
                            }
                            var_3 = var_18 + var_22;
                            if (var_16 < var_18) {
                                var_18 = var_16;
                                D_0118EDD0(D_0118EDD4, &D_011DD848, &D_011DD800, 0x8FE);
                                var_3 = var_18 + var_22;
                            }
                            if (var_3 >= var_16) {
                                var_3_2 = var_17;
                                var_22 -= var_16 - var_18;
loop_53:
                                var_17 = NULL;
                                if (var_3_2 != NULL) {
                                    var_2 = M2C_FIELD(var_3_2, void **, 0xC);
                                    if (var_2 != NULL) {
                                        goto block_60;
                                    }
loop_57:
                                    var_2 = M2C_FIELD(var_3_2, void **, 0x18);
                                    if (var_2 == NULL) {
                                        var_3_2 = M2C_FIELD(var_3_2, void **, 0x14);
                                        var_17 = NULL;
                                        if (var_3_2 != NULL) {
                                            goto loop_57;
                                        }
                                    } else {
block_60:
                                        var_3_2 = var_2;
                                        temp_2_2 = M2C_FIELD(var_3_2, s32 *, 4);
                                        if ((temp_2_2 == 1) || (temp_2_2 == 3) || (temp_2_2 == 9) || (temp_2_2 == 0xD) || (temp_2_2 == 4)) {
                                            var_17 = NULL;
                                            if (temp_2_2 == 5) {
                                                D_0118EDD0(D_0118EDD4, &D_011DD7E0, &D_011DD800, 0x8B4);
                                                var_17 = NULL;
                                            }
                                        } else {
                                            goto loop_53;
                                        }
                                    }
                                }
                                if (var_22 < 0) {
                                    goto block_71;
                                }
                                goto loop_39;
                            }
                            *sp0 = var_17;
                            *sp4 = var_3;
                            return 0;
                        }
                        *sp0 = var_17;
                        *sp4 = var_18;
                        return 0;
                    }
                    var_16_2 = var_17;
                    if (var_18 > 0) {
                        var_4 = 0;
                        if (var_17 != NULL) {
                            var_3_3 = M2C_FIELD(var_17, void **, 0xC);
                            var_5 = 0;
loop_14:
                            var_17 = var_3_3;
                            if (var_5 == 0) {
                                var_17 = NULL;
                                if (var_3_3 != NULL) {
                                    temp_2_3 = M2C_FIELD(var_3_3, s32 *, 4);
                                    if (((temp_2_3 == 1) || (temp_2_3 == 9) || (temp_2_3 == 0xD)) && (var_4 += 1, var_5 = var_18 < var_4, (var_4 == var_18))) {
                                        var_17 = var_3_3;
                                    } else {
                                        var_3_3 = M2C_FIELD(var_3_3, void **, 0x18);
                                        goto loop_14;
                                    }
                                }
                            }
                        }
                    } else {
loop_22:
                        var_17 = NULL;
                        if (var_16_2 != NULL) {
                            var_2_2 = M2C_FIELD(var_16_2, void **, 0xC);
                            if (var_2_2 != NULL) {
                                goto block_30;
                            }
loop_27:
                            var_2_2 = M2C_FIELD(var_16_2, void **, 0x18);
                            if (var_2_2 == NULL) {
                                var_16_2 = M2C_FIELD(var_16_2, void **, 0x14);
                                var_17 = NULL;
                                if (var_16_2 != NULL) {
                                    goto loop_27;
                                }
                            } else {
block_30:
                                var_16_2 = var_2_2;
                                temp_2_4 = M2C_FIELD(var_16_2, s32 *, 4);
                                if ((temp_2_4 == 1) || (temp_2_4 == 3) || (temp_2_4 == 9) || (temp_2_4 == 0xD) || (temp_2_4 == 4)) {
                                    if (temp_2_4 == 5) {
                                        D_0118EDD0(D_0118EDD4, &D_011DD7E0, &D_011DD800, 0x8B4);
                                    }
                                    var_17 = var_16_2;
                                } else {
                                    goto loop_22;
                                }
                            }
                        }
                    }
                    var_18 = 0;
                    goto loop_39;
                }
block_44:
                *sp0 = NULL;
                *sp4 = 0;
                return -1;
            }
            goto block_71;
        }
        goto block_71;
    }
block_71:
    return -1;
}
