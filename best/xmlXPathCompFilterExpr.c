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

M2C_UNK xmlXPathCompPredicate(void *, M2C_UNK);     /* extern */
M2C_UNK xmlXPathCompPrimaryExpr();                  /* extern */

void xmlXPathCompFilterExpr(void *arg0) {
    u8 *temp_2;
    u8 *temp_2_3;
    u8 *var_4;
    u8 *var_4_2;
    u8 temp_2_2;
    u8 var_3;

    xmlXPathCompPrimaryExpr();
    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        var_4 = M2C_FIELD(arg0, u8 **, 0);
        var_3 = *var_4;
loop_6:
        if (var_3 == 0x20) {
block_3:
            temp_2 = var_4 + 1;
            if (*var_4 != 0) {
                M2C_FIELD(arg0, u8 **, 0) = temp_2;
                var_4 = temp_2;
            }
            var_3 = *var_4;
            goto loop_6;
        }
        if (var_3 == 9) {
            goto block_3;
        }
        if (var_3 == 0xA) {
            goto block_3;
        }
        if (var_3 == 0xD) {
            goto block_3;
        }
        if (*var_4 == 0x5B) {
            do {
                xmlXPathCompPredicate(arg0, 1);
                var_4_2 = M2C_FIELD(arg0, u8 **, 0);
loop_15:
                temp_2_2 = *var_4_2;
                if (temp_2_2 == 0x20) {
block_13:
                    temp_2_3 = var_4_2 + 1;
                    if (temp_2_2 != 0) {
                        M2C_FIELD(arg0, u8 **, 0) = temp_2_3;
                        var_4_2 = temp_2_3;
                    }
                    goto loop_15;
                }
                if (temp_2_2 == 9) {
                    goto block_13;
                }
                if (temp_2_2 == 0xA) {
                    goto block_13;
                }
                if (temp_2_2 == 0xD) {
                    goto block_13;
                }
            } while (temp_2_2 == 0x5B);
        }
    }
}
