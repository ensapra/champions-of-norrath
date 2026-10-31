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

s32 htmlCheckAutoClose(s32, s32);                   /* extern */
s32 xmlStrEqual(s32, s32);                          /* extern */

s32 htmlAutoCloseTag(s32 arg0, s32 arg1, void *arg2) {
    s32 var_2;
    void *var_16;
    void *var_6;

    var_2 = 1;
    if (arg2 != NULL) {
        var_2 = 0;
        if (xmlStrEqual(arg1, M2C_FIELD(arg2, s32 *, 8)) == 0) {
            if (htmlCheckAutoClose(M2C_FIELD(arg2, s32 *, 8), arg1) == 0) {
                var_16 = M2C_FIELD(arg2, void **, 0xC);
                var_2 = 0;
                if (var_16 != NULL) {
                    var_6 = var_16;
loop_8:
                    var_2 = 1;
                    if (htmlAutoCloseTag(arg0, arg1, var_6) == 0) {
                        var_16 = M2C_FIELD(var_16, void **, 0x18);
                        var_6 = var_16;
                        if (var_16 == NULL) {
                            var_2 = 0;
                        } else {
                            goto loop_8;
                        }
                    }
                }
                /* Duplicate return node #11. Try simplifying control flow for better match */
                return var_2;
            }
            return 1;
        }
    }
    return var_2;
}
