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

void PriorityInsert__7VILListP7VILNodei(void *arg0, M2C_UNK *arg1, s32 arg2) {
    M2C_UNK *temp_2;
    M2C_UNK *temp_3;
    M2C_UNK *var_2_2;
    M2C_UNK *var_3_2;
    M2C_UNK *var_7;
    M2C_UNK *var_8;
    s32 var_2;
    s32 var_3;

    var_7 = M2C_FIELD(arg0, M2C_UNK **, 0);
    var_8 = *var_7;
    if (var_8 != NULL) {
loop_2:
        switch (arg2) {                             /* irregular */
        case 0:
            var_2 = M2C_FIELD(var_7, s32 *, 8);
            var_3 = M2C_FIELD(arg1, s32 *, 8);
block_11:
            if (var_2 < var_3) {
                var_7 = var_8;
block_17:
                temp_2 = *var_7;
                var_8 = temp_2;
                if (temp_2 == NULL) {
                    goto block_18;
                }
                goto loop_2;
            }
            var_2_2 = M2C_FIELD(var_7, M2C_UNK **, 4);
            var_3_2 = M2C_FIELD(var_2_2, M2C_UNK **, 0);
            if (var_3_2 == NULL) {
                var_2_2 = M2C_FIELD(var_2_2, M2C_UNK **, 4);
                var_3_2 = *var_2_2;
            }
            M2C_FIELD(arg1, M2C_UNK **, 4) = var_2_2;
            M2C_FIELD(arg1, M2C_UNK **, 0) = var_3_2;
            M2C_FIELD(var_3_2, M2C_UNK **, 4) = arg1;
            *M2C_FIELD(arg1, M2C_UNK **, 4) = arg1;
            return;
        case 1:
            var_3 = M2C_FIELD(var_7, s32 *, 8);
            var_2 = M2C_FIELD(arg1, s32 *, 8);
            goto block_11;
        default:
            var_7 = var_8;
            goto block_17;
        }
    } else {
block_18:
        if (arg1 != NULL) {
            temp_3 = M2C_FIELD(arg0, M2C_UNK **, 8);
            M2C_FIELD(arg1, M2C_UNK **, 0) = arg0 + 4;
            M2C_FIELD(arg1, M2C_UNK **, 4) = temp_3;
            *temp_3 = arg1;
            M2C_FIELD(arg0, M2C_UNK **, 8) = arg1;
        }
    }
}
