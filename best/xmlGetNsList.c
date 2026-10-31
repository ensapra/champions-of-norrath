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

s32 xmlStrEqual(s32, s32);                          /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *);
extern s32 D_0118EDD4;
extern void **(*D_011B1E1C)(s32);
extern void **(*D_011B1E20)(void **, s32);
extern M2C_UNK D_011C2B50;
extern M2C_UNK D_011C2B70;

void **xmlGetNsList(void *arg1) {
    M2C_UNK *var_5;
    s32 temp_2;
    s32 temp_3;
    s32 var_19;
    s32 var_20;
    s32 var_21;
    s32 var_2;
    s32 var_3;
    void **var_16;
    void **var_18;
    void *temp_4;
    void *var_17;
    void *var_22;

    var_22 = arg1;
    var_18 = NULL;
    var_20 = 0;
    var_21 = 0xA;
    if (var_22 != NULL) {
        var_17 = M2C_FIELD(var_22, void **, 0x30);
loop_2:
        if (var_17 != NULL) {
loop_4:
            var_19 = 0;
            if (var_18 == NULL) {
                var_18 = D_011B1E1C((var_21 * 4) + 4);
                if (var_18 != NULL) {
                    var_18[var_20] = NULL;
                    var_19 = 0;
                    goto block_10;
                }
                var_5 = &D_011C2B50;
                goto block_19;
            }
block_10:
            var_16 = var_18;
            var_2 = var_20 > 0;
loop_11:
            var_19 += 1;
            if (var_2 != 0) {
                temp_4 = *var_16;
                var_16 += 4;
                temp_3 = M2C_FIELD(var_17, s32 *, 0xC);
                temp_2 = M2C_FIELD(temp_4, s32 *, 0xC);
                if (temp_3 != temp_2) {
                    var_2 = var_19 < var_20;
                    if (xmlStrEqual(temp_3, temp_2) != 0) {
                        goto block_22;
                    }
                    goto loop_11;
                }
                goto block_22;
            }
            var_3 = var_20 * 4;
            if (var_20 >= var_21) {
                var_21 *= 2;
                var_18 = D_011B1E20(var_18, (var_21 * 4) + 4);
                var_3 = var_20 * 4;
                if (var_18 == NULL) {
                    var_5 = &D_011C2B70;
block_19:
                    D_0118EDD0(D_0118EDD4, var_5);
                    return NULL;
                }
            }
            var_20 += 1;
            *(var_3 + var_18) = var_17;
            var_18[var_20] = NULL;
block_22:
            var_17 = M2C_FIELD(var_17, void **, 0);
            if (var_17 == NULL) {
                goto block_23;
            }
            goto loop_4;
        }
block_23:
        var_22 = M2C_FIELD(var_22, void **, 0x14);
        if (var_22 != NULL) {
            var_17 = M2C_FIELD(var_22, void **, 0x30);
            goto loop_2;
        }
        goto block_26;
    }
block_26:
    return var_18;
}
