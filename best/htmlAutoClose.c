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

M2C_UNK htmlAutoCloseOnClose(void *, M2C_UNK *);    /* extern */
s32 htmlCheckAutoClose(s32, s32);                   /* extern */
s32 xmlStrEqual(s32, M2C_UNK *);                    /* extern */
extern M2C_UNK (*D_011B1E18)(s32);
extern M2C_UNK D_011CE1E0;
extern M2C_UNK D_011CE218;
extern M2C_UNK D_011CE500;

void htmlAutoClose(void *arg0, s32 arg1) {
    M2C_UNK (*temp_2_2)(s32, s32);
    M2C_UNK (*temp_2_6)(s32, s32);
    M2C_UNK *var_20;
    s32 *temp_2_5;
    s32 *temp_2_9;
    s32 temp_2_3;
    s32 temp_2_4;
    s32 temp_2_7;
    s32 temp_2_8;
    s32 temp_4;
    s32 temp_5;
    s32 var_3;
    s32 var_3_2;
    void *temp_2;

loop_14:
    if (arg1 != 0) {
        temp_5 = M2C_FIELD(arg0, s32 *, 0xAC);
        var_20 = (M2C_UNK *)0x011D0000;
        if (temp_5 != 0) {
            if (htmlCheckAutoClose(arg1, temp_5) != 0) {
                temp_2 = M2C_FIELD(arg0, void **, 0);
                if (temp_2 != NULL) {
                    temp_2_2 = M2C_FIELD(temp_2, M2C_UNK (**)(s32, s32), 0x3C);
                    if (temp_2_2 != NULL) {
                        temp_2_2(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 0xAC));
                    }
                }
                temp_2_3 = M2C_FIELD(arg0, s32 *, 0xB0);
                var_3 = 0;
                if (temp_2_3 >= 0) {
                    temp_2_4 = temp_2_3 - 1;
                    M2C_FIELD(arg0, s32 *, 0xB0) = temp_2_4;
                    if (temp_2_4 >= 0) {
                        if (temp_2_4 <= 0) {
                            M2C_FIELD(arg0, s32 *, 0xAC) = 0;
                        } else {
                            M2C_FIELD(arg0, s32 *, 0xAC) = (s32) M2C_FIELD((M2C_FIELD(arg0, s32 *, 0xB8) + (temp_2_4 * 4)), s32 *, -4);
                        }
                        temp_2_5 = (M2C_FIELD(arg0, s32 *, 0xB0) * 4) + M2C_FIELD(arg0, s32 *, 0xB8);
                        var_3 = *temp_2_5;
                        *temp_2_5 = 0;
                    }
                }
                if (var_3 != 0) {
                    D_011B1E18(var_3);
                }
                goto loop_14;
            }
            var_20 = (M2C_UNK *)0x011D0000;
        }
    } else {
        htmlAutoCloseOnClose(arg0, &D_011CE218);
        htmlAutoCloseOnClose(arg0, &D_011CE500);
        htmlAutoCloseOnClose(arg0, &D_011CE1E0);
        var_20 = &D_011CE218;
    }
loop_36:
    if (arg1 == 0) {
        temp_4 = M2C_FIELD(arg0, s32 *, 0xAC);
        if (temp_4 != 0) {
            if (xmlStrEqual(temp_4, var_20) != 0) {
                goto block_23;
            }
            if (xmlStrEqual(M2C_FIELD(arg0, s32 *, 0xAC), &D_011CE500) != 0) {
                goto block_23;
            }
            if (xmlStrEqual(M2C_FIELD(arg0, s32 *, 0xAC), &D_011CE1E0) != 0) {
block_23:
                if (M2C_FIELD(arg0, void **, 0) != NULL) {
                    temp_2_6 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(s32, s32), 0x3C);
                    if (temp_2_6 != NULL) {
                        temp_2_6(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 0xAC));
                    }
                }
                temp_2_7 = M2C_FIELD(arg0, s32 *, 0xB0);
                var_3_2 = 0;
                if (temp_2_7 >= 0) {
                    temp_2_8 = temp_2_7 - 1;
                    M2C_FIELD(arg0, s32 *, 0xB0) = temp_2_8;
                    if (temp_2_8 >= 0) {
                        if (temp_2_8 <= 0) {
                            M2C_FIELD(arg0, s32 *, 0xAC) = 0;
                        } else {
                            M2C_FIELD(arg0, s32 *, 0xAC) = (s32) M2C_FIELD((M2C_FIELD(arg0, s32 *, 0xB8) + (temp_2_8 * 4)), s32 *, -4);
                        }
                        temp_2_9 = (M2C_FIELD(arg0, s32 *, 0xB0) * 4) + M2C_FIELD(arg0, s32 *, 0xB8);
                        var_3_2 = *temp_2_9;
                        *temp_2_9 = 0;
                    }
                }
                if (var_3_2 != 0) {
                    D_011B1E18(var_3_2);
                }
                goto loop_36;
            }
        }
    }
}
