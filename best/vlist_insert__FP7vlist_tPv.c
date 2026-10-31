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

void vlist_insert__FP7vlist_tPv(void *arg0, s32 arg1) {
    M2C_UNK **temp_2_3;
    M2C_UNK *temp_18;
    M2C_UNK *temp_2;
    M2C_UNK *temp_2_2;
    M2C_UNK *temp_3;
    M2C_UNK *var_16;
    M2C_UNK *var_5;
    s32 temp_19;
    s32 temp_4;

    temp_4 = M2C_FIELD(arg0, s32 *, 0x14);
    temp_3 = M2C_FIELD(arg0, void ***, 0);
    temp_18 = arg1 + M2C_FIELD(arg0, s32 *, 0xC);
    temp_19 = temp_18 + temp_4;
    if (temp_3 != NULL) {
        if (M2C_FIELD(arg0, s32 (**)(s32, s32), 0x10)(temp_19, temp_3 + temp_4) >= 0) {
            if (M2C_FIELD(arg0, s32 (**)(s32, s32), 0x10)(M2C_FIELD(arg0, void ***, 4) + M2C_FIELD(arg0, s32 *, 0x14), temp_19) > 0) {
                var_16 = *M2C_FIELD(arg0, void ***, 0);
loop_22:
                if (M2C_FIELD(arg0, s32 (**)(s32, s32), 0x10)(temp_19, var_16 + M2C_FIELD(arg0, s32 *, 0x14)) >= 0) {
                    var_16 = M2C_FIELD(var_16, void **, 0);
                    goto loop_22;
                }
                M2C_FIELD(temp_18, M2C_UNK **, 0) = var_16;
                M2C_FIELD(temp_18, M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(var_16, M2C_UNK **, 4);
                if (var_16 != NULL) {
                    M2C_FIELD(var_16, M2C_UNK **, 4) = temp_18;
                }
                temp_2 = M2C_FIELD(temp_18, M2C_UNK **, 4);
                if (temp_2 != NULL) {
                    *temp_2 = temp_18;
                }
                M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + 1);
                return;
            }
            var_5 = arg1 + M2C_FIELD(arg0, s32 *, 0xC);
            M2C_FIELD(var_5, M2C_UNK **, 0) = NULL;
            M2C_FIELD(var_5, M2C_UNK ***, 4) = (M2C_UNK **) M2C_FIELD(arg0, M2C_UNK ***, 4);
            M2C_FIELD(arg0, M2C_UNK ***, 4) = var_5;
            if (M2C_FIELD(arg0, M2C_UNK ***, 0) == NULL) {
                M2C_FIELD(arg0, M2C_UNK ***, 0) = var_5;
            }
            goto block_15;
        }
        goto block_5;
    }
block_5:
    var_5 = arg1 + M2C_FIELD(arg0, s32 *, 0xC);
    M2C_FIELD(var_5, M2C_UNK **, 0) = M2C_FIELD(arg0, M2C_UNK **, 0);
    M2C_FIELD(var_5, s32 *, 4) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = var_5;
    if (M2C_FIELD(arg0, M2C_UNK **, 4) == NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = var_5;
    }
block_15:
    temp_2_2 = M2C_FIELD(var_5, M2C_UNK **, 0);
    if (temp_2_2 != NULL) {
        M2C_FIELD(temp_2_2, M2C_UNK **, 4) = var_5;
    }
    temp_2_3 = M2C_FIELD(var_5, M2C_UNK ***, 4);
    if (temp_2_3 != NULL) {
        *temp_2_3 = var_5;
    }
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + 1);
}
