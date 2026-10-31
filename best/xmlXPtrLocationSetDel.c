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

void xmlXPtrLocationSetDel(void *arg0, s32 arg1) {
    s32 *temp_8;
    s32 *var_3;
    s32 temp_3;
    s32 temp_6;
    s32 var_2;
    s32 var_7;
    s32 var_7_2;
    void *var_3_2;

    if (arg0 != NULL) {
        var_7 = 0;
        if (arg1 != 0) {
            temp_6 = M2C_FIELD(arg0, s32 *, 0);
            if (temp_6 > 0) {
                temp_8 = M2C_FIELD(arg0, s32 **, 8);
                var_2 = temp_6 > 0;
                if (*temp_8 != arg1) {
                    var_3 = temp_8;
                    var_7 = 1;
loop_5:
                    var_3 += 4;
                    if (var_7 < temp_6) {
                        if (*var_3 != arg1) {
                            var_7 += 1;
                            goto loop_5;
                        }
                        var_2 = var_7 < temp_6;
                        goto block_10;
                    }
                } else {
block_10:
                    temp_3 = temp_6 - 1;
                    if (var_2 != 0) {
                        M2C_FIELD(arg0, s32 *, 0) = temp_3;
                        if (var_7 < temp_3) {
                            var_3_2 = (var_7 * 4) + temp_8;
                            var_7_2 = temp_3 - var_7;
                            do {
                                var_7_2 -= 1;
                                M2C_FIELD(var_3_2, s32 *, 0) = (s32) M2C_FIELD(var_3_2, s32 *, 4);
                                var_3_2 += 4;
                            } while (var_7_2 != 0);
                        }
                        *((temp_3 * 4) + temp_8) = 0;
                    }
                }
            }
        }
    }
}
