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

s32 NewSetEmitterAttractor__18VISpellEventDriverP12VISpellEvent(void *arg0, void *arg1) {
    M2C_UNK *temp_2;
    M2C_UNK *var_4;
    M2C_UNK *var_6;
    void *temp_3;

    var_4 = M2C_FIELD(arg0, M2C_UNK **, 0x4C);
    var_6 = *var_4;
    if (var_6 != NULL) {
loop_2:
        temp_3 = M2C_FIELD(var_4, void **, 0x74);
        if ((M2C_FIELD(temp_3, s32 *, 4) != M2C_FIELD(arg1, s32 *, 4)) || (M2C_FIELD(temp_3, s32 *, 0) != 3)) {
            var_4 = var_6;
            temp_2 = *var_4;
            var_6 = temp_2;
            if (temp_2 == NULL) {
                goto block_5;
            }
            goto loop_2;
        }
    } else {
block_5:
        var_4 = NULL;
    }
    if (var_4 != NULL) {
        M2C_FIELD(var_4, f32 *, 0x88) = (f32) M2C_FIELD(arg1, f32 *, 0x14);
        M2C_FIELD(var_4, s32 *, 0x84) = (s32) M2C_FIELD(arg1, s32 *, 8);
        return 0;
    }
    return -1;
}
