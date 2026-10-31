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

s32 xmlIsBaseChar(u8);                              /* extern */
s32 xmlIsIdeographic(u8);                           /* extern */
s32 xmlIsPubidChar(u8);                             /* extern */
M2C_UNK xmlNextChar(void *);                        /* extern */
s32 xmlStrndup(u8 *, s32);                          /* extern */
extern M2C_UNK D_011D1F88;
extern M2C_UNK D_011D1FA8;

s32 htmlParsePubidLiteral(void *arg0) {
    M2C_UNK (*var_2_2)(s32, M2C_UNK *);
    M2C_UNK *var_5_2;
    s32 var_19;
    s64 var_2;
    s64 var_2_3;
    u8 *temp_17;
    u8 *temp_17_2;
    u8 *var_4;
    u8 *var_5;
    u8 temp_3;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;

    temp_3 = *M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), u8 **, 0x10);
    var_19 = 0;
    if (temp_3 == 0x22) {
        xmlNextChar((void *)0x22);
        var_2 = M2C_FIELD(arg0, s64 *, 0xC0) + 1;
        temp_17 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), u8 **, 0x10);
loop_3:
        M2C_FIELD(arg0, s64 *, 0xC0) = var_2;
        if (xmlIsPubidChar(*M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), u8 **, 0x10)) != 0) {
            xmlNextChar(arg0);
            var_2 = M2C_FIELD(arg0, s64 *, 0xC0) + 1;
            goto loop_3;
        }
        var_5 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), u8 **, 0x10);
        if (*var_5 == 0x22) {
            var_4 = temp_17;
            goto block_26;
        }
        temp_2 = M2C_FIELD(arg0, void **, 0);
        if (temp_2 != NULL) {
            var_2_2 = M2C_FIELD(temp_2, M2C_UNK (**)(s32, M2C_UNK *), 0x58);
            if (var_2_2 != NULL) {
                var_5_2 = &D_011D1FA8;
                goto block_31;
            }
        }
        goto block_32;
    }
    if (temp_3 != 0x27) {
        temp_2_2 = M2C_FIELD(arg0, void **, 0);
        if (temp_2_2 != NULL) {
            var_2_2 = M2C_FIELD(temp_2_2, M2C_UNK (**)(s32, M2C_UNK *), 0x58);
            if (var_2_2 != NULL) {
                var_5_2 = &D_011D1F88;
                goto block_31;
            }
        }
        goto block_32;
    }
    xmlNextChar((void *)0x22);
    var_2_3 = M2C_FIELD(arg0, s64 *, 0xC0) + 1;
    temp_17_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), u8 **, 0x10);
loop_15:
    M2C_FIELD(arg0, s64 *, 0xC0) = var_2_3;
    if (((xmlIsBaseChar(*M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), u8 **, 0x10)) != 0) || (xmlIsIdeographic(*M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), u8 **, 0x10)) != 0)) && (*M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), u8 **, 0x10) != 0x27)) {
        xmlNextChar(arg0);
        var_2_3 = M2C_FIELD(arg0, s64 *, 0xC0) + 1;
        goto loop_15;
    }
    if (xmlIsBaseChar(*M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), u8 **, 0x10)) == 0) {
        if (xmlIsIdeographic(*M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), u8 **, 0x10)) != 0) {
            goto block_25;
        }
        temp_2_3 = M2C_FIELD(arg0, void **, 0);
        if (temp_2_3 != NULL) {
            var_2_2 = M2C_FIELD(temp_2_3, M2C_UNK (**)(s32, M2C_UNK *), 0x58);
            if (var_2_2 != NULL) {
                var_5_2 = &D_011D1FA8;
block_31:
                var_2_2(M2C_FIELD(arg0, s32 *, 4), var_5_2);
            }
        }
block_32:
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    } else {
block_25:
        var_4 = temp_17_2;
        var_5 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), u8 **, 0x10);
block_26:
        var_19 = xmlStrndup(var_4, var_5 - var_4);
        xmlNextChar(arg0);
        M2C_FIELD(arg0, s64 *, 0xC0) = (s64) (M2C_FIELD(arg0, s64 *, 0xC0) + 1);
    }
    return var_19;
}
