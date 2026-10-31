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
s32 xmlIsCombining(u8);                             /* extern */
s32 xmlIsDigit(u8);                                 /* extern */
s32 xmlIsExtender(u8);                              /* extern */
s32 xmlIsIdeographic(u8);                           /* extern */

s32 xmlValidateNmtokenValue(u8 *arg0) {
    s32 var_2;
    u8 *var_16;
    u8 temp_2;
    u8 temp_3;

    var_2 = 0;
    if ((arg0 != NULL) && ((var_16 = arg0, (xmlIsBaseChar(*var_16) != 0)) || (xmlIsIdeographic(*var_16) != 0) || (xmlIsDigit(*var_16) != 0) || (temp_3 = *var_16, (temp_3 == 0x2E)) || (temp_3 == 0x2D) || (temp_3 == 0x5F) || (temp_3 == 0x3A) || (xmlIsCombining(temp_3) != 0) || (var_2 = xmlIsExtender(*var_16), (var_2 != 0)))) {
loop_11:
        if (xmlIsBaseChar(*var_16) != 0) {
            var_16 += 1;
            goto loop_11;
        }
        if (xmlIsIdeographic(*var_16) != 0) {
            var_16 += 1;
            goto loop_11;
        }
        if (xmlIsDigit(*var_16) != 0) {
            var_16 += 1;
            goto loop_11;
        }
        temp_2 = *var_16;
        if (temp_2 == 0x2E) {
            var_16 += 1;
            goto loop_11;
        }
        if (temp_2 == 0x2D) {
            var_16 += 1;
            goto loop_11;
        }
        if (temp_2 == 0x5F) {
            var_16 += 1;
            goto loop_11;
        }
        if (temp_2 == 0x3A) {
            var_16 += 1;
            goto loop_11;
        }
        if (xmlIsCombining(temp_2) != 0) {
            var_16 += 1;
            goto loop_11;
        }
        if (xmlIsExtender(*var_16) != 0) {
            var_16 += 1;
            goto loop_11;
        }
        var_2 = *var_16 == 0;
    }
    return var_2;
}
