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

s32 s_mp_alloc__FUiUi(u32, M2C_UNK);                /* extern */
M2C_UNK s_mp_copy__FPUsT0Ui(s32, s32, u32);         /* extern */
M2C_UNK s_mp_free__FPv(s32);                        /* extern */
M2C_UNK s_mp_setz__FPUsUi(s32, u32);                /* extern */
extern u32 D_011B2138;

s32 s_mp_pad__FP6mp_intUi(void *arg0, u32 arg1) {
    s32 temp_2;
    s32 var_2;
    s32 var_3;
    u32 temp_19;

    var_2 = 0;
    if ((u32) M2C_FIELD(arg0, u32 *, 8) < arg1) {
        if ((u32) M2C_FIELD(arg0, u32 *, 4) < arg1) {
            temp_19 = ((u32) ((arg1 + D_011B2138) - 1) / (u32) D_011B2138) * D_011B2138;
            temp_2 = s_mp_alloc__FUiUi(temp_19, 2);
            var_3 = -2;
            if (temp_2 != 0) {
                s_mp_copy__FPUsT0Ui(M2C_FIELD(arg0, s32 *, 0xC), temp_2, M2C_FIELD(arg0, u32 *, 8));
                s_mp_setz__FPUsUi(M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, u32 *, 4));
                s_mp_free__FPv(M2C_FIELD(arg0, s32 *, 0xC));
                M2C_FIELD(arg0, s32 *, 0xC) = temp_2;
                M2C_FIELD(arg0, u32 *, 4) = temp_19;
                var_3 = 0;
            }
            var_2 = var_3;
            if (var_3 == 0) {
                goto block_5;
            }
        } else {
block_5:
            M2C_FIELD(arg0, u32 *, 8) = arg1;
            var_2 = 0;
        }
    }
    return var_2;
}
