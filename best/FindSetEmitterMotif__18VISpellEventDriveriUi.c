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

s32 Motif__14VIMotifBlender(s32);                   /* extern */
s32 NameHash__C15VIParticleMotif(s32);              /* extern */

M2C_UNK *FindSetEmitterMotif__18VISpellEventDriveriUi(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK *temp_2;
    M2C_UNK *var_16;
    M2C_UNK *var_4;
    void *temp_3;

    var_16 = M2C_FIELD(arg0, M2C_UNK **, 0x4C);
    var_4 = *var_16;
    if (var_4 != NULL) {
loop_2:
        temp_3 = M2C_FIELD(var_16, void **, 0x74);
        if ((M2C_FIELD(temp_3, s32 *, 0) == 6) && (M2C_FIELD(temp_3, s32 *, 4) == arg1)) {
            if (NameHash__C15VIParticleMotif(Motif__14VIMotifBlender(M2C_FIELD(var_16, s32 *, 0x80))) != arg2) {
                var_4 = M2C_FIELD(var_16, M2C_UNK **, 0);
                goto block_9;
            }
            return var_16;
        }
block_9:
        var_16 = var_4;
        temp_2 = *var_16;
        var_4 = temp_2;
        if (temp_2 == NULL) {
            goto block_10;
        }
        goto loop_2;
    }
block_10:
    return NULL;
}
