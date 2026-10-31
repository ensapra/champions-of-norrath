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

s32 htmlAutoCloseTag(s32, s32, void *);             /* extern */
s32 htmlCheckAutoClose(s32, s32);                   /* extern */
s32 xmlStrEqual(s32, s32);                          /* extern */

s32 htmlIsAutoClosed(s32 arg0, void *arg1) {
    s32 var_2;
    s32 var_3;
    void *var_16;
    void *var_17;
    void *var_6;

    var_2 = 1;
    if (arg1 != NULL) {
        var_17 = M2C_FIELD(arg1, void **, 0xC);
        if (var_17 != NULL) {
loop_3:
            var_3 = 1;
            if (var_17 != NULL) {
                var_3 = 0;
                if (xmlStrEqual(M2C_FIELD(arg1, s32 *, 8), M2C_FIELD(var_17, s32 *, 8)) == 0) {
                    var_3 = 1;
                    if (htmlCheckAutoClose(M2C_FIELD(var_17, s32 *, 8), M2C_FIELD(arg1, s32 *, 8)) == 0) {
                        var_16 = M2C_FIELD(var_17, void **, 0xC);
                        if (var_16 != NULL) {
                            var_6 = var_16;
loop_8:
                            var_3 = 1;
                            if (htmlAutoCloseTag(arg0, M2C_FIELD(arg1, s32 *, 8), var_6) == 0) {
                                var_16 = M2C_FIELD(var_16, void **, 0x18);
                                var_6 = var_16;
                                if (var_16 == NULL) {
                                    goto block_10;
                                }
                                goto loop_8;
                            }
                        } else {
block_10:
                            var_3 = 0;
                        }
                    }
                }
            }
            var_2 = 1;
            if (var_3 == 0) {
                var_17 = M2C_FIELD(var_17, void **, 0x18);
                if (var_17 != NULL) {
                    goto loop_3;
                }
                goto block_15;
            }
        } else {
block_15:
            var_2 = 0;
        }
    }
    return var_2;
}
