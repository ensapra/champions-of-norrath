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

s32 xmlStrdup(u8 *);                                /* extern */
s32 xmlStrndup(u8 *, s32, u8 *, u8);                /* extern */

s32 xmlSplitQName2(u8 *arg0, s32 *arg1) {
    s32 var_5;
    u8 *var_16;
    u8 temp_2;
    u8 temp_7;
    u8 var_2;

    *arg1 = 0;
    temp_7 = M2C_FIELD(arg0, u8 *, 0);
    var_5 = 0;
    switch (temp_7) {                               /* switch 1; irregular */
    case 0x78:                                      /* switch 1 */
        if ((M2C_FIELD(arg0, u8 *, 1) == 0x6D) && (M2C_FIELD(arg0, u8 *, 2) == 0x6C)) {
            if (M2C_FIELD(arg0, u8 *, 3) != 0x3A) {
                goto block_5;
            }
            /* Duplicate return node #23. Try simplifying control flow for better match */
            return 0;
        }
block_5:
        if (temp_7 != 0x3A) {
        default:                                    /* switch 1 */
            temp_2 = M2C_FIELD(arg0, u8 *, 0);
            if (temp_2 == 0) {
                return 0;
            }
            var_16 = arg0;
            if (temp_2 != 0x3A) {
                var_5 = 1;
loop_11:
                var_16 = arg0 + var_5;
                var_2 = *var_16;
                switch (var_2) {                    /* switch 2; irregular */
                case 0x0:                           /* switch 2 */
                    return 0;
                default:                            /* switch 2 */
                    var_5 += 1;
                    goto loop_11;
                case 0x3A:                          /* switch 2 */
                    goto block_20;
                }
            } else {
                var_2 = M2C_FIELD(var_16, u8 *, 0);
block_20:
                if (var_2 != 0) {
                    *arg1 = xmlStrndup(arg0, var_5, arg0, temp_7);
                    return xmlStrdup(var_16 + 1);
                }
                /* Duplicate return node #23. Try simplifying control flow for better match */
                return 0;
            }
        } else {
        case 0x3A:                                  /* switch 1 */
            return 0;
        }
        break;
    }
}
