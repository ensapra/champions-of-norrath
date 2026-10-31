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

M2C_UNK xmlXPathCompRelativeLocationPath(void *);   /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, s32 *);
extern s32 D_0118EDD4;
extern s32 (*D_011B1E20)(s32, s32, s32);
extern M2C_UNK D_011DC228;

void xmlXPathCompLocationPath(void *arg0) {
    s32 temp_18;
    s32 temp_2_4;
    s32 temp_2_5;
    s32 temp_2_6;
    s32 temp_4;
    s32 temp_5_2;
    s32 temp_6;
    u8 *temp_2;
    u8 *temp_2_2;
    u8 *temp_2_3;
    u8 *temp_3;
    u8 *var_4;
    u8 *var_4_2;
    u8 temp_3_2;
    u8 temp_5;
    u8 var_3;
    u8 var_3_2;
    void *temp_16;
    void *temp_3_3;
    void *temp_3_4;

    var_4 = M2C_FIELD(arg0, u8 **, 0);
    var_3 = *var_4;
loop_4:
    if (var_3 == 0x20) {
block_1:
        temp_2 = var_4 + 1;
        if (*var_4 != 0) {
            M2C_FIELD(arg0, u8 **, 0) = temp_2;
            var_4 = temp_2;
        }
        var_3 = *var_4;
        goto loop_4;
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
    if (*var_4 != 0x2F) {
        xmlXPathCompRelativeLocationPath(arg0);
        return;
    }
loop_11:
    if (M2C_FIELD(var_4, u8 *, 1) != 0x2F) {
        if (M2C_FIELD(var_4, u8 *, 0) == 0x2F) {
            temp_3 = var_4 + 1;
            M2C_FIELD(arg0, u8 **, 0) = temp_3;
            temp_5 = M2C_FIELD(var_4, u8 *, 1);
            if ((temp_5 != 0x20) && (temp_5 != 9) && (temp_5 != 0xA)) {
                var_4 = temp_3;
                if (temp_5 == 0xD) {
                    goto loop_38;
                }
            } else {
                var_4 = temp_3;
                do {
loop_38:
                    temp_2_2 = var_4 + 1;
                    if (*var_4 != 0) {
                        M2C_FIELD(arg0, u8 **, 0) = temp_2_2;
                        var_4 = temp_2_2;
                    }
                    temp_3_2 = *var_4;
                    if (temp_3_2 == 0x20) {
                        goto loop_38;
                    }
                    if (temp_3_2 == 9) {
                        goto loop_38;
                    }
                    if (temp_3_2 == 0xA) {
                        goto loop_38;
                    }
                } while (temp_3_2 == 0xD);
            }
            if (*var_4 != 0) {
                goto block_45;
            }
            goto block_46;
        }
    } else {
        var_4_2 = var_4 + 2;
        M2C_FIELD(arg0, u8 **, 0) = var_4_2;
        var_3_2 = M2C_FIELD(var_4, u8 *, 2);
loop_19:
        if (var_3_2 == 0x20) {
block_16:
            temp_2_3 = var_4_2 + 1;
            if (*var_4_2 != 0) {
                M2C_FIELD(arg0, u8 **, 0) = temp_2_3;
                var_4_2 = temp_2_3;
            }
            var_3_2 = *var_4_2;
            goto loop_19;
        }
        if (var_3_2 == 9) {
            goto block_16;
        }
        if (var_3_2 == 0xA) {
            goto block_16;
        }
        if (var_3_2 == 0xD) {
            goto block_16;
        }
        temp_16 = M2C_FIELD(arg0, void **, 0x20);
        temp_6 = M2C_FIELD(temp_16, s32 *, 0);
        temp_5_2 = M2C_FIELD(temp_16, s32 *, 4);
        temp_18 = M2C_FIELD(temp_16, s32 *, 0xC);
        if (temp_6 >= temp_5_2) {
            M2C_FIELD(temp_16, s32 *, 4) = (s32) (temp_5_2 * 2);
            temp_2_4 = D_011B1E20(M2C_FIELD(temp_16, s32 *, 8), temp_5_2 << 6, temp_6);
            if (temp_2_4 != 0) {
                M2C_FIELD(temp_16, s32 *, 8) = temp_2_4;
                goto block_30;
            }
            temp_2_5 = M2C_FIELD(temp_16, s32 *, 4);
            M2C_FIELD(temp_16, s32 *, 4) = (s32) ((s32) (temp_2_5 + ((u32) temp_2_5 >> 0x1F)) >> 1);
            D_0118EDD0(D_0118EDD4, &D_011DC228, &D_0118EDD4);
        } else {
block_30:
            temp_4 = M2C_FIELD(temp_16, s32 *, 8);
            M2C_FIELD(temp_16, s32 *, 0xC) = M2C_FIELD(temp_16, s32 *, 0);
            M2C_FIELD(((M2C_FIELD(temp_16, s32 *, 0) << 5) + temp_4), s32 *, 4) = temp_18;
            M2C_FIELD(((M2C_FIELD(temp_16, s32 *, 0) << 5) + temp_4), s32 *, 8) = -1;
            temp_3_3 = (M2C_FIELD(temp_16, s32 *, 0) << 5) + temp_4;
            M2C_FIELD(temp_3_3, s32 *, 0xC) = 6;
            M2C_FIELD(temp_3_3, s32 *, 0) = 0xB;
            M2C_FIELD(((M2C_FIELD(temp_16, s32 *, 0) << 5) + temp_4), s32 *, 0x10) = 1;
            M2C_FIELD(((M2C_FIELD(temp_16, s32 *, 0) << 5) + temp_4), s32 *, 0x14) = 0;
            temp_2_6 = M2C_FIELD(temp_16, s32 *, 0);
            temp_3_4 = (temp_2_6 << 5) + temp_4;
            M2C_FIELD(temp_16, s32 *, 0) = (s32) (temp_2_6 + 1);
            M2C_FIELD(temp_3_4, s32 *, 0x1C) = 0;
            M2C_FIELD(temp_3_4, s32 *, 0x18) = 0;
        }
block_45:
        xmlXPathCompRelativeLocationPath(arg0);
        var_4 = M2C_FIELD(arg0, u8 **, 0);
block_46:
        if (*var_4 == 0x2F) {
            goto loop_11;
        }
    }
}
