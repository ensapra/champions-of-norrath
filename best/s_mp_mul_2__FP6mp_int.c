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

u16 *__wrap_calloc(s32, M2C_UNK, u16 *, s32);       /* extern */
M2C_UNK __wrap_free(u16 *);                         /* extern */
M2C_UNK memcpy(u16 *, u16 *, s32);                  /* extern */
M2C_UNK memset(u16 *, M2C_UNK, s32);                /* extern */
extern u32 D_011B2138;

s32 s_mp_mul_2__FP6mp_int(void *arg0) {
    s32 temp_18_2;
    s32 temp_3_2;
    s32 temp_5;
    s32 var_19;
    s32 var_19_2;
    s32 var_2;
    s32 var_2_2;
    s32 var_3;
    u16 *temp_2_2;
    u16 *temp_4;
    u16 *temp_6;
    u16 *var_4;
    u16 temp_2;
    u16 temp_3;
    u32 temp_18;
    u32 var_20;

    var_19 = 0;
    var_20 = 0;
    temp_5 = M2C_FIELD(arg0, s32 *, 8);
    temp_6 = M2C_FIELD(arg0, u16 **, 0xC);
    if (temp_5 > 0) {
        var_4 = temp_6;
        var_19_2 = temp_5;
        do {
            temp_3 = *var_4;
            var_19_2 -= 1;
            temp_2 = var_20 | (temp_3 * 2);
            var_20 = temp_3 >> 0xF;
            *var_4 = temp_2;
            var_4 += 2;
        } while (var_19_2 != 0);
        var_19 = temp_5;
    }
    var_2 = 0;
    if (var_20 != 0) {
        temp_3_2 = M2C_FIELD(arg0, s32 *, 4);
        var_2_2 = var_19 * 2;
        if (var_19 >= temp_3_2) {
            temp_18 = temp_3_2 + 1;
            if ((u32) temp_3_2 < temp_18) {
                temp_18_2 = ((u32) ((temp_18 + D_011B2138) - 1) / (u32) D_011B2138) * D_011B2138;
                temp_2_2 = __wrap_calloc(temp_18_2, 2, temp_6, temp_5);
                var_3 = -2;
                if (temp_2_2 != NULL) {
                    memcpy(temp_2_2, M2C_FIELD(arg0, u16 **, 0xC), M2C_FIELD(arg0, s32 *, 8) * 2);
                    memset(M2C_FIELD(arg0, u16 **, 0xC), 0, M2C_FIELD(arg0, s32 *, 4) * 2);
                    temp_4 = M2C_FIELD(arg0, u16 **, 0xC);
                    if (temp_4 != NULL) {
                        __wrap_free(temp_4);
                    }
                    M2C_FIELD(arg0, u16 **, 0xC) = temp_2_2;
                    M2C_FIELD(arg0, s32 *, 4) = temp_18_2;
                    goto block_11;
                }
            } else {
block_11:
                var_3 = 0;
            }
            var_2 = var_3;
            if (var_3 == 0) {
                var_2_2 = var_19 * 2;
                goto block_14;
            }
        } else {
block_14:
            M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + 1);
            *(var_2_2 + M2C_FIELD(arg0, u16 **, 0xC)) = (s16) var_20;
            var_2 = 0;
        }
    }
    return var_2;
}
