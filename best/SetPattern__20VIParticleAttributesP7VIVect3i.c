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

M2C_UNK ClearPattern__20VIParticleAttributes();     /* extern */
void *__builtin_vec_new(s32);                       /* extern */

s32 SetPattern__20VIParticleAttributesP7VIVect3i(void *arg0, s32 arg1, s32 arg2) {
    f32 *temp_2;
    f32 temp_f1;
    s32 var_2;
    s32 var_4;
    s32 var_5;
    s32 var_6;
    void *temp_3;
    void *temp_3_2;
    void *var_2_2;

    if ((arg1 == 0) || (arg2 <= 0)) {
        return -1;
    }
    ClearPattern__20VIParticleAttributes();
    var_2_2 = __builtin_vec_new(arg2 * 0xC);
    temp_3 = var_2_2;
    if (temp_3 != NULL) {
        var_4 = arg2 - 1;
        if (arg2 != 0) {
            do {
                var_4 -= 1;
                M2C_FIELD(var_2_2, f32 *, 0) = 0.0f;
                M2C_FIELD(var_2_2, f32 *, 4) = 0.0f;
                M2C_FIELD(var_2_2, f32 *, 8) = 0.0f;
                var_2_2 += 0xC;
            } while (var_4 != -1);
        }
    }
    M2C_FIELD(arg0, void **, 0x2C0) = temp_3;
    var_2 = -1;
    if (temp_3 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x2C4) = arg2;
        if (arg2 > 0) {
            var_6 = arg2;
            var_5 = 0;
            do {
                temp_2 = arg1 + var_5;
                temp_3_2 = temp_3 + var_5;
                temp_f1 = M2C_FIELD(temp_2, f32 *, 0);
                var_6 -= 1;
                var_5 += 0xC;
                M2C_FIELD(temp_3_2, f32 *, 0) = temp_f1;
                M2C_FIELD(temp_3_2, f32 *, 4) = (f32) M2C_FIELD(temp_2, f32 *, 4);
                M2C_FIELD(temp_3_2, f32 *, 8) = (f32) M2C_FIELD(temp_2, f32 *, 8);
            } while (var_6 != 0);
        }
        var_2 = 0;
        M2C_FIELD(arg0, s32 *, 0x2CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x2CC) + 1);
    }
    return var_2;
}
