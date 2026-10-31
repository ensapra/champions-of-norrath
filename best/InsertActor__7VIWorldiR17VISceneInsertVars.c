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

s32 InsertActor__6VIZoneR17VISceneInsertVars(s32, void *, s32); /* extern */

s32 InsertActor__7VIWorldiR17VISceneInsertVars(void *arg0, s32 arg1, void *arg2) {
    f32 temp_f1;
    f32 temp_f2;
    s32 *temp_4;
    s32 temp_6;
    s32 var_16;
    s32 var_21;
    s32 var_2;
    s32 var_5;
    s32 var_5_2;
    s32 var_6;
    void *temp_20;
    void *temp_2;
    void *temp_2_2;
    void *temp_3;
    void *temp_4_2;
    void *temp_4_3;

    var_16 = arg1;
    if (var_16 & 0xF0000000) {
        if (var_16 & 0x40000000) {
            temp_6 = M2C_FIELD(arg0, s32 *, 0x4C);
            temp_4 = M2C_FIELD(arg0, s32 *, 0x40) + ((var_16 & 0x0FFFFFFF) * 4);
            M2C_FIELD(arg2, s32 *, 8) = (s32) *temp_4;
            return (InsertActor__6VIZoneR17VISceneInsertVars(temp_6 + (*temp_4 * 0x250), arg2, temp_6) >= 0) ? 0 : -1;
        }
        var_16 &= 0x0FFFFFFF;
        goto block_4;
    }
block_4:
    temp_20 = arg0 + 0x34;
    temp_3 = arg2 + 0x70;
    temp_4_2 = M2C_FIELD(temp_20, s32 *, 4) + (var_16 * 0x18);
    temp_f2 = M2C_FIELD(arg2, f32 *, 0x7C);
    temp_f1 = (M2C_FIELD(arg2, f32 *, 0x70) * M2C_FIELD(temp_4_2, f32 *, 0)) + (M2C_FIELD(temp_3, f32 *, 4) * M2C_FIELD(temp_4_2, f32 *, 4)) + (M2C_FIELD(temp_3, f32 *, 8) * M2C_FIELD(temp_4_2, f32 *, 8)) + M2C_FIELD(temp_4_2, f32 *, 0xC);
    if (!(temp_f2 < temp_f1)) {
        if (temp_f1 < -temp_f2) {
            var_5 = M2C_FIELD(temp_4_2, s32 *, 0x14);
            goto block_24;
        }
        var_6 = 0;
        var_21 = 0;
        var_5_2 = 0;
loop_19:
        if (var_5_2 < 8) {
            temp_2 = arg2 + (var_5_2 * 0xC);
            temp_4_3 = M2C_FIELD(temp_20, s32 *, 4) + (var_16 * 0x18);
            temp_2_2 = temp_2 + 0x10;
            var_5_2 += 1;
            if (((M2C_FIELD(temp_2, f32 *, 0x10) * M2C_FIELD(temp_4_3, f32 *, 0)) + (M2C_FIELD(temp_2_2, f32 *, 4) * M2C_FIELD(temp_4_3, f32 *, 4)) + (M2C_FIELD(temp_2_2, f32 *, 8) * M2C_FIELD(temp_4_3, f32 *, 8)) + M2C_FIELD(temp_4_3, f32 *, 0xC)) > 0.0f) {
                var_6 = 1;
            } else {
                var_21 = 1;
            }
            goto loop_19;
        }
        if ((var_6 == 0) || (var_2 = -1, (InsertActor__7VIWorldiR17VISceneInsertVars(arg0, M2C_FIELD((M2C_FIELD(temp_20, s32 *, 4) + (var_16 * 0x18)), s32 *, 0x10), arg2) >= 0))) {
            if (var_21 != 0) {
                var_5 = M2C_FIELD((M2C_FIELD(temp_20, s32 *, 4) + (var_16 * 0x18)), s32 *, 0x14);
                goto block_24;
            }
            goto block_27;
        }
        /* Duplicate return node #28. Try simplifying control flow for better match */
        return var_2;
    }
    var_5 = M2C_FIELD(temp_4_2, s32 *, 0x10);
block_24:
    if (InsertActor__7VIWorldiR17VISceneInsertVars(arg0, var_5, arg2) < 0) {
        return -1;
    }
block_27:
    var_2 = 0;
    return var_2;
}
