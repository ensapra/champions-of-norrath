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

M2C_UNK xmlBufferShrink(s32, s32);                  /* extern */
s32 xmlCharEncInFunc(s32, s32, s32);                /* extern */
s32 xmlFindCharEncodingHandler(u8 *, s32);          /* extern */
s32 xmlParseCharEncoding(u8 *);                     /* extern */
s32 xmlStrcasestr(s32, M2C_UNK *);                  /* extern */
s32 xmlStrdup(u8 *);                                /* extern */
M2C_UNK xmlSwitchEncoding(void *, s32);             /* extern */
M2C_UNK xmlSwitchToEncoding(void *, s32);           /* extern */
extern M2C_UNK (*D_011B1E18)(s32);
extern M2C_UNK D_011D2218;
extern M2C_UNK D_011D2228;
extern M2C_UNK D_011D2238;

void htmlCheckEncoding(void *arg0, s32 arg1) {
    M2C_UNK (*temp_2_6)(s32, M2C_UNK *);
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_2_4;
    s32 temp_4;
    s32 temp_4_3;
    s32 temp_5;
    u8 *var_16;
    u8 temp_3;
    void *temp_2_5;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_4_2;
    void *temp_4_4;

    if ((arg0 != NULL) && (arg1 != 0) && (M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0x2C) == 0)) {
        temp_2 = xmlStrcasestr(arg1, &D_011D2218);
        if (temp_2 == 0) {
            temp_2_2 = xmlStrcasestr(arg1, &D_011D2228);
            var_16 = (temp_2_2 != 0) ? (temp_2_2 + 9) : NULL;
        } else {
            var_16 = temp_2 + 8;
        }
        if (var_16 != NULL) {
loop_12:
            temp_3 = *var_16;
            if (temp_3 == 0x20) {
block_11:
                var_16 += 1;
                goto loop_12;
            }
            if (temp_3 == 9) {
                goto block_11;
            }
            temp_4 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0x2C);
            if (temp_4 != 0) {
                D_011B1E18(temp_4);
            }
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0x2C) = xmlStrdup(var_16);
            temp_2_3 = xmlParseCharEncoding(var_16);
            if (temp_2_3 != -1) {
                xmlSwitchEncoding(arg0, temp_2_3);
                goto block_21;
            }
            temp_2_4 = xmlFindCharEncodingHandler(var_16, temp_2_3);
            if (temp_2_4 != 0) {
                xmlSwitchToEncoding(arg0, temp_2_4);
block_21:
                M2C_FIELD(arg0, s32 *, 0x100) = 1;
            } else {
                M2C_FIELD(arg0, s32 *, 0x60) = 0x20;
            }
            temp_3_2 = M2C_FIELD(arg0, void **, 0x24);
            temp_4_2 = M2C_FIELD(temp_3_2, void **, 0);
            if ((temp_4_2 != NULL) && (M2C_FIELD(temp_4_2, s32 *, 0xC) != 0) && (M2C_FIELD(temp_4_2, s32 *, 0x14) != 0)) {
                temp_4_3 = M2C_FIELD(temp_4_2, s32 *, 0x10);
                if (temp_4_3 != 0) {
                    xmlBufferShrink(temp_4_3, M2C_FIELD(temp_3_2, s32 *, 0x10) - M2C_FIELD(temp_3_2, s32 *, 0xC));
                    temp_2_5 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), void **, 0);
                    if (xmlCharEncInFunc(M2C_FIELD(temp_2_5, s32 *, 0xC), M2C_FIELD(temp_2_5, s32 *, 0x10), M2C_FIELD(temp_2_5, s32 *, 0x14)) < 0) {
                        temp_3_3 = M2C_FIELD(arg0, void **, 0);
                        M2C_FIELD(arg0, s32 *, 0x60) = 0x51;
                        if (temp_3_3 != NULL) {
                            temp_2_6 = M2C_FIELD(temp_3_3, M2C_UNK (**)(s32, M2C_UNK *), 0x58);
                            if (temp_2_6 != NULL) {
                                temp_2_6(M2C_FIELD(arg0, s32 *, 4), &D_011D2238);
                            }
                        }
                    }
                    temp_4_4 = M2C_FIELD(arg0, void **, 0x24);
                    temp_5 = *M2C_FIELD(M2C_FIELD(temp_4_4, void **, 0), s32 **, 0x10);
                    M2C_FIELD(temp_4_4, s32 *, 0xC) = temp_5;
                    M2C_FIELD(temp_4_4, s32 *, 0x10) = temp_5;
                }
            }
        }
    }
}
