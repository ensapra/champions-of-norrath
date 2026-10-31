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

M2C_UNK inflate_blocks_reset(s32, void *, M2C_UNK, s32 *, s32, s32 *, s32, u8 *); /* extern */
extern M2C_UNK D_011D3998;

s32 inflateSync(void *arg0, s32 arg6) {
    s32 *temp_3;
    s32 *temp_7;
    s32 *temp_7_2;
    s32 temp_17;
    s32 temp_18;
    s32 var_10;
    s32 var_2;
    s32 var_8;
    u32 var_5;
    u8 *temp_11;
    u8 *var_2_2;
    u8 *var_6;
    u8 temp_4;

    var_10 = arg6;
    if (arg0 != NULL) {
        temp_3 = M2C_FIELD(arg0, s32 **, 0x1C);
        if (temp_3 != NULL) {
            if (M2C_FIELD(temp_3, s32 *, 0) != 0xD) {
                M2C_FIELD(temp_3, s32 *, 0) = 0xD;
                M2C_FIELD(temp_3, u32 *, 4) = 0U;
            }
            var_8 = M2C_FIELD(arg0, s32 *, 4);
            var_2 = -5;
            if (var_8 != 0) {
                temp_7 = M2C_FIELD(arg0, s32 **, 0x1C);
                var_6 = M2C_FIELD(arg0, u8 **, 0);
                var_5 = M2C_FIELD(temp_7, u32 *, 4);
                temp_11 = var_6;
                if (var_5 < 4U) {
                    var_10 = 4;
                    var_2_2 = var_5 + &D_011D3998;
loop_10:
                    temp_4 = *var_6;
                    var_6 += 1;
                    if (temp_4 == *var_2_2) {
                        var_5 += 1;
                    } else {
                        var_5 = (temp_4 == 0) ? (4 - var_5) : 0U;
                    }
                    var_8 -= 1;
                    if (var_8 != 0) {
                        var_2_2 = var_5 + &D_011D3998;
                        if (var_5 < 4U) {
                            goto loop_10;
                        }
                    }
                }
                M2C_FIELD(arg0, u8 **, 0) = var_6;
                M2C_FIELD(arg0, s32 *, 4) = var_8;
                M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + (var_6 - temp_11));
                var_2 = -3;
                M2C_FIELD(temp_7, u32 *, 4) = var_5;
                if (var_5 == 4) {
                    temp_7_2 = M2C_FIELD(arg0, s32 **, 0x1C);
                    temp_18 = M2C_FIELD(arg0, s32 *, 8);
                    temp_17 = M2C_FIELD(arg0, s32 *, 0x14);
                    if (temp_7_2 != NULL) {
                        M2C_FIELD(arg0, s32 *, 0x14) = 0;
                        M2C_FIELD(arg0, s32 *, 8) = 0;
                        M2C_FIELD(arg0, s32 *, 0x18) = 0;
                        M2C_FIELD(temp_7_2, s32 *, 0) = (M2C_FIELD(temp_7_2, s32 *, 0xC) == 0) ? 0 : 7;
                        inflate_blocks_reset(M2C_FIELD(temp_7_2, s32 *, 0x14), arg0, 0, temp_7_2, var_8, temp_7, var_10, temp_11);
                    }
                    M2C_FIELD(arg0, s32 *, 0x14) = temp_17;
                    M2C_FIELD(arg0, s32 *, 8) = temp_18;
                    M2C_FIELD(M2C_FIELD(arg0, s32 **, 0x1C), s32 *, 0) = 7;
                    var_2 = 0;
                }
            }
            return var_2;
        }
        goto block_4;
    }
block_4:
    return -2;
}
