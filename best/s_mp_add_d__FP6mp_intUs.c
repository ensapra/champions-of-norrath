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

s32 s_mp_pad__FP6mp_intUi(void *, s32, u32);        /* extern */

s32 s_mp_add_d__FP6mp_intUs(void *arg0, s32 arg1) {
    s32 var_2;
    u16 *temp_4;
    u16 *var_4;
    u16 temp_2;
    u16 temp_2_2;
    u32 temp_6;
    u32 var_16;
    u32 var_17;

    var_17 = 1;
    temp_4 = M2C_FIELD(arg0, u16 **, 0xC);
    temp_6 = M2C_FIELD(arg0, u32 *, 8);
    temp_2 = *temp_4 + (arg1 & 0xFFFF);
    *temp_4 = temp_2;
    var_16 = temp_2 >> 0x10;
    if (temp_6 > 1U) {
        var_2 = 0;
        if (var_16 != 0) {
            var_4 = temp_4 + 2;
loop_3:
            var_17 += 1;
            temp_2_2 = *var_4 + var_16;
            *var_4 = temp_2_2;
            var_4 += 2;
            var_16 = temp_2_2 >> 0x10;
            if (var_17 < temp_6) {
                if (var_16 != 0) {
                    goto loop_3;
                }
            }
            goto block_5;
        }
    } else {
block_5:
        if (var_16 != 0) {
            var_2 = s_mp_pad__FP6mp_intUi(arg0, temp_6 + 1, temp_6);
            if (var_2 == 0) {
                *((var_17 * 2) + M2C_FIELD(arg0, u16 **, 0xC)) = (s16) var_16;
                goto block_8;
            }
        } else {
block_8:
            var_2 = 0;
        }
    }
    return var_2;
}
