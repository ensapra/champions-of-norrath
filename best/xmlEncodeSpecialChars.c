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

M2C_UNK perror(M2C_UNK *);                          /* extern */
extern u8 *(*D_011B1E1C)(M2C_UNK);
extern u8 *(*D_011B1E20)(u8 *, s32);
extern M2C_UNK D_011CD2F0;
extern M2C_UNK D_011CD368;

u8 *xmlEncodeSpecialChars(u8 *arg1) {
    M2C_UNK *var_4_2;
    s32 temp_16;
    s32 var_19;
    s32 var_3;
    u8 *temp_5;
    u8 *temp_5_2;
    u8 *temp_5_3;
    u8 *temp_5_4;
    u8 *temp_5_5;
    u8 *temp_5_6;
    u8 *temp_5_7;
    u8 *var_17;
    u8 *var_2;
    u8 *var_4;
    u8 *var_5;
    u8 temp_2;
    u8 var_7;

    var_2 = NULL;
    var_17 = arg1;
    if (var_17 != NULL) {
        var_19 = 0x3E8;
        var_4 = D_011B1E1C(0x3E8);
        if (var_4 != NULL) {
            var_7 = *var_17;
            var_5 = var_4;
            if (var_7 != 0) {
loop_10:
                temp_16 = var_5 - var_4;
                var_3 = var_7 & 0xFF;
                if ((var_19 - 0xA) < temp_16) {
                    var_19 *= 2;
                    var_4 = D_011B1E20(var_4, var_19);
                    var_5 = &var_4[temp_16];
                    if (var_4 != NULL) {
                        var_7 = *var_17;
                        var_3 = var_7 & 0xFF;
                        goto block_13;
                    }
                    var_4_2 = &D_011CD2F0;
                    goto block_7;
                }
block_13:
                switch (var_3) {                    /* irregular */
                case 0x3C:
                    M2C_FIELD(var_5, u8 *, 0) = 0x26;
                    temp_5 = var_5 + 1;
                    M2C_FIELD(var_5, s8 *, 1) = 0x6C;
                    M2C_FIELD(temp_5, s8 *, 1) = 0x74;
                    var_5 = temp_5 + 1 + 1;
block_25:
                    *var_5 = 0x3B;
                    break;
                case 0x3E:
                    M2C_FIELD(var_5, u8 *, 0) = 0x26;
                    temp_5_2 = var_5 + 1;
                    M2C_FIELD(var_5, s8 *, 1) = 0x67;
                    M2C_FIELD(temp_5_2, s8 *, 1) = 0x74;
                    var_5 = temp_5_2 + 1 + 1;
                    goto block_25;
                case 0x26:
                    M2C_FIELD(var_5, u8 *, 0) = 0x26;
                    temp_5_3 = var_5 + 1;
                    M2C_FIELD(var_5, s8 *, 1) = 0x61;
                    temp_5_4 = temp_5_3 + 1;
                    M2C_FIELD(temp_5_3, s8 *, 1) = 0x6D;
                    M2C_FIELD(temp_5_4, s8 *, 1) = 0x70;
                    var_5 = temp_5_4 + 1 + 1;
                    goto block_25;
                default:
                    M2C_FIELD(var_5, u8 *, 0) = var_7;
                    break;
                case 0x22:
                    M2C_FIELD(var_5, u8 *, 0) = 0x26;
                    temp_5_5 = var_5 + 1;
                    M2C_FIELD(var_5, s8 *, 1) = 0x71;
                    temp_5_6 = temp_5_5 + 1;
                    M2C_FIELD(temp_5_5, s8 *, 1) = 0x75;
                    temp_5_7 = temp_5_6 + 1;
                    M2C_FIELD(temp_5_6, s8 *, 1) = 0x6F;
                    M2C_FIELD(temp_5_7, s8 *, 1) = 0x74;
                    var_5 = temp_5_7 + 1 + 1;
                    goto block_25;
                }
                var_5 += 1;
                var_17 += 1;
                temp_2 = *var_17;
                var_7 = temp_2;
                if (temp_2 == 0) {
                    goto block_27;
                }
                goto loop_10;
            }
block_27:
            *var_5 = 0;
            var_2 = var_4;
            /* Duplicate return node #28. Try simplifying control flow for better match */
            return var_2;
        }
        var_4_2 = &D_011CD368;
block_7:
        perror(var_4_2);
        return NULL;
    }
    return var_2;
}
