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

s32 QueryEmittersLeaf__6VIZoneiR23VISceneEmitterQueryVars(s32); /* extern */

s32 QueryEmitters__6VIZoneiR23VISceneEmitterQueryVars(s32 arg0, s32 arg1, void *arg2) {
    f32 temp_f1;
    f32 temp_f2;
    s32 temp_19;
    s32 var_3;
    s32 var_5;
    void *temp_18;
    void *temp_3;
    void *temp_4;

    var_3 = arg1;
    if (var_3 & 0xF0000000) {
        if (var_3 & 0x40000000) {
            return QueryEmittersLeaf__6VIZoneiR23VISceneEmitterQueryVars(var_3 & 0x0FFFFFFF);
        }
        var_3 &= 0x0FFFFFFF;
        goto block_5;
    }
block_5:
    temp_18 = arg0 + 0x44;
    temp_3 = arg2 + 0xC;
    temp_19 = var_3 * 0x18;
    temp_4 = M2C_FIELD(temp_18, s32 *, 4) + temp_19;
    temp_f2 = M2C_FIELD(arg2, f32 *, 0x18);
    temp_f1 = (M2C_FIELD(arg2, f32 *, 0xC) * M2C_FIELD(temp_4, f32 *, 0)) + (M2C_FIELD(temp_3, f32 *, 4) * M2C_FIELD(temp_4, f32 *, 4)) + (M2C_FIELD(temp_3, f32 *, 8) * M2C_FIELD(temp_4, f32 *, 8)) + M2C_FIELD(temp_4, f32 *, 0xC);
    if (!(temp_f2 < temp_f1)) {
        if (temp_f1 < -temp_f2) {
            var_5 = M2C_FIELD(temp_4, s32 *, 0x14);
            goto block_20;
        }
        if (!(temp_f1 > 0.0f)) {
            if (QueryEmitters__6VIZoneiR23VISceneEmitterQueryVars(arg0, M2C_FIELD(temp_4, s32 *, 0x14), arg2) >= 0) {
                var_5 = M2C_FIELD((M2C_FIELD(temp_18, s32 *, 4) + temp_19), s32 *, 0x10);
                goto block_20;
            }
            goto block_23;
        }
        if (QueryEmitters__6VIZoneiR23VISceneEmitterQueryVars(arg0, M2C_FIELD(temp_4, s32 *, 0x10), arg2) >= 0) {
            var_5 = M2C_FIELD((M2C_FIELD(temp_18, s32 *, 4) + temp_19), s32 *, 0x14);
            goto block_20;
        }
        goto block_23;
    }
    var_5 = M2C_FIELD(temp_4, s32 *, 0x10);
block_20:
    if (QueryEmitters__6VIZoneiR23VISceneEmitterQueryVars(arg0, var_5, arg2) >= 0) {
        return 0;
    }
block_23:
    return -1;
}
