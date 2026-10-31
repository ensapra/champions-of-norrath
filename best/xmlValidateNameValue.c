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

s32 xmlValidateNameValue(u8 *arg0) {
    s32 var_2;
    u8 *var_16;
    u8 temp_2;
    u8 temp_4;

    var_2 = 0;
    if ((arg0 != NULL) && ((var_16 = arg0, (xmlIsBaseChar(*var_16) != 0)) || (var_2 = xmlIsIdeographic(*var_16), (var_2 != 0)) || (temp_4 = *var_16, (temp_4 == 0x5F)) || (temp_4 == 0x3A))) {
loop_6:
        if (xmlIsBaseChar(*var_16) != 0) {
            var_16 += 1;
            goto loop_6;
        }
        if (xmlIsIdeographic(*var_16) != 0) {
            var_16 += 1;
            goto loop_6;
        }
        if (xmlIsDigit(*var_16) != 0) {
            var_16 += 1;
            goto loop_6;
        }
        temp_2 = *var_16;
        if (temp_2 == 0x2E) {
            var_16 += 1;
            goto loop_6;
        }
        if (temp_2 == 0x2D) {
            var_16 += 1;
            goto loop_6;
        }
        if (temp_2 == 0x5F) {
            var_16 += 1;
            goto loop_6;
        }
        if (temp_2 == 0x3A) {
            var_16 += 1;
            goto loop_6;
        }
        if (xmlIsCombining(temp_2) != 0) {
            var_16 += 1;
            goto loop_6;
        }
        if (xmlIsExtender(*var_16) != 0) {
            var_16 += 1;
            goto loop_6;
        }
        var_2 = *var_16 == 0;
    }
    return var_2;
}
