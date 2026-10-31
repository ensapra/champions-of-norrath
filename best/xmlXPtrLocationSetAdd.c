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

M2C_UNK memset(void **, M2C_UNK, M2C_UNK);          /* extern */
M2C_UNK xmlXPathFreeObject(void *, s32, void *, s32, void **, s32, s32, s32); /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, M2C_UNK);
extern s32 D_0118EDD4;
extern void **(*D_011B1E1C)(M2C_UNK, s32, void *, s32, void **, s32, s32, s32);
extern void **(*D_011B1E20)(void **, s32, void *, s32, void **, s32, s32, s32);
extern M2C_UNK D_011DD898;

void xmlXPtrLocationSetAdd(void *arg0, void *arg1, void *arg2, s32 arg3, void **arg4, s32 arg6, s32 arg7) {
    s32 temp_2;
    s32 temp_3;
    s32 temp_4;
    s32 var_10;
    s32 var_11;
    s32 var_7;
    s32 var_9;
    void **temp_2_2;
    void **temp_2_3;
    void **var_8;
    void *var_6;

    var_6 = arg2;
    var_7 = arg3;
    var_8 = arg4;
    var_10 = arg6;
    var_11 = arg7;
    if (arg1 != NULL) {
        temp_4 = M2C_FIELD(arg0, s32 *, 0);
        var_9 = 0;
        if (temp_4 > 0) {
            var_8 = M2C_FIELD(arg0, void ***, 8);
            var_11 = 6;
            var_10 = temp_4;
loop_3:
            var_6 = *var_8;
            var_7 = 1;
            if (var_6 != arg1) {
                if (var_6 == NULL) {
                    var_7 = 0;
                } else if (arg1 != NULL) {
                    temp_3 = M2C_FIELD(var_6, s32 *, 0);
                    var_7 = 0;
                    if ((temp_3 == M2C_FIELD(arg1, s32 *, 0)) && (temp_3 == 6) && (M2C_FIELD(var_6, s32 *, 0x1C) == M2C_FIELD(arg1, s32 *, 0x1C)) && (M2C_FIELD(var_6, s32 *, 0x20) == M2C_FIELD(arg1, s32 *, 0x20)) && (M2C_FIELD(var_6, s32 *, 0x24) == M2C_FIELD(arg1, s32 *, 0x24))) {
                        var_7 = M2C_FIELD(var_6, s32 *, 0x28) == M2C_FIELD(arg1, s32 *, 0x28);
                    }
                } else {
                    var_7 = 0;
                }
            }
            var_9 += 1;
            if (var_7 == 0) {
                var_8 += 4;
                if (var_9 >= var_10) {
                    goto block_20;
                }
                goto loop_3;
            }
            xmlXPathFreeObject(arg1, temp_4, var_6, var_7, var_8, var_9, var_10, 6);
            return;
        }
block_20:
        temp_2 = M2C_FIELD(arg0, s32 *, 4);
        if (temp_2 == 0) {
            temp_2_2 = D_011B1E1C(0x28, temp_4, var_6, var_7, var_8, var_9, var_10, var_11);
            M2C_FIELD(arg0, void ***, 8) = temp_2_2;
            if (temp_2_2 != NULL) {
                memset(temp_2_2, 0, 0x28);
                M2C_FIELD(arg0, s32 *, 4) = 0xA;
                goto block_30;
            }
            goto block_28;
        }
        if (temp_4 == temp_2) {
            M2C_FIELD(arg0, s32 *, 4) = (s32) (temp_4 * 2);
            temp_2_3 = D_011B1E20(M2C_FIELD(arg0, void ***, 8), temp_4 * 8, var_6, var_7, var_8, var_9, var_10, var_11);
            if (temp_2_3 != NULL) {
                M2C_FIELD(arg0, void ***, 8) = temp_2_3;
block_30:
                goto block_31;
            }
block_28:
            D_0118EDD0(D_0118EDD4, &D_011DD898, D_0118EDD0);
            return;
        }
block_31:
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 1);
        M2C_FIELD(arg0, void ***, 8)[M2C_FIELD(arg0, s32 *, 0)] = arg1;
    }
}
