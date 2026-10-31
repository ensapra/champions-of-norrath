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

s32 xmlParserInputGrow(void *, M2C_UNK);            /* extern */
M2C_UNK xmlPopInput(void *);                        /* extern */

s32 htmlSkipBlankChars(void *arg0) {
    s32 var_17;
    u8 *var_2;
    u8 temp_4;
    u8 var_3;
    void *temp_4_2;

    var_17 = 0;
    var_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), u8 **, 0x10);
loop_18:
    temp_4 = *var_2;
    if (temp_4 == 0x20) {
block_1:
        var_3 = *M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), u8 **, 0x10);
        if (var_3 == 0) {
            if (xmlParserInputGrow(M2C_FIELD(arg0, void **, 0x24), 0xFA) > 0) {
                var_3 = *M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), u8 **, 0x10);
                goto block_8;
            }
            xmlPopInput(arg0);
        } else {
block_8:
            if (var_3 != 0xA) {
                M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0x20) = (s32) (M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0x20) + 1);
            } else {
                M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0x20) = 1;
                M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0x1C) = (s32) (M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0x1C) + 1);
            }
            temp_4_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), void **, 0x10);
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), void **, 0x10) = (void *) (temp_4_2 + 1);
            M2C_FIELD(arg0, s64 *, 0xC0) = (s64) (M2C_FIELD(arg0, s64 *, 0xC0) + 1);
            if (M2C_FIELD(temp_4_2, u8 *, 1) == 0) {
                xmlParserInputGrow(M2C_FIELD(arg0, void **, 0x24), 0xFA);
            }
        }
        var_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), u8 **, 0x10);
        var_17 += 1;
        goto loop_18;
    }
    if (temp_4 == 9) {
        goto block_1;
    }
    if (temp_4 == 0xA) {
        goto block_1;
    }
    if (temp_4 == 0xD) {
        goto block_1;
    }
    return var_17;
}
