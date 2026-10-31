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

void *xmlGetDocEntity(void *, s32);                 /* extern */
void *xmlGetDtdAttrDesc(s32, s32, s32);             /* extern */
s32 xmlStrEqual(s32, s32);                          /* extern */
s32 xmlStrcat(s32, s32);                            /* extern */
s32 xmlStrdup(M2C_UNK *);                           /* extern */
extern s32 D_0118E5B0;
extern M2C_UNK D_011C2C18;

s32 xmlGetProp(void *arg0, s32 arg1) {
    s32 temp_4;
    s32 temp_4_2;
    s32 var_17;
    s32 var_2;
    s32 var_2_2;
    s32 var_3;
    s32 var_4;
    s32 var_5;
    void *temp_16;
    void *temp_18;
    void *temp_2;
    void *var_16;
    void *var_16_2;
    void *var_2_3;

    if (arg0 != NULL) {
        var_2 = 0;
        if (arg1 != 0) {
            var_16 = M2C_FIELD(arg0, void **, 0x2C);
            if (var_16 != NULL) {
                var_4 = M2C_FIELD(var_16, s32 *, 8);
loop_4:
                if (xmlStrEqual(var_4, arg1) == 0) {
                    var_16 = M2C_FIELD(var_16, void **, 0x18);
                    if (var_16 != NULL) {
                        var_4 = M2C_FIELD(var_16, s32 *, 8);
                        goto loop_4;
                    }
                    goto block_27;
                }
                var_16_2 = M2C_FIELD(var_16, void **, 0xC);
                var_17 = 0;
                temp_18 = M2C_FIELD(arg0, void **, 0x20);
                var_2_2 = 0;
                if (var_16_2 != NULL) {
                    var_3 = M2C_FIELD(var_16_2, s32 *, 4);
loop_9:
                    if ((u32) (var_3 - 3) < 2U) {
                        goto block_15;
                    }
                    if (var_3 == 5) {
                        temp_2 = xmlGetDocEntity(temp_18, M2C_FIELD(var_16_2, s32 *, 8));
                        if (temp_2 != NULL) {
                            var_5 = M2C_FIELD(temp_2, s32 *, 0x28);
                        } else {
block_15:
                            var_5 = M2C_FIELD(var_16_2, s32 *, 0x28);
                        }
                        var_17 = xmlStrcat(var_17, var_5);
                    }
                    var_16_2 = M2C_FIELD(var_16_2, void **, 0x18);
                    if (var_16_2 != NULL) {
                        var_3 = M2C_FIELD(var_16_2, s32 *, 4);
                        goto loop_9;
                    }
                    var_2_2 = var_17;
                }
                if (var_2_2 != 0) {
                    return var_2_2;
                }
                var_2 = xmlStrdup(&D_011C2C18);
                goto block_39;
            }
block_27:
            var_2 = 0;
            if (D_0118E5B0 != 0) {
                temp_16 = M2C_FIELD(arg0, void **, 0x20);
                if (temp_16 != NULL) {
                    temp_4 = M2C_FIELD(temp_16, s32 *, 0x2C);
                    if (temp_4 != 0) {
                        var_2_3 = xmlGetDtdAttrDesc(temp_4, M2C_FIELD(arg0, s32 *, 8), arg1);
                        if (var_2_3 == NULL) {
                            temp_4_2 = M2C_FIELD(temp_16, s32 *, 0x30);
                            if (temp_4_2 != 0) {
                                var_2_3 = xmlGetDtdAttrDesc(temp_4_2, M2C_FIELD(arg0, s32 *, 8), arg1);
                            }
                            if (var_2_3 != NULL) {
                                goto block_34;
                            }
                            goto block_38;
                        }
block_34:
                        var_2 = xmlStrdup(M2C_FIELD(var_2_3, M2C_UNK **, 0x30));
                    }
                }
            }
            goto block_39;
        }
        goto block_39;
    }
block_38:
    var_2 = 0;
block_39:
    return var_2;
}
