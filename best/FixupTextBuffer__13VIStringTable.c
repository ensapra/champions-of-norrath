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

M2C_UNK __builtin_vec_delete(u16 *);                /* extern */
u16 *__builtin_vec_new(s32);                        /* extern */
M2C_UNK memset(u16 *, M2C_UNK, s32);                /* extern */
s32 strlen16__8VIStringPCUs(u16 *);                 /* extern */

s32 FixupTextBuffer__13VIStringTable(void *arg0) {
    s32 temp_18;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_2_5;
    s32 var_17;
    s32 var_2;
    s32 var_5;
    s32 var_5_2;
    s32 var_6;
    s32 var_6_2;
    s32 var_7_2;
    u16 *temp_2_4;
    u16 *temp_3;
    u16 *temp_4;
    u16 *temp_4_2;
    u16 *temp_4_3;
    u16 *var_7;
    u16 temp_2;
    u16 temp_2_6;
    void *var_3;

    var_6 = 1;
    temp_18 = strlen16__8VIStringPCUs(M2C_FIELD(arg0, u16 **, 8)) + 1;
    M2C_FIELD(arg0, s32 *, 4) = 1;
    M2C_FIELD(arg0, s32 *, 0) = 1;
    if (temp_18 > 0) {
        var_7 = M2C_FIELD(arg0, u16 **, 8);
        var_5 = temp_18;
        do {
            temp_2 = *var_7;
            var_7 += 2;
            if (temp_2 == 9) {
                var_6 += 1;
            } else if (temp_2 == 0xA) {
                temp_2_2 = M2C_FIELD(arg0, s32 *, 4);
                temp_2_3 = (var_6 >= temp_2_2) ? var_6 : temp_2_2;
                var_6 = 1;
                M2C_FIELD(arg0, s32 *, 4) = temp_2_3;
                M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 1);
            }
            var_5 -= 1;
        } while (var_5 != 0);
    }
    var_17 = -1;
    temp_2_4 = __builtin_vec_new(M2C_FIELD(arg0, s32 *, 0) * M2C_FIELD(arg0, s32 *, 4) * 4);
    M2C_FIELD(arg0, u16 **, 0xC) = temp_2_4;
    if (temp_2_4 != NULL) {
        memset(temp_2_4, 0, M2C_FIELD(arg0, s32 *, 0) * M2C_FIELD(arg0, s32 *, 4) * 4);
        var_7_2 = 0;
        temp_3 = M2C_FIELD(arg0, u16 **, 0xC);
        var_6_2 = 0;
        var_5_2 = 0;
        *temp_3 = (u16 *) M2C_FIELD(arg0, u16 **, 8);
        if (temp_18 > 0) {
            do {
                temp_2_5 = var_5_2 * 2;
                var_5_2 += 1;
                temp_4 = temp_2_5 + M2C_FIELD(arg0, u16 **, 8);
                temp_2_6 = *temp_4;
                var_3 = temp_4 + 2;
                if (temp_2_6 == 9) {
                    var_6_2 += 1;
                    *temp_4 = 0;
                    var_2 = (var_7_2 * M2C_FIELD(arg0, s32 *, 4)) + var_6_2;
                    goto block_17;
                }
                if (temp_2_6 == 0xD) {
                    *temp_4 = 0;
                } else {
                    var_3 = temp_4 + 2;
                    if (temp_2_6 == 0xA) {
                        var_7_2 += 1;
                        *temp_4 = 0;
                        var_2 = var_7_2 * M2C_FIELD(arg0, s32 *, 4);
                        var_6_2 = 0;
block_17:
                        *((var_2 * 4) + temp_3) = var_3;
                    }
                }
            } while (var_5_2 < temp_18);
        }
        var_17 = 0;
    }
    if (var_17 != 0) {
        temp_4_2 = M2C_FIELD(arg0, u16 **, 8);
        if (temp_4_2 != NULL) {
            __builtin_vec_delete(temp_4_2);
        }
        temp_4_3 = M2C_FIELD(arg0, u16 **, 0xC);
        if (temp_4_3 != NULL) {
            __builtin_vec_delete(temp_4_3);
        }
        M2C_FIELD(arg0, u16 **, 0xC) = NULL;
        M2C_FIELD(arg0, s32 *, 0) = 0;
        M2C_FIELD(arg0, s32 *, 4) = 0;
        M2C_FIELD(arg0, u16 **, 8) = NULL;
    }
    return var_17;
}
