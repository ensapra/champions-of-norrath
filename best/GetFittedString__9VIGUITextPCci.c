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

s32 GetAppPtr__5VIWnd(s32);                         /* extern */
s32 GetStringWidth__6VIFontP8VIRasterP12VIDictionaryPCc(s32, s32, s32, s32); /* extern */
s32 __wrap_malloc(s32);                             /* extern */
s32 __wrap_strdup(s32);                             /* extern */
M2C_UNK strcpy(s32, s32);                           /* extern */
s32 strlen(s32);                                    /* extern */

s32 GetFittedString__9VIGUITextPCci(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_3;
    s32 temp_4;
    s32 var_17;
    s32 var_2;
    s8 *temp_4_2;
    void *temp_21;

    var_2 = 0;
    if (arg1 != 0) {
        if (arg2 >= 0) {
            temp_4 = M2C_FIELD(arg0, s32 *, 0x24);
            var_2 = 0;
            if (temp_4 != 0) {
                var_2 = GetAppPtr__5VIWnd(temp_4);
                if (var_2 != 0) {
                    temp_21 = var_2 + 0xB3F0;
                    temp_2 = strlen(arg1);
                    var_17 = 0;
                    temp_2_2 = __wrap_malloc(temp_2 + 1);
                    strcpy(temp_2_2, arg1);
loop_10:
                    temp_4_2 = temp_2_2 + (temp_2 - var_17);
                    temp_3 = var_17 < temp_2;
                    var_17 += 1;
                    if (arg2 < GetStringWidth__6VIFontP8VIRasterP12VIDictionaryPCc(var_2 + 0xB428, M2C_FIELD(temp_21, s32 *, 0x48), M2C_FIELD(temp_21, s32 *, 0x50), temp_2_2)) {
                        if (temp_3 != 0) {
                            *temp_4_2 = 0;
                            goto loop_10;
                        }
                    }
                    var_2 = temp_2_2;
                }
            }
            /* Duplicate return node #15. Try simplifying control flow for better match */
            return var_2;
        }
        return __wrap_strdup(arg1);
    }
    return var_2;
}
