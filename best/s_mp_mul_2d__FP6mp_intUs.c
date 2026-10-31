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

u16 *__wrap_calloc(u32, M2C_UNK);                   /* extern */
M2C_UNK __wrap_free(u16 *);                         /* extern */
M2C_UNK memcpy(u16 *, u16 *, s32);                  /* extern */
M2C_UNK memset(u16 *, M2C_UNK, s32);                /* extern */
s32 s_mp_pad__FP6mp_intUi(s32);                     /* extern */
extern u32 D_011B2138;

s32 s_mp_mul_2d__FP6mp_intUs(void *arg0, s32 arg1) {
    s16 var_6;
    s32 temp_19_2;
    s32 temp_20;
    s32 temp_21;
    s32 temp_22;
    s32 temp_2;
    s32 var_2;
    s32 var_3;
    s32 var_3_3;
    s32 var_4;
    s32 var_5_2;
    s32 var_5_3;
    u16 *temp_2_3;
    u16 *temp_4;
    u16 *temp_6;
    u16 *temp_6_2;
    u16 *var_2_2;
    u16 *var_3_2;
    u16 *var_3_4;
    u16 *var_4_3;
    u16 *var_5;
    u16 temp_2_2;
    u16 temp_2_4;
    u16 temp_3;
    u32 temp_17;
    u32 temp_18;
    u32 temp_18_2;
    u32 temp_19;
    u32 var_4_2;

    var_3 = 0;
    temp_19 = arg1 & 0xFFFF;
    temp_17 = temp_19 >> 4;
    if (temp_17 != 0) {
        temp_2 = s_mp_pad__FP6mp_intUi(M2C_FIELD(arg0, s32 *, 8) + temp_17);
        var_3 = temp_2;
        if (temp_2 == 0) {
            var_4 = (M2C_FIELD(arg0, s32 *, 8) - 1) - temp_17;
            temp_6 = M2C_FIELD(arg0, u16 **, 0xC);
            if (var_4 >= 0) {
                var_3_2 = (var_4 * 2) + temp_6;
                var_5 = ((temp_17 + var_4) * 2) + temp_6;
                do {
                    temp_2_2 = *var_3_2;
                    var_3_2 -= 2;
                    var_4 -= 1;
                    *var_5 = temp_2_2;
                    var_5 -= 2;
                } while (var_4 >= 0);
            }
            if (temp_17 != 0) {
                var_2_2 = temp_6;
                var_4_2 = temp_17;
                do {
                    var_4_2 -= 1;
                    *var_2_2 = 0;
                    var_2_2 += 2;
                } while (var_4_2 != 0);
            }
            var_3 = 0;
        }
    }
    var_2 = var_3;
    if (var_3 == 0) {
        temp_20 = M2C_FIELD(arg0, s32 *, 8);
        temp_19_2 = temp_19 & 0xF;
        temp_22 = temp_20 * 2;
        temp_21 = ((1 << temp_19_2) - 1) & 0xFFFF;
        temp_18 = temp_20 + 1;
        if (((s32) M2C_FIELD((M2C_FIELD(arg0, u16 **, 0xC) + temp_22), u16 *, -2) >> (0x10 - temp_19_2)) & temp_21) {
            if ((u32) M2C_FIELD(arg0, u32 *, 4) < temp_18) {
                temp_18_2 = ((u32) ((temp_18 + D_011B2138) - 1) / (u32) D_011B2138) * D_011B2138;
                temp_2_3 = __wrap_calloc(temp_18_2, 2);
                var_3_3 = -2;
                if (temp_2_3 != NULL) {
                    memcpy(temp_2_3, M2C_FIELD(arg0, u16 **, 0xC), M2C_FIELD(arg0, s32 *, 8) * 2);
                    memset(M2C_FIELD(arg0, u16 **, 0xC), 0, M2C_FIELD(arg0, u32 *, 4) * 2);
                    temp_4 = M2C_FIELD(arg0, u16 **, 0xC);
                    if (temp_4 != NULL) {
                        __wrap_free(temp_4);
                    }
                    M2C_FIELD(arg0, u16 **, 0xC) = temp_2_3;
                    M2C_FIELD(arg0, u32 *, 4) = temp_18_2;
                    goto block_16;
                }
            } else {
block_16:
                var_3_3 = 0;
            }
            var_2 = var_3_3;
            if (var_3_3 == 0) {
                goto block_19;
            }
        } else {
block_19:
            var_6 = 0;
            if (temp_20 > 0) {
                var_5_2 = temp_20;
                var_4_3 = M2C_FIELD(arg0, u16 **, 0xC);
                do {
                    temp_2_4 = *var_4_3;
                    var_5_2 -= 1;
                    temp_3 = var_6 | (temp_2_4 << temp_19_2);
                    var_6 = temp_21 & ((s32) temp_2_4 >> (0x10 - temp_19_2));
                    *var_4_3 = temp_3;
                    var_4_3 += 2;
                } while (var_5_2 != 0);
            }
            if (var_6 != 0) {
                *(temp_22 + M2C_FIELD(arg0, u16 **, 0xC)) = var_6;
                M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + 1);
            }
            var_5_3 = M2C_FIELD(arg0, s32 *, 8);
            temp_6_2 = &M2C_FIELD(arg0, u16 **, 0xC)[var_5_3];
            if ((u32) var_5_3 >= 2U) {
                var_3_4 = temp_6_2 - 4;
                if (*(temp_6_2 - 2) == 0) {
loop_26:
                    var_5_3 -= 1;
                    if ((u32) var_5_3 >= 2U) {
                        var_3_4 -= 2;
                        if (*var_3_4 == 0) {
                            goto loop_26;
                        }
                    }
                }
            }
            M2C_FIELD(arg0, s32 *, 8) = var_5_3;
            var_2 = 0;
        }
    }
    return var_2;
}
