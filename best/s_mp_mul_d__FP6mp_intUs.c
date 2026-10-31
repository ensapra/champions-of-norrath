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

s32 s_mp_pad__FP6mp_intUi(s32, u16 *);              /* extern */

s32 s_mp_mul_d__FP6mp_intUs(void *arg0, s32 arg1) {
    s32 temp_19;
    s32 temp_20;
    s32 var_2;
    u16 *temp_6;
    u16 *temp_6_2;
    u16 *var_3;
    u16 *var_4;
    u16 temp_2;
    u32 temp_16;
    u32 var_18;
    u32 var_5;
    u32 var_5_2;

    temp_19 = arg1 & 0xFFFF;
    temp_16 = M2C_FIELD(arg0, u32 *, 8);
    temp_6 = M2C_FIELD(arg0, u16 **, 0xC);
    temp_20 = temp_16 * 2;
    var_18 = 0;
    if (((u32) (M2C_FIELD((temp_6 + temp_20), u16 *, -2) * temp_19) >> 0x10) != 0) {
        var_2 = s_mp_pad__FP6mp_intUi(temp_16 + 1, temp_6);
        if (var_2 == 0) {
            goto block_3;
        }
    } else {
block_3:
        var_5 = 0;
        if (temp_16 > 0U) {
            var_4 = M2C_FIELD(arg0, u16 **, 0xC);
            do {
                var_5 += 1;
                temp_2 = (*var_4 * temp_19) + var_18;
                *var_4 = temp_2;
                var_4 += 2;
                var_18 = temp_2 >> 0x10;
            } while (var_5 < temp_16);
        }
        if (var_18 != 0) {
            *(temp_20 + M2C_FIELD(arg0, u16 **, 0xC)) = (s16) var_18;
            M2C_FIELD(arg0, u32 *, 8) = (u32) (temp_16 + 1);
        }
        var_5_2 = M2C_FIELD(arg0, u32 *, 8);
        temp_6_2 = &M2C_FIELD(arg0, u16 **, 0xC)[var_5_2];
        if (var_5_2 >= 2U) {
            var_3 = temp_6_2 - 4;
            if (*(temp_6_2 - 2) == 0) {
loop_10:
                var_5_2 -= 1;
                if (var_5_2 >= 2U) {
                    var_3 -= 2;
                    if (*var_3 == 0) {
                        goto loop_10;
                    }
                }
            }
        }
        M2C_FIELD(arg0, u32 *, 8) = var_5_2;
        var_2 = 0;
    }
    return var_2;
}
