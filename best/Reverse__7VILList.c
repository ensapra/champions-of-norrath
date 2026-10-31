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

void Reverse__7VILList(M2C_UNK **arg0) {
    M2C_UNK **temp_2_3;
    M2C_UNK *temp_2;
    M2C_UNK *temp_2_2;
    M2C_UNK *temp_2_4;
    M2C_UNK *temp_3;
    M2C_UNK *var_5;
    M2C_UNK *var_5_2;
    M2C_UNK *var_6_2;
    s32 var_6;

    temp_3 = *arg0;
    var_5 = M2C_FIELD(temp_3, M2C_UNK **, 0);
    var_6 = 0;
    if (var_5 != NULL) {
        do {
            temp_2 = *var_5;
            var_6 += 1;
            var_5 = temp_2;
        } while (temp_2 != NULL);
    }
    if (var_6 >= 2) {
        var_5_2 = M2C_FIELD(temp_3, M2C_UNK **, 0);
        var_6_2 = *var_5_2;
        if (var_6_2 != NULL) {
            do {
                if (var_6_2 != NULL) {
                    temp_2_3 = M2C_FIELD(var_5_2, M2C_UNK ***, 4);
                    if (temp_2_3 != NULL) {
                        *temp_2_3 = var_6_2;
                        M2C_FIELD(M2C_FIELD(var_5_2, M2C_UNK **, 0), M2C_UNK ***, 4) = (M2C_UNK **) M2C_FIELD(var_5_2, M2C_UNK ***, 4);
                        M2C_FIELD(var_5_2, M2C_UNK **, 0) = NULL;
                        M2C_FIELD(var_5_2, M2C_UNK ***, 4) = NULL;
                    }
                }
                M2C_FIELD(var_5_2, M2C_UNK ***, 4) = arg0;
                temp_2_4 = *arg0;
                M2C_FIELD(var_5_2, M2C_UNK **, 0) = temp_2_4;
                M2C_FIELD(temp_2_4, M2C_UNK **, 4) = var_5_2;
                *arg0 = var_5_2;
                var_5_2 = var_6_2;
                temp_2_2 = *var_5_2;
                var_6_2 = temp_2_2;
            } while (temp_2_2 != NULL);
        }
    }
}
