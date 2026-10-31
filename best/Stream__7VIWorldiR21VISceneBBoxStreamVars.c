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

s32 StreamLeaf__7VIWorldiR21VISceneBBoxStreamVars(s32); /* extern */

s32 Stream__7VIWorldiR21VISceneBBoxStreamVars(s32 arg0, s32 arg1, void *arg2) {
    f32 *var_2_2;
    f32 var_f0;
    s32 var_16;
    s32 var_21;
    s32 var_2;
    s32 var_4;
    s32 var_5;
    void *temp_18;
    void *temp_3;

    var_16 = arg1;
    if (var_16 & 0xF0000000) {
        if (var_16 & 0x40000000) {
            return StreamLeaf__7VIWorldiR21VISceneBBoxStreamVars(var_16 & 0x0FFFFFFF);
        }
        var_16 &= 0x0FFFFFFF;
        goto block_5;
    }
block_5:
    temp_18 = arg0 + 0x34;
    temp_3 = M2C_FIELD(temp_18, s32 *, 4) + (var_16 * 0x18);
    var_2_2 = arg2 + 0x54;
    var_5 = 0;
    var_21 = 0;
    var_4 = 7;
    var_f0 = M2C_FIELD(arg2, f32 *, 0x54);
loop_6:
    var_2_2 += 0xC;
    if (((var_f0 * M2C_FIELD(temp_3, f32 *, 0)) + (M2C_FIELD(var_2_2, f32 *, 4) * M2C_FIELD(temp_3, f32 *, 4)) + (M2C_FIELD(var_2_2, f32 *, 8) * M2C_FIELD(temp_3, f32 *, 8)) + M2C_FIELD(temp_3, f32 *, 0xC)) > 0.0f) {
        var_5 = 1;
    } else {
        var_21 = 1;
    }
    var_4 -= 1;
    if (var_4 >= 0) {
        var_f0 = *var_2_2;
        goto loop_6;
    }
    if ((var_5 == 0) || (var_2 = -1, (Stream__7VIWorldiR21VISceneBBoxStreamVars(arg0, M2C_FIELD((M2C_FIELD(temp_18, s32 *, 4) + (var_16 * 0x18)), s32 *, 0x10), arg2) >= 0))) {
        if ((var_21 != 0) && (Stream__7VIWorldiR21VISceneBBoxStreamVars(arg0, M2C_FIELD((M2C_FIELD(temp_18, s32 *, 4) + (var_16 * 0x18)), s32 *, 0x14), arg2) < 0)) {
            return -1;
        }
        var_2 = 0;
        /* Duplicate return node #19. Try simplifying control flow for better match */
        return var_2;
    }
    return var_2;
}
