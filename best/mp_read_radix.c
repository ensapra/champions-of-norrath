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

s32 s_mp_add_d__FP6mp_intUs(void *, s32);           /* extern */
s32 s_mp_cmp_d__FP6mp_intUs(void *, M2C_UNK);       /* extern */
s32 s_mp_mul_d__FP6mp_intUs(void *, s32);           /* extern */
M2C_UNK s_mp_setz__FPUsUi(s32, s32);                /* extern */
s32 s_mp_tovalue__Fci(s8, s32);                     /* extern */

s32 mp_read_radix(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_2_3;
    s32 var_17;
    s32 var_2;
    s8 var_30;
    u8 *var_16;
    u8 temp_2;
    u8 temp_2_2;
    u8 temp_3;

    /* Flowgraph is not reducible, falling back to gotos-only mode. */
    var_17 = 0;
    var_30 = 0;
    if (arg0 == NULL) {
        goto block_6;
    }
    var_2 = -4;
    if (arg1 == 0) {
        goto block_32;
    }
    var_2 = -4;
    if (arg2 < 2) {
        goto block_32;
    }
    if (arg2 >= 0x41) {
        goto block_5;
    }
    goto block_8;
block_5:
block_6:
    var_2 = -4;
    goto block_32;
block_8:
    s_mp_setz__FPUsUi(M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 8) = 1;
    M2C_FIELD(arg0, s8 *, 0) = 0;
loop_9:
    var_16 = arg1 + var_17;
    temp_2 = *var_16;
    if (temp_2 == 0) {
        goto block_15;
    }
    if (s_mp_tovalue__Fci((s8) temp_2, arg2) >= 0) {
        goto block_15;
    }
    temp_2_2 = *var_16;
    if (temp_2_2 == 0x2D) {
        goto block_18;
    }
    if (temp_2_2 == 0x2B) {
        goto block_14;
    }
    var_17 += 1;
    goto loop_9;
block_14:
block_15:
    temp_3 = *var_16;
    if (temp_3 == 0x2D) {
        goto block_17;
    }
    goto block_19;
block_17:
block_18:
    var_17 += 1;
    var_30 = 1;
    goto block_25;
block_19:
    if (temp_3 != 0x2B) {
        goto block_26;
    }
    var_17 += 1;
    var_30 = 0;
    goto block_25;
block_22:
    var_2 = s_mp_mul_d__FP6mp_intUs(arg0, arg2 & 0xFFFF);
    if (var_2 != 0) {
        goto block_32;
    }
    var_2 = s_mp_add_d__FP6mp_intUs(arg0, temp_2_3 & 0xFFFF);
    if (var_2 != 0) {
        goto block_33;
    }
    var_17 += 1;
block_25:
    var_16 = arg1 + var_17;
block_26:
    temp_2_3 = s_mp_tovalue__Fci(*var_16, arg2);
    if (temp_2_3 >= 0) {
        goto block_22;
    }
    if (s_mp_cmp_d__FP6mp_intUs(arg0, 0) == 0) {
        goto block_29;
    }
    M2C_FIELD(arg0, s8 *, 0) = var_30;
    goto block_31;
block_29:
    M2C_FIELD(arg0, s8 *, 0) = 0;
block_31:
    var_2 = 0;
block_32:
block_33:
    return var_2;
}
