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

M2C_UNK xmlFreeInputStream(s32);                    /* extern */
s32 xmlParserInputGrow(void *, M2C_UNK);            /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, s32, M2C_UNK);
extern s32 D_0118EDD4;
extern s32 D_011AFFC4;
extern M2C_UNK D_011D6C68;

u8 xmlPopInput(void *arg0) {
    s32 *temp_2_2;
    s32 temp_2;
    s32 temp_6;
    s32 var_3;
    u8 var_2;
    void *temp_4;

    temp_6 = M2C_FIELD(arg0, s32 *, 0x28);
    var_2 = 0;
    if (temp_6 != 1) {
        if (D_011AFFC4 != 0) {
            D_0118EDD0(D_0118EDD4, &D_011D6C68, temp_6, D_0118EDD0);
        }
        var_3 = 0;
        if (M2C_FIELD(arg0, s32 *, 0x28) > 0) {
            temp_2 = M2C_FIELD(arg0, s32 *, 0x28) - 1;
            M2C_FIELD(arg0, s32 *, 0x28) = temp_2;
            if (temp_2 > 0) {
                M2C_FIELD(arg0, void **, 0x24) = (void *) M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x30) + (temp_2 * 4)), void **, -4);
            } else {
                M2C_FIELD(arg0, void **, 0x24) = NULL;
            }
            temp_2_2 = (M2C_FIELD(arg0, s32 *, 0x28) * 4) + M2C_FIELD(arg0, s32 *, 0x30);
            var_3 = *temp_2_2;
            *temp_2_2 = 0;
        }
        xmlFreeInputStream(var_3);
        temp_4 = M2C_FIELD(arg0, void **, 0x24);
        if (*M2C_FIELD(temp_4, u8 **, 0x10) != 0) {
            goto block_15;
        }
        if (xmlParserInputGrow(temp_4, 0xFA) > 0) {
block_15:
            if (M2C_FIELD(arg0, s32 *, 0xA4) == 0) {
                var_2 = *M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), u8 **, 0x10);
                /* Duplicate return node #20. Try simplifying control flow for better match */
                return var_2;
            }
            return (u8) M2C_FIELD(arg0, s32 *, 0xA4);
        }
        return xmlPopInput(arg0);
    }
    return var_2;
}
