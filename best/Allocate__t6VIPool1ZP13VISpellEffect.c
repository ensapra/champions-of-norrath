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

s32 Begin__Ct6VIPool1ZP13VISpellEffect(void *, s32, s32); /* extern */
s32 End__Ct6VIPool1ZP13VISpellEffect(void *);       /* extern */
s32 LinkFreeChain__t6VIPool1ZP13VISpellEffecti(void *, s32); /* extern */
s32 Next__Ct6VIPool1ZP13VISpellEffecti(void *, s32); /* extern */
M2C_UNK __builtin_vec_delete(s32, s32);             /* extern */
s32 __builtin_vec_new(s32);                         /* extern */

s32 Allocate__t6VIPool1ZP13VISpellEffect(void *arg0) {
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_3;
    s32 temp_4;
    s32 var_2;
    s32 var_2_2;
    s32 var_4;
    s32 var_6;
    void *temp_3_2;

    temp_3 = M2C_FIELD(arg0, s32 *, 4);
    var_2 = 0;
    if (temp_3 != 0) {
        if (M2C_FIELD(arg0, s32 *, 8) == 0) {
            temp_2 = __builtin_vec_new(temp_3 * 0xC);
            M2C_FIELD(arg0, s32 *, 8) = temp_2;
            if (temp_2 == 0) {
                return -1;
            }
            goto block_18;
        }
        temp_2_2 = __builtin_vec_new(temp_3 * 0xC);
        var_2 = -1;
        if (temp_2_2 != 0) {
            var_6 = 0;
            if (M2C_FIELD(arg0, s32 *, 0) > 0) {
                var_4 = 0;
                do {
                    temp_3_2 = temp_2_2 + var_4;
                    var_6 += 1;
                    if (temp_3_2 != NULL) {
                        M2C_ERROR(/* unknown instruction: ldl $a1, 0x7($v0) */);
                        M2C_ERROR(/* unknown instruction: ldr $a1, ($v0) */);
                        M2C_ERROR(/* unknown instruction: sdl $a1, 0x7($v1) */);
                        M2C_ERROR(/* unknown instruction: sdr $a1, ($v1) */);
                        M2C_FIELD(temp_3_2, s32 *, 8) = (s32) M2C_FIELD((var_4 + M2C_FIELD(arg0, s32 *, 8)), s32 *, 8);
                    }
                    var_4 += 0xC;
                } while (var_6 < M2C_FIELD(arg0, s32 *, 0));
            }
            var_2_2 = Begin__Ct6VIPool1ZP13VISpellEffect(arg0, M2C_FIELD(arg0, s32 *, 0), var_6);
loop_14:
            if (var_2_2 != End__Ct6VIPool1ZP13VISpellEffect(arg0)) {
                var_2_2 = Next__Ct6VIPool1ZP13VISpellEffecti(arg0, var_2_2);
                goto loop_14;
            }
            temp_4 = M2C_FIELD(arg0, s32 *, 8);
            if (temp_4 != 0) {
                __builtin_vec_delete(temp_4, var_2_2);
            }
            M2C_FIELD(arg0, s32 *, 8) = temp_2_2;
block_18:
            var_2 = -1;
            if (LinkFreeChain__t6VIPool1ZP13VISpellEffecti(arg0, M2C_FIELD(arg0, s32 *, 0)) >= 0) {
                var_2 = 0;
            }
        }
        /* Duplicate return node #20. Try simplifying control flow for better match */
        return var_2;
    }
    return var_2;
}
