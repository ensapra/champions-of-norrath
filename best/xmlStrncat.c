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

M2C_UNK memcpy(u8 *, s32, s32);                     /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, s32, M2C_UNK);
extern s32 D_0118EDD4;
extern u8 *(*D_011B1E1C)(s32);
extern u8 *(*D_011B1E20)(u8 *, s32);
extern M2C_UNK D_011D6FE0;
extern M2C_UNK D_011D7000;

u8 *xmlStrncat(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_18;
    s32 temp_20;
    s32 temp_21;
    s32 var_19;
    u8 *var_16;
    u8 *var_2;
    u8 *var_3;

    if (arg1 != 0) {
        var_2 = arg0;
        if (arg2 != 0) {
            if (arg0 != NULL) {
                var_3 = arg0;
                var_19 = 0;
                if (*arg0 != 0) {
                    do {
                        var_3 += 1;
                        var_19 += 1;
                    } while (*var_3 != 0);
                }
                temp_20 = var_19 + arg2;
                temp_21 = temp_20 + 1;
                var_16 = D_011B1E20(arg0, temp_21);
                if (var_16 == NULL) {
                    D_0118EDD0(D_0118EDD4, &D_011D7000, temp_21, D_0118EDD0);
                    goto block_16;
                }
                memcpy(&var_16[var_19], arg1, arg2);
                var_16[temp_20] = 0;
                goto block_19;
            }
            var_2 = NULL;
            if (arg2 >= 0) {
                temp_18 = arg2 + 1;
                var_16 = D_011B1E1C(temp_18);
                if (var_16 == NULL) {
                    D_0118EDD0(D_0118EDD4, &D_011D6FE0, temp_18, D_0118EDD0);
                    return NULL;
                }
                memcpy(var_16, arg1, arg2);
                var_16[arg2] = 0;
block_19:
                var_2 = var_16;
                /* Duplicate return node #20. Try simplifying control flow for better match */
                return var_2;
            }
            /* Duplicate return node #20. Try simplifying control flow for better match */
            return var_2;
        }
        return var_2;
    }
block_16:
    return arg0;
}
