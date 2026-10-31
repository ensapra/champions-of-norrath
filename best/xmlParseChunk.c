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

s32 xmlCharEncInFunc(s32, s32, s32, void *, s32);   /* extern */
M2C_UNK xmlParseTryOrFinish(void *, void *);        /* extern */
M2C_UNK xmlParserInputBufferPush(void *, s32, s32, void *, s32); /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, M2C_UNK);
extern s32 D_0118EDD4;
extern M2C_UNK D_011D8048;
extern M2C_UNK D_011D8AB8;

s32 xmlParseChunk(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    M2C_UNK (*temp_2_3)(s32, M2C_UNK *);
    M2C_UNK (*temp_3_3)(s32);
    s32 temp_16;
    s32 temp_16_2;
    s32 temp_17;
    s32 temp_2;
    s32 temp_4_3;
    s32 temp_4_4;
    s32 temp_5_2;
    s32 temp_6_2;
    u32 temp_3;
    void *temp_19;
    void *temp_2_2;
    void *temp_2_4;
    void *temp_3_2;
    void *temp_4;
    void *temp_4_2;
    void *temp_5;
    void *temp_6;
    void *var_7;

    var_7 = arg3;
    temp_19 = var_7;
    if ((arg2 > 0) && (arg1 != 0)) {
        var_7 = M2C_FIELD(arg0, void **, 0x24);
        if (var_7 != NULL) {
            temp_4 = M2C_FIELD(var_7, void **, 0);
            if (temp_4 != NULL) {
                if ((M2C_FIELD(arg0, s32 *, 0xA0) != -1) && ((temp_16 = M2C_FIELD(var_7, s32 *, 0xC), temp_17 = M2C_FIELD(var_7, s32 *, 0x10) - temp_16, temp_16_2 = temp_16 - *M2C_FIELD(temp_4, s32 **, 0x10), xmlParserInputBufferPush(temp_4, arg2, arg1, var_7, arg2), temp_5 = M2C_FIELD(arg0, void **, 0x24), temp_4_2 = M2C_FIELD(M2C_FIELD(temp_5, void **, 0), void **, 0x10), temp_3 = M2C_FIELD(temp_4_2, u32 *, 4), temp_2 = M2C_FIELD(temp_4_2, s32 *, 0) + temp_16_2, M2C_FIELD(temp_5, s32 *, 0xC) = temp_2, M2C_FIELD(temp_5, s32 *, 0x10) = (s32) (temp_2 + temp_17), M2C_FIELD(temp_5, s32 *, 0x14) = (s32) (M2C_FIELD(temp_4_2, s32 *, 0) + temp_3), (temp_19 != NULL)) || (temp_3 >= 0x51U))) {
                    xmlParseTryOrFinish(arg0, temp_19);
                }
                goto block_16;
            }
        }
    }
    if (M2C_FIELD(arg0, s32 *, 0xA0) != -1) {
        temp_2_2 = M2C_FIELD(arg0, void **, 0x24);
        if (temp_2_2 != NULL) {
            temp_6 = M2C_FIELD(temp_2_2, void **, 0);
            if (temp_6 != NULL) {
                temp_4_3 = M2C_FIELD(temp_6, s32 *, 0xC);
                if (temp_4_3 != 0) {
                    temp_5_2 = M2C_FIELD(temp_6, s32 *, 0x10);
                    if (temp_5_2 != 0) {
                        temp_6_2 = M2C_FIELD(temp_6, s32 *, 0x14);
                        if (temp_6_2 != 0) {
                            if (xmlCharEncInFunc(temp_4_3, temp_5_2, temp_6_2, var_7, arg2) < 0) {
                                D_0118EDD0(D_0118EDD4, &D_011D8AB8, D_0118EDD0);
                                return 0x51;
                            }
                            goto block_17;
                        }
                    }
                }
block_16:
                goto block_17;
            }
        }
    }
block_17:
    xmlParseTryOrFinish(arg0, temp_19);
    if (temp_19 != NULL) {
        temp_4_4 = M2C_FIELD(arg0, s32 *, 0xA0);
        if (temp_4_4 != -1) {
            if (temp_4_4 != 0xE) {
                temp_3_2 = M2C_FIELD(arg0, void **, 0);
                M2C_FIELD(arg0, s32 *, 0x60) = 5;
                if (temp_3_2 != NULL) {
                    temp_2_3 = M2C_FIELD(temp_3_2, M2C_UNK (**)(s32, M2C_UNK *), 0x58);
                    if (temp_2_3 != NULL) {
                        temp_2_3(M2C_FIELD(arg0, s32 *, 4), &D_011D8048);
                    }
                }
                M2C_FIELD(arg0, s32 *, 0xC) = 0;
                M2C_FIELD(arg0, s32 *, 0xD4) = 1;
            }
            if (M2C_FIELD(arg0, s32 *, 0xA0) != -1) {
                temp_2_4 = M2C_FIELD(arg0, void **, 0);
                if (temp_2_4 != NULL) {
                    temp_3_3 = M2C_FIELD(temp_2_4, M2C_UNK (**)(s32), 0x34);
                    if (temp_3_3 != NULL) {
                        if (M2C_FIELD(arg0, s32 *, 0xD4) == 0) {
                            temp_3_3(M2C_FIELD(arg0, s32 *, 4));
                        }
                    }
                }
            }
        }
        M2C_FIELD(arg0, s32 *, 0xA0) = -1;
    }
    return M2C_FIELD(arg0, s32 *, 0x60);
}
