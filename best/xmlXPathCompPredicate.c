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

M2C_UNK xmlXPathCompileExpr(void *, void *, u8 *);  /* extern */
M2C_UNK xmlXPatherror(void *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, s32 *);
extern s32 D_0118EDD4;
extern s32 (*D_011B1E20)(s32, s32, u8 *);
extern M2C_UNK D_011DC228;
extern M2C_UNK D_011DCD70;

void xmlXPathCompPredicate(void *arg0, s32 arg1) {
    M2C_UNK var_6_2;
    s32 temp_19;
    s32 temp_2_3;
    s32 temp_2_4;
    s32 temp_2_5;
    s32 temp_2_6;
    s32 temp_5_2;
    s32 temp_5_3;
    s32 var_3_2;
    s32 var_4;
    u8 *temp_2;
    u8 *temp_2_2;
    u8 *temp_2_7;
    u8 *temp_4;
    u8 *var_6;
    u8 *var_6_3;
    u8 temp_3;
    u8 temp_3_2;
    u8 temp_3_5;
    u8 var_3;
    void *temp_16;
    void *temp_3_3;
    void *temp_3_4;
    void *temp_5;

    var_6 = M2C_FIELD(arg0, u8 **, 0);
    temp_5 = M2C_FIELD(arg0, void **, 0x20);
    var_3 = *var_6;
    temp_19 = M2C_FIELD(temp_5, s32 *, 0xC);
loop_4:
    if (var_3 == 0x20) {
block_1:
        temp_2 = var_6 + 1;
        if (M2C_FIELD(var_6, u8 *, 0) != 0) {
            M2C_FIELD(arg0, u8 **, 0) = temp_2;
            var_6 = temp_2;
        }
        var_3 = *var_6;
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
    if (M2C_FIELD(var_6, u8 *, 0) != 0x5B) {
        var_6_2 = 0x1791;
        goto block_24;
    }
    temp_4 = var_6 + 1;
    M2C_FIELD(arg0, u8 **, 0) = temp_4;
    temp_3 = M2C_FIELD(var_6, u8 *, 1);
    if ((temp_3 == 0x20) || (temp_3 == 9) || (temp_3 == 0xA) || (temp_3 == 0xD)) {
        var_6 = temp_4;
        do {
loop_15:
            temp_2_2 = var_6 + 1;
            if (*var_6 != 0) {
                M2C_FIELD(arg0, u8 **, 0) = temp_2_2;
                var_6 = temp_2_2;
            }
            temp_3_2 = *var_6;
            if (temp_3_2 == 0x20) {
                goto loop_15;
            }
            if (temp_3_2 == 9) {
                goto loop_15;
            }
            if (temp_3_2 == 0xA) {
                goto loop_15;
            }
        } while (temp_3_2 == 0xD);
    }
    M2C_FIELD(temp_5, s32 *, 0xC) = -1;
    xmlXPathCompileExpr(arg0, temp_5, var_6);
    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        var_6_3 = M2C_FIELD(arg0, u8 **, 0);
        if (*var_6_3 != 0x5D) {
            var_6_2 = 0x179B;
block_24:
            xmlXPatherror(arg0, &D_011DCD70, var_6_2, 6);
            M2C_FIELD(arg0, s32 *, 8) = 6;
            return;
        }
        temp_16 = M2C_FIELD(arg0, void **, 0x20);
        if (arg1 != 0) {
            temp_5_2 = M2C_FIELD(temp_16, s32 *, 4);
            if (M2C_FIELD(temp_16, s32 *, 0) >= temp_5_2) {
                M2C_FIELD(temp_16, s32 *, 4) = (s32) (temp_5_2 * 2);
                temp_2_3 = D_011B1E20(M2C_FIELD(temp_16, s32 *, 8), temp_5_2 << 6, var_6_3);
                if (temp_2_3 != 0) {
                    M2C_FIELD(temp_16, s32 *, 8) = temp_2_3;
                    var_6_3 = M2C_FIELD(arg0, u8 **, 0);
                    goto block_29;
                }
                goto block_34;
            }
block_29:
            var_3_2 = M2C_FIELD(temp_16, s32 *, 0) << 5;
            M2C_FIELD(temp_16, s32 *, 0xC) = M2C_FIELD(temp_16, s32 *, 0);
            var_4 = 0x11;
            goto block_37;
        }
        temp_5_3 = M2C_FIELD(temp_16, s32 *, 4);
        if (M2C_FIELD(temp_16, s32 *, 0) >= temp_5_3) {
            M2C_FIELD(temp_16, s32 *, 4) = (s32) (temp_5_3 * 2);
            temp_2_4 = D_011B1E20(M2C_FIELD(temp_16, s32 *, 8), temp_5_3 << 6, var_6_3);
            if (temp_2_4 != 0) {
                M2C_FIELD(temp_16, s32 *, 8) = temp_2_4;
                var_6_3 = M2C_FIELD(arg0, u8 **, 0);
                goto block_36;
            }
block_34:
            temp_2_5 = M2C_FIELD(temp_16, s32 *, 4);
            M2C_FIELD(temp_16, s32 *, 4) = (s32) ((s32) (temp_2_5 + ((u32) temp_2_5 >> 0x1F)) >> 1);
            D_0118EDD0(D_0118EDD4, &D_011DC228, &D_0118EDD4);
            var_6_3 = M2C_FIELD(arg0, u8 **, 0);
        } else {
block_36:
            var_3_2 = M2C_FIELD(temp_16, s32 *, 0) << 5;
            M2C_FIELD(temp_16, s32 *, 0xC) = M2C_FIELD(temp_16, s32 *, 0);
            var_4 = 0x10;
block_37:
            M2C_FIELD((var_3_2 + M2C_FIELD(temp_16, s32 *, 8)), s32 *, 4) = temp_19;
            M2C_FIELD(((M2C_FIELD(temp_16, s32 *, 0) << 5) + M2C_FIELD(temp_16, s32 *, 8)), s32 *, 8) = M2C_FIELD(temp_16, s32 *, 0xC);
            temp_3_3 = (M2C_FIELD(temp_16, s32 *, 0) << 5) + M2C_FIELD(temp_16, s32 *, 8);
            M2C_FIELD(temp_3_3, s32 *, 0xC) = 0;
            M2C_FIELD(temp_3_3, s32 *, 0) = var_4;
            M2C_FIELD(((M2C_FIELD(temp_16, s32 *, 0) << 5) + M2C_FIELD(temp_16, s32 *, 8)), s32 *, 0x10) = 0;
            M2C_FIELD(((M2C_FIELD(temp_16, s32 *, 0) << 5) + M2C_FIELD(temp_16, s32 *, 8)), s32 *, 0x14) = 0;
            temp_2_6 = M2C_FIELD(temp_16, s32 *, 0);
            temp_3_4 = (temp_2_6 << 5) + M2C_FIELD(temp_16, s32 *, 8);
            M2C_FIELD(temp_16, s32 *, 0) = (s32) (temp_2_6 + 1);
            M2C_FIELD(temp_3_4, s32 *, 0x1C) = 0;
            M2C_FIELD(temp_3_4, s32 *, 0x18) = 0;
        }
        do {
loop_38:
            temp_2_7 = var_6_3 + 1;
            if (*var_6_3 != 0) {
                M2C_FIELD(arg0, u8 **, 0) = temp_2_7;
                var_6_3 = temp_2_7;
            }
            temp_3_5 = *var_6_3;
            if (temp_3_5 == 0x20) {
                goto loop_38;
            }
            if (temp_3_5 == 9) {
                goto loop_38;
            }
            if (temp_3_5 == 0xA) {
                goto loop_38;
            }
        } while (temp_3_5 == 0xD);
    }
}
