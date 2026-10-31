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

s32 mp_add(void *, s8 *, void *);                   /* extern */
s32 mp_cmp_z(s32);                                  /* extern */
s32 mp_copy(s32, void *);                           /* extern */
s32 mp_div(s32, s8 *, M2C_UNK, void *);             /* extern */
s32 s_mp_cmp__FP6mp_intT0();                        /* extern */
M2C_UNK s_mp_setz__FPUsUi(s32, s32);                /* extern */

s32 mp_mod(s32 arg0, s8 *arg1, void *arg2) {
    s32 temp_2;
    s32 temp_2_2;
    s32 var_2;

    if (arg0 != 0) {
        var_2 = -4;
        if (arg1 != NULL) {
            if (arg2 != NULL) {
                var_2 = -3;
                if (*arg1 != 1) {
                    temp_2_2 = s_mp_cmp__FP6mp_intT0();
                    if (temp_2_2 > 0) {
                        var_2 = mp_div(arg0, arg1, 0, arg2);
                        if (var_2 == 0) {
                            var_2 = 0;
                            if (M2C_FIELD(arg2, s8 *, 0) == 1) {
                                goto block_16;
                            }
                        }
                        goto block_21;
                    }
                    if (temp_2_2 >= 0) {
                        s_mp_setz__FPUsUi(M2C_FIELD(arg2, s32 *, 0xC), M2C_FIELD(arg2, s32 *, 4));
                        M2C_FIELD(arg2, s32 *, 8) = 1;
                        M2C_FIELD(arg2, s8 *, 0) = 0;
                        goto block_20;
                    }
                    var_2 = mp_copy(arg0, arg2);
                    if (var_2 == 0) {
                        var_2 = 0;
                        if (mp_cmp_z(arg0) < 0) {
block_16:
                            temp_2 = mp_add(arg2, arg1, arg2);
                            if (temp_2 != 0) {
                                return temp_2;
                            }
block_20:
                            var_2 = 0;
                            goto block_21;
                        }
                    }
                    goto block_21;
                }
                goto block_21;
            }
            goto block_5;
        }
        goto block_21;
    }
block_5:
    var_2 = -4;
block_21:
    return var_2;
}
