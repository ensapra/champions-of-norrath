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

M2C_UNK Reset__14VICameraEffect(s32);               /* extern */

void NotifyActorWasDestroyed__19VISpellEffectDriveri(void *arg0, s32 arg1) {
    M2C_UNK *temp_2;
    M2C_UNK *var_3_2;
    M2C_UNK *var_4;
    s32 *var_3;
    s32 temp_4;
    s32 var_5;

    if (arg1 == M2C_FIELD(arg0, s32 *, 0x60)) {
        temp_4 = M2C_FIELD(arg0, s32 *, 0x5C);
        if (temp_4 != 0) {
            Reset__14VICameraEffect(temp_4);
        }
    }
    if (M2C_FIELD(arg0, s32 *, 8) == arg1) {
        M2C_FIELD(arg0, s32 *, 8) = -1;
    }
    if (M2C_FIELD(arg0, s32 *, 0xC) == arg1) {
        M2C_FIELD(arg0, s32 *, 0xC) = -1;
    }
    var_5 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x10) > 0) {
        var_3 = arg0 + 0x14;
        do {
            var_5 += 1;
            if (*var_3 == arg1) {
                *var_3 = -1;
            }
            var_3 += 4;
        } while (var_5 < M2C_FIELD(arg0, s32 *, 0x10));
    }
    var_4 = M2C_FIELD(arg0, M2C_UNK **, 0x48);
    var_3_2 = *var_4;
    if (var_3_2 != NULL) {
        do {
            if (M2C_FIELD(var_4, s32 *, 0x18) == arg1) {
                M2C_FIELD(var_4, s32 *, 0x18) = -1;
            }
            var_4 = var_3_2;
            temp_2 = *var_4;
            var_3_2 = temp_2;
        } while (temp_2 != NULL);
    }
}
