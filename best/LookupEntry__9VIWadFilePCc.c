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

s32 HashStringLowercase__9VIWadFilePCc();           /* extern */

s32 *LookupEntry__9VIWadFilePCc(void *arg0) {
    s32 *temp_4;
    s32 *temp_5;
    s32 *var_9;
    s32 temp_7;
    s32 temp_8;
    s32 var_6;

    temp_7 = M2C_FIELD(arg0, s32 *, 0xC0);
    temp_8 = HashStringLowercase__9VIWadFilePCc();
    var_9 = NULL;
    if (temp_7 > 0) {
        temp_4 = M2C_FIELD(arg0, s32 **, 0xC4);
        if (*temp_4 != temp_8) {
            var_6 = 1;
loop_5:
            temp_5 = (var_6 * 0x10) + temp_4;
            if (var_6 < temp_7) {
                if (*temp_5 != temp_8) {
                    var_6 += 1;
                    goto loop_5;
                }
                var_9 = temp_5;
            }
        } else {
            var_9 = temp_4;
        }
    }
    return var_9;
}
